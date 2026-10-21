// HPHIGFJMKAC$$JMHANNNMOEA @ RVA 0x32DC05C

bool HPHIGFJMKAC__JMHANNNMOEA
               (System_Collections_Generic_IEnumerable_RectTransform__o *OKAAOKJHCDK,
               bool MPLBBGGMAGE,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Vector3_array *HOPOCKBHHIC;
  UnityEngine_Touch_array *pUVar4;
  MethodInfo *in_x3;
  int iVar5;
  ulong uVar6;
  UnityEngine_Touch_o *__src;
  bool bVar7;
  ulong uVar8;
  UnityEngine_Vector3_o GJFEHJOJNHP;
  UnityEngine_Touch_Fields local_90;
  
  if ((DAT_045675c3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Vector3___TypeInfo);
    DAT_045675c3 = 1;
  }
  local_90.m_AzimuthAngle = 0.0;
  local_90.m_Type = 0;
  local_90.m_Pressure = 0.0;
  local_90.m_TapCount = 0;
  local_90.m_Phase = 0;
  local_90.m_RadiusVariance = 0.0;
  local_90.m_AltitudeAngle = 0.0;
  local_90.m_maximumPossiblePressure = 0.0;
  local_90.m_Radius = 0.0;
  local_90.m_Position.fields.y = 0.0;
  local_90.m_RawPosition.fields.x = 0.0;
                    /* try { // try from 033dc0b4 to 034dc21f has its CatchHandler @ 033dc0b4
                       catch() { ... } // from try @ 033dc0b4 with catch @ 033dc0b4
                       catch() { ... } // from try @ 033dc338 with catch @ 033dc0b4
                       catch() { ... } // from try @ 033dc3f8 with catch @ 033dc0b4
                       catch() { ... } // from try @ 033dc400 with catch @ 033dc0b4
                       catch() { ... } // from try @ 033dc4b4 with catch @ 033dc0b4 */
  local_90.m_FingerId = 0;
  local_90.m_Position.fields.x = 0.0;
  local_90.m_PositionDelta.fields.y = 0.0;
  local_90.m_TimeDelta = 0.0;
  local_90.m_RawPosition.fields.y = 0.0;
  local_90.m_PositionDelta.fields.x = 0.0;
  HOPOCKBHHIC = (UnityEngine_Vector3_array *)FUN_01bab718(UnityEngine_Vector3___TypeInfo,4);
  pUVar4 = UnityEngine_Input__get_touches((MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Touch_array *)0x0) {
    iVar5 = (int)pUVar4->max_length;
    bVar7 = 0 < iVar5;
    if (0 < iVar5) {
      uVar8 = 0;
      uVar6 = pUVar4->max_length & 0xffffffff;
      __src = pUVar4->m_Items;
      do {
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        memmove(&local_90,__src,0x44);
        iVar3 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_90,(MethodInfo *)0x0);
        if (iVar3 == 0) {
          GJFEHJOJNHP.fields._0_8_ =
               UnityEngine_Touch__get_position((UnityEngine_Touch_o *)&local_90,(MethodInfo *)0x0);
          GJFEHJOJNHP.fields.z = 0.0;
          bVar2 = HPHIGFJMKAC__HMBLILGINED(OKAAOKJHCDK,GJFEHJOJNHP,HOPOCKBHHIC,MPLBBGGMAGE,in_x3);
          if (bVar2) {
            return bVar7;
          }
        }
        uVar1 = (uint)pUVar4->max_length;
        uVar6 = (ulong)uVar1;
        uVar8 = uVar8 + 1;
        __src = __src + 1;
        bVar7 = (long)uVar8 < (long)(int)uVar1;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

