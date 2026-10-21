// Nekki.SF2.GUI.Shop.ShopTableViewCell$$PKENFJMKHKF @ RVA 0x3191818

void Nekki_SF2_GUI_Shop_ShopTableViewCell__PKENFJMKHKF
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *pUVar2;
  float fVar3;
  float fVar4;
  
  pUVar2 = (__this->fields)._CanvasGroup;
  fVar3 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                           (__this,(__this->klass->vtable)._11_get_Opacity.method);
  LJLLAKHOFFF__IFBBIDIEBEL(pUVar2,fVar3,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._lockIcon;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    pUVar2 = (__this->fields)._contentCanvasGroup;
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
      fVar3 = 1.0;
      if (bVar1) {
        fVar3 = (__this->fields)._BFMLDOLAEKH_k__BackingField;
        fVar4 = (float)(*(__this->klass->vtable)._11_get_Opacity.methodPtr)
                                 (__this,(__this->klass->vtable)._11_get_Opacity.method);
        fVar3 = fVar3 / fVar4;
      }
      if (pUVar2 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(pUVar2,fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

