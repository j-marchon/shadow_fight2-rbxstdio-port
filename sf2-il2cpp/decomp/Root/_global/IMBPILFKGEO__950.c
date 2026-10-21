// TypeDefIndex 950
// Namespace: 
// public sealed class IMBPILFKGEO : IMessage<IMBPILFKGEO>, IMessage, IEquatable<IMBPILFKGEO>, IDeepCloneable<IMBPILFKGEO>
// Fields:
//   private static readonly MessageParser<IMBPILFKGEO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int GBBOMFBEKIP = 1;
//   private long GJMFPDLPLNH; // 0x18
//   public const int EAIBEOLFIHD = 2;
//   private long DMIOJDBLCGB; // 0x20

// ===== public void JCHIKPKDDCI(long CJNHFNHJHPE)  [RVA 0x30AB7F4]
// IMBPILFKGEO$$JCHIKPKDDCI @ RVA 0x30AB7F4

void IMBPILFKGEO__JCHIKPKDDCI(IMBPILFKGEO_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DMIOJDBLCGB = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x30AB7FC]
// IMBPILFKGEO$$ToString @ RVA 0x30AB7FC

System_String_o * IMBPILFKGEO__ToString(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456619e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456619e = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30AB854]
// IMBPILFKGEO$$WriteTo @ RVA 0x30AB854

void IMBPILFKGEO__WriteTo
               (IMBPILFKGEO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).GJMFPDLPLNH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031ab8e4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).GJMFPDLPLNH,(MethodInfo *)0x0);
  }
  if ((__this->fields).DMIOJDBLCGB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_031ab8e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).DMIOJDBLCGB,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30AB8E8]
// IMBPILFKGEO$$Equals @ RVA 0x30AB8E8

bool IMBPILFKGEO__Equals(IMBPILFKGEO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456619f & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_0456619f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)IMBPILFKGEO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = IMBPILFKGEO__Equals(__this,(IMBPILFKGEO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public IMBPILFKGEO Clone()  [RVA 0x30AB998]
// IMBPILFKGEO$$Clone @ RVA 0x30AB998

IMBPILFKGEO_o * IMBPILFKGEO__Clone(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  IMBPILFKGEO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045661a0 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a0 = 1;
    method = extraout_x1;
  }
  __this_00 = (IMBPILFKGEO_o *)thunk_FUN_01bda818(IMBPILFKGEO_TypeInfo,method);
  IMBPILFKGEO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override int GetHashCode()  [RVA 0x30ABA3C]
// IMBPILFKGEO$$GetHashCode @ RVA 0x30ABA3C

int32_t IMBPILFKGEO__GetHashCode(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).GJMFPDLPLNH;
  if (lVar4 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar4;
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  lVar4 = (__this->fields).DMIOJDBLCGB;
  if (lVar4 != 0) {
    local_18 = lVar4;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar3 = (__this->fields).CKFPENBPNML;
  if (pGVar3 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30ABAB4]
// IMBPILFKGEO$$FFHIHGCDGAK @ RVA 0x30ABAB4

Google_Protobuf_Reflection_MessageDescriptor_o * IMBPILFKGEO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045661a1 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045661a1 = 1;
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
        goto LAB_031abb9c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031abb9c:
                    /* WARNING: Could not recover jumptable at 0x031abbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x45,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30ABBB8]
// IMBPILFKGEO$$MergeFrom @ RVA 0x30ABBB8

void IMBPILFKGEO__MergeFrom
               (IMBPILFKGEO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  IMBPILFKGEO_Fields *pIVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pIVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).GJMFPDLPLNH = iVar4;
        }
        if (uVar2 != 0x10) break;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).DMIOJDBLCGB = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pIVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pIVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long ELFCLDBNAHF()  [RVA 0x30ABC4C]
// IMBPILFKGEO$$ELFCLDBNAHF @ RVA 0x30ABC4C

int64_t IMBPILFKGEO__ELFCLDBNAHF(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  return (__this->fields).GJMFPDLPLNH;
}


// ===== public long IHPEBJPJJLF()  [RVA 0x30ABC54]
// IMBPILFKGEO$$IHPEBJPJJLF @ RVA 0x30ABC54

int64_t IMBPILFKGEO__IHPEBJPJJLF(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  return (__this->fields).DMIOJDBLCGB;
}


// ===== public void .ctor(IMBPILFKGEO IBKIPBJJCPG)  [RVA 0x30AB9F0]
// IMBPILFKGEO$$.ctor @ RVA 0x30AB9F0

void IMBPILFKGEO___ctor(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  int64_t iVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    iVar2 = (IBKIPBJJCPG->fields).GJMFPDLPLNH;
    (__this->fields).DMIOJDBLCGB = (IBKIPBJJCPG->fields).DMIOJDBLCGB;
    (__this->fields).GJMFPDLPLNH = iVar2;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(IMBPILFKGEO IBKIPBJJCPG)  [RVA 0x30ABC64]
// IMBPILFKGEO$$MergeFrom @ RVA 0x30ABC64

void IMBPILFKGEO__MergeFrom(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  IMBPILFKGEO_Fields *pIVar3;
  
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GJMFPDLPLNH;
    if (lVar2 != 0) {
      (__this->fields).GJMFPDLPLNH = lVar2;
    }
    lVar2 = (IBKIPBJJCPG->fields).DMIOJDBLCGB;
    if (lVar2 != 0) {
      (__this->fields).DMIOJDBLCGB = lVar2;
    }
    pIVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pIVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pIVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pIVar3,pGVar1);
    return;
  }
  return;
}


// ===== public bool Equals(IMBPILFKGEO IBKIPBJJCPG)  [RVA 0x30AB94C]
// IMBPILFKGEO$$Equals @ RVA 0x30AB94C

bool IMBPILFKGEO__Equals(IMBPILFKGEO_o *__this,IMBPILFKGEO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (IMBPILFKGEO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).GJMFPDLPLNH == (IBKIPBJJCPG->fields).GJMFPDLPLNH) &&
       ((__this->fields).DMIOJDBLCGB == (IBKIPBJJCPG->fields).DMIOJDBLCGB)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30ABCB0]
// IMBPILFKGEO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30ABCB0

Google_Protobuf_Reflection_MessageDescriptor_o *
IMBPILFKGEO__pb__Google_Protobuf_IMessage_get_Descriptor(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  IMBPILFKGEO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045661a2 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a2 = 1;
    method = extraout_x1;
  }
  method_00 = IMBPILFKGEO_TypeInfo;
  if ((IMBPILFKGEO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IMBPILFKGEO_c *)thunk_FUN_01ba7564(IMBPILFKGEO_TypeInfo,method);
  }
  pGVar1 = IMBPILFKGEO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void LELJCPPHELP(long CJNHFNHJHPE)  [RVA 0x30ABCFC]
// IMBPILFKGEO$$LELJCPPHELP @ RVA 0x30ABCFC

void IMBPILFKGEO__LELJCPPHELP(IMBPILFKGEO_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GJMFPDLPLNH = CJNHFNHJHPE;
  return;
}


// ===== public int CalculateSize()  [RVA 0x30ABD04]
// IMBPILFKGEO$$CalculateSize @ RVA 0x30ABD04

int32_t IMBPILFKGEO__CalculateSize(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  
  if ((DAT_045661a3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045661a3 = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).GJMFPDLPLNH;
  iVar2 = 0;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).DMIOJDBLCGB;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x30ABC5C]
// IMBPILFKGEO$$.ctor @ RVA 0x30ABC5C

void IMBPILFKGEO___ctor(IMBPILFKGEO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<IMBPILFKGEO> PGCAHPDCJBC()  [RVA 0x30ABDB8]
// IMBPILFKGEO$$PGCAHPDCJBC @ RVA 0x30ABDB8

Google_Protobuf_MessageParser_IMBPILFKGEO__o * IMBPILFKGEO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045661a4 & 1) == 0) {
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    DAT_045661a4 = 1;
  }
  if ((IMBPILFKGEO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return IMBPILFKGEO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private static void .cctor()  [RVA 0x30ABE10]
// IMBPILFKGEO$$.cctor @ RVA 0x30ABE10

void IMBPILFKGEO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IMBPILFKGEO__o *__this;
  
  if ((DAT_045661a5 & 1) == 0) {
    FUN_01bab630(&System_Func<IMBPILFKGEO>_TypeInfo);
    FUN_01bab630(&IMBPILFKGEO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IMBPILFKGEO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IMBPILFKGEO>_TypeInfo);
    FUN_01bab630(&Method_IMBPILFKGEO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&IMBPILFKGEO_<>c_TypeInfo);
    DAT_045661a5 = 1;
  }
  if ((IMBPILFKGEO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IMBPILFKGEO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IMBPILFKGEO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IMBPILFKGEO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IMBPILFKGEO>__ctor__);
  IMBPILFKGEO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IMBPILFKGEO_TypeInfo->static_fields,__this);
  return;
}

