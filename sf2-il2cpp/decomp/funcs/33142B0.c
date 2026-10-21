// Nekki.SF2.GUI.Common.PageSwitchPanel$$CLNAOMIIBLH @ RVA 0x33142B0

void Nekki_SF2_GUI_Common_PageSwitchPanel__CLNAOMIIBLH
               (Nekki_SF2_GUI_Common_PageSwitchPanel_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_045677ca & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_ADIHLMELFML__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_PageSwitchPanel_KEBEOGHDCMM__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_045677ca = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._NextPageButton;
  if (pSVar4 != (SFButton_o *)0x0) {
    pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar1,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._PrevPageButton;
      if (pSVar4 != (SFButton_o *)0x0) {
        pUVar5 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
        pUVar1 = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__RemoveListener(pUVar5,pUVar1,(MethodInfo *)0x0);
          pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
            __this_00 = (pNVar2->fields).KIHMKIEFOEI;
            pSVar3 = (System_Action_T0__T1__T2__o *)
                     thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
            System_Action<Int32Enum,_int,_Int32Enum>___ctor();
            if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
              FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                        ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,
                         Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
              pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                __this_01 = (pNVar2->fields).GMLEPHMBMPD;
                pSVar3 = (System_Action_T0__T1__T2__o *)
                         thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                            ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,
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

