// FMIEFKAKOMG$$FFHIHGCDGAK @ RVA 0x3280680

Google_Protobuf_Reflection_MessageDescriptor_o * FMIEFKAKOMG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456728c & 1) == 0) {
                    /* try { // try from 033806a4 to 034806a7 has its CatchHandler @ 033806b8 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 033806a8 to 034806ab has its CatchHandler @ 033806b0 */
                    /* try { // try from 033806ac to 034806d7 has its CatchHandler @ 033804bc */
                    /* catch() { ... } // from try @ 033806a8 with catch @ 033806b0 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* catch() { ... } // from try @ 03380674 with catch @ 033806b4 */
                    /* catch() { ... } // from try @ 033806a4 with catch @ 033806b8 */
    DAT_0456728c = 1;
  }
                    /* catch() { ... } // from try @ 033805d4 with catch @ 033806bc */
                    /* catch() { ... } // from try @ 03380660 with catch @ 033806c0 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 033806d8 to 034806db has its CatchHandler @ 033806f8 */
                    /* try { // try from 033806dc to 034806ff has its CatchHandler @ 033804bc */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033806d8 with catch @ 033806f8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03380700 to 03480713 has its CatchHandler @ 03380774 */
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033805c0 with catch @ 03380714
                       try { // try from 03380714 to 0348072b has its CatchHandler @ 033804bc */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* try { // try from 0338072c to 0348072f has its CatchHandler @ 03380750 */
                    /* try { // try from 03380730 to 03480757 has its CatchHandler @ 033804bc */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03380760 to 0348076b has its CatchHandler @ 033804bc */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03380768;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0338072c with catch @ 03380750 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* try { // try from 03380758 to 0348075f has its CatchHandler @ 03380774 */
LAB_03380768:
                    /* try { // try from 0338076c to 03480773 has its CatchHandler @ 03380774 */
                    /* catch() { ... } // from try @ 03380700 with catch @ 03380774
                       catch() { ... } // from try @ 03380758 with catch @ 03380774
                       catch() { ... } // from try @ 0338076c with catch @ 03380774 */
                    /* WARNING: Could not recover jumptable at 0x0338077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x39,pVVar2->method);
  return pGVar3;
}

