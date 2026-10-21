// KAMBBJFPLGM$$FFHIHGCDGAK @ RVA 0x311A568

Google_Protobuf_Reflection_MessageDescriptor_o * KAMBBJFPLGM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045665eb & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0321a598 to 0331a59f has its CatchHandler @ 0321a5ac */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* try { // try from 0321a5a0 to 0331a5cf has its CatchHandler @ 0321a444 */
    DAT_045665eb = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a540 with catch @ 0321a5a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a52c with catch @ 0321a5a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a598 with catch @ 0321a5ac
                        */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a518 with catch @ 0321a5b0
                        */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0321a500 with catch @ 0321a5b4
                        */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0321a5d0 to 0331a5d3 has its CatchHandler @ 0321a5f4 */
    DAT_04565d86 = '\x01';
  }
                    /* try { // try from 0321a5d4 to 0331a5fb has its CatchHandler @ 0321a444 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch() { ... } // from try @ 0321a5d0 with catch @ 0321a5f4 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0321a5fc to 0331a603 has its CatchHandler @ 0321a618 */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 0321a604 to 0331a60f has its CatchHandler @ 0321a444 */
  uVar6 = (ulong)uVar1;
                    /* try { // try from 0321a610 to 0331a617 has its CatchHandler @ 0321a618 */
  if (uVar6 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0321a5fc with catch @ 0321a618
                       catch(type#2 @ 00000000) { ... } // from try @ 0321a610 with catch @ 0321a618
                        */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0321a650;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0321a650:
                    /* WARNING: Could not recover jumptable at 0x0321a664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1c,pVVar2->method);
  return pGVar3;
}

