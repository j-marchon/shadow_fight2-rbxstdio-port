// DLOALGNBPNL$$FFHIHGCDGAK @ RVA 0x3233D54

Google_Protobuf_Reflection_MessageDescriptor_o * DLOALGNBPNL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03333d60 to 03433d63 has its CatchHandler @ 03333d6c */
                    /* try { // try from 03333d64 to 03433d83 has its CatchHandler @ 03333bfc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333ccc with catch @ 03333d6c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03333d60 with catch @ 03333d6c
                        */
  if ((DAT_04567001 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03333d84 to 03433d87 has its CatchHandler @ 03333d94 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567001 = 1;
  }
                    /* catch() { ... } // from try @ 03333d84 with catch @ 03333d94 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03333dcc to 03433df3 has its CatchHandler @ 03333e08 */
    thunk_FUN_01ba7564();
  }
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
                    /* try { // try from 03333df4 to 03433dff has its CatchHandler @ 03333bfc */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* try { // try from 03333e00 to 03433e07 has its CatchHandler @ 03333e08 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03333dcc with catch @ 03333e08
                       catch(type#2 @ 00000000) { ... } // from try @ 03333e00 with catch @ 03333e08
                        */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03333e3c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03333e3c:
                    /* WARNING: Could not recover jumptable at 0x03333e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x4b,pVVar2->method);
  return pGVar3;
}

