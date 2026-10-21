// TypeDefIndex 1263
// Namespace: 
// public sealed class FDHCLNDLIDG : IMessage<FDHCLNDLIDG>, IMessage, IEquatable<FDHCLNDLIDG>, IDeepCloneable<FDHCLNDLIDG>
// Fields:
//   private static readonly MessageParser<FDHCLNDLIDG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MFLFBNKPDOH = 1;
//   private string FFOIEHLJLDA; // 0x18

// ===== public void .ctor(FDHCLNDLIDG IBKIPBJJCPG)  [RVA 0x314B160]
// FDHCLNDLIDG$$.ctor @ RVA 0x314B160

void FDHCLNDLIDG___ctor(FDHCLNDLIDG_o *__this,FDHCLNDLIDG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  FDHCLNDLIDG___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (FDHCLNDLIDG_o *)0x0) {
    (__this->fields).FFOIEHLJLDA = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
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


// ===== public FDHCLNDLIDG Clone()  [RVA 0x314B1B0]
// FDHCLNDLIDG$$Clone @ RVA 0x314B1B0

FDHCLNDLIDG_o * FDHCLNDLIDG__Clone(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  FDHCLNDLIDG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667b5 & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667b5 = 1;
    method = extraout_x1;
  }
  __this_00 = (FDHCLNDLIDG_o *)thunk_FUN_01bda818(FDHCLNDLIDG_TypeInfo,method);
  FDHCLNDLIDG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public string BEGDEOJIFOC()  [RVA 0x314B208]
// FDHCLNDLIDG$$BEGDEOJIFOC @ RVA 0x314B208

System_String_o * FDHCLNDLIDG__BEGDEOJIFOC(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  return (__this->fields).FFOIEHLJLDA;
}


// ===== public void GCAEKDKFFKK(string CJNHFNHJHPE)  [RVA 0x3148B98]
// FDHCLNDLIDG$$GCAEKDKFFKK @ RVA 0x3148B98

void FDHCLNDLIDG__GCAEKDKFFKK(FDHCLNDLIDG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045667b6 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045667b6 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).FFOIEHLJLDA;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public override string ToString()  [RVA 0x314B210]
// FDHCLNDLIDG$$ToString @ RVA 0x314B210

System_String_o * FDHCLNDLIDG__ToString(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667b7 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045667b7 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x314B268]
// FDHCLNDLIDG$$CalculateSize @ RVA 0x314B268

int32_t FDHCLNDLIDG__CalculateSize(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045667b8 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045667b8 = 1;
  }
  value = (__this->fields).FFOIEHLJLDA;
  if (value != (System_String_o *)0x0) {
    if ((value->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
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


// ===== public static MessageParser<FDHCLNDLIDG> PGCAHPDCJBC()  [RVA 0x314B2FC]
// FDHCLNDLIDG$$PGCAHPDCJBC @ RVA 0x314B2FC

Google_Protobuf_MessageParser_FDHCLNDLIDG__o * FDHCLNDLIDG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045667b9 & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667b9 = 1;
  }
  if ((FDHCLNDLIDG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FDHCLNDLIDG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool Equals(FDHCLNDLIDG IBKIPBJJCPG)  [RVA 0x314B354]
// FDHCLNDLIDG$$Equals @ RVA 0x314B354

bool FDHCLNDLIDG__Equals(FDHCLNDLIDG_o *__this,FDHCLNDLIDG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FDHCLNDLIDG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).FFOIEHLJLDA,(IBKIPBJJCPG->fields).FFOIEHLJLDA,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x314B3B4]
// FDHCLNDLIDG$$.cctor @ RVA 0x314B3B4

void FDHCLNDLIDG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FDHCLNDLIDG__o *__this;
  
  if ((DAT_045667ba & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    FUN_01bab630(&System_Func<FDHCLNDLIDG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FDHCLNDLIDG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FDHCLNDLIDG>_TypeInfo);
    FUN_01bab630(&Method_FDHCLNDLIDG_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&FDHCLNDLIDG_<>c_TypeInfo);
    DAT_045667ba = 1;
  }
  if ((FDHCLNDLIDG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FDHCLNDLIDG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FDHCLNDLIDG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FDHCLNDLIDG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FDHCLNDLIDG>__ctor__);
  FDHCLNDLIDG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FDHCLNDLIDG_TypeInfo->static_fields,__this);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x314B4CC]
// FDHCLNDLIDG$$FFHIHGCDGAK @ RVA 0x314B4CC

Google_Protobuf_Reflection_MessageDescriptor_o * FDHCLNDLIDG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045667bb & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045667bb = 1;
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
        goto LAB_0324b5b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0324b5b4:
                    /* WARNING: Could not recover jumptable at 0x0324b5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,2,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(FDHCLNDLIDG IBKIPBJJCPG)  [RVA 0x314B5D0]
// FDHCLNDLIDG$$MergeFrom @ RVA 0x314B5D0

void FDHCLNDLIDG__MergeFrom(FDHCLNDLIDG_o *__this,FDHCLNDLIDG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *CJNHFNHJHPE;
  FDHCLNDLIDG_Fields *pFVar2;
  
  if (IBKIPBJJCPG == (FDHCLNDLIDG_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).FFOIEHLJLDA;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      FDHCLNDLIDG__GCAEKDKFFKK(__this,CJNHFNHJHPE,method);
    }
    pFVar2 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pFVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pFVar2->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pFVar2,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x314B634]
// FDHCLNDLIDG$$GetHashCode @ RVA 0x314B634

int32_t FDHCLNDLIDG__GetHashCode(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pSVar3 = (__this->fields).FFOIEHLJLDA;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
    }
    pGVar4 = (__this->fields).CKFPENBPNML;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x314B694]
// FDHCLNDLIDG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314B694

Google_Protobuf_Reflection_MessageDescriptor_o *
FDHCLNDLIDG__pb__Google_Protobuf_IMessage_get_Descriptor(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  FDHCLNDLIDG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667bc & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667bc = 1;
    method = extraout_x1;
  }
  method_00 = FDHCLNDLIDG_TypeInfo;
  if ((FDHCLNDLIDG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FDHCLNDLIDG_c *)thunk_FUN_01ba7564(FDHCLNDLIDG_TypeInfo,method);
  }
  pGVar1 = FDHCLNDLIDG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x314B6E0]
// FDHCLNDLIDG$$WriteTo @ RVA 0x314B6E0

void FDHCLNDLIDG__WriteTo
               (FDHCLNDLIDG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).FFOIEHLJLDA;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0324b74c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).FFOIEHLJLDA,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0324b74c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x314B750]
// FDHCLNDLIDG$$Equals @ RVA 0x314B750

bool FDHCLNDLIDG__Equals(FDHCLNDLIDG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667bd & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667bd = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FDHCLNDLIDG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FDHCLNDLIDG__Equals(__this,(FDHCLNDLIDG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x314B7B4]
// FDHCLNDLIDG$$MergeFrom @ RVA 0x314B7B4

void FDHCLNDLIDG__MergeFrom
               (FDHCLNDLIDG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FDHCLNDLIDG_Fields *pFVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pFVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 10) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        FDHCLNDLIDG__GCAEKDKFFKK(__this,CJNHFNHJHPE,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pFVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pFVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pFVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3148B40]
// FDHCLNDLIDG$$.ctor @ RVA 0x3148B40

void FDHCLNDLIDG___ctor(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  if ((DAT_045667be & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045667be = 1;
  }
  (__this->fields).FFOIEHLJLDA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

