// Nekki.SF2.Core.InputControllers.KeyboardController$$get_IsInited @ RVA 0x3097264

bool Nekki_SF2_Core_InputControllers_KeyboardController__get_IsInited(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *x;
  
  if ((DAT_045660e8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660e8 = 1;
  }
  x = Nekki_SF2_Core_InputControllers_KeyboardController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

