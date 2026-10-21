// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$EOMFJAAEFIJ @ RVA 0x358C474

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__EOMFJAAEFIJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,
               UnityEngine_Vector2_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *__this_00;
  
  __this_00 = (__this->fields)._slider;
  if (__this_00 != (UnityEngine_UI_Slider_o *)0x0) {
    UnityEngine_UI_Slider__set_normalizedValue
              (__this_00,1.0 - CJNHFNHJHPE.fields.y,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(CJNHFNHJHPE.fields.x);
}

