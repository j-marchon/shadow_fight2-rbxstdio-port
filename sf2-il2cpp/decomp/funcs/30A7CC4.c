// Nekki.SF2.GUI.Fight.ScreenFight$$MHKDEDJMKLF @ RVA 0x30A7CC4

void Nekki_SF2_GUI_Fight_ScreenFight__MHKDEDJMKLF
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,int32_t FPGABKDNDPG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_00;
  
  if ((DAT_04566183 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ScreenFight_MHKDEDJMKLF__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
    DAT_04566183 = 1;
  }
  if (FPGABKDNDPG == 8) {
    __this_00 = (__this->fields).OnStopScreen;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
      Nekki_SF2_GUI_Fight_ScreenFight__DKNNDNIGMIM(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

