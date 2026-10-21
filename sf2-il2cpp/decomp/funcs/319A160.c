// Nekki.SF2.GUI.Map.RaidToggleButton$$set_interactable @ RVA 0x319A160

void Nekki_SF2_GUI_Map_RaidToggleButton__set_interactable
               (Nekki_SF2_GUI_Map_RaidToggleButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._goToRaidBtn;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._goToStoryBtn;
    if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

