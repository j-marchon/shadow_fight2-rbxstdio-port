// TypeDefIndex 1506
// Namespace: 
// public sealed class GPKDMPJJEOO : IMessage<GPKDMPJJEOO>, IMessage, IEquatable<GPKDMPJJEOO>, IDeepCloneable<GPKDMPJJEOO>
// Fields:
//   private static readonly MessageParser<GPKDMPJJEOO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int IGDMLFCJJOM = 1;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x18
//   public const int AHEHJLFKFAF = 2;
//   private static readonly MapField.Codec<string, string> BKAFBNGLAFE; // 0x8
//   private readonly MapField<string, string> PPDLPBMONBL; // 0x20

// ===== public GPKDMPJJEOO Clone()  [RVA 0x319D6D4]
// GPKDMPJJEOO$$Clone @ RVA 0x319D6D4

GPKDMPJJEOO_o * GPKDMPJJEOO__Clone(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  GPKDMPJJEOO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566ab8 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566ab8 = 1;
    method = extraout_x1;
  }
  __this_00 = (GPKDMPJJEOO_o *)thunk_FUN_01bda818(GPKDMPJJEOO_TypeInfo,method);
  GPKDMPJJEOO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override string ToString()  [RVA 0x319D7E8]
// GPKDMPJJEOO$$ToString @ RVA 0x319D7E8

System_String_o * GPKDMPJJEOO__ToString(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ab9 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566ab9 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x319D840]
// GPKDMPJJEOO$$.cctor @ RVA 0x319D840

void GPKDMPJJEOO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GPKDMPJJEOO__o *__this;
  Google_Protobuf_FieldCodec_string__o *keyCodec;
  Google_Protobuf_FieldCodec_string__o *valueCodec;
  Google_Protobuf_Collections_MapField_Codec_string__string__o *__this_00;
  Google_Protobuf_Collections_MapField_Codec_string__string__o **ppGVar1;
  
  if ((DAT_04566aba & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField_Codec<string,_string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_MapField_Codec<string,_string>_TypeInfo);
    FUN_01bab630(&System_Func<GPKDMPJJEOO>_TypeInfo);
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GPKDMPJJEOO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GPKDMPJJEOO>_TypeInfo);
    FUN_01bab630(&Method_GPKDMPJJEOO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GPKDMPJJEOO_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566aba = 1;
  }
  if ((GPKDMPJJEOO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GPKDMPJJEOO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GPKDMPJJEOO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GPKDMPJJEOO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GPKDMPJJEOO>__ctor__);
  GPKDMPJJEOO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GPKDMPJJEOO_TypeInfo->static_fields,__this);
  keyCodec = Google_Protobuf_FieldCodec__ForString(10,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  valueCodec = Google_Protobuf_FieldCodec__ForString(0x12,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  __this_00 = (Google_Protobuf_Collections_MapField_Codec_string__string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_MapField_Codec<string,_string>_TypeInfo
                                );
  Google_Protobuf_Collections_MapField_Codec<object,_object>___ctor
            ((Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)__this_00,
             (Google_Protobuf_FieldCodec_TKey__o *)keyCodec,
             (Google_Protobuf_FieldCodec_TValue__o *)valueCodec,0x12,
             Method_Google_Protobuf_Collections_MapField_Codec<string,_string>__ctor__);
  ppGVar1 = &GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x319D9FC]
// GPKDMPJJEOO$$Equals @ RVA 0x319D9FC

bool GPKDMPJJEOO__Equals(GPKDMPJJEOO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566abb & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566abb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GPKDMPJJEOO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GPKDMPJJEOO__Equals(__this,(GPKDMPJJEOO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x319DB04]
// GPKDMPJJEOO$$.ctor @ RVA 0x319DB04

void GPKDMPJJEOO___ctor(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  Google_Protobuf_Collections_MapField_string__string__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566abc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_MapField<string,_string>_TypeInfo);
    DAT_04566abc = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_MapField_string__string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_MapField<string,_string>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_MapField<object,_object>___ctor
            ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
             Method_Google_Protobuf_Collections_MapField<string,_string>__ctor__);
  ppGVar1 = &(__this->fields).PPDLPBMONBL;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(GPKDMPJJEOO IBKIPBJJCPG)  [RVA 0x319DB8C]
// GPKDMPJJEOO$$MergeFrom @ RVA 0x319DB8C

void GPKDMPJJEOO__MergeFrom(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  GPKDMPJJEOO_Fields *pGVar3;
  PGICCMFLDPI_o **ppPVar4;
  
  if ((DAT_04566abd & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Add__);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566abd = 1;
  }
  if (IBKIPBJJCPG == (GPKDMPJJEOO_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).MIINPPOCPCN;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) goto LAB_0329dc7c;
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).PPDLPBMONBL;
  if (__this_00 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    Google_Protobuf_Collections_MapField<object,_object>__Add
              ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
               (System_Collections_Generic_IDictionary_TKey__TValue__o *)
               (IBKIPBJJCPG->fields).PPDLPBMONBL,
               Method_Google_Protobuf_Collections_MapField<string,_string>_Add__);
    pGVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar3,pGVar2);
    return;
  }
LAB_0329dc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<GPKDMPJJEOO> PGCAHPDCJBC()  [RVA 0x319DC80]
// GPKDMPJJEOO$$PGCAHPDCJBC @ RVA 0x319DC80

Google_Protobuf_MessageParser_GPKDMPJJEOO__o * GPKDMPJJEOO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566abe & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566abe = 1;
  }
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return GPKDMPJJEOO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x319DCD8]
// GPKDMPJJEOO$$FFHIHGCDGAK @ RVA 0x319DCD8

Google_Protobuf_Reflection_MessageDescriptor_o * GPKDMPJJEOO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566abf & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04566abf = 1;
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
        goto LAB_0329ddc0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0329ddc0:
                    /* WARNING: Could not recover jumptable at 0x0329ddd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,5,pVVar2->method);
  return pGVar3;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x319DDDC]
// GPKDMPJJEOO$$KAIDLBNPCJH @ RVA 0x319DDDC

void GPKDMPJJEOO__KAIDLBNPCJH(GPKDMPJJEOO_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override int GetHashCode()  [RVA 0x319DDE4]
// GPKDMPJJEOO$$GetHashCode @ RVA 0x319DDE4

int32_t GPKDMPJJEOO__GetHashCode(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_Collections_MapField_string__string__o *pGVar4;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pPVar3 = (__this->fields).MIINPPOCPCN;
  if (pPVar3 == (PGICCMFLDPI_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1;
  }
  pGVar4 = (__this->fields).PPDLPBMONBL;
  if (pGVar4 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x319DE58]
// GPKDMPJJEOO$$MergeFrom @ RVA 0x319DE58

void GPKDMPJJEOO__MergeFrom
               (GPKDMPJJEOO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  GPKDMPJJEOO_Fields *pGVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  PGICCMFLDPI_o *pPVar5;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  
  if ((DAT_04566ac0 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_AddEntriesFrom__);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566ac0 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pGVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          pPVar5 = *ppPVar1;
          if (pPVar5 == (PGICCMFLDPI_o *)0x0) {
            pPVar5 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(pPVar5,(MethodInfo *)0x0);
            *ppPVar1 = pPVar5;
            thunk_FUN_01c20e04(ppPVar1,pPVar5);
            pPVar5 = *ppPVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar5,(MethodInfo *)0x0);
        }
        if (uVar3 == 0x12) break;
        if (uVar3 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar2->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pGVar2,pGVar4);
      }
      __this_00 = (__this->fields).PPDLPBMONBL;
      if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_MapField_string__string__o *)0x0) break;
      Google_Protobuf_Collections_MapField<object,_object>__AddEntriesFrom
                ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)
                 GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE,
                 Method_Google_Protobuf_Collections_MapField<string,_string>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x319DFA8]
// GPKDMPJJEOO$$MLFJHBIJMAA @ RVA 0x319DFA8

PGICCMFLDPI_o * GPKDMPJJEOO__MLFJHBIJMAA(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x319DFB0]
// GPKDMPJJEOO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x319DFB0

Google_Protobuf_Reflection_MessageDescriptor_o *
GPKDMPJJEOO__pb__Google_Protobuf_IMessage_get_Descriptor(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  GPKDMPJJEOO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ac1 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    DAT_04566ac1 = 1;
    method = extraout_x1;
  }
  method_00 = GPKDMPJJEOO_TypeInfo;
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GPKDMPJJEOO_c *)thunk_FUN_01ba7564(GPKDMPJJEOO_TypeInfo,method);
  }
  pGVar1 = GPKDMPJJEOO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public int CalculateSize()  [RVA 0x319DFFC]
// GPKDMPJJEOO$$CalculateSize @ RVA 0x319DFFC

int32_t GPKDMPJJEOO__CalculateSize(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  PGICCMFLDPI_o *value;
  Google_Protobuf_Collections_MapField_string__string__o *__this_01;
  int iVar2;
  
  if ((DAT_04566ac2 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_CalculateSize__);
    DAT_04566ac2 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MIINPPOCPCN;
  if (value == (PGICCMFLDPI_o *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_01 = (__this->fields).PPDLPBMONBL;
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_MapField<object,_object>__CalculateSize
                      ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_01,
                       (Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)
                       GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE,
                       Method_Google_Protobuf_Collections_MapField<string,_string>_CalculateSize__);
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x319E0F0]
// GPKDMPJJEOO$$WriteTo @ RVA 0x319E0F0

void GPKDMPJJEOO__WriteTo
               (GPKDMPJJEOO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_MapField_string__string__o *__this_01;
  
  if ((DAT_04566ac3 & 1) == 0) {
    FUN_01bab630(&GPKDMPJJEOO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_WriteTo__);
    DAT_04566ac3 = 1;
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0329e1d0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).PPDLPBMONBL;
  if ((GPKDMPJJEOO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
    Google_Protobuf_Collections_MapField<object,_object>__WriteTo
              ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_Collections_MapField_Codec_TKey__TValue__o *)
               GPKDMPJJEOO_TypeInfo->static_fields->BKAFBNGLAFE,
               Method_Google_Protobuf_Collections_MapField<string,_string>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0329e1d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(GPKDMPJJEOO IBKIPBJJCPG)  [RVA 0x319DA60]
// GPKDMPJJEOO$$Equals @ RVA 0x319DA60

bool GPKDMPJJEOO__Equals(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_MapField_string__string__o *__this_00;
  
  if ((DAT_04566ac4 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Equals__);
    DAT_04566ac4 = 1;
  }
  if (IBKIPBJJCPG != (GPKDMPJJEOO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields).PPDLPBMONBL;
      if (__this_00 == (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_MapField<object,_object>__Equals
                        ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)__this_00,
                         (Google_Protobuf_Collections_MapField_TKey__TValue__o *)
                         (IBKIPBJJCPG->fields).PPDLPBMONBL,
                         Method_Google_Protobuf_Collections_MapField<string,_string>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public MapField<string, string> LFCBPBFLNDA()  [RVA 0x319E1D4]
// GPKDMPJJEOO$$LFCBPBFLNDA @ RVA 0x319E1D4

Google_Protobuf_Collections_MapField_string__string__o *
GPKDMPJJEOO__LFCBPBFLNDA(GPKDMPJJEOO_o *__this,MethodInfo *method)

{
  return (__this->fields).PPDLPBMONBL;
}


// ===== public void .ctor(GPKDMPJJEOO IBKIPBJJCPG)  [RVA 0x319D72C]
// GPKDMPJJEOO$$.ctor @ RVA 0x319D72C

void GPKDMPJJEOO___ctor(GPKDMPJJEOO_o *__this,GPKDMPJJEOO_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_Collections_MapField_string__string__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566ac5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_MapField<string,_string>_Clone__);
    DAT_04566ac5 = 1;
    method_00 = extraout_x1;
  }
  GPKDMPJJEOO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (GPKDMPJJEOO_o *)0x0) {
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    if (__this != (GPKDMPJJEOO_o *)0x0) {
      (__this->fields).MIINPPOCPCN = pPVar1;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).PPDLPBMONBL;
      if (pGVar2 != (Google_Protobuf_Collections_MapField_string__string__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_MapField_string__string__o *)
                 Google_Protobuf_Collections_MapField<object,_object>__Clone
                           ((Google_Protobuf_Collections_MapField_TKey__TValue__o *)pGVar2,
                            Method_Google_Protobuf_Collections_MapField<string,_string>_Clone__);
        (__this->fields).PPDLPBMONBL = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

