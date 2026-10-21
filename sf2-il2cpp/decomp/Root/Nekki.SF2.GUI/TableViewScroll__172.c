// TypeDefIndex 172
// Namespace: Nekki.SF2.GUI
// public class TableViewScroll : SFScrollRect
// Fields:
//   private JKOLCOFFPDH HBFGPJPFNBG; // 0x138
//   public UnityEvent onDragBegin; // 0x140
//   public UnityEvent onDragEnd; // 0x148

// ===== public override void OnEndDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x3110DF4]
// Nekki.SF2.GUI.TableViewScroll$$OnEndDrag @ RVA 0x3110DF4

void Nekki_SF2_GUI_TableViewScroll__OnEndDrag
               (Nekki_SF2_GUI_TableViewScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  Nekki_SF2_GUI_SFScrollRect__OnEndDrag
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  __this_00 = (__this->fields).onDragEnd;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_SizeDelta(float CJNHFNHJHPE)  [RVA 0x3110E1C]
// Nekki.SF2.GUI.TableViewScroll$$set_SizeDelta @ RVA 0x3110E1C

void Nekki_SF2_GUI_TableViewScroll__set_SizeDelta
               (Nekki_SF2_GUI_TableViewScroll_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Vector2_o UVar3;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (__this->fields).HBFGPJPFNBG;
  UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
  fVar2 = UVar3.fields.y;
  if (iVar1 != 1) {
    fVar2 = CJNHFNHJHPE;
    CJNHFNHJHPE = UVar3.fields.x;
  }
  UVar3.fields.y = fVar2;
  UVar3.fields.x = CJNHFNHJHPE;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar3,(MethodInfo *)0x0);
  return;
}


// ===== private void OHNGNOIEJLH()  [RVA 0x3110E6C]
// Nekki.SF2.GUI.TableViewScroll$$OHNGNOIEJLH @ RVA 0x3110E6C

void Nekki_SF2_GUI_TableViewScroll__OHNGNOIEJLH
               (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  undefined8 uVar5;
  UnityEngine_RectTransform_o **ppUVar6;
  
  if ((DAT_04566581 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_var);
    FUN_01bab630(&System_Type___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_12793/*"Table View Content"*/);
    DAT_04566581 = 1;
  }
  components = (System_Type_array *)FUN_01bab718(System_Type___TypeInfo,1);
  handle = UnityEngine_RectTransform_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar1 != (System_Type_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar1,(((components->obj).klass)->_1).element_class), lVar2 == 0
       )) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    components->m_Items[0] = pSVar1;
    thunk_FUN_01c20e04(components->m_Items,pSVar1);
    pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar3,StringLiteral_12793/*"Table View Content"*/,components,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
      ppUVar6 = &(__this->fields).super.m_Content;
      *ppUVar6 = pUVar4;
      thunk_FUN_01c20e04(ppUVar6,pUVar4);
      pUVar4 = *ppUVar6;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = (UnityEngine_Transform_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
         pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  ((UnityEngine_Transform_o *)pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar4 = *ppUVar6;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar4,(UnityEngine_Vector2_o)
                            (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar4 = *ppUVar6;
          if (DAT_0455fa75 == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa75 = '\x01';
          }
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMax
                      (pUVar4,(UnityEngine_Vector2_o)
                              (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if ((*ppUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__AddComponent<object>
                        (pUVar3,Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_Size()  [RVA 0x31110BC]
// Nekki.SF2.GUI.TableViewScroll$$get_Size @ RVA 0x31110BC

float Nekki_SF2_GUI_TableViewScroll__get_Size
                (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Rect_o UVar3;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    iVar1 = (__this->fields).HBFGPJPFNBG;
    UVar3 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.m_Width;
    if (iVar1 != 1) {
      fVar2 = UVar3.fields.m_Height;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetNormalizedPosition(float AFGBOBIMHOJ)  [RVA 0x31110EC]
// Nekki.SF2.GUI.TableViewScroll$$SetNormalizedPosition @ RVA 0x31110EC

void Nekki_SF2_GUI_TableViewScroll__SetNormalizedPosition
               (Nekki_SF2_GUI_TableViewScroll_o *__this,float AFGBOBIMHOJ,MethodInfo *method)

{
  if ((__this->fields).HBFGPJPFNBG == 1) {
    Nekki_SF2_GUI_SFScrollRect__set_horizontalNormalizedPosition
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this,AFGBOBIMHOJ,(MethodInfo *)0x0);
    return;
  }
  Nekki_SF2_GUI_SFScrollRect__set_verticalNormalizedPosition
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,AFGBOBIMHOJ,(MethodInfo *)0x0);
  return;
}


// ===== public void Init()  [RVA 0x3111108]
// Nekki.SF2.GUI.TableViewScroll$$Init @ RVA 0x3111108

void Nekki_SF2_GUI_TableViewScroll__Init(Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  undefined8 uVar5;
  UnityEngine_RectTransform_o **ppUVar6;
  
  if ((DAT_04566581 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_var);
    FUN_01bab630(&System_Type___TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_12793/*"Table View Content"*/);
    DAT_04566581 = 1;
  }
  components = (System_Type_array *)FUN_01bab718(System_Type___TypeInfo,1);
  handle = UnityEngine_RectTransform_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Type_TypeInfo);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar1 != (System_Type_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar1,(((components->obj).klass)->_1).element_class), lVar2 == 0
       )) {
      uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar5,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    components->m_Items[0] = pSVar1;
    thunk_FUN_01c20e04(components->m_Items,pSVar1);
    pUVar3 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(pUVar3,StringLiteral_12793/*"Table View Content"*/,components,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__);
      ppUVar6 = &(__this->fields).super.m_Content;
      *ppUVar6 = pUVar4;
      thunk_FUN_01c20e04(ppUVar6,pUVar4);
      pUVar4 = *ppUVar6;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
         (parent = (UnityEngine_Transform_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar3,Method_UnityEngine_GameObject_GetComponent<RectTransform>__),
         pUVar4 != (UnityEngine_RectTransform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  ((UnityEngine_Transform_o *)pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar4 = *ppUVar6;
        if (DAT_0455fa75 == '\0') {
          FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
          DAT_0455fa75 = '\x01';
        }
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar4,(UnityEngine_Vector2_o)
                            (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          pUVar4 = *ppUVar6;
          if (DAT_0455fa75 == '\0') {
            FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
            DAT_0455fa75 = '\x01';
          }
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_offsetMax
                      (pUVar4,(UnityEngine_Vector2_o)
                              (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            if ((*ppUVar6 != (UnityEngine_RectTransform_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)*ppUVar6,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__AddComponent<object>
                        (pUVar3,Method_UnityEngine_GameObject_AddComponent<NonDrawingGraphic>__);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x311110C]
// Nekki.SF2.GUI.TableViewScroll$$.ctor @ RVA 0x311110C

void Nekki_SF2_GUI_TableViewScroll___ctor
               (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566582 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566582 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragBegin = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragBegin,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragEnd = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragEnd,pUVar1);
  Nekki_SF2_GUI_SFScrollRect___ctor((Nekki_SF2_GUI_SFScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public float get_SizeDelta()  [RVA 0x311119C]
// Nekki.SF2.GUI.TableViewScroll$$get_SizeDelta @ RVA 0x311119C

float Nekki_SF2_GUI_TableViewScroll__get_SizeDelta
                (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Vector2_o UVar3;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    iVar1 = (__this->fields).HBFGPJPFNBG;
    UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
    fVar2 = UVar3.fields.y;
    if (iVar1 != 1) {
      fVar2 = UVar3.fields.x;
    }
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetOrientation(JKOLCOFFPDH KKHMNJHDBDD)  [RVA 0x31111CC]
// Nekki.SF2.GUI.TableViewScroll$$SetOrientation @ RVA 0x31111CC

void Nekki_SF2_GUI_TableViewScroll__SetOrientation
               (Nekki_SF2_GUI_TableViewScroll_o *__this,int32_t KKHMNJHDBDD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_o value;
  
  pUVar2 = (__this->fields).super.m_Content;
  (__this->fields).HBFGPJPFNBG = KKHMNJHDBDD;
  if (KKHMNJHDBDD == 1) {
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin(pUVar2,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchorMax
                  (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).super.m_Content;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          fVar3 = 0.0;
          fVar4 = 0.5;
LAB_03211260:
          value.fields.y = fVar4;
          value.fields.x = fVar3;
          UnityEngine_RectTransform__set_pivot(pUVar2,value,(MethodInfo *)0x0);
          bVar1 = (__this->fields).HBFGPJPFNBG == 1;
          (__this->fields).super.m_Horizontal = bVar1;
          (__this->fields).super.m_Vertical = !bVar1;
          return;
        }
      }
    }
  }
  else if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (pUVar2,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).super.m_Content;
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMax
                (pUVar2,(UnityEngine_Vector2_o)0x3f8000003f800000,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).super.m_Content;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        fVar3 = 0.5;
        fVar4 = 1.0;
        goto LAB_03211260;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void OnBeginDrag(PointerEventData OHNNFPGGEFK)  [RVA 0x311128C]
// Nekki.SF2.GUI.TableViewScroll$$OnBeginDrag @ RVA 0x311128C

void Nekki_SF2_GUI_TableViewScroll__OnBeginDrag
               (Nekki_SF2_GUI_TableViewScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  Nekki_SF2_GUI_SFScrollRect__OnBeginDrag
            ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  __this_00 = (__this->fields).onDragBegin;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

