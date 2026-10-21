// TypeDefIndex 1666
// Namespace: 
// public sealed class DBNIPENAEKO : IMessage<DBNIPENAEKO>, IMessage, IEquatable<DBNIPENAEKO>, IDeepCloneable<DBNIPENAEKO>
// Fields:
//   private static readonly MessageParser<DBNIPENAEKO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JKBLHLCCLKF = 1;
//   private int LCAENFFHHEI; // 0x18
//   public const int IGGBHGJAPDM = 2;
//   private AFLJMCMKCIG HBCNHAMIMGF; // 0x20
//   public const int EJJKEBLDIOB = 3;
//   private static readonly FieldCodec<AFLJMCMKCIG> FHPMBCKAFHD; // 0x8
//   private readonly RepeatedField<AFLJMCMKCIG> BMMFCMJLFKN; // 0x28
//   public const int LJGBKIPGEFC = 4;
//   private string BHMHGIBMMMB; // 0x30

// ===== public override string ToString()  [RVA 0x31C88B8]
// DBNIPENAEKO$$ToString @ RVA 0x31C88B8

System_String_o * DBNIPENAEKO__ToString(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c44 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566c44 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void HHAGEFACJOI(AFLJMCMKCIG CJNHFNHJHPE)  [RVA 0x31C8910]
// DBNIPENAEKO$$HHAGEFACJOI @ RVA 0x31C8910

void DBNIPENAEKO__HHAGEFACJOI(DBNIPENAEKO_o *__this,AFLJMCMKCIG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HBCNHAMIMGF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int CalculateSize()  [RVA 0x31C8918]
// DBNIPENAEKO$$CalculateSize @ RVA 0x31C8918

int32_t DBNIPENAEKO__CalculateSize(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  AFLJMCMKCIG_o *value;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_01;
  System_String_o *value_00;
  int iVar2;
  
  if ((DAT_04566c45 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_CalculateSize__);
    DAT_04566c45 = 1;
    method = extraout_x1;
  }
  iVar2 = (__this->fields).LCAENFFHHEI;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value = (__this->fields).HBCNHAMIMGF;
  if (value != (AFLJMCMKCIG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_01 = (__this->fields).BMMFCMJLFKN;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD,
                       Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_CalculateSize__
                      );
    value_00 = (__this->fields).BHMHGIBMMMB;
    if (value_00 != (System_String_o *)0x0) {
      iVar2 = iVar1 + iVar2;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x31C8A68]
// DBNIPENAEKO$$WriteTo @ RVA 0x31C8A68

void DBNIPENAEKO__WriteTo
               (DBNIPENAEKO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_01;
  
  if ((DAT_04566c46 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_WriteTo__);
    DAT_04566c46 = 1;
  }
  if ((__this->fields).LCAENFFHHEI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).LCAENFFHHEI,(MethodInfo *)0x0);
  }
  if ((__this->fields).HBCNHAMIMGF != (AFLJMCMKCIG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).HBCNHAMIMGF,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).BMMFCMJLFKN;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD,
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_WriteTo__);
    pSVar1 = (__this->fields).BHMHGIBMMMB;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032c8ba8;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).BHMHGIBMMMB,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_032c8ba8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x31C8BAC]
// DBNIPENAEKO$$FFHIHGCDGAK @ RVA 0x31C8BAC

Google_Protobuf_Reflection_MessageDescriptor_o * DBNIPENAEKO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566c47 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04566c47 = 1;
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
        goto LAB_032c8c94;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_032c8c94:
                    /* WARNING: Could not recover jumptable at 0x032c8ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,1,pVVar2->method);
  return pGVar3;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x31C8CB0]
// DBNIPENAEKO$$Equals @ RVA 0x31C8CB0

bool DBNIPENAEKO__Equals(DBNIPENAEKO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566c48 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c48 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DBNIPENAEKO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DBNIPENAEKO__Equals(__this,(DBNIPENAEKO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void JGAPLKDDCOI(string CJNHFNHJHPE)  [RVA 0x31C8DDC]
// DBNIPENAEKO$$JGAPLKDDCOI @ RVA 0x31C8DDC

void DBNIPENAEKO__JGAPLKDDCOI(DBNIPENAEKO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566c49 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04566c49 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).BHMHGIBMMMB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public AFLJMCMKCIG OAHNNPMAACG()  [RVA 0x31C8E58]
// DBNIPENAEKO$$OAHNNPMAACG @ RVA 0x31C8E58

AFLJMCMKCIG_o * DBNIPENAEKO__OAHNNPMAACG(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  return (__this->fields).HBCNHAMIMGF;
}


// ===== public void MergeFrom(DBNIPENAEKO IBKIPBJJCPG)  [RVA 0x31C8E60]
// DBNIPENAEKO$$MergeFrom @ RVA 0x31C8E60

void DBNIPENAEKO__MergeFrom(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  AFLJMCMKCIG_o *pAVar2;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  DBNIPENAEKO_Fields *pDVar4;
  AFLJMCMKCIG_o **ppAVar5;
  
  if ((DAT_04566c4a & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    DAT_04566c4a = 1;
  }
  if (IBKIPBJJCPG == (DBNIPENAEKO_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).LCAENFFHHEI;
  if (iVar1 != 0) {
    (__this->fields).LCAENFFHHEI = iVar1;
  }
  if ((IBKIPBJJCPG->fields).HBCNHAMIMGF != (AFLJMCMKCIG_o *)0x0) {
    ppAVar5 = &(__this->fields).HBCNHAMIMGF;
    pAVar2 = *ppAVar5;
    if (pAVar2 == (AFLJMCMKCIG_o *)0x0) {
      pAVar2 = (AFLJMCMKCIG_o *)thunk_FUN_01bda818(AFLJMCMKCIG_TypeInfo);
      AFLJMCMKCIG___ctor(pAVar2,(MethodInfo *)0x0);
      *ppAVar5 = pAVar2;
      thunk_FUN_01c20e04(ppAVar5,pAVar2);
      pAVar2 = *ppAVar5;
      if (pAVar2 == (AFLJMCMKCIG_o *)0x0) goto LAB_032c8f74;
    }
    AFLJMCMKCIG__MergeFrom(pAVar2,(IBKIPBJJCPG->fields).HBCNHAMIMGF,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).BMMFCMJLFKN;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    method_00 = Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).BMMFCMJLFKN,
               (MethodInfo_295F02C *)
               Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Add__);
    CJNHFNHJHPE = (IBKIPBJJCPG->fields).BHMHGIBMMMB;
    if (CJNHFNHJHPE != (System_String_o *)0x0) {
      if ((CJNHFNHJHPE->fields)._stringLength != 0) {
        DBNIPENAEKO__JGAPLKDDCOI(__this,CJNHFNHJHPE,method_00);
      }
      pDVar4 = &__this->fields;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pDVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pDVar4->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pDVar4,pGVar3);
      return;
    }
  }
LAB_032c8f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RepeatedField<AFLJMCMKCIG> BIDNOELENFH()  [RVA 0x31C8F78]
// DBNIPENAEKO$$BIDNOELENFH @ RVA 0x31C8F78

Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *
DBNIPENAEKO__BIDNOELENFH(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  return (__this->fields).BMMFCMJLFKN;
}


// ===== public int PNENLJCMECN()  [RVA 0x31C8F80]
// DBNIPENAEKO$$PNENLJCMECN @ RVA 0x31C8F80

int32_t DBNIPENAEKO__PNENLJCMECN(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  return (__this->fields).LCAENFFHHEI;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x31C8F88]
// DBNIPENAEKO$$MergeFrom @ RVA 0x31C8F88

void DBNIPENAEKO__MergeFrom
               (DBNIPENAEKO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if ((DAT_04566c4b & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    __this = (DBNIPENAEKO_o *)
             FUN_01bab630(&
                          Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_AddEntriesFrom__
                         );
    DAT_04566c4b = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar1 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar1 != 0) {
      FUN_03f939f8();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor(DBNIPENAEKO IBKIPBJJCPG)  [RVA 0x31C912C]
// DBNIPENAEKO$$.ctor @ RVA 0x31C912C

void DBNIPENAEKO___ctor(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  AFLJMCMKCIG_o *pAVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566c4c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clone__);
    DAT_04566c4c = 1;
    method_00 = extraout_x1;
  }
  DBNIPENAEKO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (DBNIPENAEKO_o *)0x0) {
    (__this->fields).LCAENFFHHEI = (IBKIPBJJCPG->fields).LCAENFFHHEI;
    pAVar1 = (IBKIPBJJCPG->fields).HBCNHAMIMGF;
    if (pAVar1 == (AFLJMCMKCIG_o *)0x0) {
      pAVar1 = (AFLJMCMKCIG_o *)0x0;
    }
    else {
      pAVar1 = AFLJMCMKCIG__Clone(pAVar1,(MethodInfo *)0x0);
    }
    (__this->fields).HBCNHAMIMGF = pAVar1;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).BMMFCMJLFKN;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Clone__);
      (__this->fields).BMMFCMJLFKN = pGVar2;
      thunk_FUN_01c20e04();
      (__this->fields).BHMHGIBMMMB = (IBKIPBJJCPG->fields).BHMHGIBMMMB;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x31C92A4]
// DBNIPENAEKO$$GetHashCode @ RVA 0x31C92A4

int32_t DBNIPENAEKO__GetHashCode(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  AFLJMCMKCIG_o *pAVar4;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  System_String_o *pSVar7;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).LCAENFFHHEI;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pAVar4 = (__this->fields).HBCNHAMIMGF;
  if (pAVar4 != (AFLJMCMKCIG_o *)0x0) {
    uVar3 = (*(pAVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar4,(pAVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).BMMFCMJLFKN;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    pSVar7 = (__this->fields).BHMHGIBMMMB;
    if (pSVar7 != (System_String_o *)0x0) {
      uVar3 = uVar3 ^ uVar2;
      if ((pSVar7->fields)._stringLength != 0) {
        uVar2 = (*(pSVar7->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      pGVar6 = (__this->fields).CKFPENBPNML;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31C9358]
// DBNIPENAEKO$$.cctor @ RVA 0x31C9358

void DBNIPENAEKO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DBNIPENAEKO__o *__this;
  Google_Protobuf_FieldCodec_AFLJMCMKCIG__o *pGVar1;
  Google_Protobuf_FieldCodec_AFLJMCMKCIG__o **ppGVar2;
  
  if ((DAT_04566c4d & 1) == 0) {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<AFLJMCMKCIG>__);
    FUN_01bab630(&System_Func<DBNIPENAEKO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DBNIPENAEKO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DBNIPENAEKO>_TypeInfo);
    FUN_01bab630(&Method_DBNIPENAEKO_<>c_LNJPIHAONCC__);
    FUN_01bab630(&DBNIPENAEKO_<>c_TypeInfo);
    DAT_04566c4d = 1;
  }
  if ((DBNIPENAEKO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DBNIPENAEKO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DBNIPENAEKO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DBNIPENAEKO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DBNIPENAEKO>__ctor__);
  DBNIPENAEKO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DBNIPENAEKO_TypeInfo->static_fields,__this);
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566c74 == '\0') {
    FUN_01bab630(&AFLJMCMKCIG_TypeInfo);
    DAT_04566c74 = '\x01';
  }
  if ((AFLJMCMKCIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_AFLJMCMKCIG__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x1a,(Google_Protobuf_MessageParser_T__o *)
                           AFLJMCMKCIG_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<AFLJMCMKCIG>__);
  ppGVar2 = &DBNIPENAEKO_TypeInfo->static_fields->FHPMBCKAFHD;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31C9508]
// DBNIPENAEKO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31C9508

Google_Protobuf_Reflection_MessageDescriptor_o *
DBNIPENAEKO__pb__Google_Protobuf_IMessage_get_Descriptor(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  DBNIPENAEKO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032c9508 to 033c9707 has its CatchHandler @ 032c9508
                       catch() { ... } // from try @ 032c9508 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9778 with catch @ 032c9508
                       catch() { ... } // from try @ 032c97d8 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9810 with catch @ 032c9508
                       catch() { ... } // from try @ 032c9840 with catch @ 032c9508 */
  if ((DAT_04566c4e & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c4e = 1;
    method = extraout_x1;
  }
  method_00 = DBNIPENAEKO_TypeInfo;
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DBNIPENAEKO_c *)thunk_FUN_01ba7564(DBNIPENAEKO_TypeInfo,method);
  }
  pGVar1 = DBNIPENAEKO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public static MessageParser<DBNIPENAEKO> PGCAHPDCJBC()  [RVA 0x31C9554]
// DBNIPENAEKO$$PGCAHPDCJBC @ RVA 0x31C9554

Google_Protobuf_MessageParser_DBNIPENAEKO__o * DBNIPENAEKO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566c4f & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c4f = 1;
  }
  if ((DBNIPENAEKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DBNIPENAEKO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public DBNIPENAEKO Clone()  [RVA 0x31C95AC]
// DBNIPENAEKO$$Clone @ RVA 0x31C95AC

DBNIPENAEKO_o * DBNIPENAEKO__Clone(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  DBNIPENAEKO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566c50 & 1) == 0) {
    FUN_01bab630(&DBNIPENAEKO_TypeInfo);
    DAT_04566c50 = 1;
    method = extraout_x1;
  }
  __this_00 = (DBNIPENAEKO_o *)thunk_FUN_01bda818(DBNIPENAEKO_TypeInfo,method);
  DBNIPENAEKO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x31C91F8]
// DBNIPENAEKO$$.ctor @ RVA 0x31C91F8

void DBNIPENAEKO___ctor(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566c51 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566c51 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>__ctor__);
  ppGVar1 = &(__this->fields).BMMFCMJLFKN;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  (__this->fields).BHMHGIBMMMB = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string DBPNCOMIECD()  [RVA 0x31C9604]
// DBNIPENAEKO$$DBPNCOMIECD @ RVA 0x31C9604

System_String_o * DBNIPENAEKO__DBPNCOMIECD(DBNIPENAEKO_o *__this,MethodInfo *method)

{
  return (__this->fields).BHMHGIBMMMB;
}


// ===== public void ICPMGFCEAPN(int CJNHFNHJHPE)  [RVA 0x31C960C]
// DBNIPENAEKO$$ICPMGFCEAPN @ RVA 0x31C960C

void DBNIPENAEKO__ICPMGFCEAPN(DBNIPENAEKO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LCAENFFHHEI = CJNHFNHJHPE;
  return;
}


// ===== public bool Equals(DBNIPENAEKO IBKIPBJJCPG)  [RVA 0x31C8D14]
// DBNIPENAEKO$$Equals @ RVA 0x31C8D14

bool DBNIPENAEKO__Equals(DBNIPENAEKO_o *__this,DBNIPENAEKO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *__this_00;
  
  if ((DAT_04566c52 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Equals__);
    DAT_04566c52 = 1;
  }
  if (IBKIPBJJCPG != (DBNIPENAEKO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).LCAENFFHHEI == (IBKIPBJJCPG->fields).LCAENFFHHEI) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).HBCNHAMIMGF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).HBCNHAMIMGF,(MethodInfo *)0x0),
       bVar1)) {
      __this_00 = (__this->fields).BMMFCMJLFKN;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_AFLJMCMKCIG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).BMMFCMJLFKN,
                         Method_Google_Protobuf_Collections_RepeatedField<AFLJMCMKCIG>_Equals__);
      if ((bVar1) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).BHMHGIBMMMB,(IBKIPBJJCPG->fields).BHMHGIBMMMB,
                             (MethodInfo *)0x0), !bVar1)) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}

