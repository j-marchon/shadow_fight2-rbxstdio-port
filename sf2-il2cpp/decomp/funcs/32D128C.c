// Nekki.SF2.GUI.Profile.PerksController$$ScrollToItem @ RVA 0x32D128C

bool Nekki_SF2_GUI_Profile_PerksController__ScrollToItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  System_String_o *LMPMHKIABOM;
  
  if ((DAT_04567553 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567553 = 1;
  }
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA(__this,CDEABOAKDEJ,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
  pNVar4 = (__this->fields).super._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar3 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar4 = (__this->fields).super._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._TableView;
      if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 != (KELJDKIIHMM_o *)0x0)) {
        __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                    KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_01);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) ||
             (LMPMHKIABOM = JLGNBOILFLN__GKMAFGODLLG(CDEABOAKDEJ,(MethodInfo *)0x0),
             __this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) goto LAB_033d13d8;
          Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName(__this_01,LMPMHKIABOM,(MethodInfo *)0x0);
        }
        return true;
      }
    }
  }
LAB_033d13d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

