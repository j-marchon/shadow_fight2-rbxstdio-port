// Nekki.SF2.GUI.Pvp.PvpScene$$CLNAOMIIBLH @ RVA 0x321D7E0

void Nekki_SF2_GUI_Pvp_PvpScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this_00;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this_01;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this_02;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar1;
  COOJKPHHMCD_o *pCVar2;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  MethodInfo *method_00;
  JPGJLKENNCC_o *__this_03;
  
  if ((DAT_04566f19 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_CLNAOMIIBLH__);
    DAT_04566f19 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<PvpScene>_CLNAOMIIBLH__);
  Nekki_SF2_GUI_Pvp_PvpScene__FLODGLDFFGL(__this,method_00);
  __this_00 = (__this->fields).MPPLJPIAGDK;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).IIBLCIFHCCF;
    if (__this_01 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FLABENKGFDF;
      if (__this_02 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_02,(MethodInfo *)0x0);
        pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
          Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode
                    (pNVar1,false,(MethodInfo *)0x0);
          pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0)
          ;
          pCVar2 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
          COOJKPHHMCD___ctor(pCVar2,(Il2CppObject *)__this,
                             Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
            Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceConnected
                      (pNVar1,pCVar2,(MethodInfo *)0x0);
            pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current
                               ((MethodInfo *)0x0);
            pCVar2 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
            COOJKPHHMCD___ctor(pCVar2,(Il2CppObject *)__this,
                               Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
            if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
              Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceDisconnected
                        (pNVar1,pCVar2,(MethodInfo *)0x0);
              pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                __this_03 = (pNVar3->fields).GMLEPHMBMPD;
                PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                              thunk_FUN_01bda818(
                                                System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                                );
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                if (__this_03 != (JPGJLKENNCC_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                            ((FMKGOOONJKB_T0__T1__T2__o *)__this_03,PKKMGBOIDJD,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

