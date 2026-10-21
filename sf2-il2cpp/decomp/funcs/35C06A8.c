// IKCANHIFLGJ$$KKGBFEKOKBE @ RVA 0x35C06A8

/* WARNING: Removing unreachable block (ram,0x036c08a0) */

void IKCANHIFLGJ__KKGBFEKOKBE(IKCANHIFLGJ_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  MGDJPGGPDJI_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04568f17 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__);
    DAT_04568f17 = 1;
  }
  if ((PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) ||
     (__this_00 = (PBNPKBJKFHE->fields).MABPCBMOECE,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036c0718 to 037c071f has its CatchHandler @ 036c0760 */
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_GetEnumerator__)
  ;
                    /* try { // try from 036c0728 to 037c0733 has its CatchHandler @ 036c075c */
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0728 with catch @ 036c075c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c0718 with catch @ 036c0760
                        */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c078c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 036c0778 to 037c077b has its CatchHandler @ 036c079c */
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* try { // try from 036c077c to 037c07a3 has its CatchHandler @ 036c063c */
LAB_036c078c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return;
      }
      pSVar6 = pSVar4->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) goto LAB_036c0854;
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      break;
    }
                    /* catch() { ... } // from try @ 036c0778 with catch @ 036c079c */
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 036c07a4 to 037c07ab has its CatchHandler @ 036c07c0 */
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
                    /* try { // try from 036c07ac to 037c07b7 has its CatchHandler @ 036c063c */
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 036c07b8 to 037c07bf has its CatchHandler @ 036c07c0 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_036c07e8;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c07a4 with catch @ 036c07c0
                       catch(type#2 @ 00000000) { ... } // from try @ 036c07b8 with catch @ 036c07c0
                        */
        uVar7 = uVar7 - 1;
                    /* try { // try from 036c07c4 to 037c0863 has its CatchHandler @ 036c07c4
                       catch() { ... } // from try @ 036c07c4 with catch @ 036c07c4
                       catch() { ... } // from try @ 036c08bc with catch @ 036c07c4
                       catch() { ... } // from try @ 036c08e8 with catch @ 036c07c4
                       catch() { ... } // from try @ 036c091c with catch @ 036c07c4
                       catch() { ... } // from try @ 036c094c with catch @ 036c07c4 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<MGDJPGGPDJI>_TypeInfo,0);
LAB_036c07e8:
    __this_01 = (MGDJPGGPDJI_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_01 == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036c0894 to 037c089f has its CatchHandler @ 036c08f8 */
      FUN_01bab8c8();
    }
    CJNHFNHJHPE = IKCANHIFLGJ__KKGBFEKOKBE
                            (__this,(__this_01->fields).LLBEKLPKDHK,(__this_01->fields).ANAJGHJEEOC,
                             in_x3);
    MGDJPGGPDJI__OFDBFMLANAH(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 036c0864 to 037c086b has its CatchHandler @ 036c0900 */
      pVVar5 = pSVar6->vtable + *piVar8;
      goto LAB_036c0870;
    }
  }
LAB_036c0854:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_036c0870:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
                    /* try { // try from 036c088c to 037c0893 has its CatchHandler @ 036c08f4 */
  return;
}

