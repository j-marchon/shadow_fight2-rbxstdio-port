// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$BJBEBBGINAH @ RVA 0x323502C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BJBEBBGINAH
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0456701a & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    DAT_0456701a = 1;
  }
  Nekki_SF2_GUI_UIModule__BJBEBBGINAH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  ENCPFKDEPJB__CCOOIIPKJNI(1,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 1;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        local_38 = 1;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

