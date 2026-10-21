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

