// ALOGBMGGBEP$$FFHIHGCDGAK @ RVA 0x34927AC

Google_Protobuf_Reflection_MessageDescriptor_o * ALOGBMGGBEP__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 035927ac to 036927b3 has its CatchHandler @ 035927e0 */
                    /* try { // try from 035927b4 to 036927d3 has its CatchHandler @ 03592704 */
  if ((DAT_0456842e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 035927d4 to 036927d7 has its CatchHandler @ 035927dc */
                    /* try { // try from 035927d8 to 036927fb has its CatchHandler @ 03592704 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035927d4 with catch @ 035927dc
                        */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035927ac with catch @ 035927e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03592798 with catch @ 035927e4
                        */
    DAT_0456842e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035927fc to 036927ff has its CatchHandler @ 03592828 */
                    /* try { // try from 03592800 to 03692837 has its CatchHandler @ 03592704 */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035927fc with catch @ 03592828 */
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 03592838 to 0369283f has its CatchHandler @ 03592854 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03592840 to 0369284b has its CatchHandler @ 03592704 */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 0359284c to 03692853 has its CatchHandler @ 03592854 */
  uVar6 = (ulong)uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03592838 with catch @ 03592854
                       catch(type#2 @ 00000000) { ... } // from try @ 0359284c with catch @ 03592854
                        */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03592894;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03592894:
                    /* WARNING: Could not recover jumptable at 0x035928a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3b,pVVar2->method);
  return pGVar3;
}

