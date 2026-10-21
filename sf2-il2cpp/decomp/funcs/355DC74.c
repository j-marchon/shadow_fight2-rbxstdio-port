// Nekki.SF2.GUI.Fight.ScreenModel$$.ctor @ RVA 0x355DC74

void Nekki_SF2_GUI_Fight_ScreenModel___ctor
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  System_Action_BFMEMCBCKLK__o **ppSVar1;
  System_Action_ScreenModel_MPGAFKNLIPG__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_BFMEMCBCKLK__o *pSVar3;
  System_Action_ScreenModel_MPGAFKNLIPG__o *pSVar4;
  
  if ((DAT_04568b9b & 1) == 0) {
    FUN_01bab630(&System_Action<BFMEMCBCKLK>_TypeInfo);
    FUN_01bab630(&System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_<>c_IGONOGOAECN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenModel_<>c_OCOAOEMJJEL__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo);
    DAT_04568b9b = 1;
    method = extraout_x1;
  }
  (__this->fields)._showRounds = true;
  if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_0;
  if (pSVar3 == (System_Action_BFMEMCBCKLK__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_BFMEMCBCKLK__o *)thunk_FUN_01bda818(System_Action<BFMEMCBCKLK>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  ppSVar1 = &(__this->fields).OnStyleChange;
  *ppSVar1 = pSVar3;
  thunk_FUN_01c20e04(ppSVar1,pSVar3);
  if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_1;
  if (pSVar4 == (System_Action_ScreenModel_MPGAFKNLIPG__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_ScreenModel_MPGAFKNLIPG__o *)
             thunk_FUN_01bda818(System_Action<ScreenModel_MPGAFKNLIPG>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Fight_ScreenModel_<>c_TypeInfo->static_fields->__9__76_1;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
  }
  ppSVar2 = &(__this->fields).OnComboUp;
  *ppSVar2 = pSVar4;
  thunk_FUN_01c20e04(ppSVar2,pSVar4);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

