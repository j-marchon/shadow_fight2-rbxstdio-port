// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$SetNeededPercentageToActBtn @ RVA 0x311FAF0

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__SetNeededPercentageToActBtn
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,int32_t CEJGCIAOOKI,float GCFNBDDDGIF,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  UnityEngine_Behaviour_o *__this_00;
  
  if (GLDAADANHOL == -1) {
    return;
  }
  lVar2 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar2 = 0x30;
  }
  lVar2 = *(long *)((long)&__this->klass + lVar2);
  if (CEJGCIAOOKI == 0xe) {
    if ((lVar2 != 0) &&
       (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30) !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
      Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
                (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30),
                 GCFNBDDDGIF,(MethodInfo *)0x0);
      if (*(UnityEngine_Behaviour_o **)(lVar2 + 0x30) != (UnityEngine_Behaviour_o *)0x0) {
        bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled
                          (*(UnityEngine_Behaviour_o **)(lVar2 + 0x30),(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((*(long *)(lVar2 + 0x38) != 0) &&
           (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x30) !=
            (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
          __this_00 = *(UnityEngine_Behaviour_o **)(*(long *)(lVar2 + 0x38) + 0x20);
          bVar1 = Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_IsFull
                            (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)
                              (lVar2 + 0x30),(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(__this_00,bVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    if (CEJGCIAOOKI != 0xc) {
      return;
    }
    if ((lVar2 != 0) &&
       (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x28) !=
        (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
      Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
                (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar2 + 0x28),
                 GCFNBDDDGIF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

