// Nekki.SF2.GUI.Common.SceneSelector$$get_IsCurrentScene @ RVA 0x3399558

bool Nekki_SF2_GUI_Common_SceneSelector__get_IsCurrentScene
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields)._TargetScene;
  if (DAT_04565e5a == '\0') {
    FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
    DAT_04565e5a = '\x01';
  }
  return iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB;
}

