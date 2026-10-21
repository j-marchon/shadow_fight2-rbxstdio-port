// Nekki.SF2.GUI.Fight.ScreenModel$$KIJPPGNCOEN @ RVA 0x355DF3C

void Nekki_SF2_GUI_Fight_ScreenModel__KIJPPGNCOEN
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this_00;
  
  __this_00 = (__this->fields)._lifeBar;
  if (__this_00 != (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) {
    Nekki_SF2_GUI_Fight_PlayerLifeBar__Init
              (__this_00,(__this->fields)._parameters,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

