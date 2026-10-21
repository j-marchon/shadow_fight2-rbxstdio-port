// Nekki.SF2.GUI.Common.SceneSwitchControls$$set_RightScene @ RVA 0x331F660

void Nekki_SF2_GUI_Common_SceneSwitchControls__set_RightScene
               (Nekki_SF2_GUI_Common_SceneSwitchControls_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields)._RightSceneText;
  (__this->fields).EECIOLICNKK = CJNHFNHJHPE;
  CJNHFNHJHPE_00 = MEJPIPJPKNP__LJOKKJPBMGO(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

