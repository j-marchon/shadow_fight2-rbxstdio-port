// Nekki.SF2.GUI.Common.Hints.HintCache$$get_IsInited @ RVA 0x32B8F18

bool Nekki_SF2_GUI_Common_Hints_HintCache__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintCache_o *x;
  
  if ((DAT_04567471 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567471 = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintCache_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

