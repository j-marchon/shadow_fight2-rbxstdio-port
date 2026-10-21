// NLFLMJPNOLF$$FFHIHGCDGAK @ RVA 0x32A7B58

Google_Protobuf_Reflection_MessageDescriptor_o * NLFLMJPNOLF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 033a7b68 to 034a7b6f has its CatchHandler @ 033a7c24 */
                    /* try { // try from 033a7b70 to 034a7b87 has its CatchHandler @ 033a7424 */
  if ((DAT_0456740e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 033a7b88 to 034a7b9f has its CatchHandler @ 033a7c14 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456740e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a7ba0 to 034a7be7 has its CatchHandler @ 033a7424 */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 033a7be8 to 034a7bf7 has its CatchHandler @ 033a7c14 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 033a7bf8 to 034a7c1b has its CatchHandler @ 033a7c24 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 033a7b4c with catch @ 033a7c04 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 033a7b88 with catch @ 033a7c14
                       catch() { ... } // from try @ 033a7be8 with catch @ 033a7c14 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 033a7c34 to 034a7cbf has its CatchHandler @ 033a7c34
                       catch() { ... } // from try @ 033a7c34 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a7e9c with catch @ 033a7c34
                       catch() { ... } // from try @ 033a7f24 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a80d4 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a8154 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a8190 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a81c0 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a823c with catch @ 033a7c34 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_033a7c40;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 033a7c1c to 034a7c27 has its CatchHandler @ 033a7424 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 033a7b30 with catch @ 033a7c24
                       catch() { ... } // from try @ 033a7b68 with catch @ 033a7c24
                       catch() { ... } // from try @ 033a7bf8 with catch @ 033a7c24 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033a7c40:
                    /* WARNING: Could not recover jumptable at 0x033a7c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3e,pVVar2->method);
  return pGVar3;
}

