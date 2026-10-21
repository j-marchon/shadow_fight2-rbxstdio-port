// Nekki.SF2.Core.InputControllers.GamePadController$$get_DevicesCount @ RVA 0x30E5230

int32_t Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                  (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031e5238 to 032e5253 has its CatchHandler @ 031e53f0 */
  if ((DAT_045663e3 & 1) == 0) {
                    /* try { // try from 031e5254 to 032e53d7 has its CatchHandler @ 031e4ac0 */
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__)
    ;
    DAT_045663e3 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    iVar1 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Count
                      ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                       Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Count__
                      );
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

