// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CGFMJFAAHCF @ RVA 0x31918A4

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CGFMJFAAHCF
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector3_o UVar7;
  
  pNVar2 = (__this->fields)._jackdawIcon;
  if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291984;
  bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
  if (bVar1) {
LAB_032918f4:
    pNVar2 = (__this->fields)._equppiedIcon;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03291984;
    UVar6 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
    fVar5 = UVar6.fields.y;
  }
  else {
    pNVar2 = (__this->fields)._equppiedIcon;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03291984;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    fVar5 = 0.0;
    if (bVar1) goto LAB_032918f4;
  }
  if ((__this->fields).APKJCMHJOPB == false) {
    pNVar2 = (__this->fields)._discountRootImage;
    if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_03291984;
    UVar7 = UnityEngine_Transform__get_localPosition
                      ((UnityEngine_Transform_o *)pUVar4,(MethodInfo *)0x0);
    (__this->fields).MEJOIGLLBGO.fields.x = UVar7.fields.x;
    (__this->fields).MEJOIGLLBGO.fields.y = UVar7.fields.y;
    (__this->fields).MEJOIGLLBGO.fields.z = UVar7.fields.z;
    (__this->fields).APKJCMHJOPB = true;
  }
  pNVar2 = (__this->fields)._discountRootImage;
                    /* try { // try from 0329194c to 03391953 has its CatchHandler @ 03291c44 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar7.fields.z = (__this->fields).MEJOIGLLBGO.fields.z + 0.0;
                    /* try { // try from 03291970 to 03391973 has its CatchHandler @ 03291c38 */
    UVar7.fields.y = fVar5 + (__this->fields).MEJOIGLLBGO.fields.y;
    UVar7.fields.x = (__this->fields).MEJOIGLLBGO.fields.x + 0.0;
    UnityEngine_Transform__set_localPosition
              ((UnityEngine_Transform_o *)pUVar4,UVar7,(MethodInfo *)0x0);
    return;
  }
LAB_03291984:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

