// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$CKKHBODNDAD @ RVA 0x35CE3C4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__CKKHBODNDAD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Collections_Generic_List_IILNJJJFGLL__o *GHAAKPDHIJJ,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  JMDPBFOCHHP_o *pJVar4;
  GJKKGBIAPFL_o *__this_00;
  System_String_o *pSVar5;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  IILNJJJFGLL_array *pIVar8;
  int index;
  JMDPBFOCHHP_ONCGGLEAIFH_o *pJVar9;
  
  if ((DAT_04568fc1 & 1) == 0) {
    FUN_01bab630(&GJKKGBIAPFL_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04568fc1 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if ((((pJVar4 != (JMDPBFOCHHP_o *)0x0) &&
       (pJVar6 = (pJVar4->fields)._LGFNDLOCGPB_k__BackingField,
       pJVar6 != (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) &&
      (pJVar9 = (pJVar6->fields).OOFDKPAOGFA, pJVar9 != (JMDPBFOCHHP_ONCGGLEAIFH_o *)0x0)) &&
     (pSVar7 = (pJVar9->fields).MHLCLANFAAO,
     pSVar7 != (System_Collections_Generic_List_string__o *)0x0)) {
    iVar1 = (pSVar7->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        __this_00 = (GJKKGBIAPFL_o *)thunk_FUN_01bda818(GJKKGBIAPFL_TypeInfo);
        GJKKGBIAPFL___ctor(__this_00,(MethodInfo *)0x0);
        pSVar7 = (pJVar9->fields).MHLCLANFAAO;
        if ((pSVar7 == (System_Collections_Generic_List_string__o *)0x0) ||
           (pSVar5 = (System_String_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar7,index,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           __this_00 == (GJKKGBIAPFL_o *)0x0)) goto LAB_036ce550;
        (__this_00->fields).NLEIEAICLKM = pSVar5;
        thunk_FUN_01c20e04();
        lVar3 = Method_System_Collections_Generic_List<IILNJJJFGLL>_Add__;
        if (GHAAKPDHIJJ == (System_Collections_Generic_List_IILNJJJFGLL__o *)0x0) goto LAB_036ce550;
        pIVar8 = (GHAAKPDHIJJ->fields)._items;
        (GHAAKPDHIJJ->fields)._version = (GHAAKPDHIJJ->fields)._version + 1;
        if (pIVar8 == (IILNJJJFGLL_array *)0x0) goto LAB_036ce550;
        uVar2 = (GHAAKPDHIJJ->fields)._size;
                    /* try { // try from 036ce4f0 to 037ce4f7 has its CatchHandler @ 036ce67c */
        if (uVar2 < (uint)pIVar8->max_length) {
                    /* try { // try from 036ce4f8 to 037ce66f has its CatchHandler @ 036ce2ec */
          (GHAAKPDHIJJ->fields)._size = uVar2 + 1;
          pIVar8->m_Items[(int)uVar2] = (IILNJJJFGLL_o *)__this_00;
          thunk_FUN_01c20e04(pIVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (iVar1 != index);
    }
    return;
  }
LAB_036ce550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

