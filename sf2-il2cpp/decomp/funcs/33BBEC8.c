// Nekki.SF2.GUI.Fight.FightHintController$$FreeHints @ RVA 0x33BBEC8

void Nekki_SF2_GUI_Fight_FightHintController__FreeHints
               (Nekki_SF2_GUI_Fight_FightHintController_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *__this_00;
  
  if ((DAT_04567dab & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_FightHintController_JMOKJIPJKJB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_RemoveListener__);
    DAT_04567dab = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields).MBEDNBHNLOH;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0) {
    __this_00 = (pNVar1->fields)._OnHintSchemeChanged;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<ODLJFAIHELG>_TypeInfo,method);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Common_Hints_HintList_HAMPHJMMJFE_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<ODLJFAIHELG>_RemoveListener__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

