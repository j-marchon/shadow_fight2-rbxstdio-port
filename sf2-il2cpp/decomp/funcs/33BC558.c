// Nekki.SF2.GUI.Fight.FightHintController$$ActivateFightHints @ RVA 0x33BC558

void Nekki_SF2_GUI_Fight_FightHintController__ActivateFightHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  long lVar3;
  FCJBEKHDLAF_o *__this_00;
  
  if ((DAT_04567dae & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04567dae = 1;
  }
  pNVar2 = (__this->fields).LAPCPDGHEIH;
  if (pNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if ((**(long **)(lVar3 + 0xb8) != 0) &&
       (__this_00 = *(FCJBEKHDLAF_o **)(**(long **)(lVar3 + 0xb8) + 0x90),
       __this_00 != (FCJBEKHDLAF_o *)0x0)) {
      iVar1 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
      if (iVar1 != 0x11) {
        return;
      }
      pNVar2 = (__this->fields).MBEDNBHNLOH;
      if (pNVar2 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
        Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

