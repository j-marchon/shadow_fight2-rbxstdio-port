// Nekki.SF2.GUI.Profile.BattlePassPanel$$LDKKGOHMOAP @ RVA 0x3591800

void Nekki_SF2_GUI_Profile_BattlePassPanel__LDKKGOHMOAP
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  LabelButton_o *__this_00;
  
  __this_00 = (__this->fields)._btnBuyPass;
  if (__this_00 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

