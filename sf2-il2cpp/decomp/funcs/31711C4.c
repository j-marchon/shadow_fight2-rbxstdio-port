// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$GJGDEBECOEO @ RVA 0x31711C4

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  bool value;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  
  if ((DAT_04566928 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566928 = 1;
  }
  pNVar2 = (__this->fields)._FillImage;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)pNVar2,(__this->fields).MOPCMOLEEIN * 0.75 * 0.01,
               (MethodInfo *)0x0);
    if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon <=
        ABS((__this->fields).MOPCMOLEEIN + -100.0)) {
      value = false;
    }
    else {
      value = (__this->fields).CEPACCGIINO != false;
    }
    pNVar2 = (__this->fields)._IconNotReadyImage;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(value ^ 1),(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._IconReadyImage;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,value,(MethodInfo *)0x0);
        bVar1 = (__this->fields).CPIJELCNKJA;
        method_01 = method_00;
        if ((value & (bVar1 ^ 0xff)) != 0) {
          (__this->fields).ADHJEOCGNDN = 0.0;
          Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__IPIGMILHFKP(__this,method_00);
          bVar1 = (__this->fields).CPIJELCNKJA;
          method_01 = extraout_x1;
        }
        if (value == false && bVar1 != 0) {
          Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__PFAHHIBDFHF(__this,method_01);
        }
        (__this->fields).CPIJELCNKJA = value;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

