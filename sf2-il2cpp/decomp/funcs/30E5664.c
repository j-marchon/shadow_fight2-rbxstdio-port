// Nekki.SF2.Core.InputControllers.GamePadController$$GetKeyDownOnAnyDevice @ RVA 0x30E5664

bool Nekki_SF2_Core_InputControllers_GamePadController__GetKeyDownOnAnyDevice
               (Nekki_SF2_Core_InputControllers_GamePadController_o *__this,int32_t IKKKILCDMMB,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_ObjectModel_ReadOnlyCollection_InputDevice__o *source;
  
  if ((DAT_045663d7 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<InputDevice>__);
    FUN_01bab630(&System_Func<InputDevice,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_JLEAOFCEFPF__
                );
                    /* try { // try from 031e56ac to 032e57bb has its CatchHandler @ 031e56ac
                       catch() { ... } // from try @ 031e56ac with catch @ 031e56ac
                       catch() { ... } // from try @ 031e589c with catch @ 031e56ac
                       catch() { ... } // from try @ 031e58d8 with catch @ 031e56ac
                       catch() { ... } // from try @ 031e5908 with catch @ 031e56ac
                       catch() { ... } // from try @ 031e5940 with catch @ 031e56ac */
    FUN_01bab630(&Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_TypeInfo);
    DAT_045663d7 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(
                                Nekki_SF2_Core_InputControllers_GamePadController_NKAOFDIFMDE_TypeInfo
                                );
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = IKKKILCDMMB;
    if (DAT_0456647c == '\0') {
      FUN_01bab630(&InControl_InputManager_TypeInfo);
      DAT_0456647c = '\x01';
    }
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    source = InControl_InputManager_TypeInfo->static_fields->Devices;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<InputDevice,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       Method_System_Linq_Enumerable_Any<InputDevice>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

