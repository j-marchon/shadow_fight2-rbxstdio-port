// TypeDefIndex 2492
// Namespace: 
// public sealed class ENFPENIMCIK : IMessage<ENFPENIMCIK>, IMessage, IEquatable<ENFPENIMCIK>, IDeepCloneable<ENFPENIMCIK>
// Fields:
//   private static readonly MessageParser<ENFPENIMCIK> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BCPFHAFPJBL = 1;
//   private string GJNOEAKNMOG; // 0x18
//   public const int PNJCLBEMFEC = 2;
//   private int CBIFOEGLMNM; // 0x20

// ===== public void MergeFrom(ENFPENIMCIK IBKIPBJJCPG)  [RVA 0x337869C]
// ENFPENIMCIK$$MergeFrom @ RVA 0x337869C

void ENFPENIMCIK__MergeFrom(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  ENFPENIMCIK_Fields *pEVar3;
  
  if (IBKIPBJJCPG == (ENFPENIMCIK_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      ENFPENIMCIK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).CBIFOEGLMNM;
    if (iVar1 != 0) {
      (__this->fields).CBIFOEGLMNM = iVar1;
    }
    pEVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pEVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3378788]
// ENFPENIMCIK$$Equals @ RVA 0x3378788

bool ENFPENIMCIK__Equals(ENFPENIMCIK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567b59 & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b59 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ENFPENIMCIK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 034787e0 to 035787e7 has its CatchHandler @ 03479c88 */
  bVar1 = ENFPENIMCIK__Equals(__this,(ENFPENIMCIK_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x337885C]
// ENFPENIMCIK$$FFHIHGCDGAK @ RVA 0x337885C

Google_Protobuf_Reflection_MessageDescriptor_o * ENFPENIMCIK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567b5a & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03478884 to 035788a7 has its CatchHandler @ 03479ac8 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567b5a = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034788a8 to 03578a13 has its CatchHandler @ 03477bc4 */
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
        goto LAB_03478944;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03478944:
                    /* WARNING: Could not recover jumptable at 0x03478958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1a,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3378960]
// ENFPENIMCIK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3378960

Google_Protobuf_Reflection_MessageDescriptor_o *
ENFPENIMCIK__pb__Google_Protobuf_IMessage_get_Descriptor(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  ENFPENIMCIK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b5b & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b5b = 1;
    method = extraout_x1;
  }
  method_00 = ENFPENIMCIK_TypeInfo;
  if ((ENFPENIMCIK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ENFPENIMCIK_c *)thunk_FUN_01ba7564(ENFPENIMCIK_TypeInfo,method);
  }
  pGVar1 = ENFPENIMCIK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x33789AC]
// ENFPENIMCIK$$.ctor @ RVA 0x33789AC

void ENFPENIMCIK___ctor(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  if ((DAT_04567b5c & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567b5c = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<ENFPENIMCIK> PGCAHPDCJBC()  [RVA 0x3378A04]
// ENFPENIMCIK$$PGCAHPDCJBC @ RVA 0x3378A04

Google_Protobuf_MessageParser_ENFPENIMCIK__o * ENFPENIMCIK__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 03478a14 to 03578a3b has its CatchHandler @ 03479d88 */
  if ((DAT_04567b5d & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b5d = 1;
  }
  if ((ENFPENIMCIK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ENFPENIMCIK_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public ENFPENIMCIK Clone()  [RVA 0x3378A5C]
// ENFPENIMCIK$$Clone @ RVA 0x3378A5C

ENFPENIMCIK_o * ENFPENIMCIK__Clone(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  ENFPENIMCIK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03478a70 to 03578a9b has its CatchHandler @ 03479d80 */
  if ((DAT_04567b5e & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    DAT_04567b5e = 1;
    method = extraout_x1;
  }
  __this_00 = (ENFPENIMCIK_o *)thunk_FUN_01bda818(ENFPENIMCIK_TypeInfo,method);
  ENFPENIMCIK___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3378B0C]
// ENFPENIMCIK$$KCHJCGEMCGE @ RVA 0x3378B0C

System_String_o * ENFPENIMCIK__KCHJCGEMCGE(ENFPENIMCIK_o *__this,MethodInfo *method)

{
                    /* try { // try from 03478b0c to 03578b13 has its CatchHandler @ 03479ab0 */
  return (__this->fields).GJNOEAKNMOG;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3378B14]
// ENFPENIMCIK$$MergeFrom @ RVA 0x3378B14

void ENFPENIMCIK__MergeFrom
               (ENFPENIMCIK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ENFPENIMCIK_Fields *pEVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
                    /* try { // try from 03478b18 to 03578b33 has its CatchHandler @ 03479b98 */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pEVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          ENFPENIMCIK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03478b7c to 03578b9f has its CatchHandler @ 03479ab8 */
        (__this->fields).CBIFOEGLMNM = iVar3;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pEVar1,pGVar4);
    }
                    /* try { // try from 03478ba0 to 03578d0b has its CatchHandler @ 03477bc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3378BB0]
// ENFPENIMCIK$$ToString @ RVA 0x3378BB0

System_String_o * ENFPENIMCIK__ToString(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567b5f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567b5f = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3378C08]
// ENFPENIMCIK$$WriteTo @ RVA 0x3378C08

void ENFPENIMCIK__WriteTo
               (ENFPENIMCIK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03478ca0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).CBIFOEGLMNM != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03478ca0;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).CBIFOEGLMNM,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03478ca0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CIEKPPJJEHK()  [RVA 0x3378CA4]
// ENFPENIMCIK$$CIEKPPJJEHK @ RVA 0x3378CA4

int32_t ENFPENIMCIK__CIEKPPJJEHK(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  return (__this->fields).CBIFOEGLMNM;
}


// ===== public override int GetHashCode()  [RVA 0x3378CAC]
// ENFPENIMCIK$$GetHashCode @ RVA 0x3378CAC

int32_t ENFPENIMCIK__GetHashCode(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
    }
    iVar1 = (__this->fields).CBIFOEGLMNM;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03478d0c to 03578d33 has its CatchHandler @ 03479cb0 */
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x337870C]
// ENFPENIMCIK$$HCOCAAIGNNL @ RVA 0x337870C

void ENFPENIMCIK__HCOCAAIGNNL(ENFPENIMCIK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* try { // try from 0347871c to 03578743 has its CatchHandler @ 03479d8c */
  if ((DAT_04567b60 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04567b60 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).GJNOEAKNMOG;
  *ppSVar2 = pSVar1;
                    /* try { // try from 03478778 to 035787a3 has its CatchHandler @ 03479d84 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void .ctor(ENFPENIMCIK IBKIPBJJCPG)  [RVA 0x3378AB4]
// ENFPENIMCIK$$.ctor @ RVA 0x3378AB4

void ENFPENIMCIK___ctor(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  ENFPENIMCIK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (ENFPENIMCIK_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
                    /* try { // try from 03478ad8 to 03578adf has its CatchHandler @ 03479c78 */
    thunk_FUN_01c20e04();
                    /* try { // try from 03478ae4 to 03578aeb has its CatchHandler @ 03479c7c */
    (__this->fields).CBIFOEGLMNM = (IBKIPBJJCPG->fields).CBIFOEGLMNM;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
                    /* try { // try from 03478afc to 03578b03 has its CatchHandler @ 03479ab4 */
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x3378D2C]
// ENFPENIMCIK$$CalculateSize @ RVA 0x3378D2C

int32_t ENFPENIMCIK__CalculateSize(ENFPENIMCIK_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04567b61 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567b61 = 1;
  }
  value_00 = (__this->fields).GJNOEAKNMOG;
  if (value_00 != (System_String_o *)0x0) {
                    /* try { // try from 03478d68 to 03578d93 has its CatchHandler @ 03479c9c */
    if ((value_00->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    value = (__this->fields).CBIFOEGLMNM;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03478dd0 to 03578dd7 has its CatchHandler @ 03479b88 */
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
                    /* try { // try from 03478ddc to 03578de3 has its CatchHandler @ 03479b8c */
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== private static void .cctor()  [RVA 0x3378DF4]
// ENFPENIMCIK$$.cctor @ RVA 0x3378DF4

void ENFPENIMCIK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ENFPENIMCIK__o *__this;
  
                    /* try { // try from 03478df4 to 03578dfb has its CatchHandler @ 034799cc */
                    /* try { // try from 03478e04 to 03578e0b has its CatchHandler @ 034799c8 */
                    /* try { // try from 03478e10 to 03578e2b has its CatchHandler @ 03479aa4 */
  if ((DAT_04567b62 & 1) == 0) {
    FUN_01bab630(&ENFPENIMCIK_TypeInfo);
    FUN_01bab630(&System_Func<ENFPENIMCIK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ENFPENIMCIK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ENFPENIMCIK>_TypeInfo);
    FUN_01bab630(&Method_ENFPENIMCIK_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&ENFPENIMCIK_<>c_TypeInfo);
    DAT_04567b62 = 1;
  }
                    /* try { // try from 03478e74 to 03578e97 has its CatchHandler @ 034799d0 */
                    /* try { // try from 03478e98 to 03579003 has its CatchHandler @ 03477bc4 */
  if ((ENFPENIMCIK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ENFPENIMCIK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ENFPENIMCIK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ENFPENIMCIK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ENFPENIMCIK>__ctor__);
  ENFPENIMCIK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ENFPENIMCIK_TypeInfo->static_fields,__this);
  return;
}


// ===== public bool Equals(ENFPENIMCIK IBKIPBJJCPG)  [RVA 0x33787EC]
// ENFPENIMCIK$$Equals @ RVA 0x33787EC

bool ENFPENIMCIK__Equals(ENFPENIMCIK_o *__this,ENFPENIMCIK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034787ec to 035787f3 has its CatchHandler @ 03479c8c */
  if (IBKIPBJJCPG != (ENFPENIMCIK_o *)0x0) {
                    /* try { // try from 03478804 to 0357880b has its CatchHandler @ 03479ac4 */
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 03478814 to 0357881b has its CatchHandler @ 03479ac0 */
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
                    /* try { // try from 03478820 to 0357883b has its CatchHandler @ 03479b9c */
    if ((!bVar1) && ((__this->fields).CBIFOEGLMNM == (IBKIPBJJCPG->fields).CBIFOEGLMNM)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void JGMKOAMLJII(int CJNHFNHJHPE)  [RVA 0x3378F0C]
// ENFPENIMCIK$$JGMKOAMLJII @ RVA 0x3378F0C

void ENFPENIMCIK__JGMKOAMLJII(ENFPENIMCIK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CBIFOEGLMNM = CJNHFNHJHPE;
  return;
}

