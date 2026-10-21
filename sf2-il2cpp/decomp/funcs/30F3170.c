// Nekki.SF2.GUI.Shop.ShopScrollItem$$CDEPJFBHKID @ RVA 0x30F3170

void Nekki_SF2_GUI_Shop_ShopScrollItem__CDEPJFBHKID
               (Nekki_SF2_GUI_Shop_ShopScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  undefined4 extraout_var;
  float fVar5;
  float fVar6;
  UnityEngine_Vector2_o UVar7;
  ulong uVar4;
  
                    /* try { // try from 031f3194 to 032f31bb has its CatchHandler @ 031f3448 */
  if ((DAT_0456643b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_12047);
    DAT_0456643b = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields)._layoutElement;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 031f31f0 to 032f321b has its CatchHandler @ 031f3444 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
LAB_031f3378:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_12047,(MethodInfo *)0x0);
    return;
  }
  pUVar2 = (__this->fields)._iconPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) goto LAB_031f3378;
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.x;
  uVar4 = (ulong)(uint)fVar5;
  fVar6 = (__this->fields)._DJOIAMEIMOG_k__BackingField.fields.y;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = __this_00, __this_00->klass != UnityEngine_RectTransform_TypeInfo)) {
LAB_031f33c0:
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_01);
  }
                    /* try { // try from 031f3264 to 032f326b has its CatchHandler @ 031f3438 */
  if (fVar5 * fVar5 + fVar6 * fVar6 < 9.9999994e-11) {
    pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f327c to 032f3283 has its CatchHandler @ 031f3440 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031f3288 to 032f328f has its CatchHandler @ 031f343c */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._image;
                    /* try { // try from 031f32a0 to 032f32a7 has its CatchHandler @ 031f3434 */
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (__this_01 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_031f33b8;
                    /* try { // try from 031f32b0 to 032f32b7 has its CatchHandler @ 031f342c */
                    /* try { // try from 031f32bc to 032f32c3 has its CatchHandler @ 031f3420 */
      if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) goto LAB_031f33c0;
      UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_01,(MethodInfo *)0x0);
      fVar6 = UVar7.fields.y;
      uVar4 = CONCAT44(extraout_var,UVar7.fields.x);
                    /* try { // try from 031f32cc to 032f32e7 has its CatchHandler @ 031f3450 */
    }
  }
  pUVar2 = (__this->fields)._iconPanel;
  if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    fVar5 = (__this->fields).BAFHCDGILKD;
    __this_02 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
      fVar6 = fVar6 + fVar5;
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar2 = (__this->fields)._iconPanel;
        if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_031f33b8;
        fVar5 = (float)(*(pUVar2->klass->vtable)._33_get_minHeight.methodPtr)
                                 (pUVar2,(pUVar2->klass->vtable)._33_get_minHeight.method);
        fVar6 = fVar6 + fVar5;
      }
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UVar7.fields.x = (float)uVar4;
        UVar7.fields.y = fVar6;
                    /* try { // try from 031f3328 to 032f334b has its CatchHandler @ 031f341c */
        UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar7,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._layoutElement;
        if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar2->klass->vtable)._32_set_minWidth.methodPtr)
                    (uVar4,pUVar2,(pUVar2->klass->vtable)._32_set_minWidth.method);
          pUVar2 = (__this->fields)._layoutElement;
                    /* try { // try from 031f334c to 032f33eb has its CatchHandler @ 031f2f54 */
          if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f3374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pUVar2->klass->vtable)._34_set_minHeight.methodPtr)
                      ((ulong)(uint)fVar6,pUVar2,(pUVar2->klass->vtable)._34_set_minHeight.method);
            return;
          }
        }
      }
    }
  }
LAB_031f33b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

