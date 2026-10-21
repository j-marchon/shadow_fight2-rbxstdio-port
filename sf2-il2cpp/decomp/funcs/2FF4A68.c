// Nekki.SF2.GUI.Scenes.LoaderScreen$$Start @ RVA 0x2FF4A68

void Nekki_SF2_GUI_Scenes_LoaderScreen__Start
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *x;
  
  if ((DAT_04565a8b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565a8b = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045624ed == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_045624ed = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    method = extraout_x1_02;
  }
  x = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_GUI_Scenes_LoaderScreen__Init(__this,method_00);
    return;
  }
  return;
}

