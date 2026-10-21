// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$set_BossAbilityEnabled @ RVA 0x334CC94

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__set_BossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,bool CJNHFNHJHPE
               ,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this_00;
  Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  
  __this_00 = (__this->fields)._BossAbilityButton;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_IsEnabled
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._BossAbilityHintImage;
    if ((__this_01 != (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *)0x0) &&
       (__this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

