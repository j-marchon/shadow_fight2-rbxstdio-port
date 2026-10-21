// TypeDefIndex 205
// Namespace: 
// public sealed class HDDKPFAHBBN : IMessage<HDDKPFAHBBN>, IMessage, IEquatable<HDDKPFAHBBN>, IDeepCloneable<HDDKPFAHBBN>
// Fields:
//   private static readonly MessageParser<HDDKPFAHBBN> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int FENHGBMGMNE = 1;
//   private string PFCHOEFIMPF; // 0x18
//   public const int ENBKNMJIDBD = 2;
//   private string BEBCICLILLB; // 0x20

// ===== public HDDKPFAHBBN Clone()  [RVA 0x311C45C]
// HDDKPFAHBBN$$Clone @ RVA 0x311C45C

HDDKPFAHBBN_o * HDDKPFAHBBN__Clone(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  HDDKPFAHBBN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045665f3 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f3 = 1;
    method = extraout_x1;
  }
  __this_00 = (HDDKPFAHBBN_o *)thunk_FUN_01bda818(HDDKPFAHBBN_TypeInfo,method);
  HDDKPFAHBBN___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int CalculateSize()  [RVA 0x311C514]
// HDDKPFAHBBN$$CalculateSize @ RVA 0x311C514

int32_t HDDKPFAHBBN__CalculateSize(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_045665f4 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045665f4 = 1;
    method = extraout_x1;
  }
  pSVar3 = (__this->fields).PFCHOEFIMPF;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    pSVar3 = (__this->fields).BEBCICLILLB;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x311C5E4]
// HDDKPFAHBBN$$.cctor @ RVA 0x311C5E4

void HDDKPFAHBBN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HDDKPFAHBBN__o *__this;
  
  if ((DAT_045665f5 & 1) == 0) {
    FUN_01bab630(&System_Func<HDDKPFAHBBN>_TypeInfo);
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HDDKPFAHBBN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HDDKPFAHBBN>_TypeInfo);
    FUN_01bab630(&Method_HDDKPFAHBBN_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HDDKPFAHBBN_<>c_TypeInfo);
    DAT_045665f5 = 1;
  }
  if ((HDDKPFAHBBN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HDDKPFAHBBN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HDDKPFAHBBN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HDDKPFAHBBN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HDDKPFAHBBN>__ctor__);
  HDDKPFAHBBN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HDDKPFAHBBN_TypeInfo->static_fields,__this);
  return;
}


// ===== public string KODEFIDKDGO()  [RVA 0x311C6FC]
// HDDKPFAHBBN$$KODEFIDKDGO @ RVA 0x311C6FC

System_String_o * HDDKPFAHBBN__KODEFIDKDGO(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  return (__this->fields).PFCHOEFIMPF;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x311C704]
// HDDKPFAHBBN$$Equals @ RVA 0x311C704

bool HDDKPFAHBBN__Equals(HDDKPFAHBBN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045665f6 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HDDKPFAHBBN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HDDKPFAHBBN__Equals(__this,(HDDKPFAHBBN_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<HDDKPFAHBBN> PGCAHPDCJBC()  [RVA 0x311C7DC]
// HDDKPFAHBBN$$PGCAHPDCJBC @ RVA 0x311C7DC

Google_Protobuf_MessageParser_HDDKPFAHBBN__o * HDDKPFAHBBN__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045665f7 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f7 = 1;
  }
  if ((HDDKPFAHBBN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HDDKPFAHBBN_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void IOKMENMKPPM(string CJNHFNHJHPE)  [RVA 0x311C834]
// HDDKPFAHBBN$$IOKMENMKPPM @ RVA 0x311C834

void HDDKPFAHBBN__IOKMENMKPPM(HDDKPFAHBBN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045665f8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045665f8 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).BEBCICLILLB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void .ctor(HDDKPFAHBBN IBKIPBJJCPG)  [RVA 0x311C4B4]
// HDDKPFAHBBN$$.ctor @ RVA 0x311C4B4

void HDDKPFAHBBN___ctor(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  HDDKPFAHBBN___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (HDDKPFAHBBN_o *)0x0) {
    (__this->fields).PFCHOEFIMPF = (IBKIPBJJCPG->fields).PFCHOEFIMPF;
    thunk_FUN_01c20e04();
    (__this->fields).BEBCICLILLB = (IBKIPBJJCPG->fields).BEBCICLILLB;
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


// ===== public void MergeFrom(HDDKPFAHBBN IBKIPBJJCPG)  [RVA 0x311C918]
// HDDKPFAHBBN$$MergeFrom @ RVA 0x311C918

void HDDKPFAHBBN__MergeFrom(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *pSVar2;
  HDDKPFAHBBN_Fields *pHVar3;
  
  if (IBKIPBJJCPG == (HDDKPFAHBBN_o *)0x0) {
    return;
  }
  pSVar2 = (IBKIPBJJCPG->fields).PFCHOEFIMPF;
  if (pSVar2 != (System_String_o *)0x0) {
    if ((pSVar2->fields)._stringLength != 0) {
      HDDKPFAHBBN__MEKNPELFDEK(__this,pSVar2,method);
    }
    pSVar2 = (IBKIPBJJCPG->fields).BEBCICLILLB;
    if (pSVar2 != (System_String_o *)0x0) {
      if ((pSVar2->fields)._stringLength != 0) {
        HDDKPFAHBBN__IOKMENMKPPM(__this,pSVar2,method);
      }
      pHVar3 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pHVar3->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pHVar3,pGVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FPLFENHOKHM()  [RVA 0x311CA10]
// HDDKPFAHBBN$$FPLFENHOKHM @ RVA 0x311CA10

System_String_o * HDDKPFAHBBN__FPLFENHOKHM(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  return (__this->fields).BEBCICLILLB;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x311CA18]
// HDDKPFAHBBN$$WriteTo @ RVA 0x311CA18

void HDDKPFAHBBN__WriteTo
               (HDDKPFAHBBN_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).PFCHOEFIMPF;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321cab8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).PFCHOEFIMPF,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).BEBCICLILLB;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0321cab8;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).BEBCICLILLB,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0321cab8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x311CABC]
// HDDKPFAHBBN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x311CABC

Google_Protobuf_Reflection_MessageDescriptor_o *
HDDKPFAHBBN__pb__Google_Protobuf_IMessage_get_Descriptor(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  HDDKPFAHBBN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665f9 & 1) == 0) {
    FUN_01bab630(&HDDKPFAHBBN_TypeInfo);
    DAT_045665f9 = 1;
    method = extraout_x1;
  }
  method_00 = HDDKPFAHBBN_TypeInfo;
  if ((HDDKPFAHBBN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HDDKPFAHBBN_c *)thunk_FUN_01ba7564(HDDKPFAHBBN_TypeInfo,method);
  }
  pGVar1 = HDDKPFAHBBN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MEKNPELFDEK(string CJNHFNHJHPE)  [RVA 0x311C994]
// HDDKPFAHBBN$$MEKNPELFDEK @ RVA 0x311C994

void HDDKPFAHBBN__MEKNPELFDEK(HDDKPFAHBBN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045665fa & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045665fa = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).PFCHOEFIMPF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public bool Equals(HDDKPFAHBBN IBKIPBJJCPG)  [RVA 0x311C768]
// HDDKPFAHBBN$$Equals @ RVA 0x311C768

bool HDDKPFAHBBN__Equals(HDDKPFAHBBN_o *__this,HDDKPFAHBBN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HDDKPFAHBBN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).PFCHOEFIMPF,(IBKIPBJJCPG->fields).PFCHOEFIMPF,
                       (MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).BEBCICLILLB,(IBKIPBJJCPG->fields).BEBCICLILLB,
                           (MethodInfo *)0x0), !bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x311CC0C]
// HDDKPFAHBBN$$MergeFrom @ RVA 0x311CC0C

void HDDKPFAHBBN__MergeFrom
               (HDDKPFAHBBN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HDDKPFAHBBN_Fields *pHVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pHVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          HDDKPFAHBBN__MEKNPELFDEK(__this,pSVar4,method);
        }
        if (uVar2 != 0x12) break;
        pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        HDDKPFAHBBN__IOKMENMKPPM(__this,pSVar4,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pHVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x311CCB0]
// HDDKPFAHBBN$$ToString @ RVA 0x311CCB0

System_String_o * HDDKPFAHBBN__ToString(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045665fb & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045665fb = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override int GetHashCode()  [RVA 0x311CD08]
// HDDKPFAHBBN$$GetHashCode @ RVA 0x311CD08

int32_t HDDKPFAHBBN__GetHashCode(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  
  pSVar3 = (__this->fields).PFCHOEFIMPF;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
      method = extraout_x1;
    }
    pSVar3 = (__this->fields).BEBCICLILLB;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        uVar2 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
        uVar1 = uVar2 ^ uVar1;
      }
      pGVar4 = (__this->fields).CKFPENBPNML;
      if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
        uVar1 = uVar2 ^ uVar1;
      }
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x311CB08]
// HDDKPFAHBBN$$FFHIHGCDGAK @ RVA 0x311CB08

Google_Protobuf_Reflection_MessageDescriptor_o * HDDKPFAHBBN__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045665fc & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045665fc = 1;
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
        goto LAB_0321cbf0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0321cbf0:
                    /* WARNING: Could not recover jumptable at 0x0321cc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x38,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor()  [RVA 0x311C8B0]
// HDDKPFAHBBN$$.ctor @ RVA 0x311C8B0

void HDDKPFAHBBN___ctor(HDDKPFAHBBN_o *__this,MethodInfo *method)

{
  if ((DAT_045665fd & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045665fd = 1;
  }
  (__this->fields).PFCHOEFIMPF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).BEBCICLILLB = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

