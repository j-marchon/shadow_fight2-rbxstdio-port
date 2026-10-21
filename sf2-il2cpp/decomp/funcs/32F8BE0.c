// EEOMEMBBGNA$$HNGLOPNCACI @ RVA 0x32F8BE0

/* WARNING: Removing unreachable block (ram,0x033f8e0c) */
/* WARNING: Removing unreachable block (ram,0x033f8e7c) */

void EEOMEMBBGNA__HNGLOPNCACI
               (EEOMEMBBGNA_o *__this,System_Action_LFELBGMCDHD__o *CPECAEHDDDB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  HCKCBFOGMMJ_o *__this_02;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676af & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033f8c58 to 034f8c5f has its CatchHandler @ 033f8d68 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
                    /* try { // try from 033f8c60 to 034f8c63 has its CatchHandler @ 033f8d58 */
    DAT_045676af = 1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033f8c7c to 034f8ccf has its CatchHandler @ 033f8e38 */
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_01 = (pOVar7->fields).MABPCBMOECE;
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                        Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
                    /* try { // try from 033f8cd0 to 034f8cdf has its CatchHandler @ 033f86c8 */
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033f8d00 to 034f8d27 has its CatchHandler @ 033f8e38 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f8d08;
          }
                    /* try { // try from 033f8ce0 to 034f8ce3 has its CatchHandler @ 033f8d44 */
          uVar9 = uVar9 - 1;
                    /* try { // try from 033f8ce4 to 034f8ceb has its CatchHandler @ 033f8d40 */
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 033f8cec to 034f8cef has its CatchHandler @ 033f8d3c */
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033f8d08:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) goto LAB_033f8e00;
                    /* catch() { ... } // from try @ 033f8d8c with catch @ 033f8da4 */
        pSVar8 = pSVar4->klass;
        uVar3._0_1_ = (pSVar8->_2).rank;
        uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar3;
                    /* try { // try from 033f8db4 to 034f8e23 has its CatchHandler @ 033f8e38 */
        if (uVar9 == 0) goto LAB_033f8dd8;
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        goto LAB_033f8dc0;
      }
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 033f8b80 with catch @ 033f8d28
                       try { // try from 033f8d28 to 034f8d8b has its CatchHandler @ 033f86c8 */
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
                    /* catch() { ... } // from try @ 033f893c with catch @ 033f8d34 */
                    /* catch() { ... } // from try @ 033f894c with catch @ 033f8d38 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
                    /* catch() { ... } // from try @ 033f8c60 with catch @ 033f8d58 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f8d64;
          }
                    /* catch() { ... } // from try @ 033f8cec with catch @ 033f8d3c */
          uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 033f8ce4 with catch @ 033f8d40 */
          piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 033f8ce0 with catch @ 033f8d44 */
        } while (uVar9 != 0);
      }
                    /* catch() { ... } // from try @ 033f8924 with catch @ 033f8d48 */
                    /* catch() { ... } // from try @ 033f8aa0 with catch @ 033f8d4c */
                    /* catch() { ... } // from try @ 033f88fc with catch @ 033f8d50 */
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
                    /* catch() { ... } // from try @ 033f88f0 with catch @ 033f8d54 */
LAB_033f8d64:
                    /* catch() { ... } // from try @ 033f8c58 with catch @ 033f8d68 */
                    /* catch() { ... } // from try @ 033f888c with catch @ 033f8d6c */
      lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* catch() { ... } // from try @ 033f8830 with catch @ 033f8d70 */
      if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_03 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_03 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033f8d8c to 034f8d8f has its CatchHandler @ 033f8da4 */
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_03,*(int64_t *)(lVar6 + 0x18),
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    } while( true );
  }
  goto LAB_033f8e74;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_033f8dc0:
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_033f8df4;
    }
  }
LAB_033f8dd8:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033f8df4:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
LAB_033f8e00:
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033f8e24 to 034f8e2f has its CatchHandler @ 033f86c8 */
    thunk_FUN_01ba7564();
  }
  __this_02 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
                    /* try { // try from 033f8e30 to 034f8e37 has its CatchHandler @ 033f8e38 */
  if (__this_02 != (HCKCBFOGMMJ_o *)0x0) {
                    /* catch() { ... } // from try @ 033f8c7c with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8d00 with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8db4 with catch @ 033f8e38
                       catch() { ... } // from try @ 033f8e30 with catch @ 033f8e38 */
                    /* try { // try from 033f8e3c to 034f9027 has its CatchHandler @ 033f8e3c
                       catch() { ... } // from try @ 033f8e3c with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9148 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9280 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f92e0 with catch @ 033f8e3c
                       catch() { ... } // from try @ 033f9448 with catch @ 033f8e3c */
    HCKCBFOGMMJ__EFCMPBGIEGJ(__this_02,__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
    return;
  }
LAB_033f8e74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

