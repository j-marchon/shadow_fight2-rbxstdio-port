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

