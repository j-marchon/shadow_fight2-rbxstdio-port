// TypeDefIndex 639
// Namespace: Nekki.SF2.GUI
// public class PressButton : Button
// Fields:
//   private PressButton.TransitionType transitionType; // 0x108
//   private ResolutionImage normalImage; // 0x110
//   private ResolutionImage pressImage; // 0x118
//   private LayoutElement layoutElement; // 0x120
//   private RectTransform DFAOPAGGKAG; // 0x128

// ===== private void CCNCILCJAMI()  [RVA 0x35CA8AC]
// Nekki.SF2.GUI.PressButton$$CCNCILCJAMI @ RVA 0x35CA8AC

void Nekki_SF2_GUI_PressButton__CCNCILCJAMI(Nekki_SF2_GUI_PressButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568f9a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f9a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).pressImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).pressImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036ca984;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).normalImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).normalImage;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
    return;
  }
LAB_036ca984:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35CA988]
// Nekki.SF2.GUI.PressButton$$.ctor @ RVA 0x35CA988

void Nekki_SF2_GUI_PressButton___ctor(Nekki_SF2_GUI_PressButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private RectTransform LLCHPOHDNEK()  [RVA 0x35CA990]
// Nekki.SF2.GUI.PressButton$$LLCHPOHDNEK @ RVA 0x35CA990

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_PressButton__LLCHPOHDNEK(Nekki_SF2_GUI_PressButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool bVar3;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar4;
  
  if ((DAT_04568f9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568f9b = 1;
    method = extraout_x1;
  }
  pUVar4 = (__this->fields).DFAOPAGGKAG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).DFAOPAGGKAG;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_RectTransform_TypeInfo;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
      *ppUVar1 = (UnityEngine_RectTransform_o *)0x0;
    }
    else if ((pUVar4->klass != UnityEngine_RectTransform_TypeInfo) ||
            (*ppUVar1 = pUVar4, pUVar4->klass != pUVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar4);
    }
    thunk_FUN_01c20e04(ppUVar1,pUVar4);
  }
  return *ppUVar1;
}


// ===== public void SetImages(string GMCEBMILIDF, string LNLFPLEAPLD, string OOKEKJMFKPE = "")  [RVA 0x35CAA60]
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
    FUN_01bab630(&StringLiteral_10436/*"PressButton.Init layoutElement is null"*/);
    FUN_01bab630(&StringLiteral_10438/*"PressButton.Init pressImage is null"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_10437/*"PressButton.Init normalImage is null"*/);
    DAT_04568f9c = 1;
  }
  if (GMCEBMILIDF == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar3 = &StringLiteral_10437/*"PressButton.Init normalImage is null"*/;
LAB_036cab7c:
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar3,(MethodInfo *)0x0);
    return;
  }
  if (LNLFPLEAPLD == (System_String_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar3 = &StringLiteral_10438/*"PressButton.Init pressImage is null"*/;
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
    puVar3 = &StringLiteral_10436/*"PressButton.Init layoutElement is null"*/;
    goto LAB_036cab7c;
  }
  bVar1 = System_String__op_Inequality(OOKEKJMFKPE,StringLiteral_1/*""*/,(MethodInfo *)0x0);
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


// ===== protected override void DoStateTransition(Selectable.SelectionState HJEBKCDDBAB, bool BPHNPNCDLOA)  [RVA 0x35CACC8]
// Nekki.SF2.GUI.PressButton$$DoStateTransition @ RVA 0x35CACC8

void Nekki_SF2_GUI_PressButton__DoStateTransition
               (Nekki_SF2_GUI_PressButton_o *__this,int32_t HJEBKCDDBAB,bool BPHNPNCDLOA,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,HJEBKCDDBAB,BPHNPNCDLOA,(MethodInfo *)0x0);
  if (HJEBKCDDBAB == 2) {
    Nekki_SF2_GUI_PressButton__FHECHEPBFFA(__this,method_00);
    return;
  }
  Nekki_SF2_GUI_PressButton__CCNCILCJAMI(__this,method_00);
  return;
}


// ===== private void FHECHEPBFFA()  [RVA 0x35CAD08]
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

