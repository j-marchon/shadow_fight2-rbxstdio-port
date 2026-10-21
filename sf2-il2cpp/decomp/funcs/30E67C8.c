// Nekki.SF2.Core.InputControllers.GamePadController$$GetDeviceName @ RVA 0x30E67C8

System_String_o *
Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
          (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
          MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  void **ppvVar3;
  undefined1 auVar4 [16];
  
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
  if ((DAT_045663eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__);
    auVar4 = FUN_01bab630(&StringLiteral_1);
    method_00 = auVar4._8_8_;
    __this = auVar4._0_8_;
    DAT_045663eb = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar1 <= KHDPGFJLOKJ)) {
    ppvVar3 = (void **)&StringLiteral_1;
  }
  else {
                    /* try { // try from 031e6818 to 032e6cf7 has its CatchHandler @ 031e6818
                       catch() { ... } // from try @ 031e6818 with catch @ 031e6818
                       catch() { ... } // from try @ 031e6dfc with catch @ 031e6818
                       catch() { ... } // from try @ 031e6e48 with catch @ 031e6818
                       catch() { ... } // from try @ 031e6f90 with catch @ 031e6818 */
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = InControl_InputManager_TypeInfo->static_fields->Devices;
    if ((__this_00 == (System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *)0x0) ||
       (pIVar2 = System_Collections_ObjectModel_ReadOnlyCollection<object>__get_Item
                           ((System_Collections_ObjectModel_ReadOnlyCollection_T__o *)__this_00,
                            KHDPGFJLOKJ,
                            Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                           ), pIVar2 == (Il2CppObject *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ppvVar3 = &pIVar2[1].monitor;
  }
  return *ppvVar3;
}

