// BJEFHIBMHEJ$$FFHIHGCDGAK @ RVA 0x310B36C

Google_Protobuf_Reflection_MessageDescriptor_o * BJEFHIBMHEJ__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 0320b378 to 0330b37f has its CatchHandler @ 0320b388 */
                    /* try { // try from 0320b380 to 0330b3b3 has its CatchHandler @ 0320b240 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b30c with catch @ 0320b384
                        */
  if ((DAT_04566540 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b378 with catch @ 0320b388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b340 with catch @ 0320b38c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b334 with catch @ 0320b390
                        */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b310 with catch @ 0320b394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b2f0 with catch @ 0320b398
                        */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566540 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0320b3b4 to 0330b3b7 has its CatchHandler @ 0320b3d8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0320b3b8 to 0330b3df has its CatchHandler @ 0320b240 */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
                    /* catch() { ... } // from try @ 0320b3b4 with catch @ 0320b3d8 */
                    /* try { // try from 0320b3e0 to 0330b3e7 has its CatchHandler @ 0320b3fc */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0320b3e8 to 0330b3f3 has its CatchHandler @ 0320b240 */
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 0320b3f4 to 0330b3fb has its CatchHandler @ 0320b3fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320b3e0 with catch @ 0320b3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 0320b3f4 with catch @ 0320b3fc
                        */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0320b454;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0320b454:
                    /* WARNING: Could not recover jumptable at 0x0320b468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x27,pVVar2->method);
  return pGVar3;
}

