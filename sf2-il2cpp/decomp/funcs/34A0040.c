// Nekki.SF2.GUI.Common.Indicator$$Awake @ RVA 0x34A0040

void Nekki_SF2_GUI_Common_Indicator__Awake
               (Nekki_SF2_GUI_Common_Indicator_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Text_o *pUVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE;
  UnityEngine_UI_Text_c *pUVar7;
  int32_t *piVar8;
  
  if ((DAT_0456848f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377);
    DAT_0456848f = 1;
  }
  piVar8 = &(__this->fields).ONCKKFAODHL;
  iVar1 = *piVar8;
  if (iVar1 == -1) {
    pNVar2 = (__this->fields)._Circle;
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._Label;
        if (pUVar4 == (UnityEngine_UI_Text_o *)0x0) goto LAB_0359ff54;
        pUVar7 = pUVar4->klass;
        UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
        pSVar5 = StringLiteral_1377;
        goto LAB_0359ff44;
      }
    }
  }
  else {
    if (iVar1 < 1) {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Ellipse;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = false;
    }
    else {
      pNVar2 = (__this->fields)._Circle;
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      if (iVar1 < 10) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = false;
      }
      else {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._Ellipse;
        if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
        bVar6 = true;
      }
      UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._Label;
      if ((pUVar4 == (UnityEngine_UI_Text_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0359ff54;
      bVar6 = true;
    }
    UnityEngine_GameObject__SetActive(pUVar3,bVar6,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._Label;
    pSVar5 = System_Int32__ToString((int32_t)piVar8,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar7 = pUVar4->klass;
      UNRECOVERED_JUMPTABLE = (pUVar7->vtable)._75_set_text.methodPtr;
LAB_0359ff44:
                    /* WARNING: Could not recover jumptable at 0x0359ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pUVar4,pSVar5,(pUVar7->vtable)._75_set_text.method);
      return;
    }
  }
LAB_0359ff54:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

