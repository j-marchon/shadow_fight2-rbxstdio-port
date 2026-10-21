// TypeDefIndex 1292
// Namespace: 
// public sealed class HBLHCCMEEEC : IMessage<HBLHCCMEEEC>, IMessage, IEquatable<HBLHCCMEEEC>, IDeepCloneable<HBLHCCMEEEC>
// Fields:
//   private static readonly MessageParser<HBLHCCMEEEC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int COEBHOJBMGP = 1;
//   private long IAAJODFMEIC; // 0x18
//   public const int IDJEAHAIGLE = 2;
//   private int HEOOKBCLBGN; // 0x20

// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3153794]
// HBLHCCMEEEC$$WriteTo @ RVA 0x3153794

void HBLHCCMEEEC__WriteTo
               (HBLHCCMEEEC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 03253794 to 03353797 has its CatchHandler @ 032537a4 */
                    /* catch() { ... } // from try @ 03253794 with catch @ 032537a4 */
  if ((__this->fields).IAAJODFMEIC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03253824;
                    /* try { // try from 032537b4 to 0335381b has its CatchHandler @ 03253830 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).IAAJODFMEIC,(MethodInfo *)0x0);
  }
  if ((__this->fields).HEOOKBCLBGN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03253824:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HEOOKBCLBGN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 0325381c to 03353827 has its CatchHandler @ 03252a6c */
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3153828]
// HBLHCCMEEEC$$FFHIHGCDGAK @ RVA 0x3153828

Google_Protobuf_Reflection_MessageDescriptor_o * HBLHCCMEEEC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03253828 to 0335382f has its CatchHandler @ 03253830 */
                    /* catch() { ... } // from try @ 03253704 with catch @ 03253830
                       catch() { ... } // from try @ 032537b4 with catch @ 03253830
                       catch() { ... } // from try @ 03253828 with catch @ 03253830 */
  if ((DAT_0456681a & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456681a = 1;
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
        goto LAB_03253910;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03253910:
                    /* WARNING: Could not recover jumptable at 0x03253924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x49,pVVar2->method);
  return pGVar3;
}


// ===== private static void .cctor()  [RVA 0x315392C]
// HBLHCCMEEEC$$.cctor @ RVA 0x315392C

void HBLHCCMEEEC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HBLHCCMEEEC__o *__this;
  
  if ((DAT_0456681b & 1) == 0) {
    FUN_01bab630(&System_Func<HBLHCCMEEEC>_TypeInfo);
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HBLHCCMEEEC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HBLHCCMEEEC>_TypeInfo);
    FUN_01bab630(&Method_HBLHCCMEEEC_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HBLHCCMEEEC_<>c_TypeInfo);
    DAT_0456681b = 1;
  }
  if ((HBLHCCMEEEC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HBLHCCMEEEC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HBLHCCMEEEC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HBLHCCMEEEC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HBLHCCMEEEC>__ctor__);
  HBLHCCMEEEC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HBLHCCMEEEC_TypeInfo->static_fields,__this);
  return;
}


// ===== public void OIHLLLLKGLI(long CJNHFNHJHPE)  [RVA 0x3153A44]
// HBLHCCMEEEC$$OIHLLLLKGLI @ RVA 0x3153A44

void HBLHCCMEEEC__OIHLLLLKGLI(HBLHCCMEEEC_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IAAJODFMEIC = CJNHFNHJHPE;
  return;
}


// ===== public static MessageParser<HBLHCCMEEEC> PGCAHPDCJBC()  [RVA 0x3153A4C]
// HBLHCCMEEEC$$PGCAHPDCJBC @ RVA 0x3153A4C

Google_Protobuf_MessageParser_HBLHCCMEEEC__o * HBLHCCMEEEC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456681c & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_0456681c = 1;
  }
  if ((HBLHCCMEEEC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HBLHCCMEEEC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x3153AA4]
// HBLHCCMEEEC$$GetHashCode @ RVA 0x3153AA4

int32_t HBLHCCMEEEC__GetHashCode(HBLHCCMEEEC_o *__this,MethodInfo *method)

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
  lVar5 = (__this->fields).IAAJODFMEIC;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).HEOOKBCLBGN;
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


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3153B24]
// HBLHCCMEEEC$$MergeFrom @ RVA 0x3153B24

void HBLHCCMEEEC__MergeFrom
               (HBLHCCMEEEC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HBLHCCMEEEC_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pHVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IAAJODFMEIC = iVar5;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HEOOKBCLBGN = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pHVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int GDPKKINDIBF()  [RVA 0x3153BB8]
// HBLHCCMEEEC$$GDPKKINDIBF @ RVA 0x3153BB8

int32_t HBLHCCMEEEC__GDPKKINDIBF(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  return (__this->fields).HEOOKBCLBGN;
}


// ===== public int CalculateSize()  [RVA 0x3153BC0]
// HBLHCCMEEEC$$CalculateSize @ RVA 0x3153BC0

int32_t HBLHCCMEEEC__CalculateSize(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value_00;
  
  if ((DAT_0456681d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_0456681d = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).IAAJODFMEIC;
  iVar2 = 0;
  if (value_00 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value = (__this->fields).HEOOKBCLBGN;
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3153C74]
// HBLHCCMEEEC$$Equals @ RVA 0x3153C74

bool HBLHCCMEEEC__Equals(HBLHCCMEEEC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456681e & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_0456681e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HBLHCCMEEEC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HBLHCCMEEEC__Equals(__this,(HBLHCCMEEEC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(HBLHCCMEEEC IBKIPBJJCPG)  [RVA 0x3153D24]
// HBLHCCMEEEC$$MergeFrom @ RVA 0x3153D24

void HBLHCCMEEEC__MergeFrom(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  HBLHCCMEEEC_Fields *pHVar4;
  
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).IAAJODFMEIC;
    if (lVar3 != 0) {
      (__this->fields).IAAJODFMEIC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).HEOOKBCLBGN;
    if (iVar1 != 0) {
      (__this->fields).HEOOKBCLBGN = iVar1;
    }
    pHVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar4,pGVar2);
    return;
  }
  return;
}


// ===== public void .ctor(HBLHCCMEEEC IBKIPBJJCPG)  [RVA 0x3153D70]
// HBLHCCMEEEC$$.ctor @ RVA 0x3153D70

void HBLHCCMEEEC___ctor(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    (__this->fields).IAAJODFMEIC = (IBKIPBJJCPG->fields).IAAJODFMEIC;
    (__this->fields).HEOOKBCLBGN = (IBKIPBJJCPG->fields).HEOOKBCLBGN;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HBLHCCMEEEC Clone()  [RVA 0x3153DCC]
// HBLHCCMEEEC$$Clone @ RVA 0x3153DCC

HBLHCCMEEEC_o * HBLHCCMEEEC__Clone(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  HBLHCCMEEEC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456681f & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_0456681f = 1;
    method = extraout_x1;
  }
  __this_00 = (HBLHCCMEEEC_o *)thunk_FUN_01bda818(HBLHCCMEEEC_TypeInfo,method);
  HBLHCCMEEEC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void NOMFMKNHABM(int CJNHFNHJHPE)  [RVA 0x3153E24]
// HBLHCCMEEEC$$NOMFMKNHABM @ RVA 0x3153E24

void HBLHCCMEEEC__NOMFMKNHABM(HBLHCCMEEEC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HEOOKBCLBGN = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3153E2C]
// HBLHCCMEEEC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3153E2C

Google_Protobuf_Reflection_MessageDescriptor_o *
HBLHCCMEEEC__pb__Google_Protobuf_IMessage_get_Descriptor(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  HBLHCCMEEEC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566820 & 1) == 0) {
    FUN_01bab630(&HBLHCCMEEEC_TypeInfo);
    DAT_04566820 = 1;
    method = extraout_x1;
  }
  method_00 = HBLHCCMEEEC_TypeInfo;
  if ((HBLHCCMEEEC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HBLHCCMEEEC_c *)thunk_FUN_01ba7564(HBLHCCMEEEC_TypeInfo,method);
  }
  pGVar1 = HBLHCCMEEEC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x3153DC4]
// HBLHCCMEEEC$$.ctor @ RVA 0x3153DC4

void HBLHCCMEEEC___ctor(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public long PENFKLMKMJJ()  [RVA 0x3153E78]
// HBLHCCMEEEC$$PENFKLMKMJJ @ RVA 0x3153E78

int64_t HBLHCCMEEEC__PENFKLMKMJJ(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  return (__this->fields).IAAJODFMEIC;
}


// ===== public override string ToString()  [RVA 0x3153E80]
// HBLHCCMEEEC$$ToString @ RVA 0x3153E80

System_String_o * HBLHCCMEEEC__ToString(HBLHCCMEEEC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566821 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566821 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool Equals(HBLHCCMEEEC IBKIPBJJCPG)  [RVA 0x3153CD8]
// HBLHCCMEEEC$$Equals @ RVA 0x3153CD8

bool HBLHCCMEEEC__Equals(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).IAAJODFMEIC == (IBKIPBJJCPG->fields).IAAJODFMEIC) &&
       ((__this->fields).HEOOKBCLBGN == (IBKIPBJJCPG->fields).HEOOKBCLBGN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}

