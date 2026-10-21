// Nekki.SF2.GUI.Fight.RaidFinalFightCurrencyContent$$OLMEBDADFOO @ RVA 0x32B79A0

void Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent__OLMEBDADFOO
               (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_RewardPanel_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  __this_00 = (__this->fields)._RewardPanel;
  if (__this_00 != (Nekki_SF2_GUI_Fight_RewardPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Fight_RewardPanel__ShowNextGroupIfNeed(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_01 = (__this->fields).super.NHNIOGOEAJB;
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

