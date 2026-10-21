// HPHIGFJMKAC$$OCAKHFGDEBH @ RVA 0x32DC17C

bool HPHIGFJMKAC__OCAKHFGDEBH(int32_t HCEPNJNAHEB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Touch_o UStack_a8;
  UnityEngine_Touch_Fields local_60;
  
  local_60.m_AzimuthAngle = 0.0;
  local_60.m_Type = 0;
  local_60.m_Pressure = 0.0;
  local_60.m_TapCount = 0;
  local_60.m_Phase = 0;
  local_60.m_RadiusVariance = 0.0;
  local_60.m_AltitudeAngle = 0.0;
  local_60.m_maximumPossiblePressure = 0.0;
  local_60.m_Radius = 0.0;
  local_60.m_Position.fields.y = 0.0;
  local_60.m_RawPosition.fields.x = 0.0;
  local_60.m_FingerId = 0;
  local_60.m_Position.fields.x = 0.0;
  local_60.m_PositionDelta.fields.y = 0.0;
  local_60.m_TimeDelta = 0.0;
  local_60.m_RawPosition.fields.y = 0.0;
  local_60.m_PositionDelta.fields.x = 0.0;
  iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if ((iVar2 == 0) &&
     (bVar1 = UnityEngine_Input__GetMouseButtonUp(HCEPNJNAHEB,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    if (iVar2 == 1) {
      UnityEngine_Input__GetTouch(&UStack_a8,0,(MethodInfo *)0x0);
      memcpy(&local_60,&UStack_a8,0x44);
      iVar2 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_60,(MethodInfo *)0x0);
      bVar1 = iVar2 - 3U < 2;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

