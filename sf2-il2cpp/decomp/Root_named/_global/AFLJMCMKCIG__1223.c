// TypeDefIndex 1223
// Namespace: 
// public sealed class AFLJMCMKCIG : IMessage<AFLJMCMKCIG>, IMessage, IEquatable<AFLJMCMKCIG>, IDeepCloneable<AFLJMCMKCIG>
// Fields:
//   private static readonly MessageParser<AFLJMCMKCIG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KBFHJCMJINK = 1;
//   private DLIONECMCGE EMDNDLOODLG; // 0x18
//   public const int AHEHJLFKFAF = 2;
//   private string PPDLPBMONBL; // 0x20

// ===== public void MergeFrom(AFLJMCMKCIG IBKIPBJJCPG)  [RVA 0x3132618]
// AFLJMCMKCIG$$MergeFrom @ RVA 0x3132618

void AFLJMCMKCIG__MergeFrom(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  AFLJMCMKCIG_Fields *pAVar3;
  
  if (IBKIPBJJCPG == (AFLJMCMKCIG_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    (__this->fields).EMDNDLOODLG = iVar1;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).PPDLPBMONBL;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      AFLJMCMKCIG__IIKPNGJAJIH(__this,CJNHFNHJHPE,method);
    }
    pAVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pAVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pAVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pAVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3132704]
// AFLJMCMKCIG$$Equals @ RVA 0x3132704

bool AFLJMCMKCIG__Equals(AFLJMCMKCIG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045666d6 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666d6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)AFLJMCMKCIG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = AFLJMCMKCIG__Equals(__this,(AFLJMCMKCIG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<AFLJMCMKCIG> PGCAHPDCJBC()  [RVA 0x31327D8]
// AFLJMCMKCIG$$PGCAHPDCJBC @ RVA 0x31327D8

Google_Protobuf_MessageParser_AFLJMCMKCIG__o * AFLJMCMKCIG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045666d7 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666d7 = 1;
  }
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return AFLJMCMKCIG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3132830]
// AFLJMCMKCIG$$FFHIHGCDGAK @ RVA 0x3132830

Google_Protobuf_Reflection_MessageDescriptor_o * AFLJMCMKCIG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045666d8 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_045666d8 = 1;
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
        goto LAB_03232918;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03232918:
                    /* WARNING: Could not recover jumptable at 0x0323292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0,pVVar2->method);
  return pGVar3;
}


// ===== public override int GetHashCode()  [RVA 0x3132934]
// AFLJMCMKCIG$$GetHashCode @ RVA 0x3132934

int32_t AFLJMCMKCIG__GetHashCode(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
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
  pSVar4 = (__this->fields).PPDLPBMONBL;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
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


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31329B4]
// AFLJMCMKCIG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31329B4

Google_Protobuf_Reflection_MessageDescriptor_o *
AFLJMCMKCIG__pb__Google_Protobuf_IMessage_get_Descriptor(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  AFLJMCMKCIG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666d9 & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666d9 = 1;
    method = extraout_x1;
  }
  method_00 = AFLJMCMKCIG_TypeInfo;
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AFLJMCMKCIG_c *)thunk_FUN_01ba7564(AFLJMCMKCIG_TypeInfo,method);
  }
  pGVar1 = AFLJMCMKCIG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public AFLJMCMKCIG Clone()  [RVA 0x3132A00]
// AFLJMCMKCIG$$Clone @ RVA 0x3132A00

AFLJMCMKCIG_o * AFLJMCMKCIG__Clone(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  AFLJMCMKCIG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045666da & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_045666da = 1;
    method = extraout_x1;
  }
  __this_00 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo,method);
  AFLJMCMKCIG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x3132AB0]
// AFLJMCMKCIG$$.ctor @ RVA 0x3132AB0

void AFLJMCMKCIG___ctor(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  if ((DAT_045666db & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045666db = 1;
  }
  (__this->fields).PPDLPBMONBL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string LFCBPBFLNDA()  [RVA 0x3132B08]
// AFLJMCMKCIG$$LFCBPBFLNDA @ RVA 0x3132B08

System_String_o * AFLJMCMKCIG__LFCBPBFLNDA(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  return (__this->fields).PPDLPBMONBL;
}


// ===== private static void .cctor()  [RVA 0x3132B10]
// AFLJMCMKCIG$$.cctor @ RVA 0x3132B10

void AFLJMCMKCIG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_AFLJMCMKCIG__o *__this;
  
  if ((DAT_045666dc & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&System_Func<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<AFLJMCMKCIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&Method_AFLJMCMKCIG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&AFLJMCMKCIG_<>c_TypeInfo);
    DAT_045666dc = 1;
  }
  if ((AFLJMCMKCIG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<AFLJMCMKCIG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_AFLJMCMKCIG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<AFLJMCMKCIG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<AFLJMCMKCIG>__ctor__);
  AFLJMCMKCIG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(AFLJMCMKCIG_TypeInfo->static_fields,__this);
  return;
}


// ===== public DLIONECMCGE NHGGBEACKBD()  [RVA 0x3132C28]
// AFLJMCMKCIG$$NHGGBEACKBD @ RVA 0x3132C28

int32_t AFLJMCMKCIG__NHGGBEACKBD(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDNDLOODLG;
}


// ===== public override string ToString()  [RVA 0x3132C30]
// AFLJMCMKCIG$$ToString @ RVA 0x3132C30

System_String_o * AFLJMCMKCIG__ToString(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045666dd & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045666dd = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3132C88]
// AFLJMCMKCIG$$WriteTo @ RVA 0x3132C88

void AFLJMCMKCIG__WriteTo
               (AFLJMCMKCIG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03232d20;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).PPDLPBMONBL;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03232d20;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).PPDLPBMONBL,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03232d20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GNLPNKGBAFL(DLIONECMCGE CJNHFNHJHPE)  [RVA 0x3132D24]
// AFLJMCMKCIG$$GNLPNKGBAFL @ RVA 0x3132D24

void AFLJMCMKCIG__GNLPNKGBAFL(AFLJMCMKCIG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMDNDLOODLG = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3132D2C]
// AFLJMCMKCIG$$MergeFrom @ RVA 0x3132D2C

void AFLJMCMKCIG__MergeFrom
               (AFLJMCMKCIG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  AFLJMCMKCIG_Fields *pAVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pAVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMDNDLOODLG = iVar3;
        }
        if (uVar2 != 0x12) break;
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        AFLJMCMKCIG__IIKPNGJAJIH(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pAVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pAVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pAVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IIKPNGJAJIH(string CJNHFNHJHPE)  [RVA 0x3132688]
// AFLJMCMKCIG$$IIKPNGJAJIH @ RVA 0x3132688

void AFLJMCMKCIG__IIKPNGJAJIH(AFLJMCMKCIG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045666de & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045666de = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).PPDLPBMONBL;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public bool Equals(AFLJMCMKCIG IBKIPBJJCPG)  [RVA 0x3132768]
// AFLJMCMKCIG$$Equals @ RVA 0x3132768

bool AFLJMCMKCIG__Equals(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (AFLJMCMKCIG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).PPDLPBMONBL,(IBKIPBJJCPG->fields).PPDLPBMONBL,
                           (MethodInfo *)0x0), !bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void .ctor(AFLJMCMKCIG IBKIPBJJCPG)  [RVA 0x3132A58]
// AFLJMCMKCIG$$.ctor @ RVA 0x3132A58

void AFLJMCMKCIG___ctor(AFLJMCMKCIG_o *__this,AFLJMCMKCIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  AFLJMCMKCIG___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (AFLJMCMKCIG_o *)0x0) {
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).PPDLPBMONBL = (IBKIPBJJCPG->fields).PPDLPBMONBL;
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


// ===== public int CalculateSize()  [RVA 0x3132DC8]
// AFLJMCMKCIG$$CalculateSize @ RVA 0x3132DC8

int32_t AFLJMCMKCIG__CalculateSize(AFLJMCMKCIG_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *value_00;
  
  if ((DAT_045666df & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045666df = 1;
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
  value_00 = (__this->fields).PPDLPBMONBL;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
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
  FUN_01bab8c8();
}

