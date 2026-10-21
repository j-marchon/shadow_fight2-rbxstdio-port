// Nekki.SF2.GUI.SpriteRendererQuality$$OnDestroy @ RVA 0x310D1C0

void Nekki_SF2_GUI_SpriteRendererQuality__OnDestroy
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566558 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SpriteRendererQuality_IGLCHJBMLCO__);
    DAT_04566558 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FGKGKDEJCOG__APKCEPAKKDG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

