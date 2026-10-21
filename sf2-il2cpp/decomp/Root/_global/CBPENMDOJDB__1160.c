// TypeDefIndex 1160
// Namespace: 
// public sealed class CBPENMDOJDB : IMessage<CBPENMDOJDB>, IMessage, IEquatable<CBPENMDOJDB>, IDeepCloneable<CBPENMDOJDB>
// Fields:
//   private static readonly MessageParser<CBPENMDOJDB> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JFPJBGGMCLH = 1;
//   private long ADEIKPGDIPM; // 0x18
//   public const int BCPFHAFPJBL = 2;
//   private string GJNOEAKNMOG; // 0x20
//   public const int MEEMCILBCAM = 3;
//   private string JAAACMPGMKJ; // 0x28
//   public const int OLNDGOJDGOH = 4;
//   private int DIILCCNFMEB; // 0x30
//   public const int KKHFIGBJHNG = 5;
//   private int GOBHKPNEJFN; // 0x34
//   public const int DJDODJFOFMH = 6;
//   private int NLLKMEMKBAF; // 0x38

// ===== public void OFJLHAKNDGH(int CJNHFNHJHPE)  [RVA 0x3103014]
// CBPENMDOJDB$$OFJLHAKNDGH @ RVA 0x3103014

void CBPENMDOJDB__OFJLHAKNDGH(CBPENMDOJDB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NLLKMEMKBAF = CJNHFNHJHPE;
  return;
}


// ===== public int DENKJCBILMC()  [RVA 0x310301C]
// CBPENMDOJDB$$DENKJCBILMC @ RVA 0x310301C

int32_t CBPENMDOJDB__DENKJCBILMC(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).NLLKMEMKBAF;
}


// ===== public override int GetHashCode()  [RVA 0x3103024]
// CBPENMDOJDB$$GetHashCode @ RVA 0x3103024

int32_t CBPENMDOJDB__GetHashCode(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar6 = (__this->fields).ADEIKPGDIPM;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).DIILCCNFMEB;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).NLLKMEMKBAF;
      if (iVar1 != 0) {
        local_24 = iVar1;
        uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      pGVar5 = (__this->fields).CKFPENBPNML;
      if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x3103120]
// CBPENMDOJDB$$FFHJDGPNCKJ @ RVA 0x3103120

void CBPENMDOJDB__FFHJDGPNCKJ(CBPENMDOJDB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664d5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045664d5 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).JAAACMPGMKJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x310319C]
// CBPENMDOJDB$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310319C

Google_Protobuf_Reflection_MessageDescriptor_o *
CBPENMDOJDB__pb__Google_Protobuf_IMessage_get_Descriptor(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  CBPENMDOJDB_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664d6 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664d6 = 1;
    method = extraout_x1;
  }
  method_00 = CBPENMDOJDB_TypeInfo;
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CBPENMDOJDB_c *)thunk_FUN_01ba7564(CBPENMDOJDB_TypeInfo,method);
  }
  pGVar1 = CBPENMDOJDB__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void PCOFNFAMLGJ(long CJNHFNHJHPE)  [RVA 0x31032EC]
// CBPENMDOJDB$$PCOFNFAMLGJ @ RVA 0x31032EC

void CBPENMDOJDB__PCOFNFAMLGJ(CBPENMDOJDB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ADEIKPGDIPM = CJNHFNHJHPE;
  return;
}


// ===== public int EOEAKGGDBFH()  [RVA 0x31032F4]
// CBPENMDOJDB$$EOEAKGGDBFH @ RVA 0x31032F4

int32_t CBPENMDOJDB__EOEAKGGDBFH(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).DIILCCNFMEB;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x31032FC]
// CBPENMDOJDB$$WriteTo @ RVA 0x31032FC

void CBPENMDOJDB__WriteTo
               (CBPENMDOJDB_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).ADEIKPGDIPM != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ADEIKPGDIPM,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).JAAACMPGMKJ;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).JAAACMPGMKJ,(MethodInfo *)0x0);
      }
      if ((__this->fields).DIILCCNFMEB != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).DIILCCNFMEB,(MethodInfo *)0x0);
      }
      if ((__this->fields).GOBHKPNEJFN != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).GOBHKPNEJFN,(MethodInfo *)0x0);
      }
      if ((__this->fields).NLLKMEMKBAF != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320344c;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0320344c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3103450]
// CBPENMDOJDB$$ToString @ RVA 0x3103450

System_String_o * CBPENMDOJDB__ToString(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045664d7 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045664d7 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x31031E8]
// CBPENMDOJDB$$FFHIHGCDGAK @ RVA 0x31031E8

Google_Protobuf_Reflection_MessageDescriptor_o * CBPENMDOJDB__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045664d8 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045664d8 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
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
        goto LAB_032032d0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_032032d0:
                    /* WARNING: Could not recover jumptable at 0x032032e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x4a,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(CBPENMDOJDB IBKIPBJJCPG)  [RVA 0x31034A8]
// CBPENMDOJDB$$MergeFrom @ RVA 0x31034A8

void CBPENMDOJDB__MergeFrom(CBPENMDOJDB_o *__this,CBPENMDOJDB_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *pSVar3;
  long lVar4;
  CBPENMDOJDB_Fields *pCVar5;
  
  if (IBKIPBJJCPG == (CBPENMDOJDB_o *)0x0) {
    return;
  }
  lVar4 = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
  if (lVar4 != 0) {
    (__this->fields).ADEIKPGDIPM = lVar4;
  }
  pSVar3 = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      CBPENMDOJDB__HCOCAAIGNNL(__this,pSVar3,method);
    }
    pSVar3 = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
                    /* try { // try from 032034e4 to 033035a7 has its CatchHandler @ 032034e4
                       catch() { ... } // from try @ 032034e4 with catch @ 032034e4
                       catch() { ... } // from try @ 03203604 with catch @ 032034e4
                       catch() { ... } // from try @ 03203634 with catch @ 032034e4
                       catch() { ... } // from try @ 032036b0 with catch @ 032034e4
                       catch() { ... } // from try @ 03203734 with catch @ 032034e4
                       catch() { ... } // from try @ 0320373c with catch @ 032034e4
                       catch() { ... } // from try @ 03203770 with catch @ 032034e4
                       catch() { ... } // from try @ 0320379c with catch @ 032034e4
                       catch() { ... } // from try @ 032037dc with catch @ 032034e4 */
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        CBPENMDOJDB__FFHJDGPNCKJ(__this,pSVar3,method);
      }
      iVar1 = (IBKIPBJJCPG->fields).DIILCCNFMEB;
      if (iVar1 != 0) {
        (__this->fields).DIILCCNFMEB = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        (__this->fields).GOBHKPNEJFN = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
      if (iVar1 != 0) {
        (__this->fields).NLLKMEMKBAF = iVar1;
      }
      pCVar5 = &__this->fields;
      pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pCVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pCVar5->CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(pCVar5,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(CBPENMDOJDB IBKIPBJJCPG)  [RVA 0x31035D0]
// CBPENMDOJDB$$.ctor @ RVA 0x31035D0

void CBPENMDOJDB___ctor(CBPENMDOJDB_o *__this,CBPENMDOJDB_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
                    /* try { // try from 032035d0 to 033035db has its CatchHandler @ 0320360c */
  CBPENMDOJDB___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (CBPENMDOJDB_o *)0x0) {
                    /* try { // try from 032035e8 to 033035f7 has its CatchHandler @ 03203604 */
    (__this->fields).ADEIKPGDIPM = (IBKIPBJJCPG->fields).ADEIKPGDIPM;
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
                    /* try { // try from 032035fc to 033035ff has its CatchHandler @ 03203614 */
    thunk_FUN_01c20e04();
                    /* try { // try from 03203600 to 03303603 has its CatchHandler @ 03203608 */
                    /* catch() { ... } // from try @ 032035e8 with catch @ 03203604
                       try { // try from 03203604 to 0330362f has its CatchHandler @ 032034e4 */
                    /* catch() { ... } // from try @ 03203600 with catch @ 03203608 */
    (__this->fields).JAAACMPGMKJ = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
                    /* catch() { ... } // from try @ 032035d0 with catch @ 0320360c */
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 032035c0 with catch @ 03203610 */
    iVar1 = (IBKIPBJJCPG->fields).GOBHKPNEJFN;
                    /* catch() { ... } // from try @ 032035fc with catch @ 03203614 */
                    /* catch() { ... } // from try @ 032035a8 with catch @ 03203618 */
    (__this->fields).DIILCCNFMEB = (IBKIPBJJCPG->fields).DIILCCNFMEB;
    (__this->fields).GOBHKPNEJFN = iVar1;
    (__this->fields).NLLKMEMKBAF = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
                    /* try { // try from 03203630 to 03303633 has its CatchHandler @ 0320374c */
                    /* try { // try from 03203634 to 03303673 has its CatchHandler @ 032034e4 */
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CBPENMDOJDB Clone()  [RVA 0x31036B0]
// CBPENMDOJDB$$Clone @ RVA 0x31036B0

CBPENMDOJDB_o * CBPENMDOJDB__Clone(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  CBPENMDOJDB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 032036b0 to 0330372f has its CatchHandler @ 032034e4 */
  if ((DAT_045664d9 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664d9 = 1;
    method = extraout_x1;
  }
  __this_00 = (CBPENMDOJDB_o *)thunk_FUN_01bda818(CBPENMDOJDB_TypeInfo,method);
  CBPENMDOJDB___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int CalculateSize()  [RVA 0x3103708]
// CBPENMDOJDB$$CalculateSize @ RVA 0x3103708

int32_t CBPENMDOJDB__CalculateSize(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  System_String_o *pSVar4;
  
  if ((DAT_045664da & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* try { // try from 03203730 to 03303733 has its CatchHandler @ 0320377c */
                    /* try { // try from 03203734 to 03303737 has its CatchHandler @ 032034e4 */
    DAT_045664da = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03203738 to 0330373b has its CatchHandler @ 03203774 */
                    /* try { // try from 0320373c to 0330375b has its CatchHandler @ 032034e4 */
  value = (__this->fields).ADEIKPGDIPM;
  iVar3 = 0;
  if (value != 0) {
                    /* catch() { ... } // from try @ 03203630 with catch @ 0320374c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
                    /* try { // try from 0320375c to 0330376f has its CatchHandler @ 032037f0 */
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 032036a0 with catch @ 03203770
                       try { // try from 03203770 to 03303797 has its CatchHandler @ 032034e4 */
                    /* catch() { ... } // from try @ 03203738 with catch @ 03203774 */
    if ((pSVar4->fields)._stringLength != 0) {
                    /* catch() { ... } // from try @ 0320368c with catch @ 03203778 */
                    /* catch() { ... } // from try @ 03203730 with catch @ 0320377c */
                    /* catch() { ... } // from try @ 03203674 with catch @ 03203780 */
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03203798 to 0330379b has its CatchHandler @ 032037c4 */
      iVar3 = iVar3 + iVar2 + 1;
    }
                    /* try { // try from 0320379c to 033037d3 has its CatchHandler @ 032034e4 */
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03203798 with catch @ 032037c4 */
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).DIILCCNFMEB;
                    /* try { // try from 032037d4 to 033037db has its CatchHandler @ 032037f0 */
      if (iVar1 != 0) {
                    /* try { // try from 032037dc to 033037e7 has its CatchHandler @ 032034e4 */
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 032037e8 to 033037ef has its CatchHandler @ 032037f0 */
                    /* catch() { ... } // from try @ 0320375c with catch @ 032037f0
                       catch() { ... } // from try @ 032037d4 with catch @ 032037f0
                       catch() { ... } // from try @ 032037e8 with catch @ 032037f0 */
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).GOBHKPNEJFN;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).NLLKMEMKBAF;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void AKJBHHAHMPG(int CJNHFNHJHPE)  [RVA 0x3103880]
// CBPENMDOJDB$$AKJBHHAHMPG @ RVA 0x3103880

void CBPENMDOJDB__AKJBHHAHMPG(CBPENMDOJDB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DIILCCNFMEB = CJNHFNHJHPE;
  return;
}


// ===== public long GICDOGMCBOK()  [RVA 0x3103888]
// CBPENMDOJDB$$GICDOGMCBOK @ RVA 0x3103888

int64_t CBPENMDOJDB__GICDOGMCBOK(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).ADEIKPGDIPM;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3103890]
// CBPENMDOJDB$$KCHJCGEMCGE @ RVA 0x3103890

System_String_o * CBPENMDOJDB__KCHJCGEMCGE(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).GJNOEAKNMOG;
}


// ===== private static void .cctor()  [RVA 0x3103898]
// CBPENMDOJDB$$.cctor @ RVA 0x3103898

void CBPENMDOJDB___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CBPENMDOJDB__o *__this;
  
  if ((DAT_045664db & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    FUN_01bab630(&System_Func<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_CBPENMDOJDB_<>c_AEOCKHPMHLJ__);
    FUN_01bab630(&CBPENMDOJDB_<>c_TypeInfo);
    DAT_045664db = 1;
  }
  if ((CBPENMDOJDB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CBPENMDOJDB>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CBPENMDOJDB__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CBPENMDOJDB>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CBPENMDOJDB>__ctor__);
  CBPENMDOJDB_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CBPENMDOJDB_TypeInfo->static_fields,__this);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x31039B0]
// CBPENMDOJDB$$Equals @ RVA 0x31039B0

bool CBPENMDOJDB__Equals(CBPENMDOJDB_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045664dc & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_045664dc = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CBPENMDOJDB_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 03203a0c to 03303b57 has its CatchHandler @ 03203a0c
                       catch() { ... } // from try @ 03203a0c with catch @ 03203a0c
                       catch() { ... } // from try @ 03203bb0 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203c7c with catch @ 03203a0c
                       catch() { ... } // from try @ 03203cc8 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203cf8 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d38 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d58 with catch @ 03203a0c
                       catch() { ... } // from try @ 03203d88 with catch @ 03203a0c */
  bVar1 = CBPENMDOJDB__Equals(__this,(CBPENMDOJDB_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public bool Equals(CBPENMDOJDB IBKIPBJJCPG)  [RVA 0x3103A14]
// CBPENMDOJDB$$Equals @ RVA 0x3103A14

bool CBPENMDOJDB__Equals(CBPENMDOJDB_o *__this,CBPENMDOJDB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (CBPENMDOJDB_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ADEIKPGDIPM == (IBKIPBJJCPG->fields).ADEIKPGDIPM) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                             (MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).JAAACMPGMKJ,(IBKIPBJJCPG->fields).JAAACMPGMKJ,
                            (MethodInfo *)0x0), !bVar1)) &&
       ((((__this->fields).DIILCCNFMEB == (IBKIPBJJCPG->fields).DIILCCNFMEB &&
         ((__this->fields).GOBHKPNEJFN == (IBKIPBJJCPG->fields).GOBHKPNEJFN)) &&
        ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3103AC8]
// CBPENMDOJDB$$MergeFrom @ RVA 0x3103AC8

void CBPENMDOJDB__MergeFrom
               (CBPENMDOJDB_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  CBPENMDOJDB_Fields *pCVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pCVar1 = &__this->fields;
    do {
      if (uVar2 < 0x1b) {
        if (uVar2 == 8) {
                    /* try { // try from 03203bb0 to 03303c07 has its CatchHandler @ 03203a0c */
          iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ADEIKPGDIPM = iVar6;
        }
        else if (uVar2 == 0x12) {
                    /* try { // try from 03203b80 to 03303b8b has its CatchHandler @ 03203cd4 */
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          CBPENMDOJDB__HCOCAAIGNNL(__this,pSVar4,method);
                    /* try { // try from 03203b94 to 03303b9f has its CatchHandler @ 03203cd0 */
        }
        else if (uVar2 == 0x1a) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          CBPENMDOJDB__FFHJDGPNCKJ(__this,pSVar4,method);
        }
        else {
LAB_03203b58:
                    /* try { // try from 03203b58 to 03303b5f has its CatchHandler @ 03203ce4 */
          method = (MethodInfo *)0x0;
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pCVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pCVar1->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pCVar1,pGVar5);
        }
      }
      else if (uVar2 == 0x20) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).DIILCCNFMEB = iVar3;
      }
      else if (uVar2 == 0x28) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03203ba4 to 03303baf has its CatchHandler @ 03203ccc */
        (__this->fields).GOBHKPNEJFN = iVar3;
      }
      else {
        if (uVar2 != 0x30) goto LAB_03203b58;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).NLLKMEMKBAF = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}


// ===== public static MessageParser<CBPENMDOJDB> PGCAHPDCJBC()  [RVA 0x3103BF0]
// CBPENMDOJDB$$PGCAHPDCJBC @ RVA 0x3103BF0

Google_Protobuf_MessageParser_CBPENMDOJDB__o * CBPENMDOJDB__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 03203c08 to 03303c0f has its CatchHandler @ 03203cd8 */
  if ((DAT_045664dd & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
                    /* try { // try from 03203c18 to 03303c7b has its CatchHandler @ 03203d3c */
    DAT_045664dd = 1;
  }
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return CBPENMDOJDB_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void .ctor()  [RVA 0x3103648]
// CBPENMDOJDB$$.ctor @ RVA 0x3103648

void CBPENMDOJDB___ctor(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  if ((DAT_045664de & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03203674 to 0330367b has its CatchHandler @ 03203780 */
    DAT_045664de = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0320368c to 03303693 has its CatchHandler @ 03203778 */
  (__this->fields).JAAACMPGMKJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 032036a0 to 033036af has its CatchHandler @ 03203770 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CIJONHKCGHC(int CJNHFNHJHPE)  [RVA 0x3103C48]
// CBPENMDOJDB$$CIJONHKCGHC @ RVA 0x3103C48

void CBPENMDOJDB__CIJONHKCGHC(CBPENMDOJDB_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GOBHKPNEJFN = CJNHFNHJHPE;
  return;
}


// ===== public int FHAMHPLCJMO()  [RVA 0x3103C50]
// CBPENMDOJDB$$FHAMHPLCJMO @ RVA 0x3103C50

int32_t CBPENMDOJDB__FHAMHPLCJMO(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).GOBHKPNEJFN;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3103554]
// CBPENMDOJDB$$HCOCAAIGNNL @ RVA 0x3103554

void CBPENMDOJDB__HCOCAAIGNNL(CBPENMDOJDB_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045664df & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045664df = 1;
  }
                    /* try { // try from 032035a8 to 033035af has its CatchHandler @ 03203618 */
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).GJNOEAKNMOG;
  *ppSVar2 = pSVar1;
                    /* try { // try from 032035c0 to 033035c7 has its CatchHandler @ 03203610 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x3103C58]
// CBPENMDOJDB$$DNOMHOGFIFO @ RVA 0x3103C58

System_String_o * CBPENMDOJDB__DNOMHOGFIFO(CBPENMDOJDB_o *__this,MethodInfo *method)

{
  return (__this->fields).JAAACMPGMKJ;
}

