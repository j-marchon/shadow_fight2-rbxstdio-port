// TypeDefIndex 987
// Namespace: 
// public sealed class DMOPGPMINJD : IMessage<DMOPGPMINJD>, IMessage, IEquatable<DMOPGPMINJD>, IDeepCloneable<DMOPGPMINJD>
// Fields:
//   private static readonly MessageParser<DMOPGPMINJD> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BCPFHAFPJBL = 1;
//   private string GJNOEAKNMOG; // 0x18
//   public const int AEOGLMKLMMI = 2;
//   private EEHFEPPDBHL MMIHELOLFPP; // 0x20

// ===== public void .ctor(DMOPGPMINJD IBKIPBJJCPG)  [RVA 0x30BA4E0]
// DMOPGPMINJD$$.ctor @ RVA 0x30BA4E0

void DMOPGPMINJD___ctor(DMOPGPMINJD_o *__this,DMOPGPMINJD_o *IBKIPBJJCPG,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  DMOPGPMINJD___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (DMOPGPMINJD_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    pEVar1 = (IBKIPBJJCPG->fields).MMIHELOLFPP;
    if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
      pEVar1 = (EEHFEPPDBHL_o *)0x0;
    }
    else {
      pEVar1 = EEHFEPPDBHL__Clone(pEVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MMIHELOLFPP = pEVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GGBIEOLAGNO(EEHFEPPDBHL CJNHFNHJHPE)  [RVA 0x30BA5B0]
// DMOPGPMINJD$$GGBIEOLAGNO @ RVA 0x30BA5B0

void DMOPGPMINJD__GGBIEOLAGNO(DMOPGPMINJD_o *__this,EEHFEPPDBHL_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MMIHELOLFPP = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override int GetHashCode()  [RVA 0x30BA5B8]
// DMOPGPMINJD$$GetHashCode @ RVA 0x30BA5B8

int32_t DMOPGPMINJD__GetHashCode(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  EEHFEPPDBHL_o *pEVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pSVar3 = (__this->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
    }
    pEVar4 = (__this->fields).MMIHELOLFPP;
    if (pEVar4 != (EEHFEPPDBHL_o *)0x0) {
      uVar2 = (*(pEVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pEVar4,(pEVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30BA630]
// DMOPGPMINJD$$WriteTo @ RVA 0x30BA630

void DMOPGPMINJD__WriteTo
               (DMOPGPMINJD_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031ba6c8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).MMIHELOLFPP != (EEHFEPPDBHL_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031ba6c8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteMessage
                (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MMIHELOLFPP,
                 (MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_031ba6c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<DMOPGPMINJD> PGCAHPDCJBC()  [RVA 0x30BA6CC]
// DMOPGPMINJD$$PGCAHPDCJBC @ RVA 0x30BA6CC

Google_Protobuf_MessageParser_DMOPGPMINJD__o * DMOPGPMINJD__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456622e & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_0456622e = 1;
  }
  if ((DMOPGPMINJD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DMOPGPMINJD_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30BA724]
// DMOPGPMINJD$$FFHIHGCDGAK @ RVA 0x30BA724

Google_Protobuf_Reflection_MessageDescriptor_o * DMOPGPMINJD__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456622f & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456622f = 1;
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
        goto LAB_031ba80c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031ba80c:
                    /* WARNING: Could not recover jumptable at 0x031ba820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x41,pVVar2->method);
  return pGVar3;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x30BA828]
// DMOPGPMINJD$$HCOCAAIGNNL @ RVA 0x30BA828

void DMOPGPMINJD__HCOCAAIGNNL(DMOPGPMINJD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566230 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04566230 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).GJNOEAKNMOG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public EEHFEPPDBHL LELBMGAKKCE()  [RVA 0x30BA8A4]
// DMOPGPMINJD$$LELBMGAKKCE @ RVA 0x30BA8A4

EEHFEPPDBHL_o * DMOPGPMINJD__LELBMGAKKCE(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  return (__this->fields).MMIHELOLFPP;
}


// ===== public int CalculateSize()  [RVA 0x30BA8AC]
// DMOPGPMINJD$$CalculateSize @ RVA 0x30BA8AC

int32_t DMOPGPMINJD__CalculateSize(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value;
  EEHFEPPDBHL_o *value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566231 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566231 = 1;
  }
  value = (__this->fields).GJNOEAKNMOG;
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
    value_00 = (__this->fields).MMIHELOLFPP;
    if (value_00 != (EEHFEPPDBHL_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
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


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30BA974]
// DMOPGPMINJD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30BA974

Google_Protobuf_Reflection_MessageDescriptor_o *
DMOPGPMINJD__pb__Google_Protobuf_IMessage_get_Descriptor(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  DMOPGPMINJD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566232 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566232 = 1;
    method = extraout_x1;
  }
  method_00 = DMOPGPMINJD_TypeInfo;
  if ((DMOPGPMINJD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DMOPGPMINJD_c *)thunk_FUN_01ba7564(DMOPGPMINJD_TypeInfo,method);
  }
  pGVar1 = DMOPGPMINJD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public DMOPGPMINJD Clone()  [RVA 0x30BA9C0]
// DMOPGPMINJD$$Clone @ RVA 0x30BA9C0

DMOPGPMINJD_o * DMOPGPMINJD__Clone(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  DMOPGPMINJD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566233 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566233 = 1;
    method = extraout_x1;
  }
  __this_00 = (DMOPGPMINJD_o *)thunk_FUN_01bda818(DMOPGPMINJD_TypeInfo,method);
  DMOPGPMINJD___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override string ToString()  [RVA 0x30BAA18]
// DMOPGPMINJD$$ToString @ RVA 0x30BAA18

System_String_o * DMOPGPMINJD__ToString(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566234 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566234 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(DMOPGPMINJD IBKIPBJJCPG)  [RVA 0x30BAA70]
// DMOPGPMINJD$$MergeFrom @ RVA 0x30BAA70

void DMOPGPMINJD__MergeFrom(DMOPGPMINJD_o *__this,DMOPGPMINJD_o *IBKIPBJJCPG,MethodInfo *method)

{
  EEHFEPPDBHL_o *pEVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  DMOPGPMINJD_Fields *pDVar3;
  EEHFEPPDBHL_o **ppEVar4;
  
  if ((DAT_04566235 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04566235 = 1;
  }
  if (IBKIPBJJCPG == (DMOPGPMINJD_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      DMOPGPMINJD__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    if ((IBKIPBJJCPG->fields).MMIHELOLFPP != (EEHFEPPDBHL_o *)0x0) {
      ppEVar4 = &(__this->fields).MMIHELOLFPP;
      pEVar1 = *ppEVar4;
      if (pEVar1 == (EEHFEPPDBHL_o *)0x0) {
        pEVar1 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
        EEHFEPPDBHL___ctor(pEVar1,(MethodInfo *)0x0);
        *ppEVar4 = pEVar1;
        thunk_FUN_01c20e04(ppEVar4,pEVar1);
        pEVar1 = *ppEVar4;
        if (pEVar1 == (EEHFEPPDBHL_o *)0x0) goto LAB_031bab50;
      }
      EEHFEPPDBHL__MergeFrom(pEVar1,(IBKIPBJJCPG->fields).MMIHELOLFPP,(MethodInfo *)0x0);
    }
    pDVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pDVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pDVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pDVar3,pGVar2);
    return;
  }
LAB_031bab50:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30BAB54]
// DMOPGPMINJD$$MergeFrom @ RVA 0x30BAB54

void DMOPGPMINJD__MergeFrom
               (DMOPGPMINJD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EEHFEPPDBHL_o **ppEVar1;
  DMOPGPMINJD_Fields *pDVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  EEHFEPPDBHL_o *pEVar5;
  
  if ((DAT_04566236 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04566236 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppEVar1 = &(__this->fields).MMIHELOLFPP;
    pDVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          DMOPGPMINJD__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar3 != 0x12) break;
        pEVar5 = *ppEVar1;
        if (pEVar5 == (EEHFEPPDBHL_o *)0x0) {
          pEVar5 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
          EEHFEPPDBHL___ctor(pEVar5,(MethodInfo *)0x0);
          *ppEVar1 = pEVar5;
          thunk_FUN_01c20e04(ppEVar1,pEVar5);
          pEVar5 = *ppEVar1;
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pEVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pDVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pDVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pDVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x30BAC58]
// DMOPGPMINJD$$KCHJCGEMCGE @ RVA 0x30BAC58

System_String_o * DMOPGPMINJD__KCHJCGEMCGE(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  return (__this->fields).GJNOEAKNMOG;
}


// ===== private static void .cctor()  [RVA 0x30BAC60]
// DMOPGPMINJD$$.cctor @ RVA 0x30BAC60

void DMOPGPMINJD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DMOPGPMINJD__o *__this;
  
  if ((DAT_04566237 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    FUN_01bab630(&System_Func<DMOPGPMINJD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DMOPGPMINJD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DMOPGPMINJD>_TypeInfo);
    FUN_01bab630(&Method_DMOPGPMINJD_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&DMOPGPMINJD_<>c_TypeInfo);
    DAT_04566237 = 1;
  }
  if ((DMOPGPMINJD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DMOPGPMINJD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DMOPGPMINJD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DMOPGPMINJD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DMOPGPMINJD>__ctor__);
  DMOPGPMINJD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DMOPGPMINJD_TypeInfo->static_fields,__this);
  return;
}


// ===== public bool Equals(DMOPGPMINJD IBKIPBJJCPG)  [RVA 0x30BAD78]
// DMOPGPMINJD$$Equals @ RVA 0x30BAD78

bool DMOPGPMINJD__Equals(DMOPGPMINJD_o *__this,DMOPGPMINJD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (DMOPGPMINJD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MMIHELOLFPP,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MMIHELOLFPP,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x30BA558]
// DMOPGPMINJD$$.ctor @ RVA 0x30BA558

void DMOPGPMINJD___ctor(DMOPGPMINJD_o *__this,MethodInfo *method)

{
  if ((DAT_04566238 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566238 = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30BADEC]
// DMOPGPMINJD$$Equals @ RVA 0x30BADEC

bool DMOPGPMINJD__Equals(DMOPGPMINJD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566239 & 1) == 0) {
    FUN_01bab630(&DMOPGPMINJD_TypeInfo);
    DAT_04566239 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DMOPGPMINJD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DMOPGPMINJD__Equals(__this,(DMOPGPMINJD_o *)IBKIPBJJCPG,method);
  return bVar1;
}

