// Nekki.SF2.GUI.Profile.PerksController$$ScrollToLastOpenItem @ RVA 0x32D13E4

void Nekki_SF2_GUI_Profile_PerksController__ScrollToLastOpenItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  EPFMFHDGMCE_o *pEVar5;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar6;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  JLGNBOILFLN_o *CDEABOAKDEJ;
  int JDEFJPHCNMM;
  int iVar13;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567554 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567554 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar5 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
                    /* try { // try from 033d1474 to 034d15a3 has its CatchHandler @ 033d1474
                       catch() { ... } // from try @ 033d1474 with catch @ 033d1474
                       catch() { ... } // from try @ 033d1768 with catch @ 033d1474
                       catch() { ... } // from try @ 033d182c with catch @ 033d1474
                       catch() { ... } // from try @ 033d1834 with catch @ 033d1474
                       catch() { ... } // from try @ 033d193c with catch @ 033d1474 */
  if (pEVar5 == (EPFMFHDGMCE_o *)0x0) goto LAB_033d1674;
  __this_01 = (pEVar5->fields).GCHAMOPMNHF;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (ACHLOMELAJE_o *)0x0) ||
     (iVar4 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0),
     __this_01 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_033d1674;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  JDEFJPHCNMM = -1;
  CDEABOAKDEJ = (JLGNBOILFLN_o *)0x0;
  iVar13 = -1;
  while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_70,
                            Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                           ), bVar3) {
    if ((JLGNBOILFLN_o *)local_70.fields._current == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((((JLGNBOILFLN_Fields *)((long)local_70.fields._current + 0x10))->OIKLOAGFFGO == 3) ||
       (iVar1 = ((JLGNBOILFLN_Fields *)((long)local_70.fields._current + 0x10))->GHPHFGBIPCI,
       iVar4 < iVar1)) break;
    if (iVar13 < iVar1) {
      JDEFJPHCNMM = JDEFJPHCNMM + 1;
      CDEABOAKDEJ = (JLGNBOILFLN_o *)local_70.fields._current;
      iVar13 = iVar1;
    }
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
  if (JDEFJPHCNMM < 0) {
LAB_033d15b4:
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
    JDEFJPHCNMM = 0;
  }
  else {
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
    iVar4 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar6,(MethodInfo *)0x0);
    if (iVar4 <= JDEFJPHCNMM) goto LAB_033d15b4;
                    /* try { // try from 033d15a4 to 034d15cb has its CatchHandler @ 033d18a0 */
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_TableView__ScrollToCell(pNVar6,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
  if (CDEABOAKDEJ != (JLGNBOILFLN_o *)0x0) {
    pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar8 = Nekki_SF2_GUI_Profile_PerksController__CJICBFEJDON(__this,CDEABOAKDEJ,method_00);
    if (pPVar7 == (PBAKFOBIHEG_o *)0x0) {
LAB_033d1674:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar10 = pPVar7->klass;
    uVar2._0_1_ = (pPVar10->_2).rank;
    uVar2._1_1_ = (pPVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
                    /* try { // try from 033d1600 to 034d162b has its CatchHandler @ 033d189c */
      piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar9 = pPVar10->vtable + *piVar12;
          goto LAB_033d163c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_033d163c:
    (*pVVar9->methodPtr)(pPVar7,pSVar8,1,pVVar9->method);
  }
                    /* try { // try from 033d166c to 034d1673 has its CatchHandler @ 033d1884 */
  return;
}

