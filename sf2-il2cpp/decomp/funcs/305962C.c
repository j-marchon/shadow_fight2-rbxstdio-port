// ACHLOMELAJE$$BBFJLJHAKPN @ RVA 0x305962C

void ACHLOMELAJE__BBFJLJHAKPN(ACHLOMELAJE_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar3;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_string__o *KFKKBEEFOCB;
  BDGPPPPKHEC_o **ppBVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  BDGPPPPKHEC_array *pBVar6;
  System_String_array *pSVar7;
  long lVar8;
  System_Collections_Generic_List_BDGPPPPKHEC__o *pSVar9;
  Il2CppClass *KGLJICLJHEL;
  
  if ((DAT_04565e77 & 1) == 0) {
    FUN_01bab630(&Method_ACHLOMELAJE_AKFHBBGMFOC_FLJLBMDPHJK__);
    FUN_01bab630(&ACHLOMELAJE_AKFHBBGMFOC_TypeInfo);
    FUN_01bab630(&BDGPPPPKHEC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDGPPPPKHEC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BDGPPPPKHEC>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Predicate<BDGPPPPKHEC>_TypeInfo);
    DAT_04565e77 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_AKFHBBGMFOC_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (((__this_00 == (EGMONPGHHDP_o *)0x0) ||
      (pJVar3 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0),
      pJVar3 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) || (pIVar2 == (Il2CppObject *)0x0)) {
LAB_03159914:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = pIVar2 + 1;
  pIVar2->klass = (Il2CppClass *)(pJVar3->fields).JIJLBFGKNJK;
  thunk_FUN_01c20e04(pIVar2);
  pSVar9 = (__this->fields).BCLNBJNEAAF;
  match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BDGPPPPKHEC>_TypeInfo);
  System_Predicate<object>___ctor();
  if (pSVar9 == (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) goto LAB_03159914;
  pIVar4 = System_Collections_Generic_List<object>__Find
                     ((System_Collections_Generic_List_object__o *)pSVar9,match,
                      Method_System_Collections_Generic_List<BDGPPPPKHEC>_Find__);
  lVar8 = Method_System_Collections_Generic_List<string>_Add__;
  if (pIVar4 == (Il2CppObject *)0x0) {
    KFKKBEEFOCB = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KFKKBEEFOCB,
               Method_System_Collections_Generic_List<string>__ctor__);
    lVar8 = Method_System_Collections_Generic_List<string>_Add__;
    if (KFKKBEEFOCB == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03159914;
    pSVar7 = (KFKKBEEFOCB->fields)._items;
    (KFKKBEEFOCB->fields)._version = (KFKKBEEFOCB->fields)._version + 1;
    if (pSVar7 == (System_String_array *)0x0) goto LAB_03159914;
    uVar1 = (KFKKBEEFOCB->fields)._size;
    if (uVar1 < (uint)pSVar7->max_length) {
      (KFKKBEEFOCB->fields)._size = uVar1 + 1;
      pSVar7->m_Items[(int)uVar1] = CNIELFLIKJB;
      thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,CNIELFLIKJB);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)KFKKBEEFOCB,
                 (Il2CppObject *)CNIELFLIKJB,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    pSVar9 = (__this->fields).BCLNBJNEAAF;
    KGLJICLJHEL = pIVar2->klass;
    CNIELFLIKJB = (System_String_o *)thunk_FUN_01bda818(BDGPPPPKHEC_TypeInfo);
    BDGPPPPKHEC___ctor((BDGPPPPKHEC_o *)CNIELFLIKJB,(System_String_o *)KGLJICLJHEL,KFKKBEEFOCB,
                       (MethodInfo *)0x0);
    lVar8 = Method_System_Collections_Generic_List<BDGPPPPKHEC>_Add__;
    if (pSVar9 == (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) goto LAB_03159914;
                    /* try { // try from 0315989c to 032598c3 has its CatchHandler @ 031599f0 */
    pBVar6 = (pSVar9->fields)._items;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (pBVar6 == (BDGPPPPKHEC_array *)0x0) goto LAB_03159914;
    uVar1 = (pSVar9->fields)._size;
    if ((uint)pBVar6->max_length <= uVar1) {
      lVar8 = *(long *)(lVar8 + 0x20);
      goto LAB_031598f0;
    }
    (pSVar9->fields)._size = uVar1 + 1;
    ppBVar5 = pBVar6->m_Items + (int)uVar1;
    *ppBVar5 = (BDGPPPPKHEC_o *)CNIELFLIKJB;
  }
  else {
                    /* try { // try from 0315978c to 0325989b has its CatchHandler @ 0315978c
                       catch() { ... } // from try @ 0315978c with catch @ 0315978c
                       catch() { ... } // from try @ 0315994c with catch @ 0315978c
                       catch() { ... } // from try @ 031599cc with catch @ 0315978c
                       catch() { ... } // from try @ 031599d4 with catch @ 0315978c
                       catch() { ... } // from try @ 03159a74 with catch @ 0315978c */
    pSVar9 = pIVar4[1].monitor;
    if (pSVar9 == (System_Collections_Generic_List_BDGPPPPKHEC__o *)0x0) goto LAB_03159914;
    pBVar6 = (pSVar9->fields)._items;
    (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
    if (pBVar6 == (BDGPPPPKHEC_array *)0x0) goto LAB_03159914;
    uVar1 = (pSVar9->fields)._size;
    if ((uint)pBVar6->max_length <= uVar1) {
      lVar8 = *(long *)(lVar8 + 0x20);
LAB_031598f0:
                    /* try { // try from 031598f8 to 0325991f has its CatchHandler @ 031599ec */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)CNIELFLIKJB,
                 *(MethodInfo_26E4DAC **)(*(long *)(lVar8 + 0xc0) + 0x70));
      method_00 = extraout_x1_00;
      goto LAB_031598fc;
    }
    (pSVar9->fields)._size = uVar1 + 1;
    ppBVar5 = pBVar6->m_Items + (int)uVar1;
    *ppBVar5 = (BDGPPPPKHEC_o *)CNIELFLIKJB;
  }
  thunk_FUN_01c20e04(ppBVar5,CNIELFLIKJB);
  method_00 = extraout_x1;
LAB_031598fc:
  ACHLOMELAJE__EFJFOCNIOIA(__this,method_00);
  return;
}

