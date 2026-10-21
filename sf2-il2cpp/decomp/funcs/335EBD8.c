// NFNBHPOJFNJ$$BIMNIDGFEKN @ RVA 0x335EBD8

/* WARNING: Removing unreachable block (ram,0x0345ee74) */
/* WARNING: Removing unreachable block (ram,0x0345ef00) */

void NFNBHPOJFNJ__BIMNIDGFEKN(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  NFNBHPOJFNJ_o *method_00;
  System_String_o *pSVar5;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  System_Text_StringBuilder_o *__this_00;
  Il2CppMethodPointer *ppIVar7;
  long *plVar8;
  undefined8 *puVar9;
  MethodInfo *method_01;
  System_String_o *FDLJCNLNCOC;
  int64_t iVar10;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  
  method_00 = __this;
  if ((DAT_04567a64 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Skip<string>__);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<string>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<string>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    method_00 = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_04567a64 = 1;
  }
  pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)method_00);
  bVar3 = NEHNBJKKABI__HALDCNGHJCO(pSVar5,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
  source = System_IO_File__ReadAllLines(pSVar5,(MethodInfo *)0x0);
  if (source != (System_String_array *)0x0) {
    iVar1 = (int)source->max_length;
    if (iVar1 < 0xc9) {
      return;
    }
    pSVar6 = System_Linq_Enumerable__Skip<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,iVar1 + -200,
                        Method_System_Linq_Enumerable_Skip<string>__);
    __this_00 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (pSVar6 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar11 = pSVar6->klass;
      uVar2._0_1_ = (pSVar11->_2).rank;
      uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<string>_TypeInfo) {
                    /* try { // try from 0345ed04 to 0355ed0b has its CatchHandler @ 0345ee98 */
            ppIVar7 = &pSVar11->vtable[*piVar14].methodPtr;
            goto LAB_0345ed0c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      ppIVar7 = (Il2CppMethodPointer *)
                FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerable<string>_TypeInfo,0);
LAB_0345ed0c:
      plVar8 = (long *)(**ppIVar7)(pSVar6,(MethodInfo *)ppIVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0345ed7c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_0345ed7c:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_0345ee68;
          lVar12 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_0345ee40;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0345ee28;
        }
        lVar12 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_string__c **)(piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<string>_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0345edd8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01b81914(plVar8,System_Collections_Generic_IEnumerator<string>_TypeInfo,0);
LAB_0345edd8:
        pSVar5 = (System_String_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0345eef4 to 0355ef07 has its CatchHandler @ 0345f00c */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__AppendLine(__this_00,pSVar5,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto LAB_0345eef8;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_0345ee28:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0345ee5c;
    }
  }
LAB_0345ee40:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_0345ee5c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0345ee68:
                    /* try { // try from 0345ee68 to 0355ee6f has its CatchHandler @ 0345ef44 */
                    /* try { // try from 0345ee70 to 0355ee73 has its CatchHandler @ 0345ef24 */
                    /* try { // try from 0345ee78 to 0355ee7f has its CatchHandler @ 0345ef14 */
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                    /* try { // try from 0345ee80 to 0355ee83 has its CatchHandler @ 0345e6d4 */
                    /* try { // try from 0345ee84 to 0355ee87 has its CatchHandler @ 0345ee90 */
    iVar4 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0345ee88 to 0355eeaf has its CatchHandler @ 0345e6d4 */
                    /* catch() { ... } // from try @ 0345ee84 with catch @ 0345ee90 */
                    /* catch() { ... } // from try @ 0345ed20 with catch @ 0345ee94 */
    System_Text_StringBuilder__set_Length(__this_00,iVar4 + -1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0345ed04 with catch @ 0345ee98 */
    pSVar5 = NFNBHPOJFNJ__OMENJAFAEAA(method_01);
    FDLJCNLNCOC = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
                    /* try { // try from 0345eeb0 to 0355eeb3 has its CatchHandler @ 0345eee4 */
                    /* try { // try from 0345eeb4 to 0355eef3 has its CatchHandler @ 0345e6d4 */
    NEHNBJKKABI__GPNPELOHJCJ(pSVar5,FDLJCNLNCOC,(MethodInfo *)0x0);
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar10 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
    (__this->fields).BNFLGDFGHBL = iVar10;
                    /* catch() { ... } // from try @ 0345eeb0 with catch @ 0345eee4 */
    return;
  }
LAB_0345eef8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

