// Core.Configs.Models.PacksConfig$$get_Packs @ RVA 0x35CA654

System_Collections_Generic_IEnumerable_PackSettings__o *
Core_Configs_Models_PacksConfig__get_Packs
          (Core_Configs_Models_PacksConfig_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_PackSettings__o *pSVar3;
  System_Collections_Generic_IReadOnlyDictionary_string__PackSettings__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IReadOnlyDictionary_string__PackSettings__o *pSVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04568f97 & 1) == 0) {
    auVar8 = FUN_01bab630(&
                          System_Collections_Generic_IReadOnlyDictionary<string,_PackSettings>_TypeInfo
                         );
    DAT_04568f97 = 1;
  }
  pSVar7 = (__this->fields)._PacksByName_k__BackingField;
  if (pSVar7 == (System_Collections_Generic_IReadOnlyDictionary_string__PackSettings__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pSVar4 = pSVar7->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)
          System_Collections_Generic_IReadOnlyDictionary<string,_PackSettings>_TypeInfo) {
        pVVar2 = pSVar4->vtable + (*piVar6 + 4);
        goto LAB_036ca6e0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar7,
                        System_Collections_Generic_IReadOnlyDictionary<string,_PackSettings>_TypeInfo
                        ,4);
LAB_036ca6e0:
                    /* WARNING: Could not recover jumptable at 0x036ca6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_PackSettings__o *)
           (*pVVar2->methodPtr)(pSVar7,pVVar2->method);
  return pSVar3;
}

