// Nekki.SF2.GUI.Fight.DisplayModel$$.ctor @ RVA 0x32B9554

void Nekki_SF2_GUI_Fight_DisplayModel___ctor
               (Nekki_SF2_GUI_Fight_DisplayModel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567478 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_04567478 = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
  (__this->fields).OOKEKJMFKPE = pSVar1;
  thunk_FUN_01c20e04();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

