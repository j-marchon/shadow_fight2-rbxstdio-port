// Nekki.SF2.GUI.Common.SceneMenuScroll$$MAFEFPMGALF @ RVA 0x30BB758

void Nekki_SF2_GUI_Common_SceneMenuScroll__MAFEFPMGALF
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_GameController_o *__this_01;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_02;
  FCJBEKHDLAF_o *pFVar4;
  OCOAGJDCJPL_o *__this_03;
  JPGJLKENNCC_o *__this_04;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04566241 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_BEMFAFLLOLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GDFABJELKAN__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566241 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_031bb9f0;
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO != (FCJBEKHDLAF_o *)0x0) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar4 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar4 == (FCJBEKHDLAF_o *)0x0) goto LAB_031bb9f0;
    (pFVar4->fields).MDJMIPGAJLL = true;
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    __this_01 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (__this_01 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_031bb9f0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0)
    ;
  }
  ENCPFKDEPJB__CCOOIIPKJNI(1,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_03 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 1;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_03 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_03,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_04 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        local_38 = 1;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_04 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_04,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          __this_02 = (__this->fields)._OnStateChanged;
          (__this->fields).IAAABJBDEMK = 0;
          if (__this_02 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
            UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,0,
                       Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
            return;
          }
        }
      }
    }
  }
LAB_031bb9f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

