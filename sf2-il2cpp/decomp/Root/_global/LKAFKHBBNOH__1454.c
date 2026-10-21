// TypeDefIndex 1454
// Namespace: 
// public sealed class LKAFKHBBNOH : IMessage<LKAFKHBBNOH>, IMessage, IEquatable<LKAFKHBBNOH>, IDeepCloneable<LKAFKHBBNOH>
// Fields:
//   private static readonly MessageParser<LKAFKHBBNOH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int IBOGBLEGAHB = 1;
//   private long MAHGAIJBBHF; // 0x18
//   public const int PNPGJIBHDPF = 2;
//   private long MKGNDFBBANC; // 0x20

// ===== public int CalculateSize()  [RVA 0x318D7F4]
// LKAFKHBBNOH$$CalculateSize @ RVA 0x318D7F4

int32_t LKAFKHBBNOH__CalculateSize(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  
  if ((DAT_04566a1c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566a1c = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).MAHGAIJBBHF;
  iVar2 = 0;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).MKGNDFBBANC;
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


// ===== public void .ctor()  [RVA 0x318D8A8]
// LKAFKHBBNOH$$.ctor @ RVA 0x318D8A8

void LKAFKHBBNOH___ctor(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x318D8B0]
// LKAFKHBBNOH$$Equals @ RVA 0x318D8B0

bool LKAFKHBBNOH__Equals(LKAFKHBBNOH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566a1d & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a1d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LKAFKHBBNOH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LKAFKHBBNOH__Equals(__this,(LKAFKHBBNOH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void OPKJBABEHFH(long CJNHFNHJHPE)  [RVA 0x318D960]
// LKAFKHBBNOH$$OPKJBABEHFH @ RVA 0x318D960

void LKAFKHBBNOH__OPKJBABEHFH(LKAFKHBBNOH_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MAHGAIJBBHF = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x318D968]
// LKAFKHBBNOH$$MergeFrom @ RVA 0x318D968

void LKAFKHBBNOH__MergeFrom
               (LKAFKHBBNOH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  LKAFKHBBNOH_Fields *pLVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pLVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).MAHGAIJBBHF = iVar4;
        }
        if (uVar2 != 0x10) break;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).MKGNDFBBANC = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pLVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pLVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pLVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long DGDDIIMMPEL()  [RVA 0x318D9FC]
// LKAFKHBBNOH$$DGDDIIMMPEL @ RVA 0x318D9FC

int64_t LKAFKHBBNOH__DGDDIIMMPEL(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  return (__this->fields).MAHGAIJBBHF;
}


// ===== public LKAFKHBBNOH Clone()  [RVA 0x318DA04]
// LKAFKHBBNOH$$Clone @ RVA 0x318DA04

LKAFKHBBNOH_o * LKAFKHBBNOH__Clone(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  LKAFKHBBNOH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566a1e & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a1e = 1;
    method = extraout_x1;
  }
  __this_00 = (LKAFKHBBNOH_o *)thunk_FUN_01bda818(LKAFKHBBNOH_TypeInfo,method);
  LKAFKHBBNOH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void DPNGBFACKOL(long CJNHFNHJHPE)  [RVA 0x318DAA8]
// LKAFKHBBNOH$$DPNGBFACKOL @ RVA 0x318DAA8

void LKAFKHBBNOH__DPNGBFACKOL(LKAFKHBBNOH_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MKGNDFBBANC = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x318DAB0]
// LKAFKHBBNOH$$.cctor @ RVA 0x318DAB0

void LKAFKHBBNOH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LKAFKHBBNOH__o *__this;
  
  if ((DAT_04566a1f & 1) == 0) {
    FUN_01bab630(&System_Func<LKAFKHBBNOH>_TypeInfo);
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LKAFKHBBNOH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LKAFKHBBNOH>_TypeInfo);
    FUN_01bab630(&Method_LKAFKHBBNOH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&LKAFKHBBNOH_<>c_TypeInfo);
    DAT_04566a1f = 1;
  }
  if ((LKAFKHBBNOH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LKAFKHBBNOH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LKAFKHBBNOH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LKAFKHBBNOH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LKAFKHBBNOH>__ctor__);
  LKAFKHBBNOH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LKAFKHBBNOH_TypeInfo->static_fields,__this);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x318DBC8]
// LKAFKHBBNOH$$WriteTo @ RVA 0x318DBC8

void LKAFKHBBNOH__WriteTo
               (LKAFKHBBNOH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MAHGAIJBBHF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0328dc58;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).MAHGAIJBBHF,(MethodInfo *)0x0);
  }
  if ((__this->fields).MKGNDFBBANC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0328dc58:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).MKGNDFBBANC,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x318DC5C]
// LKAFKHBBNOH$$FFHIHGCDGAK @ RVA 0x318DC5C

Google_Protobuf_Reflection_MessageDescriptor_o * LKAFKHBBNOH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566a20 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566a20 = 1;
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
        goto LAB_0328dd44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0328dd44:
                    /* WARNING: Could not recover jumptable at 0x0328dd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x48,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(LKAFKHBBNOH IBKIPBJJCPG)  [RVA 0x318DA5C]
// LKAFKHBBNOH$$.ctor @ RVA 0x318DA5C

void LKAFKHBBNOH___ctor(LKAFKHBBNOH_o *__this,LKAFKHBBNOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  int64_t iVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (LKAFKHBBNOH_o *)0x0) {
    iVar2 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    (__this->fields).MKGNDFBBANC = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    (__this->fields).MAHGAIJBBHF = iVar2;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x318DD60]
// LKAFKHBBNOH$$GetHashCode @ RVA 0x318DD60

int32_t LKAFKHBBNOH__GetHashCode(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).MAHGAIJBBHF;
  if (lVar4 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar4;
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  lVar4 = (__this->fields).MKGNDFBBANC;
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


// ===== public long PACDGHACPFJ()  [RVA 0x318DDD8]
// LKAFKHBBNOH$$PACDGHACPFJ @ RVA 0x318DDD8

int64_t LKAFKHBBNOH__PACDGHACPFJ(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  return (__this->fields).MKGNDFBBANC;
}


// ===== public static MessageParser<LKAFKHBBNOH> PGCAHPDCJBC()  [RVA 0x318DDE0]
// LKAFKHBBNOH$$PGCAHPDCJBC @ RVA 0x318DDE0

Google_Protobuf_MessageParser_LKAFKHBBNOH__o * LKAFKHBBNOH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566a21 & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a21 = 1;
  }
  if ((LKAFKHBBNOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return LKAFKHBBNOH_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(LKAFKHBBNOH IBKIPBJJCPG)  [RVA 0x318DE38]
// LKAFKHBBNOH$$MergeFrom @ RVA 0x318DE38

void LKAFKHBBNOH__MergeFrom(LKAFKHBBNOH_o *__this,LKAFKHBBNOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  LKAFKHBBNOH_Fields *pLVar3;
  
  if (IBKIPBJJCPG != (LKAFKHBBNOH_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    if (lVar2 != 0) {
      (__this->fields).MAHGAIJBBHF = lVar2;
    }
    lVar2 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar2 != 0) {
      (__this->fields).MKGNDFBBANC = lVar2;
    }
    pLVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pLVar3,pGVar1);
    return;
  }
  return;
}


// ===== public bool Equals(LKAFKHBBNOH IBKIPBJJCPG)  [RVA 0x318D914]
// LKAFKHBBNOH$$Equals @ RVA 0x318D914

bool LKAFKHBBNOH__Equals(LKAFKHBBNOH_o *__this,LKAFKHBBNOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LKAFKHBBNOH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).MAHGAIJBBHF == (IBKIPBJJCPG->fields).MAHGAIJBBHF) &&
       ((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override string ToString()  [RVA 0x318DE84]
// LKAFKHBBNOH$$ToString @ RVA 0x318DE84

System_String_o * LKAFKHBBNOH__ToString(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a22 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566a22 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x318DEDC]
// LKAFKHBBNOH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x318DEDC

Google_Protobuf_Reflection_MessageDescriptor_o *
LKAFKHBBNOH__pb__Google_Protobuf_IMessage_get_Descriptor(LKAFKHBBNOH_o *__this,MethodInfo *method)

{
  LKAFKHBBNOH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a23 & 1) == 0) {
    FUN_01bab630(&LKAFKHBBNOH_TypeInfo);
    DAT_04566a23 = 1;
    method = extraout_x1;
  }
  method_00 = LKAFKHBBNOH_TypeInfo;
  if ((LKAFKHBBNOH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LKAFKHBBNOH_c *)thunk_FUN_01ba7564(LKAFKHBBNOH_TypeInfo,method);
  }
  pGVar1 = LKAFKHBBNOH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

