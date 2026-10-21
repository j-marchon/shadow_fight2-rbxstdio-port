// Nekki.SF2.GUI.Pvp.PvpScene$$GIENGNEGHPJ @ RVA 0x321CBC8

void Nekki_SF2_GUI_Pvp_PvpScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar3;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *pNVar5;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar6;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar7;
  COOJKPHHMCD_o *pCVar8;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar9;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  MethodInfo *method_00;
  PBAKFOBIHEG_o *pPVar10;
  System_Collections_IEnumerator_o *pSVar11;
  VirtualInvokeData *pVVar12;
  MethodInfo *method_01;
  InControl_InputDevice_o *HBHPFKJMGCK;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  JPGJLKENNCC_o *__this_00;
  undefined4 local_54;
  
  if ((DAT_04566f0e & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<CharacterSelectModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<LocationSelectModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PlayerMenu>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PvPHintController>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RandomSelectionModule>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_GIENGNEGHPJ__);
    DAT_04566f0e = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<PvpScene>_GIENGNEGHPJ__);
  pNVar2 = (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<CharacterSelectModule>__);
  (__this->fields).MPPLJPIAGDK = pNVar2;
  thunk_FUN_01c20e04();
  pNVar3 = (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<LocationSelectModule>__);
  (__this->fields).IIBLCIFHCCF = pNVar3;
  thunk_FUN_01c20e04();
  pNVar4 = (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RandomSelectionModule>__);
  (__this->fields).FLABENKGFDF = pNVar4;
  thunk_FUN_01c20e04();
  pNVar5 = (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PlayerMenu>__);
  (__this->fields).NNLCCJDPNBD = pNVar5;
  thunk_FUN_01c20e04();
  pNVar6 = (Nekki_SF2_GUI_Pvp_PvPHintController_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PvPHintController>__);
  (__this->fields).HJBFNKLPBFL = pNVar6;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Pvp_PvpScene__HGFEFHNKEAB(__this,method_01);
  pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode(pNVar7,true,(MethodInfo *)0x0)
    ;
    pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    pCVar8 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
    COOJKPHHMCD___ctor(pCVar8,(Il2CppObject *)__this,Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__
                       ,(MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceConnected
                (pNVar7,pCVar8,(MethodInfo *)0x0);
      pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      pCVar8 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar8,(Il2CppObject *)__this,
                         Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceDisconnected
                  (pNVar7,pCVar8,(MethodInfo *)0x0);
        pNVar9 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar9 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_00 = (pNVar9->fields).GMLEPHMBMPD;
          PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                        thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_54 = 0;
          method_00 = (MethodInfo *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_54);
          if (__this_00 != (JPGJLKENNCC_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,PKKMGBOIDJD,(System_Enum_o *)method_00
                       ,Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
            Nekki_SF2_GUI_Pvp_PvpScene__HONKIIHKLOB(__this,HBHPFKJMGCK,method_00);
            if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND != false) {
              pPVar10 = CoroutineManager__get_Current((MethodInfo *)0x0);
              pSVar11 = Nekki_SF2_GUI_Pvp_PvpScene__KFDOLNHODBI(__this,method_02);
              if (pPVar10 == (PBAKFOBIHEG_o *)0x0) goto LAB_0331cf64;
              pPVar13 = pPVar10->klass;
              uVar1._0_1_ = (pPVar13->_2).rank;
              uVar1._1_1_ = (pPVar13->_2).minimumAlignment;
              uVar14 = (ulong)uVar1;
              if (uVar14 != 0) {
                piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar12 = pPVar13->vtable + *piVar15;
                    goto LAB_0331cf34;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              pVVar12 = (VirtualInvokeData *)FUN_01b81914(pPVar10,PBAKFOBIHEG_TypeInfo,0);
LAB_0331cf34:
              (*pVVar12->methodPtr)(pPVar10,pSVar11,1,pVVar12->method);
            }
            return;
          }
        }
      }
    }
  }
LAB_0331cf64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

