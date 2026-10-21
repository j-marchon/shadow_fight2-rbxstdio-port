// Nekki.SF2.GUI.PressButton$$FHECHEPBFFA @ RVA 0x35CAD08

void Nekki_SF2_GUI_PressButton__FHECHEPBFFA(Nekki_SF2_GUI_PressButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_04568f9d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f9d = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).transitionType;
  pNVar4 = (__this->fields).pressImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (iVar1 == 1) {
    if (!bVar2) {
      return;
    }
    pNVar4 = (__this->fields).pressImage;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_036cae18:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = true;
  }
  else {
    if (bVar2) {
      pNVar4 = (__this->fields).pressImage;
      if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036cae18;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields).normalImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    pNVar4 = (__this->fields).normalImage;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036cae18;
    bVar2 = false;
  }
  UnityEngine_GameObject__SetActive(pUVar3,bVar2,(MethodInfo *)0x0);
  return;
}

