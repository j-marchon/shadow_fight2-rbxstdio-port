// GGHCLMEFIGO$$FIFBDNADAAL @ RVA 0x33B6504

IGFGDDANEPE_o *
GGHCLMEFIGO__FIFBDNADAAL
          (GGHCLMEFIGO_o *__this,IGFGDDANEPE_o *CJNHFNHJHPE,bool DPGBNAHAOBN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t index;
  GGHCLMEFIGO_PMHNKJJDBAF_o *__this_00;
  System_Predicate_T__o *match;
  IGFGDDANEPE_o **ppIVar3;
  int64_t iVar4;
  IGFGDDANEPE_o *pIVar5;
  IGFGDDANEPE_array *pIVar6;
  MethodInfo_26E4DAC *method_00;
  GGHCLMEFIGO_PMHNKJJDBAF_Fields *pGVar7;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar8;
  
  if ((DAT_04567d75 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_set_Item__);
    FUN_01bab630(&Method_GGHCLMEFIGO_PMHNKJJDBAF_FJANFFAGFAP__);
    FUN_01bab630(&GGHCLMEFIGO_PMHNKJJDBAF_TypeInfo);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    DAT_04567d75 = 1;
  }
  __this_00 = (GGHCLMEFIGO_PMHNKJJDBAF_o *)thunk_FUN_01bda818(GGHCLMEFIGO_PMHNKJJDBAF_TypeInfo);
  GGHCLMEFIGO_PMHNKJJDBAF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (GGHCLMEFIGO_PMHNKJJDBAF_o *)0x0) goto LAB_034b677c;
  pGVar7 = &__this_00->fields;
  pGVar7->value = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pGVar7,CJNHFNHJHPE);
  lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
  pSVar8 = (__this->fields).DPOPJKJLDEE;
  if (DPGBNAHAOBN) {
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    index = System_Collections_Generic_List<object>__FindIndex
                      ((System_Collections_Generic_List_object__o *)pSVar8,match,
                       Method_System_Collections_Generic_List<IGFGDDANEPE>_FindIndex__);
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    pSVar8 = (__this->fields).DPOPJKJLDEE;
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    pIVar5 = pGVar7->value;
    if (index < 0) {
      pIVar6 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pIVar6 == (IGFGDDANEPE_array *)0x0) goto LAB_034b677c;
      uVar1 = (pSVar8->fields)._size;
      if ((uint)pIVar6->max_length <= uVar1) {
        method_00 = *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        goto LAB_034b66e8;
      }
      (pSVar8->fields)._size = uVar1 + 1;
      ppIVar3 = pIVar6->m_Items + (int)uVar1;
      *ppIVar3 = pIVar5;
LAB_034b66c8:
      thunk_FUN_01c20e04(ppIVar3,pIVar5);
    }
    else {
      System_Collections_Generic_List<object>__set_Item
                ((System_Collections_Generic_List_object__o *)pSVar8,index,(Il2CppObject *)pIVar5,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_set_Item__);
    }
  }
  else {
    if (pSVar8 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) goto LAB_034b677c;
    pIVar5 = pGVar7->value;
    pIVar6 = (pSVar8->fields)._items;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (pIVar6 == (IGFGDDANEPE_array *)0x0) goto LAB_034b677c;
    uVar1 = (pSVar8->fields)._size;
    if (uVar1 < (uint)pIVar6->max_length) {
      (pSVar8->fields)._size = uVar1 + 1;
      ppIVar3 = pIVar6->m_Items + (int)uVar1;
      *ppIVar3 = pIVar5;
      goto LAB_034b66c8;
    }
    method_00 = *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
LAB_034b66e8:
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pIVar5,method_00)
    ;
  }
  if (pGVar7->value != (IGFGDDANEPE_o *)0x0) {
    iVar4 = IGFGDDANEPE__OMMIKNKEKJN(pGVar7->value,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    if (iVar4 < 1) {
LAB_034b6764:
      return pGVar7->value;
    }
    pSVar8 = (__this->fields).PMNIDGNGCCG;
    if (pSVar8 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      pIVar5 = pGVar7->value;
      pIVar6 = (pSVar8->fields)._items;
      (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
      if (pIVar6 != (IGFGDDANEPE_array *)0x0) {
        uVar1 = (pSVar8->fields)._size;
        if (uVar1 < (uint)pIVar6->max_length) {
          (pSVar8->fields)._size = uVar1 + 1;
          pIVar6->m_Items[(int)uVar1] = pIVar5;
          thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pIVar5,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_034b6764;
      }
    }
  }
LAB_034b677c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

