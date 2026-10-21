// OOMHDDBCBJP$$HLNIBCHNHNP @ RVA 0x3285FAC

/* WARNING: Removing unreachable block (ram,0x03386240) */

bool OOMHDDBCBJP__HLNIBCHNHNP(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IList_AFFHKININGD__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Collections_Generic_IList_AFFHKININGD__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  
  if ((DAT_045672b8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045672b8 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__JPHAKMNFEMI(__this,(MethodInfo *)0x0);
  if (pSVar2 == (System_Collections_Generic_IList_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03386238 to 03486253 has its CatchHandler @ 033863c0 */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar9;
        goto LAB_03386094;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pSVar2,System_Collections_Generic_IEnumerable<AFFHKININGD>_TypeInfo,0);
LAB_03386094:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0338610c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0338610c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      bVar12 = false;
      bVar11 = false;
      goto joined_r0x033861bc;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_AFFHKININGD__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03386168;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<AFFHKININGD>_TypeInfo,0);
LAB_03386168:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03386234 to 03486237 has its CatchHandler @ 033863c4 */
      FUN_01bab8c8();
    }
  } while (*(int *)(lVar7 + 0x50) != DPJIDNBJIBG);
  (*(__this->klass->vtable)._21_GOLLEBBHEHE.methodPtr)
            (__this,lVar7,(ulong)(uint)DPJIDNBJIBG,(__this->klass->vtable)._21_GOLLEBBHEHE.method);
  bVar12 = true;
  bVar11 = true;
joined_r0x033861bc:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 033861e0 to 034861e7 has its CatchHandler @ 03386834 */
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03386208 to 03486217 has its CatchHandler @ 033863cc */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0338620c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 033861f4 to 03486203 has its CatchHandler @ 033863d0 */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0338620c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
    bVar11 = bVar12;
  }
                    /* try { // try from 03386218 to 0348621f has its CatchHandler @ 033863c8 */
  return bVar11;
}

