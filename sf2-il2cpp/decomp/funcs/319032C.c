// Nekki.SF2.GUI.Shop.ShopTableViewCell$$CDEPJFBHKID @ RVA 0x319032C

void Nekki_SF2_GUI_Shop_ShopTableViewCell__CDEPJFBHKID
               (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  undefined4 extraout_var;
  float fVar9;
  float fVar10;
  UnityEngine_Vector2_o UVar11;
  ulong uVar8;
  
                    /* catch() { ... } // from try @ 032902dc with catch @ 0329033c */
                    /* catch() { ... } // from try @ 032901e8 with catch @ 03290340 */
                    /* catch() { ... } // from try @ 032902d8 with catch @ 03290344 */
                    /* catch() { ... } // from try @ 03290290 with catch @ 03290348 */
                    /* catch() { ... } // from try @ 03290274 with catch @ 0329034c */
  if ((DAT_04566a3f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03290364 to 03390367 has its CatchHandler @ 0329038c */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
                    /* try { // try from 03290368 to 0339039b has its CatchHandler @ 03290100 */
    DAT_04566a3f = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar9 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x;
  uVar8 = (ulong)(uint)fVar9;
  fVar10 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y;
                    /* catch() { ... } // from try @ 03290364 with catch @ 0329038c */
                    /* try { // try from 0329039c to 033903af has its CatchHandler @ 03290420 */
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar4 = __this_00, __this_00->klass != UnityEngine_RectTransform_TypeInfo)) {
LAB_03290524:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(pUVar4);
  }
                    /* catch() { ... } // from try @ 032901cc with catch @ 032903b0
                       try { // try from 032903b0 to 033903c7 has its CatchHandler @ 03290100 */
  if (fVar9 * fVar9 + fVar10 * fVar10 < 9.9999994e-11) {
    pNVar7 = (__this->fields)._image;
                    /* try { // try from 032903c8 to 033903cb has its CatchHandler @ 032903f4 */
                    /* try { // try from 032903cc to 03390403 has its CatchHandler @ 03290100 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      pNVar7 = (__this->fields)._image;
                    /* catch() { ... } // from try @ 032903c8 with catch @ 032903f4 */
      if ((pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar4 = (UnityEngine_RectTransform_o *)
                   UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0329051c;
                    /* try { // try from 03290404 to 0339040b has its CatchHandler @ 03290420 */
                    /* try { // try from 0329040c to 03390417 has its CatchHandler @ 03290100 */
      if (pUVar4->klass != UnityEngine_RectTransform_TypeInfo) goto LAB_03290524;
      UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      fVar10 = UVar11.fields.y;
      uVar8 = CONCAT44(extraout_var,UVar11.fields.x);
                    /* try { // try from 03290418 to 0339041f has its CatchHandler @ 03290420 */
    }
  }
                    /* catch() { ... } // from try @ 0329039c with catch @ 03290420
                       catch() { ... } // from try @ 03290404 with catch @ 03290420
                       catch() { ... } // from try @ 03290418 with catch @ 03290420 */
  pUVar5 = (__this->fields)._iconPanel;
  if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    fVar9 = (__this->fields).LEBAHKCLDFJ;
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      fVar10 = fVar10 + fVar9;
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
      if (bVar3) {
        pUVar5 = (__this->fields)._iconPanel;
        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_0329051c;
        fVar9 = (float)(*(pUVar5->klass->vtable)._33_get_minHeight.methodPtr)
                                 (pUVar5,(pUVar5->klass->vtable)._33_get_minHeight.method);
        fVar10 = fVar10 + fVar9;
      }
      pNVar7 = (__this->fields)._addPercentRootImage;
      if ((pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar6,(MethodInfo *)0x0);
        if (bVar3) {
          pNVar7 = (__this->fields)._addPercentRootImage;
          if ((pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
             (pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar7,(MethodInfo *)0x0),
             pUVar4 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_0329051c;
          UVar11 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
          fVar10 = fVar10 + UVar11.fields.y;
        }
        fVar9 = (__this->fields).MaxAllowedSize;
        pUVar5 = (__this->fields)._layoutElement;
        bVar3 = false;
        bVar1 = true;
        bVar2 = false;
        if (fVar9 < fVar10) {
          bVar3 = false;
          bVar1 = false;
          bVar2 = true;
          if (!NAN(fVar9)) {
            bVar3 = fVar9 < 0.0;
            bVar1 = fVar9 == 0.0;
            bVar2 = false;
          }
        }
        if (bVar1 || bVar3 != bVar2) {
          fVar9 = fVar10;
        }
        if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                    (uVar8,pUVar5,(pUVar5->klass->vtable)._32_set_minWidth.method);
          pUVar5 = (__this->fields)._layoutElement;
          if ((pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) &&
             ((*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                        ((ulong)(uint)fVar9,pUVar5,(pUVar5->klass->vtable)._34_set_minHeight.method)
             , __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar11.fields.x = (float)uVar8;
            UVar11.fields.y = fVar9;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0329051c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

