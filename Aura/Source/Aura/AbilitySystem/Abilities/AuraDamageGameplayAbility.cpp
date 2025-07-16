
#include "AbilitySystem/Abilities/AuraDamageGameplayAbility.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"

#include "GameFramework/Actor.h"
#include "AbilitySystem/AuraAttributeSet.h"
#include "Kismet/KismetSystemLibrary.h"

void UAuraDamageGameplayAbility::CauseDamage(AActor* TargetActor)
{
	// --- 디버깅 로그 시작 ---
	AActor* SourceActor = GetAvatarActorFromActorInfo();
	if (SourceActor)
	{
		UAbilitySystemComponent* SourceASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(SourceActor);
		if (SourceASC)
		{
			// 수정됨: 템플릿 대신 더 안정적인 방식으로 AttributeSet을 찾습니다.
			const UAttributeSet* FoundAttributeSet = nullptr;
			for (const UAttributeSet* Set : SourceASC->GetSpawnedAttributes())
			{
				if (Set && Set->IsA<UAuraAttributeSet>())
				{
					FoundAttributeSet = Set;
					break;
				}
			}

			if (FoundAttributeSet)
			{
				UE_LOG(LogTemp, Warning, TEXT("CauseDamage called! Source: [%s]. Dumping all attributes:"), *SourceActor->GetName());

				// UAuraAttributeSet의 모든 속성을 순회하며 로그 출력
				for (TFieldIterator<FProperty> PropIt(FoundAttributeSet->GetClass()); PropIt; ++PropIt)
				{
					if (FStructProperty* StructProp = CastField<FStructProperty>(*PropIt))
					{
						if (StructProp->Struct == FGameplayAttributeData::StaticStruct())
						{
							const FString PropertyName = PropIt->GetName();
							// 수정됨: GetUProperty() 대신 역참조한 *PropIt을 직접 넘깁니다.
							const float AttributeValue = SourceASC->GetNumericAttribute(*PropIt);

							UE_LOG(LogTemp, Warning, TEXT("  -> %s: %f"), *PropertyName, AttributeValue);
						}
					}
				}
			}
		}
	}
	// --- 디버깅 로그 끝 ---

	FGameplayEffectSpecHandle DamageSpecHandle = MakeOutgoingGameplayEffectSpec(DamageEffectClass, 1.f);
	for (TTuple<FGameplayTag, FScalableFloat> Pair : DamageTypes)
	{
		const float ScalableDamage = Pair.Value.GetValueAtLevel(GetAbilityLevel());
		UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(DamageSpecHandle, Pair.Key, ScalableDamage);
	}

	GetAbilitySystemComponentFromActorInfo()->ApplyGameplayEffectSpecToTarget(*DamageSpecHandle.Data.Get(), UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor));
}
