// TypeDefIndex 759
// Namespace: 
// public sealed class EIBAKHBHMAO : IMessage<EIBAKHBHMAO>, IMessage, IEquatable<EIBAKHBHMAO>, IDeepCloneable<EIBAKHBHMAO>
// Fields:
//   private static readonly MessageParser<EIBAKHBHMAO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KBFHJCMJINK = 1;
//   private CKLIGNAPKFO EMDNDLOODLG; // 0x18
//   public const int IOOPJPGOKNL = 2;
//   private long FMNDJOFNPBP; // 0x20

// ===== public void .ctor(EIBAKHBHMAO IBKIPBJJCPG)  [RVA 0x304F4B4]
// EIBAKHBHMAO$$.ctor @ RVA 0x304F4B4

void EIBAKHBHMAO___ctor(EIBAKHBHMAO_o *__this,EIBAKHBHMAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EIBAKHBHMAO_o *)0x0) {
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).FMNDJOFNPBP = (IBKIPBJJCPG->fields).FMNDJOFNPBP;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x304F510]
// EIBAKHBHMAO$$Equals @ RVA 0x304F510

bool EIBAKHBHMAO__Equals(EIBAKHBHMAO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565e39 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e39 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EIBAKHBHMAO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EIBAKHBHMAO__Equals(__this,(EIBAKHBHMAO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override string ToString()  [RVA 0x304F5C0]
// EIBAKHBHMAO$$ToString @ RVA 0x304F5C0

System_String_o * EIBAKHBHMAO__ToString(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e3a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565e3a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(EIBAKHBHMAO IBKIPBJJCPG)  [RVA 0x304F618]
// EIBAKHBHMAO$$MergeFrom @ RVA 0x304F618

void EIBAKHBHMAO__MergeFrom(EIBAKHBHMAO_o *__this,EIBAKHBHMAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  EIBAKHBHMAO_Fields *pEVar4;
  
  if (IBKIPBJJCPG != (EIBAKHBHMAO_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    lVar3 = (IBKIPBJJCPG->fields).FMNDJOFNPBP;
    if (lVar3 != 0) {
      (__this->fields).FMNDJOFNPBP = lVar3;
    }
    pEVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pEVar4,pGVar2);
    return;
  }
  return;
}


// ===== public override int GetHashCode()  [RVA 0x304F664]
// EIBAKHBHMAO$$GetHashCode @ RVA 0x304F664

int32_t EIBAKHBHMAO__GetHashCode(EIBAKHBHMAO_o *__this,MethodInfo *method)

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
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  lVar5 = (__this->fields).FMNDJOFNPBP;
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


// ===== public bool Equals(EIBAKHBHMAO IBKIPBJJCPG)  [RVA 0x304F574]
// EIBAKHBHMAO$$Equals @ RVA 0x304F574

bool EIBAKHBHMAO__Equals(EIBAKHBHMAO_o *__this,EIBAKHBHMAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EIBAKHBHMAO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
       ((__this->fields).FMNDJOFNPBP == (IBKIPBJJCPG->fields).FMNDJOFNPBP)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x304F6E4]
// EIBAKHBHMAO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x304F6E4

Google_Protobuf_Reflection_MessageDescriptor_o *
EIBAKHBHMAO__pb__Google_Protobuf_IMessage_get_Descriptor(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  EIBAKHBHMAO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e3b & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e3b = 1;
    method = extraout_x1;
  }
  method_00 = EIBAKHBHMAO_TypeInfo;
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EIBAKHBHMAO_c *)thunk_FUN_01ba7564(EIBAKHBHMAO_TypeInfo,method);
  }
  pGVar1 = EIBAKHBHMAO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public long NIOPCIJNKPM()  [RVA 0x304F834]
// EIBAKHBHMAO$$NIOPCIJNKPM @ RVA 0x304F834

int64_t EIBAKHBHMAO__NIOPCIJNKPM(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  return (__this->fields).FMNDJOFNPBP;
}


// ===== public void .ctor()  [RVA 0x304F508]
// EIBAKHBHMAO$$.ctor @ RVA 0x304F508

void EIBAKHBHMAO___ctor(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int CalculateSize()  [RVA 0x304F83C]
// EIBAKHBHMAO$$CalculateSize @ RVA 0x304F83C

int32_t EIBAKHBHMAO__CalculateSize(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  
  if ((DAT_04565e3c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04565e3c = 1;
    method = extraout_x1;
  }
  value = (__this->fields).EMDNDLOODLG;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).FMNDJOFNPBP;
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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x304F730]
// EIBAKHBHMAO$$FFHIHGCDGAK @ RVA 0x304F730

Google_Protobuf_Reflection_MessageDescriptor_o * EIBAKHBHMAO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565e3d & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565e3d = 1;
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
        goto LAB_0314f818;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0314f818:
                    /* WARNING: Could not recover jumptable at 0x0314f82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x18,pVVar2->method);
  return pGVar3;
}


// ===== public static MessageParser<EIBAKHBHMAO> PGCAHPDCJBC()  [RVA 0x304F8F0]
// EIBAKHBHMAO$$PGCAHPDCJBC @ RVA 0x304F8F0

Google_Protobuf_MessageParser_EIBAKHBHMAO__o * EIBAKHBHMAO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565e3e & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e3e = 1;
  }
  if ((EIBAKHBHMAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EIBAKHBHMAO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public CKLIGNAPKFO NHGGBEACKBD()  [RVA 0x304F948]
// EIBAKHBHMAO$$NHGGBEACKBD @ RVA 0x304F948

int32_t EIBAKHBHMAO__NHGGBEACKBD(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDNDLOODLG;
}


// ===== public EIBAKHBHMAO Clone()  [RVA 0x304F950]
// EIBAKHBHMAO$$Clone @ RVA 0x304F950

EIBAKHBHMAO_o * EIBAKHBHMAO__Clone(EIBAKHBHMAO_o *__this,MethodInfo *method)

{
  EIBAKHBHMAO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565e3f & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    DAT_04565e3f = 1;
    method = extraout_x1;
  }
  __this_00 = (EIBAKHBHMAO_o *)thunk_FUN_01bda818(EIBAKHBHMAO_TypeInfo,method);
  EIBAKHBHMAO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x304F9A8]
// EIBAKHBHMAO$$.cctor @ RVA 0x304F9A8

void EIBAKHBHMAO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EIBAKHBHMAO__o *__this;
  
  if ((DAT_04565e40 & 1) == 0) {
    FUN_01bab630(&EIBAKHBHMAO_TypeInfo);
    FUN_01bab630(&System_Func<EIBAKHBHMAO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EIBAKHBHMAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EIBAKHBHMAO>_TypeInfo);
    FUN_01bab630(&Method_EIBAKHBHMAO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EIBAKHBHMAO_<>c_TypeInfo);
    DAT_04565e40 = 1;
  }
  if ((EIBAKHBHMAO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EIBAKHBHMAO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EIBAKHBHMAO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EIBAKHBHMAO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EIBAKHBHMAO>__ctor__);
  EIBAKHBHMAO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EIBAKHBHMAO_TypeInfo->static_fields,__this);
  return;
}


// ===== public void GNLPNKGBAFL(CKLIGNAPKFO CJNHFNHJHPE)  [RVA 0x304FAC0]
// EIBAKHBHMAO$$GNLPNKGBAFL @ RVA 0x304FAC0

void EIBAKHBHMAO__GNLPNKGBAFL(EIBAKHBHMAO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMDNDLOODLG = CJNHFNHJHPE;
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x304FAC8]
// EIBAKHBHMAO$$WriteTo @ RVA 0x304FAC8

void EIBAKHBHMAO__WriteTo
               (EIBAKHBHMAO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314fb58;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  if ((__this->fields).FMNDJOFNPBP != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0314fb58:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).FMNDJOFNPBP,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void ECCECPDGDCM(long CJNHFNHJHPE)  [RVA 0x304FB5C]
// EIBAKHBHMAO$$ECCECPDGDCM @ RVA 0x304FB5C

void EIBAKHBHMAO__ECCECPDGDCM(EIBAKHBHMAO_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FMNDJOFNPBP = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x304FB64]
// EIBAKHBHMAO$$MergeFrom @ RVA 0x304FB64

void EIBAKHBHMAO__MergeFrom
               (EIBAKHBHMAO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EIBAKHBHMAO_Fields *pEVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pEVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMDNDLOODLG = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FMNDJOFNPBP = iVar5;
      }
      if (uVar2 == 0) break;
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

