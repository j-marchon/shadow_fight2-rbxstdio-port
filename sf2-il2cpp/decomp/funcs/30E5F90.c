// Nekki.SF2.Core.InputControllers.GamePadController$$Init @ RVA 0x30E5F90

void Nekki_SF2_Core_InputControllers_GamePadController__Init(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *target;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar2;
  
  if ((DAT_045663de & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<GamePadController>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15471);
    DAT_045663de = 1;
  }
  pNVar2 = Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    target = (UnityEngine_Object_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor
              ((UnityEngine_GameObject_o *)target,StringLiteral_15471,(MethodInfo *)0x0);
    if (target != (UnityEngine_Object_o *)0x0) {
      pNVar2 = (Nekki_SF2_Core_InputControllers_GamePadController_o *)
               UnityEngine_GameObject__AddComponent<object>
                         ((UnityEngine_GameObject_o *)target,
                          Method_UnityEngine_GameObject_AddComponent<GamePadController>__);
      Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields->CNMHHKAMGPI =
           pNVar2;
      thunk_FUN_01c20e04(Nekki_SF2_Core_InputControllers_GamePadController_TypeInfo->static_fields,
                         pNVar2);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

