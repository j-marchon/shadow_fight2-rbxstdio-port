// LMEMJBOBHBE$$FFHIHGCDGAK @ RVA 0x326DD04

Google_Protobuf_Reflection_MessageDescriptor_o * LMEMJBOBHBE__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567200 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* try { // try from 0336dd34 to 0346dd4b has its CatchHandler @ 0336d5c0 */
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04567200 = 1;
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336dd4c to 0346dd6f has its CatchHandler @ 0336de9c */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565c85 == '\0') {
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04565c85 = '\x01';
  }
                    /* try { // try from 0336dd70 to 0346dd73 has its CatchHandler @ 0336ddb4 */
                    /* try { // try from 0336dd74 to 0346dd7b has its CatchHandler @ 0336d5c0 */
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336dd7c to 0346dd7f has its CatchHandler @ 0336ddb0 */
    thunk_FUN_01ba7564();
                    /* try { // try from 0336dd80 to 0346dd83 has its CatchHandler @ 0336dda0 */
  }
                    /* try { // try from 0336dd84 to 0346dd8b has its CatchHandler @ 0336dd9c */
  pGVar4 = JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch() { ... } // from try @ 0336dc1c with catch @ 0336dd8c
                       try { // try from 0336dd8c to 0346ddf3 has its CatchHandler @ 0336d5c0 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0336d8c8 with catch @ 0336dd98 */
                    /* catch() { ... } // from try @ 0336dd84 with catch @ 0336dd9c */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0336dd80 with catch @ 0336dda0 */
                    /* catch() { ... } // from try @ 0336d8dc with catch @ 0336dda4 */
  uVar6 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 0336dad4 with catch @ 0336dda8 */
                    /* catch() { ... } // from try @ 0336dac0 with catch @ 0336ddac */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0336dd7c with catch @ 0336ddb0 */
                    /* catch() { ... } // from try @ 0336dd70 with catch @ 0336ddb4 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0336daf4 with catch @ 0336ddb8 */
                    /* catch() { ... } // from try @ 0336d89c with catch @ 0336ddbc */
                    /* catch() { ... } // from try @ 0336d888 with catch @ 0336ddc0 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0336ddec;
      }
                    /* catch() { ... } // from try @ 0336d8ac with catch @ 0336ddc4 */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0336d86c with catch @ 0336ddc8 */
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0336dcc4 with catch @ 0336ddcc */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0336d878 with catch @ 0336ddd0 */
                    /* catch() { ... } // from try @ 0336d804 with catch @ 0336ddd4 */
                    /* catch() { ... } // from try @ 0336d7a8 with catch @ 0336ddd8 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* catch() { ... } // from try @ 0336dcbc with catch @ 0336dddc */
LAB_0336ddec:
                    /* try { // try from 0336ddf4 to 0346ddf7 has its CatchHandler @ 0336de08 */
                    /* WARNING: Could not recover jumptable at 0x0336de00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,2,pVVar2->method);
  return pGVar3;
}

