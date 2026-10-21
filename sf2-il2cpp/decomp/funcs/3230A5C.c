// HBDABDKPGJC$$KIGMJEFKNOG @ RVA 0x3230A5C

System_Collections_Generic_IReadOnlyList_PackSettings__o *
HBDABDKPGJC__KIGMJEFKNOG(HBDABDKPGJC_o *__this,int32_t AFDBEEENAHK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar2;
  Core_Configs_Models_PacksConfig_o *__this_01;
  System_Collections_Generic_IEnumerable_PackSettings__o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar3;
  DFEFKFOPMGP_PacksConfig__c *pDVar4;
  ulong uVar5;
  int32_t *piVar6;
  DFEFKFOPMGP_PacksConfig__o *pDVar7;
  
  if ((DAT_04566fd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PackSettings>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<PackSettings>__);
    FUN_01bab630(&System_Func<PackSettings,_bool>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<PacksConfig>_TypeInfo);
    FUN_01bab630(&Method_HBDABDKPGJC_PDPKJNNJGKN_GBHDFOCDJJK__);
    FUN_01bab630(&HBDABDKPGJC_PDPKJNNJGKN_TypeInfo);
    DAT_04566fd9 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(HBDABDKPGJC_PDPKJNNJGKN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = AFDBEEENAHK;
    pDVar7 = (__this->fields).OAOMFCGPCBP;
    if (pDVar7 != (DFEFKFOPMGP_PacksConfig__o *)0x0) {
      pDVar4 = pDVar7->klass;
      uVar1._0_1_ = (pDVar4->_2).rank;
      uVar1._1_1_ = (pDVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pDVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)MJPJANJNDCI<PacksConfig>_TypeInfo) {
            pVVar2 = pDVar4->vtable + *piVar6;
            goto LAB_03330b4c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pDVar7,MJPJANJNDCI<PacksConfig>_TypeInfo,0);
LAB_03330b4c:
      __this_01 = (Core_Configs_Models_PacksConfig_o *)(*pVVar2->methodPtr)(pDVar7,pVVar2->method);
      if (__this_01 != (Core_Configs_Models_PacksConfig_o *)0x0) {
        source = Core_Configs_Models_PacksConfig__get_Packs(__this_01,(MethodInfo *)0x0);
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<PackSettings,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        source_00 = System_Linq_Enumerable__Where<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate
                               ,Method_System_Linq_Enumerable_Where<PackSettings>__);
        pSVar3 = System_Linq_Enumerable__ToList<object>
                           (source_00,Method_System_Linq_Enumerable_ToList<PackSettings>__);
        return (System_Collections_Generic_IReadOnlyList_PackSettings__o *)pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

