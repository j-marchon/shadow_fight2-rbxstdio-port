// Nekki.SF2.GUI.Common.SceneSelector$$set_TargetScene @ RVA 0x3399380

void Nekki_SF2_GUI_Common_SceneSelector__set_TargetScene
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._TargetScene == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._TargetScene = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_SceneSelector__Refresh(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}

