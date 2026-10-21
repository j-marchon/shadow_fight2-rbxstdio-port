// Nekki.SF2.GUI.Map.MapScene$$GHCILGEAFOP @ RVA 0x35891E8

void Nekki_SF2_GUI_Map_MapScene__GHCILGEAFOP
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  PKHMIGFEJCL_o *pPVar3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar4;
  
  if ((DAT_04568d1b & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568d1b = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (pPVar3 = (pNVar2->fields).QuestParameters, pPVar3 != (PKHMIGFEJCL_o *)0x0)) {
    ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((pPVar3->fields).CHFDDNODLGP,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    bVar1 = MGNPHCAAEIO__BIFPGEGFDLK(ELHAJJAHLHM,0x10,(MethodInfo *)0x0);
    if (!bVar1) {
      Nekki_SF2_GUI_Map_MapScene__FBICEDIPMOL(__this,method_00);
      return;
    }
    Nekki_SF2_GUI_Map_MapScene__OGHJAMAKPFJ(__this,true,method_01);
    pNVar4 = (__this->fields).FMIFNIIJJNK;
    if ((pNVar4 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
       (__this_00 = (pNVar4->fields).RaidToggleButton,
       __this_00 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0)) {
      Nekki_SF2_GUI_Map_RaidToggleButton__SetState(__this_00,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

