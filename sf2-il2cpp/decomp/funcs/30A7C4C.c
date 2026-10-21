// Nekki.SF2.GUI.Fight.ScreenFight$$IOEHKDBENCJ @ RVA 0x30A7C4C

void Nekki_SF2_GUI_Fight_ScreenFight__IOEHKDBENCJ
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_01;
  
  if ((DAT_04566181 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
    DAT_04566181 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields).OnStopScreen;
    (__this->fields).NIPJJFHOICB = false;
    if (__this_01 != (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).Type,
                 Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

