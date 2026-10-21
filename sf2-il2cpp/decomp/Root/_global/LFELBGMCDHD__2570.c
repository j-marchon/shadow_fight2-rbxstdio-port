// TypeDefIndex 2570
// Namespace: 
// public sealed class LFELBGMCDHD : IMessage<LFELBGMCDHD>, IMessage, IEquatable<LFELBGMCDHD>, IDeepCloneable<LFELBGMCDHD>
// Fields:
//   private static readonly MessageParser<LFELBGMCDHD> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JGIFNJHMMMK = 1;
//   private static readonly FieldCodec<GKLPDMLELJF> IODFLINNJEL; // 0x8
//   private readonly RepeatedField<GKLPDMLELJF> EHBNKDHKJNI; // 0x18

// ===== public RepeatedField<GKLPDMLELJF> BBDAKDCNDFF()  [RVA 0x33A00EC]
// LFELBGMCDHD$$BBDAKDCNDFF @ RVA 0x33A00EC

Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *
LFELBGMCDHD__BBDAKDCNDFF(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  return (__this->fields).EHBNKDHKJNI;
}


// ===== public bool Equals(LFELBGMCDHD IBKIPBJJCPG)  [RVA 0x33A00F4]
// LFELBGMCDHD$$Equals @ RVA 0x33A00F4

bool LFELBGMCDHD__Equals(LFELBGMCDHD_o *__this,LFELBGMCDHD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  
  if ((DAT_04567ca6 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Equals__);
    DAT_04567ca6 = 1;
  }
  if (IBKIPBJJCPG != (LFELBGMCDHD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).EHBNKDHKJNI,
                       Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x33A0184]
// LFELBGMCDHD$$Equals @ RVA 0x33A0184

bool LFELBGMCDHD__Equals(LFELBGMCDHD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567ca7 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567ca7 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LFELBGMCDHD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LFELBGMCDHD__Equals(__this,(LFELBGMCDHD_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override int GetHashCode()  [RVA 0x33A01E8]
// LFELBGMCDHD$$GetHashCode @ RVA 0x33A01E8

int32_t LFELBGMCDHD__GetHashCode(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).EHBNKDHKJNI;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar1 = uVar1 ^ 1;
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


// ===== public void .ctor(LFELBGMCDHD IBKIPBJJCPG)  [RVA 0x33A0234]
// LFELBGMCDHD$$.ctor @ RVA 0x33A0234

void LFELBGMCDHD___ctor(LFELBGMCDHD_o *__this,LFELBGMCDHD_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567ca8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Clone__);
    DAT_04567ca8 = 1;
    method_00 = extraout_x1;
  }
  LFELBGMCDHD___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (LFELBGMCDHD_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Clone__);
    (__this->fields).EHBNKDHKJNI = pGVar1;
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


// ===== public LFELBGMCDHD Clone()  [RVA 0x33A0348]
// LFELBGMCDHD$$Clone @ RVA 0x33A0348

LFELBGMCDHD_o * LFELBGMCDHD__Clone(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  LFELBGMCDHD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567ca9 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567ca9 = 1;
    method = extraout_x1;
  }
  __this_00 = (LFELBGMCDHD_o *)thunk_FUN_01bda818(LFELBGMCDHD_TypeInfo,method);
  LFELBGMCDHD___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x33A03A0]
// LFELBGMCDHD$$WriteTo @ RVA 0x33A03A0

void LFELBGMCDHD__WriteTo
               (LFELBGMCDHD_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_01;
  
  if ((DAT_04567caa & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_WriteTo__);
    DAT_04567caa = 1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL,
               Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x33A0458]
// LFELBGMCDHD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33A0458

Google_Protobuf_Reflection_MessageDescriptor_o *
LFELBGMCDHD__pb__Google_Protobuf_IMessage_get_Descriptor(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  LFELBGMCDHD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567cab & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567cab = 1;
    method = extraout_x1;
  }
  method_00 = LFELBGMCDHD_TypeInfo;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LFELBGMCDHD_c *)thunk_FUN_01ba7564(LFELBGMCDHD_TypeInfo,method);
  }
  pGVar1 = LFELBGMCDHD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override string ToString()  [RVA 0x33A05A8]
// LFELBGMCDHD$$ToString @ RVA 0x33A05A8

System_String_o * LFELBGMCDHD__ToString(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567cac & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567cac = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x33A0600]
// LFELBGMCDHD$$CalculateSize @ RVA 0x33A0600

int32_t LFELBGMCDHD__CalculateSize(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_01;
  
  if ((DAT_04567cad & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_CalculateSize__);
    DAT_04567cad = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LFELBGMCDHD_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x33A04A4]
// LFELBGMCDHD$$FFHIHGCDGAK @ RVA 0x33A04A4

Google_Protobuf_Reflection_MessageDescriptor_o * LFELBGMCDHD__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567cae & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567cae = 1;
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
        goto LAB_034a058c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_034a058c:
                    /* WARNING: Could not recover jumptable at 0x034a05a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,8,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor()  [RVA 0x33A02C0]
// LFELBGMCDHD$$.ctor @ RVA 0x33A02C0

void LFELBGMCDHD___ctor(LFELBGMCDHD_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567caf & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_TypeInfo);
    DAT_04567caf = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x33A06A8]
// LFELBGMCDHD$$.cctor @ RVA 0x33A06A8

void LFELBGMCDHD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LFELBGMCDHD__o *__this;
  Google_Protobuf_FieldCodec_GKLPDMLELJF__o *pGVar1;
  Google_Protobuf_FieldCodec_GKLPDMLELJF__o **ppGVar2;
  
  if ((DAT_04567cb0 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<GKLPDMLELJF>__);
    FUN_01bab630(&System_Func<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LFELBGMCDHD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LFELBGMCDHD>_TypeInfo);
    FUN_01bab630(&Method_LFELBGMCDHD_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&LFELBGMCDHD_<>c_TypeInfo);
    DAT_04567cb0 = 1;
  }
  if ((LFELBGMCDHD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LFELBGMCDHD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LFELBGMCDHD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LFELBGMCDHD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LFELBGMCDHD>__ctor__);
  LFELBGMCDHD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LFELBGMCDHD_TypeInfo->static_fields,__this);
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567d82 == '\0') {
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
    DAT_04567d82 = '\x01';
  }
  if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_GKLPDMLELJF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         GKLPDMLELJF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<GKLPDMLELJF>__);
  ppGVar2 = &LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public static MessageParser<LFELBGMCDHD> PGCAHPDCJBC()  [RVA 0x33A0858]
// LFELBGMCDHD$$PGCAHPDCJBC @ RVA 0x33A0858

Google_Protobuf_MessageParser_LFELBGMCDHD__o * LFELBGMCDHD__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567cb1 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    DAT_04567cb1 = 1;
  }
  if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LFELBGMCDHD_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(LFELBGMCDHD IBKIPBJJCPG)  [RVA 0x33A08B0]
// LFELBGMCDHD$$MergeFrom @ RVA 0x33A08B0

void LFELBGMCDHD__MergeFrom(LFELBGMCDHD_o *__this,LFELBGMCDHD_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  LFELBGMCDHD_Fields *pLVar2;
  
  if ((DAT_04567cb2 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
    DAT_04567cb2 = 1;
  }
  if (IBKIPBJJCPG != (LFELBGMCDHD_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_Add__);
      pLVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pLVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pLVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pLVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x33A0938]
// LFELBGMCDHD$$MergeFrom @ RVA 0x33A0938

void LFELBGMCDHD__MergeFrom
               (LFELBGMCDHD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  LFELBGMCDHD_Fields *pLVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *__this_00;
  
  if ((DAT_04567cb3 & 1) == 0) {
    FUN_01bab630(&LFELBGMCDHD_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_AddEntriesFrom__);
    DAT_04567cb3 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pLVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 != 10) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pLVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pLVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pLVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((LFELBGMCDHD_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_GKLPDMLELJF__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)LFELBGMCDHD_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<GKLPDMLELJF>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

