// FBAABPGMPCC$$GFNIOPDJEBP @ RVA 0x31AD1A4

System_Collections_Generic_List_PackSettings__o *
FBAABPGMPCC__GFNIOPDJEBP
          (FBAABPGMPCC_o *__this,System_Collections_Generic_IReadOnlyList_PackType__o *LFADLKGPBHC,
          MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  VirtualInvokeData *pVVar4;
  System_Func_TSource__IEnumerable_TResult___o *selector;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  System_Collections_Generic_List_PackSettings__o *pSVar6;
  System_Collections_Generic_IReadOnlyList_PackType__c *pSVar7;
  NKEPNPALKMO_c *pNVar8;
  ulong uVar9;
  int32_t *piVar10;
  NKEPNPALKMO_o *pNVar11;
  
  if ((DAT_04566b58 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<PackSettings>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_SelectMany<PackType,_PackSettings>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<PackSettings>__);
    FUN_01bab630(&Method_FBAABPGMPCC_HJBOAHBLHHF__);
    FUN_01bab630(&System_Func<PackType,_IEnumerable<PackSettings>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo);
    FUN_01bab630(&NKEPNPALKMO_TypeInfo);
    DAT_04566b58 = 1;
  }
  if (LFADLKGPBHC != (System_Collections_Generic_IReadOnlyList_PackType__o *)0x0) {
    pSVar7 = LFADLKGPBHC->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo) {
          pVVar4 = pSVar7->vtable + *piVar10;
          goto LAB_032ad274;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(LFADLKGPBHC,
                          System_Collections_Generic_IReadOnlyCollection<PackType>_TypeInfo,0);
LAB_032ad274:
    iVar3 = (*pVVar4->methodPtr)(LFADLKGPBHC,pVVar4->method);
    if (iVar3 != 0) {
      selector = (System_Func_TSource__IEnumerable_TResult___o *)
                 thunk_FUN_01bda818(System_Func<PackType,_IEnumerable<PackSettings>>_TypeInfo);
      System_Func<Int32Enum,_object>___ctor();
      pSVar5 = (System_Collections_Generic_IEnumerable_TSource__o *)
               System_Linq_Enumerable__SelectMany<Int32Enum,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)LFADLKGPBHC,selector,
                          Method_System_Linq_Enumerable_SelectMany<PackType,_PackSettings>__);
      goto LAB_032ad334;
    }
  }
  pNVar11 = (__this->fields).MKMKEFBPBMF;
  if (pNVar11 == (NKEPNPALKMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar8 = pNVar11->klass;
  uVar2._0_1_ = (pNVar8->_2).rank;
  uVar2._1_1_ = (pNVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar2;
  if (uVar9 != 0) {
    piVar10 = &((pNVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)NKEPNPALKMO_TypeInfo) {
        pVVar4 = pNVar8->vtable + *piVar10;
        goto LAB_032ad328;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pNVar11,NKEPNPALKMO_TypeInfo,0);
LAB_032ad328:
  pSVar5 = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar4->methodPtr)(pNVar11,pVVar4->method);
LAB_032ad334:
  pSVar5 = System_Linq_Enumerable__Distinct<object>
                     (pSVar5,Method_System_Linq_Enumerable_Distinct<PackSettings>__);
  pSVar6 = (System_Collections_Generic_List_PackSettings__o *)
           System_Linq_Enumerable__ToList<object>
                     (pSVar5,Method_System_Linq_Enumerable_ToList<PackSettings>__);
  return pSVar6;
}

