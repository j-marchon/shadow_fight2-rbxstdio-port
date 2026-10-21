// Nekki.SF2.GUI.Common.SceneMenuScroll$$CLNAOMIIBLH @ RVA 0x30BBA3C

void Nekki_SF2_GUI_Common_SceneMenuScroll__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  JPGJLKENNCC_o *pJVar3;
  OCOAGJDCJPL_o *__this_00;
  
  if ((DAT_04566243 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_BEMFAFLLOLP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GDFABJELKAN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_SceneMenuScroll_GKHAKLDEIJI__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566243 = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pJVar3 = (pNVar1->fields).GMLEPHMBMPD;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (pJVar3 != (JPGJLKENNCC_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)pJVar3,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_00 = (pNVar1->fields).KIHMKIEFOEI;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            pJVar3 = (pNVar1->fields).GMLEPHMBMPD;
            pSVar2 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            if (pJVar3 != (JPGJLKENNCC_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                        ((FMKGOOONJKB_T0__T1__T2__o *)pJVar3,pSVar2,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
              ENCPFKDEPJB__EAJCLBBOBDH(1,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI =
                   (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0;
              thunk_FUN_01c20e04(Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

