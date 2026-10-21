// OMFJHNMDIBF$$FFHIHGCDGAK @ RVA 0x343F55C

Google_Protobuf_Reflection_MessageDescriptor_o * OMFJHNMDIBF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456820b & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0353f584 to 0363f59b has its CatchHandler @ 0353f650 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456820b = 1;
  }
                    /* try { // try from 0353f59c to 0363f59f has its CatchHandler @ 0353f5d8 */
                    /* try { // try from 0353f5a0 to 0363f5a7 has its CatchHandler @ 0353f5d4 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0353f5a8 to 0363f5ab has its CatchHandler @ 0353f5d0 */
                    /* try { // try from 0353f5ac to 0363f5b3 has its CatchHandler @ 0353f5c8 */
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 0353f5b4 to 0363f5f7 has its CatchHandler @ 0353f0b0 */
                    /* catch() { ... } // from try @ 0353f52c with catch @ 0353f5b8 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* catch() { ... } // from try @ 0353f2d0 with catch @ 0353f5c4 */
    DAT_04565d86 = '\x01';
  }
                    /* catch() { ... } // from try @ 0353f5ac with catch @ 0353f5c8 */
                    /* catch() { ... } // from try @ 0353f4ac with catch @ 0353f5cc */
                    /* catch() { ... } // from try @ 0353f5a8 with catch @ 0353f5d0 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0353f5a0 with catch @ 0353f5d4 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0353f59c with catch @ 0353f5d8 */
  }
                    /* catch() { ... } // from try @ 0353f274 with catch @ 0353f5dc */
                    /* catch() { ... } // from try @ 0353f260 with catch @ 0353f5e0 */
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 0353f5f8 to 0363f5fb has its CatchHandler @ 0353f624 */
                    /* try { // try from 0353f5fc to 0363f633 has its CatchHandler @ 0353f0b0 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 0353f63c to 0363f647 has its CatchHandler @ 0353f0b0 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0353f644;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0353f5f8 with catch @ 0353f624 */
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* try { // try from 0353f634 to 0363f63b has its CatchHandler @ 0353f650 */
LAB_0353f644:
                    /* try { // try from 0353f648 to 0363f64f has its CatchHandler @ 0353f650 */
                    /* catch() { ... } // from try @ 0353f584 with catch @ 0353f650
                       catch() { ... } // from try @ 0353f634 with catch @ 0353f650
                       catch() { ... } // from try @ 0353f648 with catch @ 0353f650 */
                    /* WARNING: Could not recover jumptable at 0x0353f658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x37,pVVar2->method);
  return pGVar3;
}

