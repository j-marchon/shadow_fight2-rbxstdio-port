// TypeDefIndex 2497
// Namespace: 
// public sealed class NIGMCJIMBHO : IMessage<NIGMCJIMBHO>, IMessage, IEquatable<NIGMCJIMBHO>, IDeepCloneable<NIGMCJIMBHO>
// Fields:
//   private static readonly MessageParser<NIGMCJIMBHO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int FFDAHFKILNO = 1;
//   private ByteString DKOBFIICAFM; // 0x18

// ===== public NIGMCJIMBHO Clone()  [RVA 0x337AACC]
// NIGMCJIMBHO$$Clone @ RVA 0x337AACC

NIGMCJIMBHO_o * NIGMCJIMBHO__Clone(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  NIGMCJIMBHO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567b80 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b80 = 1;
    method = extraout_x1;
  }
  __this_00 = (NIGMCJIMBHO_o *)thunk_FUN_01bda818(NIGMCJIMBHO_TypeInfo,method);
                    /* try { // try from 0347ab10 to 0357ab7f has its CatchHandler @ 0347b780 */
  NIGMCJIMBHO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x337AB74]
// NIGMCJIMBHO$$Equals @ RVA 0x337AB74

bool NIGMCJIMBHO__Equals(NIGMCJIMBHO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567b81 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b81 = 1;
  }
                    /* try { // try from 0347aba4 to 0357aba7 has its CatchHandler @ 0347b6e0 */
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NIGMCJIMBHO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 0347abc8 to 0357ac4f has its CatchHandler @ 0347b84c */
  bVar1 = NIGMCJIMBHO__Equals(__this,(NIGMCJIMBHO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<NIGMCJIMBHO> PGCAHPDCJBC()  [RVA 0x337AC84]
// NIGMCJIMBHO$$PGCAHPDCJBC @ RVA 0x337AC84

Google_Protobuf_MessageParser_NIGMCJIMBHO__o * NIGMCJIMBHO__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 0347ac88 to 0357ac8b has its CatchHandler @ 0347acd4 */
                    /* try { // try from 0347ac90 to 0357ac9b has its CatchHandler @ 0347ad14 */
  if ((DAT_04567b82 & 1) == 0) {
                    /* try { // try from 0347aca0 to 0357acbb has its CatchHandler @ 0347ad00 */
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b82 = 1;
  }
  if ((NIGMCJIMBHO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0347acc0 to 0357acc3 has its CatchHandler @ 0347acc8 */
    thunk_FUN_01ba7564();
                    /* try { // try from 0347acc4 to 0357ad3f has its CatchHandler @ 0347a0b0 */
  }
                    /* catch() { ... } // from try @ 0347acc0 with catch @ 0347acc8 */
                    /* catch() { ... } // from try @ 0347a8f0 with catch @ 0347accc */
                    /* catch() { ... } // from try @ 0347a8bc with catch @ 0347acd0 */
                    /* catch() { ... } // from try @ 0347ac88 with catch @ 0347acd4 */
                    /* catch() { ... } // from try @ 0347ac80 with catch @ 0347acd8 */
  return NIGMCJIMBHO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(NIGMCJIMBHO IBKIPBJJCPG)  [RVA 0x337ACDC]
// NIGMCJIMBHO$$MergeFrom @ RVA 0x337ACDC

void NIGMCJIMBHO__MergeFrom(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  NIGMCJIMBHO_Fields *pNVar3;
  
                    /* catch() { ... } // from try @ 0347a9d4 with catch @ 0347acdc
                       catch() { ... } // from try @ 0347aa6c with catch @ 0347acdc */
                    /* catch() { ... } // from try @ 0347a964 with catch @ 0347ace0 */
                    /* catch() { ... } // from try @ 0347a9e0 with catch @ 0347ace4 */
  if (IBKIPBJJCPG == (NIGMCJIMBHO_o *)0x0) {
                    /* try { // try from 0347ad40 to 0357ad43 has its CatchHandler @ 0347b6c0 */
    return;
  }
                    /* catch() { ... } // from try @ 0347ac70 with catch @ 0347ace8 */
                    /* catch() { ... } // from try @ 0347a97c with catch @ 0347acec */
  __this_00 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
                    /* catch() { ... } // from try @ 0347a8a4 with catch @ 0347acf0 */
                    /* catch() { ... } // from try @ 0347a8e0 with catch @ 0347acf4 */
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
                    /* catch() { ... } // from try @ 0347a984 with catch @ 0347acf8 */
                    /* catch() { ... } // from try @ 0347a8c4 with catch @ 0347acfc */
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347aca0 with catch @ 0347ad00 */
    if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 0347a90c with catch @ 0347ad04 */
                    /* catch() { ... } // from try @ 0347a880 with catch @ 0347ad08 */
                    /* catch() { ... } // from try @ 0347ac60 with catch @ 0347ad0c */
      NIGMCJIMBHO__AKKHFOGFIMC(__this,(IBKIPBJJCPG->fields).DKOBFIICAFM,method);
    }
    pNVar3 = &__this->fields;
                    /* catch() { ... } // from try @ 0347a88c with catch @ 0347ad10 */
                    /* catch() { ... } // from try @ 0347ac68 with catch @ 0347ad14
                       catch() { ... } // from try @ 0347ac78 with catch @ 0347ad14
                       catch() { ... } // from try @ 0347ac90 with catch @ 0347ad14 */
                    /* catch() { ... } // from try @ 0347a818 with catch @ 0347ad18 */
                    /* catch() { ... } // from try @ 0347a7bc with catch @ 0347ad1c */
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347a9f4 with catch @ 0347ad20 */
                    /* catch() { ... } // from try @ 0347ac54 with catch @ 0347ad24 */
    pNVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pNVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347ad44 to 0357b187 has its CatchHandler @ 0347a0b0 */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x337ADC4]
// NIGMCJIMBHO$$FFHIHGCDGAK @ RVA 0x337ADC4

Google_Protobuf_Reflection_MessageDescriptor_o * NIGMCJIMBHO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567b83 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04567b83 = 1;
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565c85 == '\0') {
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04565c85 = '\x01';
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO;
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
        goto LAB_0347aeac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0347aeac:
                    /* WARNING: Could not recover jumptable at 0x0347aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,7,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x337AEC8]
// NIGMCJIMBHO$$MergeFrom @ RVA 0x337AEC8

void NIGMCJIMBHO__MergeFrom
               (NIGMCJIMBHO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NIGMCJIMBHO_Fields *pNVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pNVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 10) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes(AIGOBLJEBCA,(MethodInfo *)0x0);
        NIGMCJIMBHO__AKKHFOGFIMC(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pNVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pNVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AKKHFOGFIMC(ByteString CJNHFNHJHPE)  [RVA 0x337AD48]
// NIGMCJIMBHO$$AKKHFOGFIMC @ RVA 0x337AD48

void NIGMCJIMBHO__AKKHFOGFIMC
               (NIGMCJIMBHO_o *__this,Google_Protobuf_ByteString_o *CJNHFNHJHPE,MethodInfo *method)

{
  Google_Protobuf_ByteString_o *pGVar1;
  Google_Protobuf_ByteString_o **ppGVar2;
  
  if ((DAT_04567b84 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04567b84 = 1;
  }
  pGVar1 = (Google_Protobuf_ByteString_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
  ppGVar2 = &(__this->fields).DKOBFIICAFM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void .ctor(NIGMCJIMBHO IBKIPBJJCPG)  [RVA 0x337AB24]
// NIGMCJIMBHO$$.ctor @ RVA 0x337AB24

void NIGMCJIMBHO___ctor(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  NIGMCJIMBHO___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (NIGMCJIMBHO_o *)0x0) {
    (__this->fields).DKOBFIICAFM = (IBKIPBJJCPG->fields).DKOBFIICAFM;
    thunk_FUN_01c20e04();
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(NIGMCJIMBHO IBKIPBJJCPG)  [RVA 0x337ABD8]
// NIGMCJIMBHO$$Equals @ RVA 0x337ABD8

bool NIGMCJIMBHO__Equals(NIGMCJIMBHO_o *__this,NIGMCJIMBHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04567b85 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04567b85 = 1;
  }
  if (IBKIPBJJCPG != (NIGMCJIMBHO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    lhs = (__this->fields).DKOBFIICAFM;
    rhs = (IBKIPBJJCPG->fields).DKOBFIICAFM;
    if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 0347ac68 to 0357ac6b has its CatchHandler @ 0347ad14 */
                    /* try { // try from 0347ac70 to 0357ac73 has its CatchHandler @ 0347ace8 */
                    /* try { // try from 0347ac78 to 0357ac7b has its CatchHandler @ 0347ad14 */
                    /* try { // try from 0347ac80 to 0357ac83 has its CatchHandler @ 0347acd8 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 0347ac60 to 0357ac63 has its CatchHandler @ 0347ad0c */
  return false;
}


// ===== public override int GetHashCode()  [RVA 0x337AFE8]
// NIGMCJIMBHO$$GetHashCode @ RVA 0x337AFE8

int32_t NIGMCJIMBHO__GetHashCode(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_ByteString_o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pGVar4 = (__this->fields).DKOBFIICAFM;
  if (pGVar4 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar4,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      pGVar4 = (__this->fields).DKOBFIICAFM;
      if (pGVar4 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0347b050;
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
LAB_0347b050:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x337B054]
// NIGMCJIMBHO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x337B054

Google_Protobuf_Reflection_MessageDescriptor_o *
NIGMCJIMBHO__pb__Google_Protobuf_IMessage_get_Descriptor(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  NIGMCJIMBHO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b86 & 1) == 0) {
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    DAT_04567b86 = 1;
    method = extraout_x1;
  }
  method_00 = NIGMCJIMBHO_TypeInfo;
  if ((NIGMCJIMBHO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NIGMCJIMBHO_c *)thunk_FUN_01ba7564(NIGMCJIMBHO_TypeInfo,method);
  }
  pGVar1 = NIGMCJIMBHO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x337AF48]
// NIGMCJIMBHO$$.ctor @ RVA 0x337AF48

void NIGMCJIMBHO___ctor(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567b87 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04567b87 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04561f53 == '\0') {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04561f53 = '\x01';
    method = extraout_x1_01;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
  }
  (__this->fields).DKOBFIICAFM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public ByteString JCIKECEOHAJ()  [RVA 0x337B0A0]
// NIGMCJIMBHO$$JCIKECEOHAJ @ RVA 0x337B0A0

Google_Protobuf_ByteString_o * NIGMCJIMBHO__JCIKECEOHAJ(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  return (__this->fields).DKOBFIICAFM;
}


// ===== private static void .cctor()  [RVA 0x337B0A8]
// NIGMCJIMBHO$$.cctor @ RVA 0x337B0A8

void NIGMCJIMBHO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NIGMCJIMBHO__o *__this;
  
  if ((DAT_04567b88 & 1) == 0) {
    FUN_01bab630(&System_Func<NIGMCJIMBHO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NIGMCJIMBHO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NIGMCJIMBHO>_TypeInfo);
    FUN_01bab630(&NIGMCJIMBHO_TypeInfo);
    FUN_01bab630(&Method_NIGMCJIMBHO_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&NIGMCJIMBHO_<>c_TypeInfo);
    DAT_04567b88 = 1;
  }
  if ((NIGMCJIMBHO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NIGMCJIMBHO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NIGMCJIMBHO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NIGMCJIMBHO>_TypeInfo);
                    /* try { // try from 0347b188 to 0357b1af has its CatchHandler @ 0347b788 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NIGMCJIMBHO>__ctor__);
  NIGMCJIMBHO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NIGMCJIMBHO_TypeInfo->static_fields,__this);
  return;
}


// ===== public override string ToString()  [RVA 0x337B1C0]
// NIGMCJIMBHO$$ToString @ RVA 0x337B1C0

System_String_o * NIGMCJIMBHO__ToString(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b89 & 1) == 0) {
                    /* try { // try from 0347b1e4 to 0357b20f has its CatchHandler @ 0347b784 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567b89 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x337B218]
// NIGMCJIMBHO$$WriteTo @ RVA 0x337B218

void NIGMCJIMBHO__WriteTo
               (NIGMCJIMBHO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  __this_00 = (__this->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0347b288;
                    /* try { // try from 0347b24c to 0357b253 has its CatchHandler @ 0347b760 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
                    /* try { // try from 0347b258 to 0357b25f has its CatchHandler @ 0347b754 */
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).DKOBFIICAFM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0347b270 to 0357b277 has its CatchHandler @ 0347b700 */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0347b288:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347b288 to 0357b28f has its CatchHandler @ 0347b6e8 */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x337B28C]
// NIGMCJIMBHO$$CalculateSize @ RVA 0x337B28C

int32_t NIGMCJIMBHO__CalculateSize(NIGMCJIMBHO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
                    /* try { // try from 0347b29c to 0357b29f has its CatchHandler @ 0347b6ec */
  if ((DAT_04567b8a & 1) == 0) {
                    /* try { // try from 0347b2ac to 0357b2b3 has its CatchHandler @ 0347b6f0 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567b8a = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).DKOBFIICAFM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
                    /* try { // try from 0347b2c4 to 0357b2c7 has its CatchHandler @ 0347b6d0 */
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
                    /* try { // try from 0347b2c8 to 0357b2d3 has its CatchHandler @ 0347b6dc */
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      pGVar2 = (__this->fields).DKOBFIICAFM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar2,(MethodInfo *)0x0);
      iVar3 = iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar1 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0347b324 to 0357b33f has its CatchHandler @ 0347b6d8 */
  FUN_01bab8c8(0,method);
}

