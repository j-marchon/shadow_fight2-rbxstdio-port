// HPHIGFJMKAC$$ENKOEPDLPCP @ RVA 0x32DBF8C

bool HPHIGFJMKAC__ENKOEPDLPCP(UnityEngine_TouchPhase_array *MJPJJMNNMGC,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  int index;
  UnityEngine_Touch_o UStack_b8;
  UnityEngine_Touch_Fields local_70;
  
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
                    /* try { // try from 033dbfb0 to 034dbfbb has its CatchHandler @ 033dbb20 */
  iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if (0 < iVar2) {
                    /* try { // try from 033dbfbc to 034dbfc3 has its CatchHandler @ 033dbfc4 */
    index = 0;
    do {
                    /* catch() { ... } // from try @ 033dbf88 with catch @ 033dbfc4
                       catch() { ... } // from try @ 033dbfbc with catch @ 033dbfc4 */
      UnityEngine_Input__GetTouch(&UStack_b8,index,(MethodInfo *)0x0);
      memcpy(&local_70,&UStack_b8,0x44);
      iVar2 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_70,(MethodInfo *)0x0);
      if (MJPJJMNNMGC == (UnityEngine_TouchPhase_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (int)MJPJJMNNMGC->max_length;
      if (0 < iVar1) {
        iVar3 = 0;
        do {
          if (iVar1 == iVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (iVar2 == MJPJJMNNMGC->m_Items[iVar3]) {
            return true;
          }
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
      index = index + 1;
      iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    } while (index < iVar2);
  }
  return false;
}

