// Nekki.SF2.GUI.Shop.ParameterScrollItem$$SetTextValue @ RVA 0x30306C0

void Nekki_SF2_GUI_Shop_ParameterScrollItem__SetTextValue
               (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,int32_t CJNHFNHJHPE,
               int32_t NBHHBBOJJME,float PNEIGGOFIOA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)NBHHBBOJJME;
  Nekki_SF2_GUI_Shop_ParameterScrollItem__BHMPLDGKFCI(__this,CJNHFNHJHPE,PNEIGGOFIOA,method_00);
  Nekki_SF2_GUI_Shop_ParameterScrollItem__BLCHKPABFKL
            (__this,NBHHBBOJJME - CJNHFNHJHPE,PNEIGGOFIOA,method_00);
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
           pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03130758;
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      }
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03130758:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

