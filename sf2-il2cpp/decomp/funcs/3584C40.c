// Nekki.SF2.GUI.Map.MapScene$$PIMIMOACBNG @ RVA 0x3584C40

void Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG
               (Nekki_SF2_GUI_Map_MapScene_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Map_InfoBattle_o *pNVar2;
  AFFHKININGD_o *pAVar3;
  ACHLOMELAJE_o *__this_00;
  DNELIPCHKLK_o *CJNHFNHJHPE;
  
  if ((DAT_04568d18 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568d18 = 1;
  }
  pNVar2 = (__this->fields).OCBDFDALFLL;
  if (pNVar2 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
    Nekki_SF2_GUI_Map_InfoBattle__UpdateBattleInfo(pNVar2,BANHBMINMMP,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).OCBDFDALFLL;
    if (pNVar2 != (Nekki_SF2_GUI_Map_InfoBattle_o *)0x0) {
      pAVar3 = Nekki_SF2_GUI_Map_InfoBattle__GetCurrentFight(pNVar2,(MethodInfo *)0x0);
      if (pAVar3 == (AFFHKININGD_o *)0x0) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = MGNPHCAAEIO__AHAHJGBMGNL(BANHBMINMMP,(MethodInfo *)0x0);
        if (pAVar3 == (AFFHKININGD_o *)0x0) {
          return;
        }
      }
      iVar1 = (__this->fields).IAAABJBDEMK;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CJNHFNHJHPE = (pAVar3->fields).KOILJHHCIEE;
        if (iVar1 != 0) {
          ACHLOMELAJE__NEIDLAJCOEJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
        ACHLOMELAJE__AAKJALHCIBB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

