// TypeDefIndex 946
// Namespace: 
// public sealed class HCKHJECBIJC : IMessage<HCKHJECBIJC>, IMessage, IEquatable<HCKHJECBIJC>, IDeepCloneable<HCKHJECBIJC>
// Fields:
//   private static readonly MessageParser<HCKHJECBIJC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int ODIADJEHBKB = 1;
//   private int GCDBBHAFJPN; // 0x18
//   public const int JMPPAOKGBAB = 2;
//   private int CCCDGBNPNOD; // 0x1C

// ===== public void IAJAOBGCOKE(int CJNHFNHJHPE)  [RVA 0x30A990C]
// HCKHJECBIJC$$IAJAOBGCOKE @ RVA 0x30A990C

void HCKHJECBIJC__IAJAOBGCOKE(HCKHJECBIJC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CCCDGBNPNOD = CJNHFNHJHPE;
  return;
}


// ===== public static MessageParser<HCKHJECBIJC> PGCAHPDCJBC()  [RVA 0x30A9914]
// HCKHJECBIJC$$PGCAHPDCJBC @ RVA 0x30A9914

Google_Protobuf_MessageParser_HCKHJECBIJC__o * HCKHJECBIJC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566191 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566191 = 1;
  }
  if ((HCKHJECBIJC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HCKHJECBIJC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30A996C]
// HCKHJECBIJC$$MergeFrom @ RVA 0x30A996C

void HCKHJECBIJC__MergeFrom
               (HCKHJECBIJC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HCKHJECBIJC_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* try { // try from 031a997c to 032a99af has its CatchHandler @ 031a997c
                       catch() { ... } // from try @ 031a997c with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ac0 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ba4 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9c04 with catch @ 031a997c
                       catch() { ... } // from try @ 031a9ca0 with catch @ 031a997c */
    pHVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031a99e8 to 032a99f7 has its CatchHandler @ 031a9bb8 */
          (__this->fields).GCDBBHAFJPN = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031a99d4 to 032a99db has its CatchHandler @ 031a9bc4 */
        (__this->fields).CCCDGBNPNOD = iVar3;
      }
      if (uVar2 == 0) break;
                    /* try { // try from 031a99b0 to 032a99c7 has its CatchHandler @ 031a9bc8 */
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pHVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30A9A00]
// HCKHJECBIJC$$WriteTo @ RVA 0x30A9A00

void HCKHJECBIJC__WriteTo
               (HCKHJECBIJC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 031a9a08 to 032a9a0f has its CatchHandler @ 031a9bbc */
                    /* try { // try from 031a9a14 to 032a9a2b has its CatchHandler @ 031a9bb4 */
  if ((__this->fields).GCDBBHAFJPN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031a9a90;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 031a9a30 to 032a9a53 has its CatchHandler @ 031a9bc0 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).GCDBBHAFJPN,(MethodInfo *)0x0);
  }
  if ((__this->fields).CCCDGBNPNOD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_031a9a90:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
                    /* try { // try from 031a9a64 to 032a9a6b has its CatchHandler @ 031a9bd4 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CCCDGBNPNOD,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 031a9a78 to 032a9a7f has its CatchHandler @ 031a9bcc */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031a9a88 to 032a9abf has its CatchHandler @ 031a9bd0 */
  return;
}


// ===== public int FFJHOMHELEB()  [RVA 0x30A9A94]
// HCKHJECBIJC$$FFJHOMHELEB @ RVA 0x30A9A94

int32_t HCKHJECBIJC__FFJHOMHELEB(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  return (__this->fields).GCDBBHAFJPN;
}


// ===== public bool Equals(HCKHJECBIJC IBKIPBJJCPG)  [RVA 0x30A9A9C]
// HCKHJECBIJC$$Equals @ RVA 0x30A9A9C

bool HCKHJECBIJC__Equals(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 031a9ac0 to 032a9b33 has its CatchHandler @ 031a997c */
    if (((__this->fields).GCDBBHAFJPN == (IBKIPBJJCPG->fields).GCDBBHAFJPN) &&
       ((__this->fields).CCCDGBNPNOD == (IBKIPBJJCPG->fields).CCCDGBNPNOD)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x30A9AE8]
// HCKHJECBIJC$$.cctor @ RVA 0x30A9AE8

void HCKHJECBIJC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HCKHJECBIJC__o *__this;
  
  if ((DAT_04566192 & 1) == 0) {
    FUN_01bab630(&System_Func<HCKHJECBIJC>_TypeInfo);
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HCKHJECBIJC>__ctor__);
                    /* try { // try from 031a9b34 to 032a9b4b has its CatchHandler @ 031a9bb0 */
    FUN_01bab630(&Google_Protobuf_MessageParser<HCKHJECBIJC>_TypeInfo);
    FUN_01bab630(&Method_HCKHJECBIJC_<>c_AFJKCJDOFEL__);
                    /* try { // try from 031a9b4c to 032a9b53 has its CatchHandler @ 031a9bac */
    FUN_01bab630(&HCKHJECBIJC_<>c_TypeInfo);
    DAT_04566192 = 1;
  }
                    /* try { // try from 031a9b5c to 032a9b7b has its CatchHandler @ 031a9ba8 */
                    /* try { // try from 031a9b7c to 032a9ba3 has its CatchHandler @ 031a9ba4 */
  if ((HCKHJECBIJC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031a9b7c with catch @ 031a9ba4
                       try { // try from 031a9ba4 to 032a9beb has its CatchHandler @ 031a997c */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HCKHJECBIJC>_TypeInfo);
                    /* catch() { ... } // from try @ 031a9b5c with catch @ 031a9ba8 */
                    /* catch() { ... } // from try @ 031a9b4c with catch @ 031a9bac */
                    /* catch() { ... } // from try @ 031a9b34 with catch @ 031a9bb0 */
                    /* catch() { ... } // from try @ 031a9a14 with catch @ 031a9bb4 */
                    /* catch() { ... } // from try @ 031a99e8 with catch @ 031a9bb8 */
  System_Func<object>___ctor();
                    /* catch() { ... } // from try @ 031a9a08 with catch @ 031a9bbc */
                    /* catch() { ... } // from try @ 031a9a30 with catch @ 031a9bc0 */
  __this = (Google_Protobuf_MessageParser_HCKHJECBIJC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HCKHJECBIJC>_TypeInfo);
                    /* catch() { ... } // from try @ 031a99d4 with catch @ 031a9bc4 */
                    /* catch() { ... } // from try @ 031a99b0 with catch @ 031a9bc8 */
                    /* catch() { ... } // from try @ 031a9a78 with catch @ 031a9bcc */
                    /* catch() { ... } // from try @ 031a9a88 with catch @ 031a9bd0 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HCKHJECBIJC>__ctor__);
                    /* catch() { ... } // from try @ 031a9a64 with catch @ 031a9bd4 */
  HCKHJECBIJC_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 031a9bec to 032a9c03 has its CatchHandler @ 031a9c98 */
  thunk_FUN_01c20e04(HCKHJECBIJC_TypeInfo->static_fields,__this);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30A9C00]
// HCKHJECBIJC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30A9C00

Google_Protobuf_Reflection_MessageDescriptor_o *
HCKHJECBIJC__pb__Google_Protobuf_IMessage_get_Descriptor(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  HCKHJECBIJC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 031a9c04 to 032a9c87 has its CatchHandler @ 031a997c */
  if ((DAT_04566193 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566193 = 1;
    method = extraout_x1;
  }
  method_00 = HCKHJECBIJC_TypeInfo;
  if ((HCKHJECBIJC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HCKHJECBIJC_c *)thunk_FUN_01ba7564(HCKHJECBIJC_TypeInfo,method);
  }
  pGVar1 = HCKHJECBIJC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void JICKDONAAKL(int CJNHFNHJHPE)  [RVA 0x30A9D50]
// HCKHJECBIJC$$JICKDONAAKL @ RVA 0x30A9D50

void HCKHJECBIJC__JICKDONAAKL(HCKHJECBIJC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GCDBBHAFJPN = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(HCKHJECBIJC IBKIPBJJCPG)  [RVA 0x30A9D58]
// HCKHJECBIJC$$.ctor @ RVA 0x30A9D58

void HCKHJECBIJC___ctor(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
    (__this->fields).GCDBBHAFJPN = (IBKIPBJJCPG->fields).GCDBBHAFJPN;
    (__this->fields).CCCDGBNPNOD = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EOIAHAGEICB()  [RVA 0x30A9DAC]
// HCKHJECBIJC$$EOIAHAGEICB @ RVA 0x30A9DAC

int32_t HCKHJECBIJC__EOIAHAGEICB(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  return (__this->fields).CCCDGBNPNOD;
}


// ===== public void .ctor()  [RVA 0x30A9DA4]
// HCKHJECBIJC$$.ctor @ RVA 0x30A9DA4

void HCKHJECBIJC___ctor(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override string ToString()  [RVA 0x30A9DB4]
// HCKHJECBIJC$$ToString @ RVA 0x30A9DB4

System_String_o * HCKHJECBIJC__ToString(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566194 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566194 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x30A9E0C]
// HCKHJECBIJC$$CalculateSize @ RVA 0x30A9E0C

int32_t HCKHJECBIJC__CalculateSize(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_04566195 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566195 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).GCDBBHAFJPN;
  iVar3 = 0;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).CCCDGBNPNOD;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30A9C4C]
// HCKHJECBIJC$$FFHIHGCDGAK @ RVA 0x30A9C4C

Google_Protobuf_Reflection_MessageDescriptor_o * HCKHJECBIJC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566196 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566196 = 1;
  }
                    /* try { // try from 031a9c88 to 032a9c97 has its CatchHandler @ 031a9c98 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031a9bec with catch @ 031a9c98
                       catch() { ... } // from try @ 031a9c88 with catch @ 031a9c98 */
                    /* try { // try from 031a9c9c to 032a9c9f has its CatchHandler @ 031a9ca8 */
                    /* try { // try from 031a9ca0 to 032a9cab has its CatchHandler @ 031a997c */
  if (DAT_04565d86 == '\0') {
                    /* catch() { ... } // from try @ 031a9c9c with catch @ 031a9ca8 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
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
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_031a9d34;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031a9d34:
                    /* WARNING: Could not recover jumptable at 0x031a9d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x14,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(HCKHJECBIJC IBKIPBJJCPG)  [RVA 0x30A9EC0]
// HCKHJECBIJC$$MergeFrom @ RVA 0x30A9EC0

void HCKHJECBIJC__MergeFrom(HCKHJECBIJC_o *__this,HCKHJECBIJC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HCKHJECBIJC_Fields *pHVar3;
  
  if (IBKIPBJJCPG != (HCKHJECBIJC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).GCDBBHAFJPN;
    if (iVar1 != 0) {
      (__this->fields).GCDBBHAFJPN = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
    if (iVar1 != 0) {
      (__this->fields).CCCDGBNPNOD = iVar1;
    }
    pHVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar3,pGVar2);
    return;
  }
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30A9F0C]
// HCKHJECBIJC$$Equals @ RVA 0x30A9F0C

bool HCKHJECBIJC__Equals(HCKHJECBIJC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566197 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566197 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HCKHJECBIJC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HCKHJECBIJC__Equals(__this,(HCKHJECBIJC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public HCKHJECBIJC Clone()  [RVA 0x30A9F70]
// HCKHJECBIJC$$Clone @ RVA 0x30A9F70

HCKHJECBIJC_o * HCKHJECBIJC__Clone(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  HCKHJECBIJC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566198 & 1) == 0) {
    FUN_01bab630(&HCKHJECBIJC_TypeInfo);
    DAT_04566198 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCKHJECBIJC_o *)thunk_FUN_01bda818(HCKHJECBIJC_TypeInfo,method);
  HCKHJECBIJC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override int GetHashCode()  [RVA 0x30A9FC8]
// HCKHJECBIJC$$GetHashCode @ RVA 0x30A9FC8

int32_t HCKHJECBIJC__GetHashCode(HCKHJECBIJC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).GCDBBHAFJPN;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).CCCDGBNPNOD;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}

