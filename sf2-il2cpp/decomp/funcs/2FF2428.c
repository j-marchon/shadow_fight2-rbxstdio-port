// HintButton$$OnDisable @ RVA 0x2FF2428

void HintButton__OnDisable(HintButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04565a73 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_HintButton_BEBGOPNMHON__);
    FUN_01bab630(&Method_HintButton_GKHAKLDEIJI__);
    FUN_01bab630(&Method_HintButton_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_04565a73 = 1;
  }
  UnityEngine_UI_Selectable__OnDisable((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
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
          CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                        thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
          System_Action<int,_object,_Int32Enum>___ctor();
          if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

