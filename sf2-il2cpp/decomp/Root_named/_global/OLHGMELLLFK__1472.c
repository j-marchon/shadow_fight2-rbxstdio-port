// TypeDefIndex 1472
// Namespace: 
// public sealed class OLHGMELLLFK : IMessage<OLHGMELLLFK>, IMessage, IEquatable<OLHGMELLLFK>, IDeepCloneable<OLHGMELLLFK>
// Fields:
//   private static readonly MessageParser<OLHGMELLLFK> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JBPEEAOBBBD = 1;
//   private ByteString OACFBJNMHCM; // 0x18

// ===== public int CalculateSize()  [RVA 0x3194A90]
// OLHGMELLLFK$$CalculateSize @ RVA 0x3194A90

int32_t OLHGMELLLFK__CalculateSize(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_04566a5b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566a5b = 1;
    method = extraout_x1;
  }
  pGVar2 = (__this->fields).OACFBJNMHCM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      pGVar2 = (__this->fields).OACFBJNMHCM;
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
  FUN_01bab8c8(0,method);
}


// ===== public void BGOOPIDKJEC(ByteString CJNHFNHJHPE)  [RVA 0x3194B2C]
// OLHGMELLLFK$$BGOOPIDKJEC @ RVA 0x3194B2C

void OLHGMELLLFK__BGOOPIDKJEC
               (OLHGMELLLFK_o *__this,Google_Protobuf_ByteString_o *CJNHFNHJHPE,MethodInfo *method)

{
  Google_Protobuf_ByteString_o *pGVar1;
  Google_Protobuf_ByteString_o **ppGVar2;
  
  if ((DAT_04566a5c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04566a5c = 1;
  }
  pGVar1 = (Google_Protobuf_ByteString_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
  ppGVar2 = &(__this->fields).OACFBJNMHCM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x3194BA8]
// OLHGMELLLFK$$GetHashCode @ RVA 0x3194BA8

int32_t OLHGMELLLFK__GetHashCode(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_ByteString_o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pGVar4 = (__this->fields).OACFBJNMHCM;
  if (pGVar4 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar4,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      pGVar4 = (__this->fields).OACFBJNMHCM;
      if (pGVar4 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_03294c10;
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
LAB_03294c10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<OLHGMELLLFK> PGCAHPDCJBC()  [RVA 0x3194C14]
// OLHGMELLLFK$$PGCAHPDCJBC @ RVA 0x3194C14

Google_Protobuf_MessageParser_OLHGMELLLFK__o * OLHGMELLLFK__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566a5d & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a5d = 1;
  }
  if ((OLHGMELLLFK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OLHGMELLLFK_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool Equals(OLHGMELLLFK IBKIPBJJCPG)  [RVA 0x3194C6C]
// OLHGMELLLFK$$Equals @ RVA 0x3194C6C

bool OLHGMELLLFK__Equals(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_04566a5e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04566a5e = 1;
  }
  if (IBKIPBJJCPG != (OLHGMELLLFK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    lhs = (__this->fields).OACFBJNMHCM;
    rhs = (IBKIPBJJCPG->fields).OACFBJNMHCM;
    if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3194D18]
// OLHGMELLLFK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3194D18

Google_Protobuf_Reflection_MessageDescriptor_o *
OLHGMELLLFK__pb__Google_Protobuf_IMessage_get_Descriptor(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  OLHGMELLLFK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a5f & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a5f = 1;
    method = extraout_x1;
  }
  method_00 = OLHGMELLLFK_TypeInfo;
  if ((OLHGMELLLFK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OLHGMELLLFK_c *)thunk_FUN_01ba7564(OLHGMELLLFK_TypeInfo,method);
  }
  pGVar1 = OLHGMELLLFK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override string ToString()  [RVA 0x3194E68]
// OLHGMELLLFK$$ToString @ RVA 0x3194E68

System_String_o * OLHGMELLLFK__ToString(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a60 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566a60 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3194EC0]
// OLHGMELLLFK$$Equals @ RVA 0x3194EC0

bool OLHGMELLLFK__Equals(OLHGMELLLFK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566a61 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a61 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OLHGMELLLFK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OLHGMELLLFK__Equals(__this,(OLHGMELLLFK_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public ByteString OJJBAMBHIJC()  [RVA 0x3194F24]
// OLHGMELLLFK$$OJJBAMBHIJC @ RVA 0x3194F24

Google_Protobuf_ByteString_o * OLHGMELLLFK__OJJBAMBHIJC(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  return (__this->fields).OACFBJNMHCM;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3194D64]
// OLHGMELLLFK$$FFHIHGCDGAK @ RVA 0x3194D64

Google_Protobuf_Reflection_MessageDescriptor_o * OLHGMELLLFK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566a62 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566a62 = 1;
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
        goto LAB_03294e4c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03294e4c:
                    /* WARNING: Could not recover jumptable at 0x03294e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,10,pVVar2->method);
  return pGVar3;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3194F2C]
// OLHGMELLLFK$$WriteTo @ RVA 0x3194F2C

void OLHGMELLLFK__WriteTo
               (OLHGMELLLFK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  
  __this_00 = (__this->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03294f9c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).OACFBJNMHCM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03294f9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OLHGMELLLFK Clone()  [RVA 0x3194FA0]
// OLHGMELLLFK$$Clone @ RVA 0x3194FA0

OLHGMELLLFK_o * OLHGMELLLFK__Clone(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  OLHGMELLLFK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566a63 & 1) == 0) {
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    DAT_04566a63 = 1;
    method = extraout_x1;
  }
  __this_00 = (OLHGMELLLFK_o *)thunk_FUN_01bda818(OLHGMELLLFK_TypeInfo,method);
  OLHGMELLLFK___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x3195048]
// OLHGMELLLFK$$.cctor @ RVA 0x3195048

void OLHGMELLLFK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OLHGMELLLFK__o *__this;
  
  if ((DAT_04566a64 & 1) == 0) {
    FUN_01bab630(&System_Func<OLHGMELLLFK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OLHGMELLLFK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OLHGMELLLFK>_TypeInfo);
    FUN_01bab630(&OLHGMELLLFK_TypeInfo);
    FUN_01bab630(&Method_OLHGMELLLFK_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&OLHGMELLLFK_<>c_TypeInfo);
    DAT_04566a64 = 1;
  }
  if ((OLHGMELLLFK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OLHGMELLLFK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OLHGMELLLFK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OLHGMELLLFK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OLHGMELLLFK>__ctor__);
  OLHGMELLLFK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OLHGMELLLFK_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(OLHGMELLLFK IBKIPBJJCPG)  [RVA 0x3195160]
// OLHGMELLLFK$$MergeFrom @ RVA 0x3195160

void OLHGMELLLFK__MergeFrom(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OLHGMELLLFK_Fields *pOVar3;
  
  if (IBKIPBJJCPG == (OLHGMELLLFK_o *)0x0) {
    return;
  }
  __this_00 = (IBKIPBJJCPG->fields).OACFBJNMHCM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      OLHGMELLLFK__BGOOPIDKJEC(__this,(IBKIPBJJCPG->fields).OACFBJNMHCM,method);
    }
    pOVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pOVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pOVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(OLHGMELLLFK IBKIPBJJCPG)  [RVA 0x3194FF8]
// OLHGMELLLFK$$.ctor @ RVA 0x3194FF8

void OLHGMELLLFK___ctor(OLHGMELLLFK_o *__this,OLHGMELLLFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  OLHGMELLLFK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (OLHGMELLLFK_o *)0x0) {
    (__this->fields).OACFBJNMHCM = (IBKIPBJJCPG->fields).OACFBJNMHCM;
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


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x319526C]
// OLHGMELLLFK$$MergeFrom @ RVA 0x319526C

void OLHGMELLLFK__MergeFrom
               (OLHGMELLLFK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OLHGMELLLFK_Fields *pOVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pOVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 10) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes(AIGOBLJEBCA,(MethodInfo *)0x0);
        OLHGMELLLFK__BGOOPIDKJEC(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pOVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pOVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pOVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31951CC]
// OLHGMELLLFK$$.ctor @ RVA 0x31951CC

void OLHGMELLLFK___ctor(OLHGMELLLFK_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04566a65 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04566a65 = 1;
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
  (__this->fields).OACFBJNMHCM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

