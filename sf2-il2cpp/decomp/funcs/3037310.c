// Nekki.SF2.GUI.Fight.PauseScreen$$Start @ RVA 0x3037310

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Fight_PauseScreen__Start(Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d56 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_TypeInfo);
    DAT_04565d56 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_PauseScreen_MOFLEHFGHPA_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}

