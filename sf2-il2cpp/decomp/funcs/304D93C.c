// AJINOJNMEEK$$FFHIHGCDGAK @ RVA 0x304D93C

Google_Protobuf_Reflection_MessageDescriptor_o * AJINOJNMEEK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565e22 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0314d968 to 0324d96b has its CatchHandler @ 0314d9c8 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565e22 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0314d988 to 0324d993 has its CatchHandler @ 0314d9cc */
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 0314d994 to 0324d9e3 has its CatchHandler @ 0314d8e0 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d968 with catch @ 0314d9c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d988 with catch @ 0314d9cc
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
                    /* try { // try from 0314d9e4 to 0324d9e7 has its CatchHandler @ 0314d9f4 */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0314d9e4 with catch @ 0314d9f4 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 0314da18 to 0324da1f has its CatchHandler @ 0314da20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314d9fc with catch @ 0314da20
                       catch(type#2 @ 00000000) { ... } // from try @ 0314da18 with catch @ 0314da20
                        */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0314da24;
      }
                    /* try { // try from 0314d9fc to 0324da0b has its CatchHandler @ 0314da20 */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 0314da0c to 0324da17 has its CatchHandler @ 0314d8e0 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0314da24:
                    /* WARNING: Could not recover jumptable at 0x0314da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0,pVVar2->method);
  return pGVar3;
}

