// Nekki.SF2.GUI.Common.SceneSwitchControls$$Refresh @ RVA 0x331F694

void Nekki_SF2_GUI_Common_SceneSwitchControls__Refresh
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  uint uVar1;
  MethodInfo *in_x2;
  
  uVar1 = (__this->fields).DKJLOMNAEDI - 3;
  if ((uVar1 < 5) && ((0x17U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    CJNHFNHJHPE = *(int32_t *)(&DAT_00e297ec + (long)(int)uVar1 * 4);
    Nekki_SF2_GUI_Common_SceneSwitchControls__set_LeftScene
              (__this,*(int32_t *)(&DAT_00e297d8 + (long)(int)uVar1 * 4),in_x2);
    Nekki_SF2_GUI_Common_SceneSwitchControls__set_RightScene(__this,CJNHFNHJHPE,in_x2);
    return;
  }
  return;
}

