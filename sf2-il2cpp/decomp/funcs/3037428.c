// Nekki.SF2.GUI.Fight.PauseScreen$$Init @ RVA 0x3037428

void Nekki_SF2_GUI_Fight_PauseScreen__Init
               (Nekki_SF2_GUI_Fight_PauseScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_PressButton_o *pNVar3;
  
  if ((DAT_04565d58 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565d58 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).musicOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOn;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).musicOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).musicOff;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__OAIKLELIHCD((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOn;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOn;
    if (pNVar3 == (Nekki_SF2_GUI_PressButton_o *)0x0) goto LAB_03137600;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03137600;
    UnityEngine_GameObject__SetActive(pUVar2,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).soundOff;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).soundOff;
    if (pNVar3 != (Nekki_SF2_GUI_PressButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      bVar1 = MFIKGMIDDIG__PPGIBBCLJMO((MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,bVar1,(MethodInfo *)0x0);
        goto LAB_031375d0;
      }
    }
LAB_03137600:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_031375d0:
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__NLKIBPNJDJL((MethodInfo *)0x0);
  Nekki_SF2_GUI_Fight_PauseScreen__CIDHNFNLHOG(__this,method_00);
  return;
}

