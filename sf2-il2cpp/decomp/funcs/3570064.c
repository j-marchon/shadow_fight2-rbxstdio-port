// NLDPAHFABGL$$FFHIHGCDGAK @ RVA 0x3570064

Google_Protobuf_Reflection_MessageDescriptor_o * NLDPAHFABGL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03670078 to 0377007b has its CatchHandler @ 03673328 */
                    /* try { // try from 0367007c to 0377009f has its CatchHandler @ 03673258 */
  if ((DAT_04568c5c & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568c5c = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036700ac to 037700b3 has its CatchHandler @ 0367301c */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 036700c4 to 037700cb has its CatchHandler @ 03673018 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
                    /* try { // try from 036700d8 to 037700df has its CatchHandler @ 03673014 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 036700f0 to 037700f7 has its CatchHandler @ 03673010 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036700f8 to 03770107 has its CatchHandler @ 0367300c */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
                    /* try { // try from 0367010c to 03770117 has its CatchHandler @ 03673008 */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03670140 to 03770147 has its CatchHandler @ 03672c7c */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0367014c;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 03670128 to 0377012f has its CatchHandler @ 03672c80 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0367014c:
                    /* try { // try from 03670154 to 0377015b has its CatchHandler @ 03672c78 */
                    /* WARNING: Could not recover jumptable at 0x03670160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x42,pVVar2->method);
  return pGVar3;
}

