// Nekki.SF2.Core.InputControllers.GamePadController$$Vibrate @ RVA 0x30E692C

void Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
               GCAKLDNBADP_o OKBIKHHKOEN,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_01;
  InControl_InputDevice_o *DMEEIIKHKDH;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  __this_00 = __this;
  if ((DAT_045663ed & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar2._8_8_;
    __this_00 = auVar2._0_8_;
    DAT_045663ed = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                        (__this_00,method_00), iVar1 <= KHDPGFJLOKJ)) {
    return;
  }
  if (DAT_0456647c == '\0') {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_0456647c = '\x01';
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = InControl_InputManager_TypeInfo->static_fields->Devices;
  if (__this_01 != (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) {
    DMEEIIKHKDH = (InControl_InputDevice_o *)
                  System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                            ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_01,
                             KHDPGFJLOKJ,
                             Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                            );
    Nekki_SF2_Core_InputControllers_GamePadController__Vibrate
              (__this,DMEEIIKHKDH,OKBIKHHKOEN,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

