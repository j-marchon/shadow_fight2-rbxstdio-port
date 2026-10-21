// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$HFHPEPJPCHL @ RVA 0x358E804

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__HFHPEPJPCHL
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,float CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UVar2 = UnityEngine_UI_ScrollRect__get_normalizedPosition(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      UVar2.fields.y = 1.0 - CJNHFNHJHPE;
      UnityEngine_UI_ScrollRect__set_normalizedPosition(pUVar1,UVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

