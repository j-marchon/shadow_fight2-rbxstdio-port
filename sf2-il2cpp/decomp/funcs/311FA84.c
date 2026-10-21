// Nekki.SF2.Core.Fights.Controls.Switch.GameControllerSwitch$$SetBossAbilityEnabled @ RVA 0x311FA84

void Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch__SetBossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_GameControllerSwitch_o *__this,
               int32_t GLDAADANHOL,bool LIKMELOEJBH,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  long lVar1;
  
  lVar1 = 0x28;
  if (GLDAADANHOL != 0) {
    lVar1 = 0x30;
  }
  lVar1 = *(long *)((long)&__this->klass + lVar1);
  if ((lVar1 != 0) &&
     (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar1 + 0x30) !=
      (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0)) {
    Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_IsEnabled
              (*(Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o **)(lVar1 + 0x30),
               LIKMELOEJBH,(MethodInfo *)0x0);
    if ((*(UnityEngine_Component_o **)(lVar1 + 0x38) != (UnityEngine_Component_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              (*(UnityEngine_Component_o **)(lVar1 + 0x38),(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,LIKMELOEJBH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

