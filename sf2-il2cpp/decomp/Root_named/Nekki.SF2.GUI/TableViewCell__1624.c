// TypeDefIndex 1624
// Namespace: Nekki.SF2.GUI
// public abstract class TableViewCell : MonoBehaviour, ISelectHandler, IEventSystemHandler, ISubmitHandler, IPointerClickHandler
// Fields:
//   public TableViewCellDidSelectEvent DidSelectEvent; // 0x20
//   public TableViewCellDidHighlightEvent DidHighlightEvent; // 0x28
//   public TableViewCellDoubleClickEvent DoubleClickEvent; // 0x30
//   private int FIMCNHGPCNA; // 0x38
//   private float FHIIIPEBDLE; // 0x3C

// ===== public int get_RowNumber()  [RVA 0x31BCFC0]
// Nekki.SF2.GUI.TableViewCell$$get_RowNumber @ RVA 0x31BCFC0

int32_t Nekki_SF2_GUI_TableViewCell__get_RowNumber
                  (Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).FIMCNHGPCNA;
}


// ===== public void set_RowNumber(int CJNHFNHJHPE)  [RVA 0x31BCFC8]
// Nekki.SF2.GUI.TableViewCell$$set_RowNumber @ RVA 0x31BCFC8

void Nekki_SF2_GUI_TableViewCell__set_RowNumber
               (Nekki_SF2_GUI_TableViewCell_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCell_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).FIMCNHGPCNA = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x032bcfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._10_unknown.methodPtr)(__this,(pNVar1->vtable)._10_unknown.method);
  return;
}


// ===== protected virtual void Awake()  [RVA 0x31BCFD8]
// Nekki.SF2.GUI.TableViewCell$$Awake @ RVA 0x31BCFD8

void Nekki_SF2_GUI_TableViewCell__Awake(Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  if ((DAT_04566bf9 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<Selectable>__);
    DAT_04566bf9 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__OHBILOGJCLA<object>(LAIGNDBNBJG,Method_Util_OHBILOGJCLA<Selectable>__);
  return;
}


// ===== public virtual float get_Opacity()  [RVA 0x31BD028]
// Nekki.SF2.GUI.TableViewCell$$get_Opacity @ RVA 0x31BD028

float Nekki_SF2_GUI_TableViewCell__get_Opacity
                (Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  return (__this->fields).FHIIIPEBDLE;
}


// ===== public virtual void set_Opacity(float CJNHFNHJHPE)  [RVA 0x31BD030]
// Nekki.SF2.GUI.TableViewCell$$set_Opacity @ RVA 0x31BD030

void Nekki_SF2_GUI_TableViewCell__set_Opacity
               (Nekki_SF2_GUI_TableViewCell_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CJNHFNHJHPE < 0.0;
  if (1.0 < CJNHFNHJHPE) {
    CJNHFNHJHPE = 1.0;
  }
  if (bVar1) {
    CJNHFNHJHPE = 0.0;
  }
  (__this->fields).FHIIIPEBDLE = CJNHFNHJHPE;
  return;
}


// ===== public void OnSelect(BaseEventData OHNNFPGGEFK)  [RVA 0x31BD04C]
// Nekki.SF2.GUI.TableViewCell$$OnSelect @ RVA 0x31BD04C

void Nekki_SF2_GUI_TableViewCell__OnSelect
               (Nekki_SF2_GUI_TableViewCell_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566bfa & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566bfa = 1;
  }
  (*(__this->klass->vtable)._8_unknown.methodPtr)(__this,(__this->klass->vtable)._8_unknown.method);
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DidHighlightEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}


// ===== public void OnSubmit(BaseEventData OHNNFPGGEFK)  [RVA 0x31BD0B8]
// Nekki.SF2.GUI.TableViewCell$$OnSubmit @ RVA 0x31BD0B8

void Nekki_SF2_GUI_TableViewCell__OnSubmit
               (Nekki_SF2_GUI_TableViewCell_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566bfb & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566bfb = 1;
  }
  (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
            (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}


// ===== public void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x31BD124]
// Nekki.SF2.GUI.TableViewCell$$OnPointerClick @ RVA 0x31BD124

void Nekki_SF2_GUI_TableViewCell__OnPointerClick
               (Nekki_SF2_GUI_TableViewCell_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Events_UnityEvent_int__o *pUVar2;
  UnityEngine_Touch_o UStack_b8;
  UnityEngine_Touch_Fields local_70;
  
  if ((DAT_04566bfc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566bfc = 1;
  }
  local_70.m_AzimuthAngle = 0.0;
  local_70.m_Type = 0;
  local_70.m_Pressure = 0.0;
  local_70.m_TapCount = 0;
  local_70.m_Phase = 0;
  local_70.m_RadiusVariance = 0.0;
  local_70.m_AltitudeAngle = 0.0;
  local_70.m_maximumPossiblePressure = 0.0;
  local_70.m_Radius = 0.0;
  local_70.m_Position.fields.y = 0.0;
  local_70.m_RawPosition.fields.x = 0.0;
  local_70.m_FingerId = 0;
  local_70.m_Position.fields.x = 0.0;
  local_70.m_PositionDelta.fields.y = 0.0;
  local_70.m_TimeDelta = 0.0;
  local_70.m_RawPosition.fields.y = 0.0;
  local_70.m_PositionDelta.fields.x = 0.0;
  (*(__this->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
            (__this,(__this->klass->vtable)._9_HNIHOIAMDPC.method);
  pUVar2 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DidSelectEvent;
  if (pUVar2 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (pUVar2,(__this->fields).FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    iVar1 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    if (0 < iVar1) {
      UnityEngine_Input__GetTouch(&UStack_b8,0,(MethodInfo *)0x0);
      memcpy(&local_70,&UStack_b8,0x44);
      iVar1 = UnityEngine_Touch__get_tapCount((UnityEngine_Touch_o *)&local_70,(MethodInfo *)0x0);
      if ((1 < iVar1) &&
         ((__this->fields).DoubleClickEvent != (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *)0x0)
         ) {
        (*(__this->klass->vtable)._13_ProbabilityCheck.methodPtr)
                  (__this,(__this->klass->vtable)._13_ProbabilityCheck.method);
        pUVar2 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).DoubleClickEvent;
        if (pUVar2 == (UnityEngine_Events_UnityEvent_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Events_UnityEvent<int>__Invoke
                  (pUVar2,(__this->fields).FIMCNHGPCNA,
                   Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
      }
    }
  }
  return;
}


// ===== public virtual void ProbabilityCheck()  [RVA 0x31BD218]
// Nekki.SF2.GUI.TableViewCell$$ProbabilityCheck @ RVA 0x31BD218

void Nekki_SF2_GUI_TableViewCell__ProbabilityCheck
               (Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected virtual void OnDestroy()  [RVA 0x31BD21C]
// Nekki.SF2.GUI.TableViewCell$$OnDestroy @ RVA 0x31BD21C

void Nekki_SF2_GUI_TableViewCell__OnDestroy
               (Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *__this_00;
  Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *__this_01;
  Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *__this_02;
  
  __this_00 = (__this->fields).DidSelectEvent;
  if (__this_00 != (Nekki_SF2_GUI_TableViewCellDidSelectEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).DidHighlightEvent;
    if (__this_01 != (Nekki_SF2_GUI_TableViewCellDidHighlightEvent_o *)0x0) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).DoubleClickEvent;
      if (__this_02 != (Nekki_SF2_GUI_TableViewCellDoubleClickEvent_o *)0x0) {
        UnityEngine_Events_UnityEventBase__RemoveAllListeners
                  ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Rect GetSize()  [RVA 0x31BD25C]
// Nekki.SF2.GUI.TableViewCell$$GetSize @ RVA 0x31BD25C

UnityEngine_Rect_o
Nekki_SF2_GUI_TableViewCell__GetSize(Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_Fields UVar1;
  
  if ((DAT_04566bfd & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566bfd = 1;
  }
  __this_00 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 032bd2a0 to 033bd42f has its CatchHandler @ 032bd2a0
                       catch() { ... } // from try @ 032bd2a0 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd568 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd60c with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd614 with catch @ 032bd2a0
                       catch() { ... } // from try @ 032bd6c4 with catch @ 032bd2a0 */
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00->klass == UnityEngine_RectTransform_TypeInfo)) {
    UVar1 = (UnityEngine_Rect_Fields)
            UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Rect_o)UVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void .ctor()  [RVA 0x31BD2C4]
// Nekki.SF2.GUI.TableViewCell$$.ctor @ RVA 0x31BD2C4

void Nekki_SF2_GUI_TableViewCell___ctor(Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

