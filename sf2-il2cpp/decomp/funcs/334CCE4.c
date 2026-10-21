// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$Refresh @ RVA 0x334CCE4

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Refresh
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,bool LLDEFPNPOPI
               ,bool DINFMCNONGH,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._BossAbilityButton;
  if ((pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,LLDEFPNPOPI,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._MagicButton;
    if ((pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,DINFMCNONGH,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

