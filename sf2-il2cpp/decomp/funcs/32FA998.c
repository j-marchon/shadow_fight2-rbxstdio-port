// EEOMEMBBGNA$$MDJLMHOCDCF @ RVA 0x32FA998

/* WARNING: Removing unreachable block (ram,0x033fabcc) */

IBMLPPNMDCI_o * EEOMEMBBGNA__MDJLMHOCDCF(EEOMEMBBGNA_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  IBMLPPNMDCI_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676d0 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045676d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,(MethodInfo *)0x0);
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    return __this_00;
  }
  __this_01 = (pOVar7->fields).MABPCBMOECE;
  if (__this_01 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fabac with catch @ 033fabc4
                        */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033faba8 with catch @ 033fabc8
                        */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033faaac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033faaac:
    uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 033fab38 to 034fab3f has its CatchHandler @ 033fabb8 */
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return __this_00;
      }
                    /* try { // try from 033fab44 to 034fab4f has its CatchHandler @ 033fabb4 */
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
                    /* try { // try from 033fab50 to 034faba3 has its CatchHandler @ 033fa988 */
      if (uVar9 == 0) goto LAB_033fab78;
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
                    /* try { // try from 033faacc to 034faad3 has its CatchHandler @ 033fabd0 */
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033fab08;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 033faae8 to 034faafb has its CatchHandler @ 033fabd4 */
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_033fab08:
                    /* try { // try from 033fab10 to 034fab17 has its CatchHandler @ 033fabc0 */
    lVar6 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_00 == (IBMLPPNMDCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab24 with catch @ 033fabbc
                        */
      FUN_01bab8c8();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab10 with catch @ 033fabc0
                        */
      FUN_01bab8c8();
    }
    __this_02 = (__this_00->fields).EHBNKDHKJNI;
    if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab38 with catch @ 033fabb8
                        */
      FUN_01bab8c8();
    }
                    /* try { // try from 033fab24 to 034fab2b has its CatchHandler @ 033fabbc */
    Google_Protobuf_Collections_RepeatedField<long>__Add
              (__this_02,*(int64_t *)(lVar6 + 0x18),
               Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar8->vtable + *piVar10;
      goto LAB_033fab94;
    }
  }
LAB_033fab78:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033fab94:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 033faba4 to 034faba7 has its CatchHandler @ 033fabcc */
                    /* try { // try from 033faba8 to 034fabab has its CatchHandler @ 033fabc8 */
                    /* try { // try from 033fabac to 034fabaf has its CatchHandler @ 033fabc4 */
                    /* try { // try from 033fabb0 to 034fabeb has its CatchHandler @ 033fa988 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fab44 with catch @ 033fabb4
                        */
  return __this_00;
}

