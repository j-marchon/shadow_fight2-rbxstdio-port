// Nekki.SF2.GUI.Fight.DisplayModel$$ScaleAvatar @ RVA 0x32B9208

void Nekki_SF2_GUI_Fight_DisplayModel__ScaleAvatar
               (Nekki_SF2_GUI_Fight_DisplayModel_o *__this,UnityEngine_Vector2_o JKOJPEKLBCI,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
                    /* try { // try from 033b9218 to 034b92fb has its CatchHandler @ 033b8ea0 */
  if ((DAT_04567476 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567476 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).avatar;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).avatar;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_033b9418;
    value_00.fields.z = 0.0;
    value_00.fields._0_8_ = JKOJPEKLBCI.fields;
    UnityEngine_Transform__set_localScale(pUVar2,value_00,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if (__this_00->klass != UnityEngine_RectTransform_TypeInfo) {
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
                    /* try { // try from 033b92fc to 034b9303 has its CatchHandler @ 033b932c */
    if (bVar1) {
                    /* try { // try from 033b9304 to 034b9317 has its CatchHandler @ 033b9338 */
      pUVar5 = (__this->fields).layoutElement;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033b9318 to 034b931b has its CatchHandler @ 033b8ea0 */
                    /* try { // try from 033b931c to 034b931f has its CatchHandler @ 033b9328 */
                    /* try { // try from 033b9320 to 034b934b has its CatchHandler @ 033b8ea0 */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b931c with catch @ 033b9328
                        */
        pNVar3 = (__this->fields).avatar;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b92fc with catch @ 033b932c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9164 with catch @ 033b9330
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9108 with catch @ 033b9334
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b9304 with catch @ 033b9338
                        */
        if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) ||
           (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                                  ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           __this_01 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_033b9418;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b91cc with catch @ 033b933c
                        */
        UVar8 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
        if (__this_00 == (UnityEngine_RectTransform_o *)0x0) goto LAB_033b9418;
        fVar7 = JKOJPEKLBCI.fields.x * UVar8.fields.m_Width;
                    /* try { // try from 033b934c to 034b934f has its CatchHandler @ 033b9364 */
        fVar6 = JKOJPEKLBCI.fields.y * UVar8.fields.m_Height;
        value.fields.y = fVar6;
        value.fields.x = fVar7;
        UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033b934c with catch @ 033b9364 */
        pUVar5 = (__this->fields).layoutElement;
        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_033b9418;
                    /* try { // try from 033b936c to 034b93d3 has its CatchHandler @ 033b93e8 */
        (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                  ((ulong)(uint)fVar7,pUVar5,(pUVar5->klass->vtable)._32_set_minWidth.method);
        pUVar5 = (__this->fields).layoutElement;
        if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto LAB_033b9418;
        (*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                  ((ulong)(uint)fVar6,pUVar5,(pUVar5->klass->vtable)._34_set_minHeight.method);
      }
    }
  }
  pNVar4 = (__this->fields).complete;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields).complete;
                    /* try { // try from 033b93d4 to 034b93df has its CatchHandler @ 033b8ea0 */
  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    value_01.fields.z = 0.0;
    value_01.fields._0_8_ = JKOJPEKLBCI.fields;
                    /* try { // try from 033b93e0 to 034b93e7 has its CatchHandler @ 033b93e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033b936c with catch @ 033b93e8
                       catch(type#2 @ 00000000) { ... } // from try @ 033b93e0 with catch @ 033b93e8
                        */
    UnityEngine_Transform__set_localScale(pUVar2,value_01,(MethodInfo *)0x0);
    return;
  }
LAB_033b9418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

