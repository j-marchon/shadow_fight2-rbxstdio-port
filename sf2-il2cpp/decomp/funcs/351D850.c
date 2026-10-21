// JLEKKANADII$$.cctor @ RVA 0x351D850

void JLEKKANADII___cctor(MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_int__string__o **ppSVar2;
  System_Collections_Generic_List_InputDevice__o *__this_00;
  System_Collections_Generic_List_InputDevice__o **ppSVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar4;
  COOJKPHHMCD_o *pCVar5;
  
  if ((DAT_045689a0 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
    FUN_01bab630(&Method_JLEKKANADII_HONKIIHKLOB__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InputDevice>_TypeInfo);
    FUN_01bab630(&Method_JLEKKANADII_<>c_AADKKMMKBMH__);
    FUN_01bab630(&JLEKKANADII_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_15488);
    DAT_045689a0 = 1;
  }
  if ((JLEKKANADII_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_int__string__ODLJFAIHELG__o *)
           thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  JLEKKANADII_TypeInfo->static_fields->JCDGMAEDFIF = pSVar1;
  thunk_FUN_01c20e04(JLEKKANADII_TypeInfo->static_fields,pSVar1);
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_string>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<int,_string>__ctor__);
  ppSVar2 = &JLEKKANADII_TypeInfo->static_fields->BJFJBJFACFM;
  *ppSVar2 = (System_Collections_Generic_Dictionary_int__string__o *)__this;
  thunk_FUN_01c20e04(ppSVar2,__this);
  __this_00 = (System_Collections_Generic_List_InputDevice__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InputDevice>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InputDevice>__ctor__);
  ppSVar3 = &JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
  COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,(MethodInfo *)0x0);
  if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceConnected
              (pNVar4,pCVar5,(MethodInfo *)0x0);
    pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
    COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,(MethodInfo *)0x0
                      );
    if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceDisconnected
                (pNVar4,pCVar5,(MethodInfo *)0x0);
      pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,
                         (MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        Nekki_SF2_Core_InputControllers_GamePadController__add_OnDevicePartDisconnected
                  (pNVar4,pCVar5,(MethodInfo *)0x0);
        pNVar4 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        pCVar5 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
        COOJKPHHMCD___ctor(pCVar5,(Il2CppObject *)0x0,Method_JLEKKANADII_HONKIIHKLOB__,
                           (MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
          Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceStyleChanged
                    (pNVar4,pCVar5,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_15488,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

