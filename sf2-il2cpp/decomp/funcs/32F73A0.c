// EEOMEMBBGNA$$MPCGKMBAHHO @ RVA 0x32F73A0

/* WARNING: Removing unreachable block (ram,0x033f759c) */

MGDJPGGPDJI_o *
EEOMEMBBGNA__MPCGKMBAHHO(EEOMEMBBGNA_o *__this,int64_t PEJIFIIDFMM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  MGDJPGGPDJI_o *pMVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_045676a3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_045676a3 = 1;
  }
  pOVar7 = (__this->fields).MICFEIBNOLM;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    pMVar6 = (MGDJPGGPDJI_o *)0x0;
  }
  else {
    __this_00 = (pOVar7->fields).MABPCBMOECE;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
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
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f747c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033f747c:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        pMVar6 = (MGDJPGGPDJI_o *)0x0;
        break;
      }
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
                    /* try { // try from 033f7498 to 034f753b has its CatchHandler @ 033f7498
                       catch() { ... } // from try @ 033f7498 with catch @ 033f7498
                       catch() { ... } // from try @ 033f7564 with catch @ 033f7498
                       catch() { ... } // from try @ 033f75ac with catch @ 033f7498
                       catch() { ... } // from try @ 033f75dc with catch @ 033f7498 */
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f74d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_033f74d8:
      pMVar6 = (MGDJPGGPDJI_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pMVar6 == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f7558 with catch @ 033f7590
                        */
        FUN_01bab8c8();
      }
    } while ((pMVar6->fields).ANAJGHJEEOC != PEJIFIIDFMM);
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 033f753c to 034f7543 has its CatchHandler @ 033f758c */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 033f7564 to 034f75a7 has its CatchHandler @ 033f7498 */
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_033f756c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 033f7558 to 034f7563 has its CatchHandler @ 033f7590 */
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_033f756c:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033f753c with catch @ 033f758c
                        */
  return pMVar6;
}

