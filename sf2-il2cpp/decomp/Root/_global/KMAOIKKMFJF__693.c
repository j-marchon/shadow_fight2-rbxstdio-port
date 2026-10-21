// TypeDefIndex 693
// Namespace: 
// public sealed class KMAOIKKMFJF : IMessage<KMAOIKKMFJF>, IMessage, IEquatable<KMAOIKKMFJF>, IDeepCloneable<KMAOIKKMFJF>
// Fields:
//   private static readonly MessageParser<KMAOIKKMFJF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int AKOKFEAGBID = 1;
//   private DLIONECMCGE CMKMIFIIGBK; // 0x18
//   public const int DAIPHMMHPLH = 2;
//   private long ANAJGHJEEOC; // 0x20

// ===== public long LFELHKJPDHA()  [RVA 0x3032990]
// KMAOIKKMFJF$$LFELHKJPDHA @ RVA 0x3032990

int64_t KMAOIKKMFJF__LFELHKJPDHA(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  return (__this->fields).ANAJGHJEEOC;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3032998]
// KMAOIKKMFJF$$FFHIHGCDGAK @ RVA 0x3032998

Google_Protobuf_Reflection_MessageDescriptor_o * KMAOIKKMFJF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565d11 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565d11 = 1;
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
        goto LAB_03132a80;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03132a80:
                    /* WARNING: Could not recover jumptable at 0x03132a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0xc,pVVar2->method);
  return pGVar3;
}


// ===== public static MessageParser<KMAOIKKMFJF> PGCAHPDCJBC()  [RVA 0x3032A9C]
// KMAOIKKMFJF$$PGCAHPDCJBC @ RVA 0x3032A9C

Google_Protobuf_MessageParser_KMAOIKKMFJF__o * KMAOIKKMFJF__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565d12 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d12 = 1;
  }
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KMAOIKKMFJF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3032AF4]
// KMAOIKKMFJF$$MergeFrom @ RVA 0x3032AF4

void KMAOIKKMFJF__MergeFrom
               (KMAOIKKMFJF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KMAOIKKMFJF_Fields *pKVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CMKMIFIIGBK = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).ANAJGHJEEOC = iVar5;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pKVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(KMAOIKKMFJF IBKIPBJJCPG)  [RVA 0x3032B88]
// KMAOIKKMFJF$$Equals @ RVA 0x3032B88

bool KMAOIKKMFJF__Equals(KMAOIKKMFJF_o *__this,KMAOIKKMFJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KMAOIKKMFJF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).CMKMIFIIGBK == (IBKIPBJJCPG->fields).CMKMIFIIGBK) &&
       ((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void .ctor(KMAOIKKMFJF IBKIPBJJCPG)  [RVA 0x3032BD4]
// KMAOIKKMFJF$$.ctor @ RVA 0x3032BD4

void KMAOIKKMFJF___ctor(KMAOIKKMFJF_o *__this,KMAOIKKMFJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KMAOIKKMFJF_o *)0x0) {
    (__this->fields).CMKMIFIIGBK = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EHMLCEKLCDD(long CJNHFNHJHPE)  [RVA 0x3032C30]
// KMAOIKKMFJF$$EHMLCEKLCDD @ RVA 0x3032C30

void KMAOIKKMFJF__EHMLCEKLCDD(KMAOIKKMFJF_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ANAJGHJEEOC = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3032C38]
// KMAOIKKMFJF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3032C38

Google_Protobuf_Reflection_MessageDescriptor_o *
KMAOIKKMFJF__pb__Google_Protobuf_IMessage_get_Descriptor(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  KMAOIKKMFJF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d13 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d13 = 1;
    method = extraout_x1;
  }
  method_00 = KMAOIKKMFJF_TypeInfo;
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KMAOIKKMFJF_c *)thunk_FUN_01ba7564(KMAOIKKMFJF_TypeInfo,method);
  }
  pGVar1 = KMAOIKKMFJF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3032C84]
// KMAOIKKMFJF$$WriteTo @ RVA 0x3032C84

void KMAOIKKMFJF__WriteTo
               (KMAOIKKMFJF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).CMKMIFIIGBK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03132d14;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).CMKMIFIIGBK,(MethodInfo *)0x0);
  }
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03132d14:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x3032D18]
// KMAOIKKMFJF$$.cctor @ RVA 0x3032D18

void KMAOIKKMFJF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KMAOIKKMFJF__o *__this;
  
  if ((DAT_04565d14 & 1) == 0) {
    FUN_01bab630(&System_Func<KMAOIKKMFJF>_TypeInfo);
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KMAOIKKMFJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KMAOIKKMFJF>_TypeInfo);
    FUN_01bab630(&Method_KMAOIKKMFJF_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&KMAOIKKMFJF_<>c_TypeInfo);
    DAT_04565d14 = 1;
  }
  if ((KMAOIKKMFJF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KMAOIKKMFJF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KMAOIKKMFJF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KMAOIKKMFJF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KMAOIKKMFJF>__ctor__);
  KMAOIKKMFJF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KMAOIKKMFJF_TypeInfo->static_fields,__this);
  return;
}


// ===== public int CalculateSize()  [RVA 0x3032E30]
// KMAOIKKMFJF$$CalculateSize @ RVA 0x3032E30

int32_t KMAOIKKMFJF__CalculateSize(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  
  if ((DAT_04565d15 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04565d15 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).CMKMIFIIGBK;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).ANAJGHJEEOC;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3032EE4]
// KMAOIKKMFJF$$Equals @ RVA 0x3032EE4

bool KMAOIKKMFJF__Equals(KMAOIKKMFJF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565d16 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d16 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KMAOIKKMFJF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KMAOIKKMFJF__Equals(__this,(KMAOIKKMFJF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3032F48]
// KMAOIKKMFJF$$GetHashCode @ RVA 0x3032F48

int32_t KMAOIKKMFJF__GetHashCode(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  iVar1 = (__this->fields).CMKMIFIIGBK;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  lVar5 = (__this->fields).ANAJGHJEEOC;
  if (lVar5 != 0) {
    local_28 = lVar5;
    uVar3 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
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


// ===== public KMAOIKKMFJF Clone()  [RVA 0x3032FC8]
// KMAOIKKMFJF$$Clone @ RVA 0x3032FC8

KMAOIKKMFJF_o * KMAOIKKMFJF__Clone(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  KMAOIKKMFJF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565d17 & 1) == 0) {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04565d17 = 1;
    method = extraout_x1;
  }
  __this_00 = (KMAOIKKMFJF_o *)thunk_FUN_01bda818(KMAOIKKMFJF_TypeInfo,method);
  KMAOIKKMFJF___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x3032C28]
// KMAOIKKMFJF$$.ctor @ RVA 0x3032C28

void KMAOIKKMFJF___ctor(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(KMAOIKKMFJF IBKIPBJJCPG)  [RVA 0x3033020]
// KMAOIKKMFJF$$MergeFrom @ RVA 0x3033020

void KMAOIKKMFJF__MergeFrom(KMAOIKKMFJF_o *__this,KMAOIKKMFJF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  KMAOIKKMFJF_Fields *pKVar4;
  
  if (IBKIPBJJCPG != (KMAOIKKMFJF_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).CMKMIFIIGBK;
    if (iVar1 != 0) {
      (__this->fields).CMKMIFIIGBK = iVar1;
    }
    lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar3 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar3;
    }
    pKVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar4,pGVar2);
    return;
  }
  return;
}


// ===== public void EKDHEGGGAAP(DLIONECMCGE CJNHFNHJHPE)  [RVA 0x303306C]
// KMAOIKKMFJF$$EKDHEGGGAAP @ RVA 0x303306C

void KMAOIKKMFJF__EKDHEGGGAAP(KMAOIKKMFJF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CMKMIFIIGBK = CJNHFNHJHPE;
  return;
}


// ===== public DLIONECMCGE CAOLPHNPFPJ()  [RVA 0x3033074]
// KMAOIKKMFJF$$CAOLPHNPFPJ @ RVA 0x3033074

int32_t KMAOIKKMFJF__CAOLPHNPFPJ(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  return (__this->fields).CMKMIFIIGBK;
}


// ===== public override string ToString()  [RVA 0x303307C]
// KMAOIKKMFJF$$ToString @ RVA 0x303307C

System_String_o * KMAOIKKMFJF__ToString(KMAOIKKMFJF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d18 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565d18 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

