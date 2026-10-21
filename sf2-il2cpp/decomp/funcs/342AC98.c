// IGNCJNPCAEN$$CPJFNBEJDON @ RVA 0x342AC98

void IGNCJNPCAEN__CPJFNBEJDON(bool ICJLHMDFMKG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *pNVar2;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  
  if ((DAT_04568131 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568131 = 1;
  }
  pNVar2 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
    if (pNVar2 == (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) goto LAB_0352add0;
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pNVar2,(bool)(~ICJLHMDFMKG & 1),(MethodInfo *)0x0);
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pNVar3,(bool)(~ICJLHMDFMKG & 1),(MethodInfo *)0x0);
    return;
  }
LAB_0352add0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

