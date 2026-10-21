// Nekki.SF2.Core.InputControllers.GamePadController$$GetAxisValue @ RVA 0x30E5C58

float Nekki_SF2_Core_InputControllers_GamePadController__GetAxisValue
                (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t KHDPGFJLOKJ,
                int32_t IHCDJFOBOEI,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *__this_00;
  InControl_InputDevice_o *GIDJIIFPHJK;
  MethodInfo *method_00;
  float fVar2;
  undefined1 auVar3 [16];
  
                    /* try { // try from 031e5c58 to 032e5c63 has its CatchHandler @ 031e5958 */
  method_00 = (MethodInfo *)(ulong)(uint)KHDPGFJLOKJ;
                    /* try { // try from 031e5c64 to 032e5c6b has its CatchHandler @ 031e5c6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031e5c50 with catch @ 031e5c6c
                       catch(type#2 @ 00000000) { ... } // from try @ 031e5c64 with catch @ 031e5c6c
                        */
  if ((DAT_045663dc & 1) == 0) {
    auVar3 = FUN_01bab630(&
                          Method_System_Collections_ObjectModel_ReadOnlyCollection<InputDevice>_get_Item__
                         );
    method_00 = auVar3._8_8_;
    __this = auVar3._0_8_;
    DAT_045663dc = 1;
  }
  if ((KHDPGFJLOKJ < 0) ||
     (iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount(__this,method_00),
     iVar1 <= KHDPGFJLOKJ)) {
    return 0.0;
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
    fVar2 = AAENCHDNFKC__GGPFDMBNLOD(GIDJIIFPHJK,IHCDJFOBOEI,(MethodInfo *)0x0);
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

