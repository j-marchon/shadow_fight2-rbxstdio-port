// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$Init @ RVA 0x334CDD8

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__Init
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               MethodInfo *method)

{
  int32_t PCLEALHGACC;
  NLIDHEAMLMC_o *pNVar1;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *pNVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *pNVar3;
  NLIDHEAMLMC_o **ppNVar4;
  
  if ((DAT_04567a0f & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567a0f = 1;
    method = extraout_x1;
  }
  PCLEALHGACC = (__this->fields)._Team;
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(PCLEALHGACC,(MethodInfo *)0x0);
  ppNVar4 = &(__this->fields).MLFKBCEMBFA;
  *ppNVar4 = pNVar1;
  thunk_FUN_01c20e04(ppNVar4,pNVar1);
  pNVar2 = (__this->fields)._MagicButton;
  if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
              (pNVar2,0.0,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._BossAbilityButton;
    if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
                (pNVar2,0.0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._BossAbilityHintImage;
      if ((pNVar3 != (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *)0x0) &&
         (__this_00 = (pNVar3->fields)._HintImage,
         __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

