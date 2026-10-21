// Nekki.SF2.GUI.PressButton$$SetImages @ RVA 0x35CAA60

void Nekki_SF2_GUI_PressButton__SetImages
               (Nekki_SF2_GUI_PressButton_o *__this,System_String_o *GMCEBMILIDF,
               System_String_o *LNLFPLEAPLD,System_String_o *OOKEKJMFKPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  MethodInfo *method_00;
  undefined8 *puVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar6;
  
  if ((DAT_04568f9c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10436);
    FUN_01bab630(&StringLiteral_10438);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10437);
    DAT_04568f9c = 1;
  }
  if (GMCEBMILIDF == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar3 = &StringLiteral_10437;
LAB_036cab7c:
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar3,(MethodInfo *)0x0);
    return;
  }
  if (LNLFPLEAPLD == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar3 = &StringLiteral_10438;
    goto LAB_036cab7c;
  }
  pUVar5 = (__this->fields).layoutElement;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar3 = &StringLiteral_10436;
    goto LAB_036cab7c;
  }
  bVar1 = System_String__op_Inequality(OOKEKJMFKPE,StringLiteral_1,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields).normalImage;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036cacc4;
    *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = OOKEKJMFKPE;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE);
    pNVar4 = (__this->fields).pressImage;
    if (pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036cacc4;
    *(System_String_o **)&(pNVar4->fields).super.m_PixelsPerUnitMultiplier = OOKEKJMFKPE;
    thunk_FUN_01c20e04(&(pNVar4->fields).super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE);
  }
  pNVar4 = (__this->fields).normalImage;
  if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,GMCEBMILIDF,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).pressImage;
    if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar4,LNLFPLEAPLD,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).normalImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
        pNVar4 = (__this->fields).pressImage;
        if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (*(pNVar4->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar4,(pNVar4->klass->vtable)._45_SetNativeSize.method);
          pNVar4 = (__this->fields).normalImage;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar4,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pUVar2 = Nekki_SF2_GUI_PressButton__LLCHPOHDNEK(__this,method_00);
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_sizeDelta
                        (pUVar2,(UnityEngine_Vector2_o)UVar6.fields._8_8_,(MethodInfo *)0x0);
              pUVar5 = (__this->fields).layoutElement;
              if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                (*(pUVar5->klass->vtable)._32_set_minWidth.methodPtr)
                          (CONCAT44(in_register_00005044,UVar6.fields.m_Width),pUVar5,
                           (pUVar5->klass->vtable)._32_set_minWidth.method);
                pUVar5 = (__this->fields).layoutElement;
                if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036cacc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pUVar5->klass->vtable)._34_set_minHeight.methodPtr)
                            (CONCAT44(in_register_00005064,UVar6.fields.m_Height),pUVar5,
                             (pUVar5->klass->vtable)._34_set_minHeight.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_036cacc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

