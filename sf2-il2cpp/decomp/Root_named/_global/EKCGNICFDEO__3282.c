// TypeDefIndex 3282
// Namespace: 
// public sealed class EKCGNICFDEO : IMessage<EKCGNICFDEO>, IMessage, IEquatable<EKCGNICFDEO>, IDeepCloneable<EKCGNICFDEO>
// Fields:
//   private static readonly MessageParser<EKCGNICFDEO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int GKDOGIFGBIM = 1;
//   private string BJGJOHGJCKC; // 0x18
//   public const int AKOKFEAGBID = 2;
//   private DLIONECMCGE CMKMIFIIGBK; // 0x20

// ===== public override string ToString()  [RVA 0x351AAF0]
// EKCGNICFDEO$$ToString @ RVA 0x351AAF0

System_String_o * EKCGNICFDEO__ToString(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568977 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568977 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x351AB48]
// EKCGNICFDEO$$Equals @ RVA 0x351AB48

bool EKCGNICFDEO__Equals(EKCGNICFDEO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568978 & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_04568978 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EKCGNICFDEO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EKCGNICFDEO__Equals(__this,(EKCGNICFDEO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override int GetHashCode()  [RVA 0x351AC1C]
// EKCGNICFDEO$$GetHashCode @ RVA 0x351AC1C

int32_t EKCGNICFDEO__GetHashCode(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  pSVar4 = (__this->fields).BJGJOHGJCKC;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
    }
    iVar1 = (__this->fields).CMKMIFIIGBK;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x351AC9C]
// EKCGNICFDEO$$CalculateSize @ RVA 0x351AC9C

int32_t EKCGNICFDEO__CalculateSize(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568979 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568979 = 1;
  }
  value_00 = (__this->fields).BJGJOHGJCKC;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0361acf0 to 0371ae03 has its CatchHandler @ 0361acf0
                       catch() { ... } // from try @ 0361acf0 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361aef0 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361af14 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361af7c with catch @ 0361acf0
                       catch() { ... } // from try @ 0361afb4 with catch @ 0361acf0
                       catch() { ... } // from try @ 0361afe8 with catch @ 0361acf0 */
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    value = (__this->fields).CMKMIFIIGBK;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public EKCGNICFDEO Clone()  [RVA 0x351AD64]
// EKCGNICFDEO$$Clone @ RVA 0x351AD64

EKCGNICFDEO_o * EKCGNICFDEO__Clone(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  EKCGNICFDEO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456897a & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_0456897a = 1;
    method = extraout_x1;
  }
  __this_00 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo,method);
  EKCGNICFDEO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<EKCGNICFDEO> PGCAHPDCJBC()  [RVA 0x351AE14]
// EKCGNICFDEO$$PGCAHPDCJBC @ RVA 0x351AE14

Google_Protobuf_MessageParser_EKCGNICFDEO__o * EKCGNICFDEO__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 0361ae24 to 0371ae2b has its CatchHandler @ 0361af90 */
  if ((DAT_0456897b & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0361ae40 to 0371ae47 has its CatchHandler @ 0361af00 */
    DAT_0456897b = 1;
  }
  if ((EKCGNICFDEO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0361ae54 to 0371ae5b has its CatchHandler @ 0361aefc */
  }
  return EKCGNICFDEO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void EKDHEGGGAAP(DLIONECMCGE CJNHFNHJHPE)  [RVA 0x351AE6C]
// EKCGNICFDEO$$EKDHEGGGAAP @ RVA 0x351AE6C

void EKCGNICFDEO__EKDHEGGGAAP(EKCGNICFDEO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CMKMIFIIGBK = CJNHFNHJHPE;
  return;
}


// ===== public string PNPNMJPFKLE()  [RVA 0x351AE74]
// EKCGNICFDEO$$PNPNMJPFKLE @ RVA 0x351AE74

System_String_o * EKCGNICFDEO__PNPNMJPFKLE(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  return (__this->fields).BJGJOHGJCKC;
}


// ===== public DLIONECMCGE CAOLPHNPFPJ()  [RVA 0x351AE7C]
// EKCGNICFDEO$$CAOLPHNPFPJ @ RVA 0x351AE7C

int32_t EKCGNICFDEO__CAOLPHNPFPJ(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  return (__this->fields).CMKMIFIIGBK;
}


// ===== public bool Equals(EKCGNICFDEO IBKIPBJJCPG)  [RVA 0x351ABAC]
// EKCGNICFDEO$$Equals @ RVA 0x351ABAC

bool EKCGNICFDEO__Equals(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EKCGNICFDEO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).BJGJOHGJCKC,(IBKIPBJJCPG->fields).BJGJOHGJCKC,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).CMKMIFIIGBK == (IBKIPBJJCPG->fields).CMKMIFIIGBK)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(EKCGNICFDEO IBKIPBJJCPG)  [RVA 0x351AE84]
// EKCGNICFDEO$$MergeFrom @ RVA 0x351AE84

void EKCGNICFDEO__MergeFrom(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  EKCGNICFDEO_Fields *pEVar3;
  
  if (IBKIPBJJCPG == (EKCGNICFDEO_o *)0x0) {
                    /* try { // try from 0361aee4 to 0371aeef has its CatchHandler @ 0361aef4 */
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).BJGJOHGJCKC;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
                    /* try { // try from 0361aea0 to 0371aec3 has its CatchHandler @ 0361aef4 */
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      EKCGNICFDEO__EKGMIDPANDE(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    if (iVar1 != 0) {
      (__this->fields).CMKMIFIIGBK = iVar1;
    }
    pEVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0361aecc to 0371aed3 has its CatchHandler @ 0361af9c */
    pEVar3->CKFPENBPNML = pGVar2;
                    /* try { // try from 0361aedc to 0371aedf has its CatchHandler @ 0361aef8 */
    thunk_FUN_01c20e04(pEVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361aef0 to 0371af0f has its CatchHandler @ 0361acf0 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351AF70]
// EKCGNICFDEO$$.ctor @ RVA 0x351AF70

void EKCGNICFDEO___ctor(EKCGNICFDEO_o *__this,MethodInfo *method)

{
                    /* try { // try from 0361af70 to 0371af73 has its CatchHandler @ 0361af94 */
                    /* try { // try from 0361af74 to 0371af7b has its CatchHandler @ 0361af8c */
                    /* try { // try from 0361af7c to 0371afaf has its CatchHandler @ 0361acf0 */
                    /* catch() { ... } // from try @ 0361af10 with catch @ 0361af80 */
                    /* catch() { ... } // from try @ 0361af74 with catch @ 0361af8c */
  if ((DAT_0456897c & 1) == 0) {
                    /* catch() { ... } // from try @ 0361ae24 with catch @ 0361af90 */
                    /* catch() { ... } // from try @ 0361af70 with catch @ 0361af94 */
                    /* catch() { ... } // from try @ 0361af6c with catch @ 0361af98 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 0361aecc with catch @ 0361af9c */
                    /* catch() { ... } // from try @ 0361ae04 with catch @ 0361afa0 */
    DAT_0456897c = 1;
  }
  (__this->fields).BJGJOHGJCKC = StringLiteral_1/*""*/;
                    /* try { // try from 0361afb0 to 0371afb3 has its CatchHandler @ 0361afd8 */
  thunk_FUN_01c20e04();
                    /* try { // try from 0361afb4 to 0371afdf has its CatchHandler @ 0361acf0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void EKGMIDPANDE(string CJNHFNHJHPE)  [RVA 0x351AEF4]
// EKCGNICFDEO$$EKGMIDPANDE @ RVA 0x351AEF4

void EKCGNICFDEO__EKGMIDPANDE(EKCGNICFDEO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
                    /* catch() { ... } // from try @ 0361aea0 with catch @ 0361aef4
                       catch() { ... } // from try @ 0361aee4 with catch @ 0361aef4 */
                    /* catch() { ... } // from try @ 0361aedc with catch @ 0361aef8 */
                    /* catch() { ... } // from try @ 0361ae54 with catch @ 0361aefc */
                    /* catch() { ... } // from try @ 0361ae40 with catch @ 0361af00 */
                    /* try { // try from 0361af10 to 0371af13 has its CatchHandler @ 0361af80 */
                    /* try { // try from 0361af14 to 0371af4f has its CatchHandler @ 0361acf0 */
  if ((DAT_0456897d & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_0456897d = 1;
  }
                    /* try { // try from 0361af50 to 0371af6b has its CatchHandler @ 0361affc */
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).BJGJOHGJCKC;
  *ppSVar2 = pSVar1;
                    /* try { // try from 0361af6c to 0371af6f has its CatchHandler @ 0361af98 */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void .ctor(EKCGNICFDEO IBKIPBJJCPG)  [RVA 0x351ADBC]
// EKCGNICFDEO$$.ctor @ RVA 0x351ADBC

void EKCGNICFDEO___ctor(EKCGNICFDEO_o *__this,EKCGNICFDEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  EKCGNICFDEO___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EKCGNICFDEO_o *)0x0) {
    (__this->fields).BJGJOHGJCKC = (IBKIPBJJCPG->fields).BJGJOHGJCKC;
    thunk_FUN_01c20e04();
    (__this->fields).CMKMIFIIGBK = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
                    /* try { // try from 0361ae04 to 0371ae0b has its CatchHandler @ 0361afa0 */
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x351AFC8]
// EKCGNICFDEO$$MergeFrom @ RVA 0x351AFC8

void EKCGNICFDEO__MergeFrom
               (EKCGNICFDEO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EKCGNICFDEO_Fields *pEVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* catch() { ... } // from try @ 0361afb0 with catch @ 0361afd8 */
    pEVar1 = &__this->fields;
    while( true ) {
      while( true ) {
                    /* try { // try from 0361afe0 to 0371afe7 has its CatchHandler @ 0361affc */
                    /* try { // try from 0361afe8 to 0371aff3 has its CatchHandler @ 0361acf0 */
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EKCGNICFDEO__EKGMIDPANDE(__this,CJNHFNHJHPE,method);
        }
                    /* try { // try from 0361aff4 to 0371affb has its CatchHandler @ 0361affc */
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).CMKMIFIIGBK = iVar3;
      }
                    /* catch() { ... } // from try @ 0361af50 with catch @ 0361affc
                       catch() { ... } // from try @ 0361afe0 with catch @ 0361affc
                       catch() { ... } // from try @ 0361aff4 with catch @ 0361affc */
      if (uVar2 == 0) break;
                    /* try { // try from 0361b000 to 0371b0e3 has its CatchHandler @ 0361b000
                       catch() { ... } // from try @ 0361b000 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b1e8 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b28c with catch @ 0361b000
                       catch() { ... } // from try @ 0361b294 with catch @ 0361b000
                       catch() { ... } // from try @ 0361b350 with catch @ 0361b000 */
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pEVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x351B064]
// EKCGNICFDEO$$WriteTo @ RVA 0x351B064

void EKCGNICFDEO__WriteTo
               (EKCGNICFDEO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).BJGJOHGJCKC;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0361b0fc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).BJGJOHGJCKC,(MethodInfo *)0x0);
    }
    if ((__this->fields).CMKMIFIIGBK != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0361b0fc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteEnum
                (JBGJLELBMJF,(__this->fields).CMKMIFIIGBK,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0361b0e4 to 0371b10b has its CatchHandler @ 0361b2b4 */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0361b0fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x351B100]
// EKCGNICFDEO$$FFHIHGCDGAK @ RVA 0x351B100

Google_Protobuf_Reflection_MessageDescriptor_o * EKCGNICFDEO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456897e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456897e = 1;
  }
                    /* try { // try from 0361b140 to 0371b16b has its CatchHandler @ 0361b2b0 */
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
                    /* try { // try from 0361b1ac to 0371b1b3 has its CatchHandler @ 0361b2a4 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0361b1e8;
      }
                    /* try { // try from 0361b1c0 to 0371b1c7 has its CatchHandler @ 0361b2ac */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* try { // try from 0361b1c8 to 0371b1e7 has its CatchHandler @ 0361b2b8 */
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0361b1e8:
                    /* try { // try from 0361b1e8 to 0371b27b has its CatchHandler @ 0361b000 */
                    /* WARNING: Could not recover jumptable at 0x0361b1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0xb,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x351B204]
// EKCGNICFDEO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x351B204

Google_Protobuf_Reflection_MessageDescriptor_o *
EKCGNICFDEO__pb__Google_Protobuf_IMessage_get_Descriptor(EKCGNICFDEO_o *__this,MethodInfo *method)

{
  EKCGNICFDEO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456897f & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    DAT_0456897f = 1;
    method = extraout_x1;
  }
  method_00 = EKCGNICFDEO_TypeInfo;
  if ((EKCGNICFDEO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EKCGNICFDEO_c *)thunk_FUN_01ba7564(EKCGNICFDEO_TypeInfo,method);
  }
  pGVar1 = EKCGNICFDEO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x351B250]
// EKCGNICFDEO$$.cctor @ RVA 0x351B250

void EKCGNICFDEO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EKCGNICFDEO__o *__this;
  
  if ((DAT_04568980 & 1) == 0) {
                    /* try { // try from 0361b27c to 0371b283 has its CatchHandler @ 0361b2bc */
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0361b284 to 0371b287 has its CatchHandler @ 0361b2a8 */
                    /* try { // try from 0361b288 to 0371b28b has its CatchHandler @ 0361b2a0 */
    FUN_01bab630(&System_Func<EKCGNICFDEO>_TypeInfo);
                    /* try { // try from 0361b28c to 0371b28f has its CatchHandler @ 0361b000 */
                    /* try { // try from 0361b290 to 0371b293 has its CatchHandler @ 0361b29c */
                    /* try { // try from 0361b294 to 0371b2cb has its CatchHandler @ 0361b000 */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EKCGNICFDEO>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b290 with catch @ 0361b29c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b288 with catch @ 0361b2a0
                        */
    FUN_01bab630(&Google_Protobuf_MessageParser<EKCGNICFDEO>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b1ac with catch @ 0361b2a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b284 with catch @ 0361b2a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b1c0 with catch @ 0361b2ac
                        */
    FUN_01bab630(&Method_EKCGNICFDEO_<>c_AFJKCJDOFEL__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b140 with catch @ 0361b2b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b0e4 with catch @ 0361b2b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b1c8 with catch @ 0361b2b8
                        */
    FUN_01bab630(&EKCGNICFDEO_<>c_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361b27c with catch @ 0361b2bc
                        */
    DAT_04568980 = 1;
  }
                    /* try { // try from 0361b2cc to 0371b2cf has its CatchHandler @ 0361b2e0 */
                    /* catch() { ... } // from try @ 0361b2cc with catch @ 0361b2e0 */
                    /* try { // try from 0361b2e8 to 0371b34f has its CatchHandler @ 0361b364 */
  if ((EKCGNICFDEO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EKCGNICFDEO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EKCGNICFDEO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EKCGNICFDEO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EKCGNICFDEO>__ctor__);
  EKCGNICFDEO_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 0361b350 to 0371b35b has its CatchHandler @ 0361b000 */
                    /* try { // try from 0361b35c to 0371b363 has its CatchHandler @ 0361b364 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361b2e8 with catch @ 0361b364
                       catch(type#2 @ 00000000) { ... } // from try @ 0361b35c with catch @ 0361b364
                        */
  thunk_FUN_01c20e04(EKCGNICFDEO_TypeInfo->static_fields,__this);
  return;
}

