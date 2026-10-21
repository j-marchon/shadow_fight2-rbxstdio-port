// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxisDown @ RVA 0x30E61DC

bool Nekki_SF2_Core_InputControllers_GamePadController__GetAxisDown
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               int32_t IHCDJFOBOEI,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663e1 & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663e1 = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar2 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar2 <= KHDPGFJLOKJ)) {
    return false;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_00 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    GIDJIIFPHJK = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    bVar1 = AAENCHDNFKC__BKGGPNFFCHN(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

