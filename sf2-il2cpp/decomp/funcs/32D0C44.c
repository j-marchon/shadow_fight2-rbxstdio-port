// Nekki.SF2.GUI.Profile.PerksController$$GetCellByPerk @ RVA 0x32D0C44

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_PerksController__GetCellByPerk
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
          MethodInfo *method)

{
  byte bVar1;
  int32_t DPJIDNBJIBG;
  int32_t iVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_0456754f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_0456754f = 1;
  }
  DPJIDNBJIBG = Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA(__this,CDEABOAKDEJ,method);
  if (DPJIDNBJIBG < 0) {
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  }
  else {
    pNVar3 = (__this->fields).super._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_033d0d0c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    if (DPJIDNBJIBG < iVar2) {
      pNVar3 = (__this->fields).super._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_033d0d0c;
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar4;
}

