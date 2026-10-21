// TypeDefIndex 1194
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class ScrollDialog : SimpleDialog, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler
// Fields:
//   private float _enableButtonsThreshold; // 0x110
//   private ScrollRect _scroll; // 0x118
//   private Slider _slider; // 0x120
//   private RectTransform _contentScroll; // 0x128
//   private RectTransform _viewportScroll; // 0x130
//   public bool DisablePassWhileNotRead; // 0x138

// ===== protected override void GLANJNFACKI()  [RVA 0x3128260]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$GLANJNFACKI @ RVA 0x3128260

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x3128264]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$.ctor @ RVA 0x3128264

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  (__this->fields)._enableButtonsThreshold = 300.0;
  (__this->fields).DisablePassWhileNotRead = true;
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OnDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x312827C]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$OnDrag @ RVA 0x312827C

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__OnDrag
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
                    (__this,(MethodInfo *)OHNNFPGGEFK);
  if (!bVar1) {
    return;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar5 = (OHNNFPGGEFK->fields)._delta_k__BackingField.fields.y;
    if (fVar5 == 0.0) {
      return;
    }
    fVar3 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_00);
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      fVar4 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = fVar5 / fVar3 + fVar4;
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_UI_Slider__set_normalizedValue(pUVar2,fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EDKHOHMHCBD(PointerEventData OHNNFPGGEFK)  [RVA 0x3128280]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$EDKHOHMHCBD @ RVA 0x3128280

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__EDKHOHMHCBD
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
                    (__this,(MethodInfo *)OHNNFPGGEFK);
  if (!bVar1) {
    return;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar5 = (OHNNFPGGEFK->fields)._delta_k__BackingField.fields.y;
    if (fVar5 == 0.0) {
      return;
    }
    fVar3 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_00);
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      fVar4 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = fVar5 / fVar3 + fVar4;
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_UI_Slider__set_normalizedValue(pUVar2,fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x31283AC]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$OnEndDrag @ RVA 0x31283AC

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__OnEndDrag
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
                    (__this,(MethodInfo *)OHNNFPGGEFK);
  if (!bVar1) {
    return;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar5 = (OHNNFPGGEFK->fields)._delta_k__BackingField.fields.y;
    if (fVar5 == 0.0) {
      return;
    }
    fVar3 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_00);
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      fVar4 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = fVar5 / fVar3 + fVar4;
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_UI_Slider__set_normalizedValue(pUVar2,fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool CanEnableScroll()  [RVA 0x3128314]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$CanEnableScroll @ RVA 0x3128314

bool Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  pUVar1 = (__this->fields)._contentScroll;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._viewportScroll;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      return UVar3.fields.m_Height + 0.01 <= UVar2.fields.y;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x31283B0]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$IGDDKJJMDLP @ RVA 0x31283B0

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x31283B4]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$GLJGIJNALCA @ RVA 0x31283B4

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void Update()  [RVA 0x31283B8]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$Update @ RVA 0x31283B8

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__Update
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_RectTransform_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_ScrollRect_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Slider_o *pUVar4;
  UnityEngine_RectTransform_o *__this_03;
  LabelButton_o *pLVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined4 uVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Rect_o UVar10;
  
  uVar8 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_04566670 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566670 = 1;
  }
  __this_03 = (__this->fields)._contentScroll;
  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
    UVar9 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._viewportScroll;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).super._label;
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar6 = (float)(*(pNVar3->klass->vtable)._82_get_preferredHeight.methodPtr)
                                 (CONCAT44(extraout_var,UVar10.fields.m_XMin),
                                  CONCAT44(uVar8,UVar10.fields.m_YMin),UVar10.fields.m_Width,pNVar3,
                                  (pNVar3->klass->vtable)._82_get_preferredHeight.method);
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar6 = System_Math__Max(UVar10.fields.m_Height,fVar6,(MethodInfo *)0x0);
        UVar9.fields.y = fVar6;
        UnityEngine_RectTransform__set_sizeDelta(__this_03,UVar9,(MethodInfo *)0x0);
        bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll(__this,method_00);
        pUVar4 = (__this->fields)._slider;
        if ((pUVar4 != (UnityEngine_UI_Slider_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,bVar1,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._scroll;
          if (__this_02 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_02,bVar1,(MethodInfo *)0x0);
            fVar6 = 0.0;
            if (bVar1) {
              fVar6 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_01);
              pUVar4 = (__this->fields)._slider;
              if (pUVar4 == (UnityEngine_UI_Slider_o *)0x0) goto LAB_032285e4;
              fVar7 = UnityEngine_UI_Slider__get_normalizedValue(pUVar4,(MethodInfo *)0x0);
              fVar6 = fVar6 * fVar7;
            }
            UnityEngine_TransformExtensions__SetLocalPositionY
                      ((UnityEngine_Transform_o *)(__this->fields)._contentScroll,fVar6,
                       (MethodInfo *)0x0);
            if ((__this->fields).DisablePassWhileNotRead != false) {
              bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableButtons(__this,method_02);
              pLVar5 = (__this->fields).super.super._btnOK;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
              }
              bVar2 = UnityEngine_Object__op_Implicit
                                ((UnityEngine_Object_o *)pLVar5,(MethodInfo *)0x0);
              if (bVar2) {
                pLVar5 = (__this->fields).super.super._btnOK;
                if (pLVar5 == (LabelButton_o *)0x0) goto LAB_032285e4;
                UnityEngine_UI_Selectable__set_interactable
                          ((UnityEngine_UI_Selectable_o *)pLVar5,bVar1,(MethodInfo *)0x0);
              }
              pLVar5 = (__this->fields).super.super._btnOK;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar2) {
                pLVar5 = (__this->fields).super.super._btnCancel;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar2 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pLVar5,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar2) {
                  pLVar5 = (__this->fields).super.super._btnCancel;
                  if (pLVar5 != (LabelButton_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pLVar5,bVar1,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_032285e4;
                }
              }
            }
            return;
          }
        }
      }
    }
  }
LAB_032285e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x3128678]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$UpdateHeaderPosition @ RVA 0x3128678

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x312867C]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$Init @ RVA 0x312867C

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  (__this->fields).super.RepositionCheckbox_X = true;
  (__this->fields).super.RepositionCheckbox_Y = false;
  Nekki_SF2_GUI_Dialogs_SimpleDialog__Init
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}


// ===== public bool CanEnableButtons()  [RVA 0x31285E8]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$CanEnableButtons @ RVA 0x31285E8

bool Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableButtons
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Slider_o *pUVar3;
  MethodInfo *method_00;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  pUVar2 = (__this->fields)._contentScroll;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._viewportScroll;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._slider;
      if (pUVar3 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = (float)(*(pUVar3->klass->vtable)._46_get_value.methodPtr)
                                 (UVar6.fields.m_XMin,UVar6.fields.m_YMin,UVar6.fields.m_Width,
                                  pUVar3,(pUVar3->klass->vtable)._46_get_value.method);
        if ((UVar5.fields.m_Height - UVar6.fields.m_Height) * (1.0 - fVar4) <
            (__this->fields)._enableButtonsThreshold) {
          bVar1 = true;
        }
        else {
          bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll(__this,method_00);
          bVar1 = !bVar1;
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x312868C]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$OnBeginDrag @ RVA 0x312868C

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__OnBeginDrag
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
                    (__this,(MethodInfo *)OHNNFPGGEFK);
  if (!bVar1) {
    return;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar5 = (OHNNFPGGEFK->fields)._delta_k__BackingField.fields.y;
    if (fVar5 == 0.0) {
      return;
    }
    fVar3 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_00);
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      fVar4 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = fVar5 / fVar3 + fVar4;
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_UI_Slider__set_normalizedValue(pUVar2,fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void KHKLLNFCMME()  [RVA 0x3128690]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$KHKLLNFCMME @ RVA 0x3128690

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__KHKLLNFCMME
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void FMJHHEJDAKI()  [RVA 0x3128694]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$FMJHHEJDAKI @ RVA 0x3128694

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__FMJHHEJDAKI
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private float HEEKCIGGGFA()  [RVA 0x3128368]
// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$HEEKCIGGGFA @ RVA 0x3128368

float Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA
                (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Rect_o UVar2;
  UnityEngine_Rect_o UVar3;
  
  pUVar1 = (__this->fields)._contentScroll;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._viewportScroll;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      return UVar2.fields.m_Height - UVar3.fields.m_Height;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

