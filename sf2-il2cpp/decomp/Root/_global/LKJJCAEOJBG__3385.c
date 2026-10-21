// TypeDefIndex 3385
// Namespace: 
// public sealed class LKJJCAEOJBG : IMessage<LKJJCAEOJBG>, IMessage, IEquatable<LKJJCAEOJBG>, IDeepCloneable<LKJJCAEOJBG>
// Fields:
//   private static readonly MessageParser<LKJJCAEOJBG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int PNPGJIBHDPF = 1;
//   private long MKGNDFBBANC; // 0x18
//   public const int GDBFCDFOIPH = 2;
//   private KCFAKHLDKJM IGBAAAHPLAA; // 0x20

// ===== public void MergeFrom(LKJJCAEOJBG IBKIPBJJCPG)  [RVA 0x3541BE0]
// LKJJCAEOJBG$$MergeFrom @ RVA 0x3541BE0

void LKJJCAEOJBG__MergeFrom(LKJJCAEOJBG_o *__this,LKJJCAEOJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  LKJJCAEOJBG_Fields *pLVar4;
  
  if (IBKIPBJJCPG != (LKJJCAEOJBG_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar3 != 0) {
      (__this->fields).MKGNDFBBANC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    if (iVar1 != 0) {
      (__this->fields).IGBAAAHPLAA = iVar1;
    }
    pLVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pLVar4,pGVar2);
    return;
  }
  return;
}


// ===== public override string ToString()  [RVA 0x3541C2C]
// LKJJCAEOJBG$$ToString @ RVA 0x3541C2C

System_String_o * LKJJCAEOJBG__ToString(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568af9 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568af9 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3541C84]
// LKJJCAEOJBG$$GetHashCode @ RVA 0x3541C84

int32_t LKJJCAEOJBG__GetHashCode(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar5 = (__this->fields).MKGNDFBBANC;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).IGBAAAHPLAA;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
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


// ===== public void DPNGBFACKOL(long CJNHFNHJHPE)  [RVA 0x3541D04]
// LKJJCAEOJBG$$DPNGBFACKOL @ RVA 0x3541D04

void LKJJCAEOJBG__DPNGBFACKOL(LKJJCAEOJBG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MKGNDFBBANC = CJNHFNHJHPE;
  return;
}


// ===== public long PACDGHACPFJ()  [RVA 0x3541D0C]
// LKJJCAEOJBG$$PACDGHACPFJ @ RVA 0x3541D0C

int64_t LKJJCAEOJBG__PACDGHACPFJ(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  return (__this->fields).MKGNDFBBANC;
}


// ===== public KCFAKHLDKJM EIDMKPDFEJM()  [RVA 0x3541D14]
// LKJJCAEOJBG$$EIDMKPDFEJM @ RVA 0x3541D14

int32_t LKJJCAEOJBG__EIDMKPDFEJM(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  return (__this->fields).IGBAAAHPLAA;
}


// ===== public void OEPCNHDIKJH(KCFAKHLDKJM CJNHFNHJHPE)  [RVA 0x3541D1C]
// LKJJCAEOJBG$$OEPCNHDIKJH @ RVA 0x3541D1C

void LKJJCAEOJBG__OEPCNHDIKJH(LKJJCAEOJBG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IGBAAAHPLAA = CJNHFNHJHPE;
  return;
}


// ===== public bool Equals(LKJJCAEOJBG IBKIPBJJCPG)  [RVA 0x3541D24]
// LKJJCAEOJBG$$Equals @ RVA 0x3541D24

bool LKJJCAEOJBG__Equals(LKJJCAEOJBG_o *__this,LKJJCAEOJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LKJJCAEOJBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC) &&
       ((__this->fields).IGBAAAHPLAA == (IBKIPBJJCPG->fields).IGBAAAHPLAA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public LKJJCAEOJBG Clone()  [RVA 0x3541D70]
// LKJJCAEOJBG$$Clone @ RVA 0x3541D70

LKJJCAEOJBG_o * LKJJCAEOJBG__Clone(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  LKJJCAEOJBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568afa & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afa = 1;
    method = extraout_x1;
  }
  __this_00 = (LKJJCAEOJBG_o *)thunk_FUN_01bda818(LKJJCAEOJBG_TypeInfo,method);
  LKJJCAEOJBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3541E1C]
// LKJJCAEOJBG$$Equals @ RVA 0x3541E1C

bool LKJJCAEOJBG__Equals(LKJJCAEOJBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568afb & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LKJJCAEOJBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LKJJCAEOJBG__Equals(__this,(LKJJCAEOJBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(LKJJCAEOJBG IBKIPBJJCPG)  [RVA 0x3541DC8]
// LKJJCAEOJBG$$.ctor @ RVA 0x3541DC8

void LKJJCAEOJBG___ctor(LKJJCAEOJBG_o *__this,LKJJCAEOJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (LKJJCAEOJBG_o *)0x0) {
    (__this->fields).MKGNDFBBANC = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    (__this->fields).IGBAAAHPLAA = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3541E80]
// LKJJCAEOJBG$$.ctor @ RVA 0x3541E80

void LKJJCAEOJBG___ctor(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3541E88]
// LKJJCAEOJBG$$MergeFrom @ RVA 0x3541E88

void LKJJCAEOJBG__MergeFrom
               (LKJJCAEOJBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  LKJJCAEOJBG_Fields *pLVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pLVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).MKGNDFBBANC = iVar5;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IGBAAAHPLAA = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pLVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pLVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pLVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<LKJJCAEOJBG> PGCAHPDCJBC()  [RVA 0x3541F1C]
// LKJJCAEOJBG$$PGCAHPDCJBC @ RVA 0x3541F1C

Google_Protobuf_MessageParser_LKJJCAEOJBG__o * LKJJCAEOJBG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568afc & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afc = 1;
  }
  if ((LKJJCAEOJBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LKJJCAEOJBG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3541F74]
// LKJJCAEOJBG$$FFHIHGCDGAK @ RVA 0x3541F74

Google_Protobuf_Reflection_MessageDescriptor_o * LKJJCAEOJBG__FFHIHGCDGAK(MethodInfo *method)

{
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar2;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar3;
  
  if ((DAT_04568afd & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568afd = 1;
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
  pGVar2 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar2 != (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) &&
     (pSVar3 = (pGVar2->fields)._MessageTypes_k__BackingField,
     pSVar3 != (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Reflection_MessageDescriptor_o *)FUN_03f936c0(pSVar3->klass);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3542078]
// LKJJCAEOJBG$$WriteTo @ RVA 0x3542078

void LKJJCAEOJBG__WriteTo
               (LKJJCAEOJBG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MKGNDFBBANC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03642108;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).MKGNDFBBANC,(MethodInfo *)0x0);
  }
  if ((__this->fields).IGBAAAHPLAA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03642108:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).IGBAAAHPLAA,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x354210C]
// LKJJCAEOJBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x354210C

Google_Protobuf_Reflection_MessageDescriptor_o *
LKJJCAEOJBG__pb__Google_Protobuf_IMessage_get_Descriptor(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  LKJJCAEOJBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568afe & 1) == 0) {
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    DAT_04568afe = 1;
    method = extraout_x1;
  }
  method_00 = LKJJCAEOJBG_TypeInfo;
  if ((LKJJCAEOJBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LKJJCAEOJBG_c *)thunk_FUN_01ba7564(LKJJCAEOJBG_TypeInfo,method);
  }
  pGVar1 = LKJJCAEOJBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x3542158]
// LKJJCAEOJBG$$.cctor @ RVA 0x3542158

void LKJJCAEOJBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LKJJCAEOJBG__o *__this;
  
  if ((DAT_04568aff & 1) == 0) {
    FUN_01bab630(&System_Func<LKJJCAEOJBG>_TypeInfo);
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LKJJCAEOJBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LKJJCAEOJBG>_TypeInfo);
    FUN_01bab630(&Method_LKJJCAEOJBG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&LKJJCAEOJBG_<>c_TypeInfo);
    DAT_04568aff = 1;
  }
  if ((LKJJCAEOJBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LKJJCAEOJBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LKJJCAEOJBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LKJJCAEOJBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LKJJCAEOJBG>__ctor__);
  LKJJCAEOJBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LKJJCAEOJBG_TypeInfo->static_fields,__this);
  return;
}


// ===== public int CalculateSize()  [RVA 0x3542270]
// LKJJCAEOJBG$$CalculateSize @ RVA 0x3542270

int32_t LKJJCAEOJBG__CalculateSize(LKJJCAEOJBG_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  
  if ((DAT_04568b00 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568b00 = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).MKGNDFBBANC;
  iVar2 = 0;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value = (__this->fields).IGBAAAHPLAA;
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

