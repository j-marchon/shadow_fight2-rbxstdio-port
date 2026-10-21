// Nekki.SF2.GUI.Shop.ParameterScrollItem$$ResetValue @ RVA 0x3030BF8

void Nekki_SF2_GUI_Shop_ParameterScrollItem__ResetValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Shop_ParameterProgressBar_o *pNVar4;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04565cfb & 1) == 0) {
    FUN_01bab630(&StringLiteral_1567);
    DAT_04565cfb = 1;
  }
  pNVar2 = (__this->fields)._value;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,StringLiteral_1567,(pNVar2->klass->vtable)._75_set_text.method);
    pNVar2 = (__this->fields)._additionalValue;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,StringLiteral_1567,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields)._additionalValue;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._progressBar;
        if (pNVar4 != (Nekki_SF2_GUI_Shop_ParameterProgressBar_o *)0x0) {
          (*(pNVar4->klass->vtable)._6_SetValue.methodPtr)
                    (0,0,pNVar4,(pNVar4->klass->vtable)._6_SetValue.method);
          pNVar2 = (__this->fields)._value;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            __this_00 = (__this->fields)._textContainer;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (bVar1) {
                bVar1 = true;
              }
              else {
                pNVar2 = (__this->fields)._additionalValue;
                if ((pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
                   (pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                   pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03130d04;
                bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              }
              if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03130d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

