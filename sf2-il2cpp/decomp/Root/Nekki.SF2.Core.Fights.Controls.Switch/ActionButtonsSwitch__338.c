// TypeDefIndex 338
// Namespace: Nekki.SF2.Core.Fights.Controls.Switch
// public class ActionButtonsSwitch : MonoBehaviour
// Fields:
//   private KKCLOOGGILP _Team; // 0x20
//   private ProgressButtonSwitch _MagicButton; // 0x28
//   private ProgressButtonSwitch _BossAbilityButton; // 0x30
//   private BossAbilityHintSwitch _BossAbilityHintImage; // 0x38
//   private NLIDHEAMLMC MLFKBCEMBFA; // 0x40

// ===== public bool get_BossAbilityEnabled()  [RVA 0x334CBEC]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$get_BossAbilityEnabled @ RVA 0x334CBEC

bool Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__get_BossAbilityEnabled
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *pNVar1;
  
  pNVar1 = (__this->fields)._BossAbilityButton;
  if (pNVar1 != (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *)0x0) {
    return (pNVar1->fields).CEPACCGIINO;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnButtonReleased(DMMJFKCBHEK MFGBNOEGCEE)  [RVA 0x334CC08]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$OnButtonReleased @ RVA 0x334CC08

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__OnButtonReleased
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               int32_t MFGBNOEGCEE,MethodInfo *method)

{
  ulong uVar1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  
  uVar1 = (ulong)(uint)MFGBNOEGCEE;
  if ((DAT_04567a0d & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04567a0d = 1;
    uVar1 = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar1 = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564();
  return;
}


// ===== public void set_BossAbilityEnabled(bool CJNHFNHJHPE)  [RVA 0x334CC94]
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


// ===== public void Refresh(bool LLDEFPNPOPI, bool DINFMCNONGH)  [RVA 0x334CCE4]
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


// ===== public ProgressButtonSwitch get_MagicButton()  [RVA 0x334CD44]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$get_MagicButton @ RVA 0x334CD44

Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__get_MagicButton
          (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._MagicButton;
}


// ===== public void OnButtonPressed(DMMJFKCBHEK MFGBNOEGCEE)  [RVA 0x334CD4C]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$OnButtonPressed @ RVA 0x334CD4C

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__OnButtonPressed
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               int32_t MFGBNOEGCEE,MethodInfo *method)

{
  ulong uVar1;
  ulong extraout_x1;
  ulong extraout_x1_00;
  
  uVar1 = (ulong)(uint)MFGBNOEGCEE;
  if ((DAT_04567a0e & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04567a0e = 1;
    uVar1 = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    uVar1 = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo,uVar1);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished != 0) {
    return;
  }
  thunk_FUN_01ba7564();
  return;
}


// ===== public ProgressButtonSwitch get_BossAbilityButton()  [RVA 0x334CDD0]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$get_BossAbilityButton @ RVA 0x334CDD0

Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__get_BossAbilityButton
          (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._BossAbilityButton;
}


// ===== private GGFFOJJGHGP MJHAJPPOPOD(DMMJFKCBHEK MFGBNOEGCEE)  [RVA 0x334CC8C]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$MJHAJPPOPOD @ RVA 0x334CC8C

GGFFOJJGHGP_o *
Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__MJHAJPPOPOD
          (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,int32_t MFGBNOEGCEE,
          MethodInfo *method)

{
  return (GGFFOJJGHGP_o *)0x0;
}


// ===== public void Init()  [RVA 0x334CDD8]
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


// ===== public BossAbilityHintSwitch get_BossAbilityHintImage()  [RVA 0x334CE90]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$get_BossAbilityHintImage @ RVA 0x334CE90

Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *
Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch__get_BossAbilityHintImage
          (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._BossAbilityHintImage;
}


// ===== public void .ctor()  [RVA 0x334CE98]
// Nekki.SF2.Core.Fights.Controls.Switch.ActionButtonsSwitch$$.ctor @ RVA 0x334CE98

void Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_ActionButtonsSwitch_o *__this,
               MethodInfo *method)

{
  (__this->fields)._Team = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

