// Nekki.SF2.GUI.Fight.TextAndMoneyLine$$HLEAJLEGAFL @ RVA 0x3150BC8

void Nekki_SF2_GUI_Fight_TextAndMoneyLine__HLEAJLEGAFL
               (Nekki_SF2_GUI_Fight_TextAndMoneyLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar3;
  
  if ((DAT_04566805 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566805 = 1;
    method = extraout_x1;
  }
  if ((0 < (__this->fields).ODEAKOGFMPE) || ((__this->fields).HGFBBMJNBPI < 1)) {
    pNVar3 = (__this->fields).moneyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).moneyCount;
      if ((pNVar3 == (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03250cc8;
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    }
  }
  if (0 < (__this->fields).HGFBBMJNBPI) {
    pNVar3 = (__this->fields).rubyCount;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).rubyCount;
      if ((pNVar3 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
LAB_03250cc8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

