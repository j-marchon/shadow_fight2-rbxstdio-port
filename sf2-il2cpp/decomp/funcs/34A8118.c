// Nekki.SF2.GUI.Profile.UserPerksPanel$$AddPerk @ RVA 0x34A8118

void Nekki_SF2_GUI_Profile_UserPerksPanel__AddPerk
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,HEFOANCOHDC_o *MNDCHBGOKMD,
               bool CELDNFDOLEH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  JLGNBOILFLN_o *pJVar4;
  System_String_o *value;
  EANNACPOJFA_o *pEVar5;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar6;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  Nekki_SF2_GUI_TableView_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  JLGNBOILFLN_array *pJVar9;
  EANNACPOJFA_array *pEVar10;
  EANNACPOJFA_o **ppEVar11;
  
  pMVar8 = (MethodInfo *)(ulong)CELDNFDOLEH;
  if ((DAT_04568504 & 1) == 0) {
    FUN_01bab630(&EANNACPOJFA_TypeInfo);
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568504 = 1;
  }
  if (MNDCHBGOKMD == (HEFOANCOHDC_o *)0x0) {
    return;
  }
  pJVar4 = Nekki_SF2_GUI_Profile_UserPerksPanel__JMMDGEOBMOC
                     (__this,(MNDCHBGOKMD->fields).JIJLBFGKNJK,pMVar8);
  if (pJVar4 != (JLGNBOILFLN_o *)0x0) {
    JLGNBOILFLN__LAAHJCGKKNK(pJVar4,MNDCHBGOKMD,(MethodInfo *)0x0);
                    /* try { // try from 035a81ac to 036a851f has its CatchHandler @ 035a81ac
                       catch() { ... } // from try @ 035a81ac with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8a7c with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8af8 with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8c7c with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8d98 with catch @ 035a81ac */
    JLGNBOILFLN__HLPHKOBKPML(pJVar4,(MNDCHBGOKMD->fields).BPCADJLKKGA,(MethodInfo *)0x0);
    return;
  }
  pJVar4 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
  pMVar8 = (MethodInfo *)0x0;
  JLGNBOILFLN___ctor(pJVar4,MNDCHBGOKMD,0,2,3,(MethodInfo *)0x0);
  if (pJVar4 == (JLGNBOILFLN_o *)0x0) goto LAB_035a8460;
  value = JLGNBOILFLN__KIEKFCEPGCO(pJVar4,(MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  bVar3 = Nekki_SF2_GUI_Profile_UserPerksPanel__KOFEHBPNEPA(__this,method_00);
  lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
  if (bVar3) {
    pEVar5 = (EANNACPOJFA_o *)thunk_FUN_01bda818(EANNACPOJFA_TypeInfo);
    EANNACPOJFA___ctor(pEVar5,(MethodInfo *)0x0);
    ppEVar11 = &(__this->fields).FKDJMGJDOAG;
    *ppEVar11 = pEVar5;
    thunk_FUN_01c20e04(ppEVar11,pEVar5);
    lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
    if ((*ppEVar11 == (EANNACPOJFA_o *)0x0) ||
       (pSVar6 = ((*ppEVar11)->fields).GJBLBEALOBO,
       pSVar6 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_035a8460;
    pJVar9 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pJVar9 == (JLGNBOILFLN_array *)0x0) goto LAB_035a8460;
    uVar1 = (pSVar6->fields)._size;
    if (uVar1 < (uint)pJVar9->max_length) {
      (pSVar6->fields)._size = uVar1 + 1;
      pJVar9->m_Items[(int)uVar1] = pJVar4;
      thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,pJVar4);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pJVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = Method_System_Collections_Generic_List<EANNACPOJFA>_Add__;
    __this_00 = (__this->fields).MHOLLBLFLAH;
    if (__this_00 == (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) goto LAB_035a8460;
    pEVar5 = (__this->fields).FKDJMGJDOAG;
    pEVar10 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pEVar10 == (EANNACPOJFA_array *)0x0) goto LAB_035a8460;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pEVar10->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pEVar10->m_Items[(int)uVar1] = pEVar5;
      thunk_FUN_01c20e04(pEVar10->m_Items + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pEVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (CELDNFDOLEH) {
      pNVar7 = (__this->fields)._TableView;
      if (pNVar7 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_TableView__ReloadData(pNVar7,(MethodInfo *)0x0);
      pNVar7 = (__this->fields)._TableView;
      if (pNVar7 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_TableView__SetPosition
                (pNVar7,(pNVar7->fields).GMCDBHFHFGF,0.0,(MethodInfo *)0x0);
    }
  }
  else {
    pEVar5 = (__this->fields).FKDJMGJDOAG;
    if ((pEVar5 == (EANNACPOJFA_o *)0x0) ||
       (pSVar6 = (pEVar5->fields).GJBLBEALOBO,
       pSVar6 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_035a8460;
    pJVar9 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pJVar9 == (JLGNBOILFLN_array *)0x0) goto LAB_035a8460;
    uVar1 = (pSVar6->fields)._size;
    if (uVar1 < (uint)pJVar9->max_length) {
      (pSVar6->fields)._size = uVar1 + 1;
      pJVar9->m_Items[(int)uVar1] = pJVar4;
      thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,pJVar4);
    }
    else {
      pMVar8 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pJVar4,
                 (MethodInfo_26E4DAC *)pMVar8);
    }
    __this_01 = Nekki_SF2_GUI_Profile_UserPerksPanel__COKANBDIAPH
                          (__this,(__this->fields).FKDJMGJDOAG,pMVar8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (__this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_Profile_PerkCell__Init
                (__this_01,(__this->fields).FKDJMGJDOAG,(JEIEEMKCNOJ_o *)__this,15.0,
                 (MethodInfo *)0x0);
    }
  }
  __this_02 = (__this->fields)._NoPerksLabel;
  if ((__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
    return;
  }
LAB_035a8460:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

