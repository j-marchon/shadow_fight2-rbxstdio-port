// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CAOHKDDEHDD @ RVA 0x358D3B8

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CAOHKDDEHDD
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_UI_Slider_o *pUVar3;
  float CJNHFNHJHPE;
  
  bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  pUVar3 = (__this->fields).soundTrackBar;
  if (pUVar3 == (UnityEngine_UI_Slider_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  CJNHFNHJHPE = (float)(*(pUVar3->klass->vtable)._46_get_value.methodPtr)
                                 (pUVar3,(pUVar3->klass->vtable)._46_get_value.method);
  MFIKGMIDDIG__DEDBAGNCFLE(CJNHFNHJHPE,(MethodInfo *)0x0);
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  bVar2 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
  if (bVar1 != bVar2) {
    Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__OIAIFGDLFHJ(__this,method_00);
    return;
  }
  return;
}

