// AJMOIOIBPGP$$JIJEKDLMMKP @ RVA 0x3275644

/* WARNING: Removing unreachable block (ram,0x03375998) */

void AJMOIOIBPGP__JIJEKDLMMKP(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Func_OPNMPAJKDMI__bool__o **ppSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  OPNMPAJKDMI_o *NLFMDIGKNGP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  System_Collections_Generic_List_OPNMPAJKDMI__o *source;
  System_Func_OPNMPAJKDMI__bool__o *predicate;
  
                    /* try { // try from 03375644 to 0347564b has its CatchHandler @ 03375824 */
                    /* try { // try from 03375660 to 03475667 has its CatchHandler @ 03375784 */
  if ((DAT_0456723e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
    FUN_01bab630(&System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033756b0 to 034756bb has its CatchHandler @ 03375780 */
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_CBNFLDELCOP__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
                    /* try { // try from 033756cc to 034756d3 has its CatchHandler @ 0337577c */
    FUN_01bab630(&StringLiteral_4307);
    FUN_01bab630(&StringLiteral_4306);
    DAT_0456723e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033756e8 to 034756eb has its CatchHandler @ 03375760 */
  bVar2 = AJMOIOIBPGP__CDFDLPCIFCC(__this,method);
                    /* try { // try from 033756ec to 034756f3 has its CatchHandler @ 03375778 */
  if (bVar2) {
                    /* try { // try from 03375704 to 03475707 has its CatchHandler @ 03375768 */
                    /* try { // try from 03375708 to 03475713 has its CatchHandler @ 03375774 */
                    /* try { // try from 03375714 to 0347571b has its CatchHandler @ 03375770 */
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4307,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0337572c to 0347572f has its CatchHandler @ 03375764 */
                    /* try { // try from 03375730 to 03475743 has its CatchHandler @ 0337576c */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_4306,(MethodInfo *)0x0);
  source = (__this->fields).KALGMNLLLNO;
  if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03375750 to 03475757 has its CatchHandler @ 03375820 */
                    /* try { // try from 03375758 to 03475793 has its CatchHandler @ 033754b4 */
  predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__26_0;
                    /* catch() { ... } // from try @ 033756e8 with catch @ 03375760 */
  if (predicate == (System_Func_OPNMPAJKDMI__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 0337572c with catch @ 03375764 */
                    /* catch() { ... } // from try @ 03375704 with catch @ 03375768 */
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03375730 with catch @ 0337576c */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03375714 with catch @ 03375770 */
    }
                    /* catch() { ... } // from try @ 03375708 with catch @ 03375774 */
                    /* catch() { ... } // from try @ 033756ec with catch @ 03375778 */
                    /* catch() { ... } // from try @ 033756cc with catch @ 0337577c */
                    /* catch() { ... } // from try @ 033756b0 with catch @ 03375780 */
                    /* catch() { ... } // from try @ 03375660 with catch @ 03375784 */
    predicate = (System_Func_OPNMPAJKDMI__bool__o *)
                thunk_FUN_01bda818(System_Func<OPNMPAJKDMI,_bool>_TypeInfo);
                    /* try { // try from 03375794 to 03475797 has its CatchHandler @ 03375808 */
                    /* try { // try from 03375798 to 034757d7 has its CatchHandler @ 033754b4 */
    System_Func<object,_bool>___ctor();
    ppSVar3 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__26_0;
    *ppSVar3 = predicate;
    thunk_FUN_01c20e04(ppSVar3,predicate);
  }
  method_00 = Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__;
  pSVar4 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      (MethodInfo_1EB190C *)Method_System_Linq_Enumerable_Where<OPNMPAJKDMI>__);
  if (pSVar4 == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar8 = pSVar4->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
                    /* try { // try from 033757d8 to 034757f3 has its CatchHandler @ 03375884 */
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 033757f4 to 034757fb has its CatchHandler @ 0337581c */
                    /* try { // try from 033757fc to 034757ff has its CatchHandler @ 03375818 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OPNMPAJKDMI>_TypeInfo) {
                    /* catch() { ... } // from try @ 033757f4 with catch @ 0337581c */
                    /* catch() { ... } // from try @ 03375750 with catch @ 03375820 */
                    /* catch() { ... } // from try @ 03375644 with catch @ 03375824 */
        pVVar5 = pSVar8->vtable + *piVar11;
        goto LAB_03375828;
      }
                    /* try { // try from 03375800 to 03475803 has its CatchHandler @ 03375814 */
      uVar10 = uVar10 - 1;
                    /* try { // try from 03375804 to 03475837 has its CatchHandler @ 033754b4 */
      piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 03375794 with catch @ 03375808 */
    } while (uVar10 != 0);
  }
  method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 03375800 with catch @ 03375814 */
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
                    /* catch() { ... } // from try @ 033757fc with catch @ 03375818 */
LAB_03375828:
                    /* catch() { ... } // from try @ 03375624 with catch @ 03375828 */
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 03375838 to 0347583b has its CatchHandler @ 03375860 */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 03375838 with catch @ 03375860 */
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 03375868 to 0347586f has its CatchHandler @ 03375884 */
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03375898;
        }
                    /* try { // try from 03375870 to 0347587b has its CatchHandler @ 033754b4 */
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
                    /* try { // try from 0337587c to 03475883 has its CatchHandler @ 03375884 */
    method_00 = (MethodInfo *)0x0;
                    /* catch() { ... } // from try @ 033757d8 with catch @ 03375884
                       catch() { ... } // from try @ 03375868 with catch @ 03375884
                       catch() { ... } // from try @ 0337587c with catch @ 03375884 */
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03375898:
    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OPNMPAJKDMI__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OPNMPAJKDMI>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033758f4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method_00 = (MethodInfo *)0x0;
    puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_033758f4:
    NLFMDIGKNGP = (OPNMPAJKDMI_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    AJMOIOIBPGP__GGMPJNLIHHM(__this,NLFMDIGKNGP,method_00);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0337596c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0337596c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}

