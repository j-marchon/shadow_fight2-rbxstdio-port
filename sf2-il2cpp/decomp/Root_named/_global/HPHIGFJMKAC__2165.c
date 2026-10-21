// TypeDefIndex 2165
// Namespace: 
// public class HPHIGFJMKAC
// Fields:

// ===== private static bool HMBLILGINED(IEnumerable<RectTransform> OKAAOKJHCDK, Vector3 GJFEHJOJNHP, Vector3[] HOPOCKBHHIC, bool MPLBBGGMAGE)  [RVA 0x32DBC1C]
// HPHIGFJMKAC$$HMBLILGINED @ RVA 0x32DBC1C

/* WARNING: Removing unreachable block (ram,0x033dbec0) */

bool HPHIGFJMKAC__HMBLILGINED
               (System_Collections_Generic_IEnumerable_RectTransform__o *OKAAOKJHCDK,
               UnityEngine_Vector3_o GJFEHJOJNHP,UnityEngine_Vector3_array *HOPOCKBHHIC,
               bool MPLBBGGMAGE,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  UnityEngine_RectTransform_o *t1;
  UnityEngine_GameObject_o *__this;
  System_Collections_Generic_IEnumerable_RectTransform__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  
  fVar13 = GJFEHJOJNHP.fields.y;
  fVar12 = GJFEHJOJNHP.fields.x;
  if ((DAT_045675c2 & 1) == 0) {
    FUN_01bab630(fVar12,fVar13,GJFEHJOJNHP.fields.z,&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<RectTransform>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<RectTransform>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_045675c2 = 1;
  }
  if (OKAAOKJHCDK == (System_Collections_Generic_IEnumerable_RectTransform__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = OKAAOKJHCDK->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<RectTransform>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar10;
        goto LAB_033dbce4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(OKAAOKJHCDK,System_Collections_Generic_IEnumerable<RectTransform>_TypeInfo,0
                       );
LAB_033dbce4:
  plVar5 = (long *)(*pVVar4->methodPtr)(OKAAOKJHCDK,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033dbd10:
  do {
    lVar8 = *plVar5;
                    /* try { // try from 033dbd14 to 034dbd3b has its CatchHandler @ 033dbf18 */
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033dbd5c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033dbd5c:
    bVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((bVar2 & 1) == 0) break;
                    /* try { // try from 033dbd70 to 034dbd97 has its CatchHandler @ 033dbf14 */
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_RectTransform__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<RectTransform>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033dbdbc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 033dbda0 to 034dbdab has its CatchHandler @ 033dbf10 */
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,System_Collections_Generic_IEnumerator<RectTransform>_TypeInfo,0);
LAB_033dbdbc:
                    /* try { // try from 033dbdbc to 034dbde7 has its CatchHandler @ 033dbf24 */
    t1 = (UnityEngine_RectTransform_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (MPLBBGGMAGE) {
      if (t1 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)t1,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = UnityEngine_GameObject__get_activeInHierarchy(__this,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_033dbd10;
    }
                    /* try { // try from 033dbdf0 to 034dbe17 has its CatchHandler @ 033dbf20 */
    UVar14 = UnityEngine_TransformExtensions__GetWorldRect(t1,HOPOCKBHHIC,(MethodInfo *)0x0);
  } while ((((UVar14.fields.m_YMin + UVar14.fields.m_Height <= fVar13) ||
            (fVar13 < UVar14.fields.m_YMin)) || (fVar12 < UVar14.fields.m_XMin)) ||
          (UVar14.fields.m_XMin + UVar14.fields.m_Width <= fVar12));
                    /* try { // try from 033dbe2c to 034dbe2f has its CatchHandler @ 033dbf04 */
                    /* try { // try from 033dbe30 to 034dbe57 has its CatchHandler @ 033dbf1c */
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033dbe80;
        }
                    /* try { // try from 033dbe58 to 034dbee7 has its CatchHandler @ 033dbb20 */
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033dbe80:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return (bool)((bVar2 ^ 1) & 1);
}


// ===== public static bool ENKOEPDLPCP(TouchPhase[] MJPJJMNNMGC)  [RVA 0x32DBF8C]
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


// ===== public static bool JMHANNNMOEA(IEnumerable<RectTransform> OKAAOKJHCDK, bool MPLBBGGMAGE)  [RVA 0x32DC05C]
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


// ===== public static bool OCAKHFGDEBH(int HCEPNJNAHEB = 0)  [RVA 0x32DC17C]
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


// ===== public void .ctor()  [RVA 0x32DC218]
// HPHIGFJMKAC$$.ctor @ RVA 0x32DC218

void HPHIGFJMKAC___ctor(HPHIGFJMKAC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static bool KCLHDFJFHAE(int HCEPNJNAHEB = 0)  [RVA 0x32DC220]
// HPHIGFJMKAC$$KCLHDFJFHAE @ RVA 0x32DC220

bool HPHIGFJMKAC__KCLHDFJFHAE(int32_t HCEPNJNAHEB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Touch_o UStack_a8;
  UnityEngine_Touch_Fields local_60;
  
                    /* try { // try from 033dc220 to 034dc247 has its CatchHandler @ 033dc41c */
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
     (bVar1 = UnityEngine_Input__GetMouseButtonDown(HCEPNJNAHEB,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    if (iVar2 == 1) {
                    /* try { // try from 033dc27c to 034dc2a7 has its CatchHandler @ 033dc418 */
      UnityEngine_Input__GetTouch(&UStack_a8,0,(MethodInfo *)0x0);
      memcpy(&local_60,&UStack_a8,0x44);
      iVar2 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_60,(MethodInfo *)0x0);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// ===== public static bool JCHBNNNJOCL(int HCEPNJNAHEB = 0)  [RVA 0x32DC2B8]
// HPHIGFJMKAC$$JCHBNNNJOCL @ RVA 0x32DC2B8

bool HPHIGFJMKAC__JCHBNNNJOCL(int32_t HCEPNJNAHEB,MethodInfo *method)

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
                    /* try { // try from 033dc2d8 to 034dc2df has its CatchHandler @ 033dc40c */
  iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if ((iVar2 == 0) &&
     (bVar1 = UnityEngine_Input__GetMouseButton(HCEPNJNAHEB,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
    if (iVar2 == 1) {
      UnityEngine_Input__GetTouch(&UStack_a8,0,(MethodInfo *)0x0);
                    /* try { // try from 033dc31c to 034dc337 has its CatchHandler @ 033dc410 */
      memcpy(&local_60,&UStack_a8,0x44);
      iVar2 = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)&local_60,(MethodInfo *)0x0);
                    /* try { // try from 033dc338 to 034dc3eb has its CatchHandler @ 033dc0b4 */
      bVar1 = iVar2 - 1U < 2;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

