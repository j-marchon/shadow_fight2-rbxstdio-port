// HintButton$$FIAHBLBGOEP @ RVA 0x2FF2868

void HintButton__FIAHBLBGOEP(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  System_Enum_o *pSVar4;
  System_Collections_Generic_List_MIBHAJBEMIK__o *pSVar5;
  OCOAGJDCJPL_o *pOVar6;
  JPGJLKENNCC_o *pJVar7;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04565a78 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_HintButton_BEBGOPNMHON__);
    FUN_01bab630(&Method_HintButton_GKHAKLDEIJI__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
    DAT_04565a78 = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pOVar6 = (pNVar2->fields).KIHMKIEFOEI;
    pSVar3 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (pOVar6 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)pOVar6,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        pJVar7 = (pNVar2->fields).GMLEPHMBMPD;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (pJVar7 != (JPGJLKENNCC_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)pJVar7,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pSVar5 = (__this->fields).KDGCEFEPJHP;
            if (pSVar5 != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
              if ((pSVar5->fields)._size < 1) {
                return;
              }
              pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                pOVar6 = (pNVar2->fields).KIHMKIEFOEI;
                pSVar3 = (System_Action_T0__T1__T2__o *)
                         thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                local_44 = (__this->fields)._ControlPriority;
                pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
                if (pOVar6 != (OCOAGJDCJPL_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                            ((FMKGOOONJKB_T0__T1__T2__o *)pOVar6,pSVar3,pSVar4,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    pJVar7 = (pNVar2->fields).GMLEPHMBMPD;
                    pSVar3 = (System_Action_T0__T1__T2__o *)
                             thunk_FUN_01bda818(
                                               System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                               );
                    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    local_48 = (__this->fields)._ControlPriority;
                    pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_48);
                    if (pJVar7 != (JPGJLKENNCC_o *)0x0) {
                      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                                ((FMKGOOONJKB_T0__T1__T2__o *)pJVar7,pSVar3,pSVar4,
                                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                      return;
                    }
                  }
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

