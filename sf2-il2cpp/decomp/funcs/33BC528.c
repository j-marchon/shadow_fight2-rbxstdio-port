// Nekki.SF2.GUI.Fight.FightHintController$$DeActivateFightHints @ RVA 0x33BC528

void Nekki_SF2_GUI_Fight_FightHintController__DeActivateFightHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  
  pNVar1 = (__this->fields).LAPCPDGHEIH;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MBEDNBHNLOH;
    if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

