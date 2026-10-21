// TypeDefIndex 1882
// Namespace: 
// public sealed class ICPMLKOEANF : IMessage<ICPMLKOEANF>, IMessage, IEquatable<ICPMLKOEANF>, IDeepCloneable<ICPMLKOEANF>
// Fields:
//   private static readonly MessageParser<ICPMLKOEANF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DENAGDCDHOL = 1;
//   private long OHMDCKEDOGH; // 0x18
//   public const int DJDODJFOFMH = 2;
//   private int NLLKMEMKBAF; // 0x20

// ===== public void MergeFrom(ICPMLKOEANF IBKIPBJJCPG)  [RVA 0x32508B0]
// ICPMLKOEANF$$MergeFrom @ RVA 0x32508B0

void ICPMLKOEANF__MergeFrom(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  ICPMLKOEANF_Fields *pIVar4;
  
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    if (lVar3 != 0) {
      (__this->fields).OHMDCKEDOGH = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    pIVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pIVar4,pGVar2);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x32508FC]
// ICPMLKOEANF$$.cctor @ RVA 0x32508FC

void ICPMLKOEANF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ICPMLKOEANF__o *__this;
  
  if ((DAT_04567127 & 1) == 0) {
    FUN_01bab630(&System_Func<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&Method_ICPMLKOEANF_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&ICPMLKOEANF_<>c_TypeInfo);
    DAT_04567127 = 1;
  }
  if ((ICPMLKOEANF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ICPMLKOEANF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ICPMLKOEANF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ICPMLKOEANF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ICPMLKOEANF>__ctor__);
  ICPMLKOEANF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ICPMLKOEANF_TypeInfo->static_fields,__this);
  return;
}


// ===== public bool Equals(ICPMLKOEANF IBKIPBJJCPG)  [RVA 0x3250A14]
// ICPMLKOEANF$$Equals @ RVA 0x3250A14

bool ICPMLKOEANF__Equals(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
       ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public ICPMLKOEANF Clone()  [RVA 0x3250A60]
// ICPMLKOEANF$$Clone @ RVA 0x3250A60

ICPMLKOEANF_o * ICPMLKOEANF__Clone(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  ICPMLKOEANF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567128 & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_04567128 = 1;
    method = extraout_x1;
  }
  __this_00 = (ICPMLKOEANF_o *)thunk_FUN_01bda818(ICPMLKOEANF_TypeInfo,method);
  ICPMLKOEANF___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor(ICPMLKOEANF IBKIPBJJCPG)  [RVA 0x3250AB8]
// ICPMLKOEANF$$.ctor @ RVA 0x3250AB8

void ICPMLKOEANF___ctor(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    (__this->fields).NLLKMEMKBAF = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3250B14]
// ICPMLKOEANF$$FFHIHGCDGAK @ RVA 0x3250B14

Google_Protobuf_Reflection_MessageDescriptor_o * ICPMLKOEANF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567129 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567129 = 1;
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
        goto LAB_03350bfc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03350bfc:
                    /* WARNING: Could not recover jumptable at 0x03350c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x16,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3250C18]
// ICPMLKOEANF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3250C18

Google_Protobuf_Reflection_MessageDescriptor_o *
ICPMLKOEANF__pb__Google_Protobuf_IMessage_get_Descriptor(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  ICPMLKOEANF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456712a & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_0456712a = 1;
    method = extraout_x1;
  }
  method_00 = ICPMLKOEANF_TypeInfo;
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ICPMLKOEANF_c *)thunk_FUN_01ba7564(ICPMLKOEANF_TypeInfo,method);
  }
  pGVar1 = ICPMLKOEANF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void OFJLHAKNDGH(int CJNHFNHJHPE)  [RVA 0x3250C64]
// ICPMLKOEANF$$OFJLHAKNDGH @ RVA 0x3250C64

void ICPMLKOEANF__OFJLHAKNDGH(ICPMLKOEANF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NLLKMEMKBAF = CJNHFNHJHPE;
  return;
}


// ===== public override int GetHashCode()  [RVA 0x3250C6C]
// ICPMLKOEANF$$GetHashCode @ RVA 0x3250C6C

int32_t ICPMLKOEANF__GetHashCode(ICPMLKOEANF_o *__this,MethodInfo *method)

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
  lVar5 = (__this->fields).OHMDCKEDOGH;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).NLLKMEMKBAF;
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


// ===== public static MessageParser<ICPMLKOEANF> PGCAHPDCJBC()  [RVA 0x3250CEC]
// ICPMLKOEANF$$PGCAHPDCJBC @ RVA 0x3250CEC

Google_Protobuf_MessageParser_ICPMLKOEANF__o * ICPMLKOEANF__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456712b & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_0456712b = 1;
  }
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ICPMLKOEANF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public long NOJELIALAIO()  [RVA 0x3250D44]
// ICPMLKOEANF$$NOJELIALAIO @ RVA 0x3250D44

int64_t ICPMLKOEANF__NOJELIALAIO(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  return (__this->fields).OHMDCKEDOGH;
}


// ===== public void PEMJOKFFAMO(long CJNHFNHJHPE)  [RVA 0x3250D4C]
// ICPMLKOEANF$$PEMJOKFFAMO @ RVA 0x3250D4C

void ICPMLKOEANF__PEMJOKFFAMO(ICPMLKOEANF_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OHMDCKEDOGH = CJNHFNHJHPE;
  return;
}


// ===== public int DENKJCBILMC()  [RVA 0x3250D54]
// ICPMLKOEANF$$DENKJCBILMC @ RVA 0x3250D54

int32_t ICPMLKOEANF__DENKJCBILMC(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  return (__this->fields).NLLKMEMKBAF;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3250D5C]
// ICPMLKOEANF$$MergeFrom @ RVA 0x3250D5C

void ICPMLKOEANF__MergeFrom
               (ICPMLKOEANF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ICPMLKOEANF_Fields *pIVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pIVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OHMDCKEDOGH = iVar5;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).NLLKMEMKBAF = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pIVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pIVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3250DF0]
// ICPMLKOEANF$$WriteTo @ RVA 0x3250DF0

void ICPMLKOEANF__WriteTo
               (ICPMLKOEANF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).OHMDCKEDOGH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03350e80;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
  }
  if ((__this->fields).NLLKMEMKBAF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03350e80:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3250E84]
// ICPMLKOEANF$$Equals @ RVA 0x3250E84

bool ICPMLKOEANF__Equals(ICPMLKOEANF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456712c & 1) == 0) {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_0456712c = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ICPMLKOEANF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ICPMLKOEANF__Equals(__this,(ICPMLKOEANF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public int CalculateSize()  [RVA 0x3250EE8]
// ICPMLKOEANF$$CalculateSize @ RVA 0x3250EE8

int32_t ICPMLKOEANF__CalculateSize(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  
  if ((DAT_0456712d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_0456712d = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).OHMDCKEDOGH;
  iVar2 = 0;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value = (__this->fields).NLLKMEMKBAF;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x3250B0C]
// ICPMLKOEANF$$.ctor @ RVA 0x3250B0C

void ICPMLKOEANF___ctor(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override string ToString()  [RVA 0x3250F9C]
// ICPMLKOEANF$$ToString @ RVA 0x3250F9C

System_String_o * ICPMLKOEANF__ToString(ICPMLKOEANF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456712e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456712e = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

