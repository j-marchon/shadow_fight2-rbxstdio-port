// TypeDefIndex 277
// Namespace: 
// public sealed class BFLFFPLIIFM : IMessage<BFLFFPLIIFM>, IMessage, IEquatable<BFLFFPLIIFM>, IDeepCloneable<BFLFFPLIIFM>
// Fields:
//   private static readonly MessageParser<BFLFFPLIIFM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int OMEOOMDBAHF = 1;
//   private long POLEIDMHDNP; // 0x18

// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3232B10]
// BFLFFPLIIFM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3232B10

Google_Protobuf_Reflection_MessageDescriptor_o *
BFLFFPLIIFM__pb__Google_Protobuf_IMessage_get_Descriptor(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  BFLFFPLIIFM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566feb & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566feb = 1;
    method = extraout_x1;
  }
  method_00 = BFLFFPLIIFM_TypeInfo;
  if ((BFLFFPLIIFM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BFLFFPLIIFM_c *)thunk_FUN_01ba7564(BFLFFPLIIFM_TypeInfo,method);
  }
  pGVar1 = BFLFFPLIIFM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void CNLPFGDBIIM(long CJNHFNHJHPE)  [RVA 0x3232C60]
// BFLFFPLIIFM$$CNLPFGDBIIM @ RVA 0x3232C60

void BFLFFPLIIFM__CNLPFGDBIIM(BFLFFPLIIFM_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).POLEIDMHDNP = CJNHFNHJHPE;
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3232C68]
// BFLFFPLIIFM$$WriteTo @ RVA 0x3232C68

void BFLFFPLIIFM__WriteTo
               (BFLFFPLIIFM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).POLEIDMHDNP != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).POLEIDMHDNP,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public bool Equals(BFLFFPLIIFM IBKIPBJJCPG)  [RVA 0x3232CD0]
// BFLFFPLIIFM$$Equals @ RVA 0x3232CD0

bool BFLFFPLIIFM__Equals(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).POLEIDMHDNP == (IBKIPBJJCPG->fields).POLEIDMHDNP) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3232D0C]
// BFLFFPLIIFM$$MergeFrom @ RVA 0x3232D0C

void BFLFFPLIIFM__MergeFrom
               (BFLFFPLIIFM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BFLFFPLIIFM_Fields *pBVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pBVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).POLEIDMHDNP = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pBVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pBVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<BFLFFPLIIFM> PGCAHPDCJBC()  [RVA 0x3232D84]
// BFLFFPLIIFM$$PGCAHPDCJBC @ RVA 0x3232D84

Google_Protobuf_MessageParser_BFLFFPLIIFM__o * BFLFFPLIIFM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566fec & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566fec = 1;
  }
  if ((BFLFFPLIIFM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return BFLFFPLIIFM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public long OOGBOIAKAEI()  [RVA 0x3232DDC]
// BFLFFPLIIFM$$OOGBOIAKAEI @ RVA 0x3232DDC

int64_t BFLFFPLIIFM__OOGBOIAKAEI(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  return (__this->fields).POLEIDMHDNP;
}


// ===== public BFLFFPLIIFM Clone()  [RVA 0x3232DE4]
// BFLFFPLIIFM$$Clone @ RVA 0x3232DE4

BFLFFPLIIFM_o * BFLFFPLIIFM__Clone(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  BFLFFPLIIFM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566fed & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566fed = 1;
    method = extraout_x1;
  }
  __this_00 = (BFLFFPLIIFM_o *)thunk_FUN_01bda818(BFLFFPLIIFM_TypeInfo,method);
  BFLFFPLIIFM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(BFLFFPLIIFM IBKIPBJJCPG)  [RVA 0x3232E88]
// BFLFFPLIIFM$$MergeFrom @ RVA 0x3232E88

void BFLFFPLIIFM__MergeFrom(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  BFLFFPLIIFM_Fields *pBVar3;
  
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).POLEIDMHDNP;
    if (lVar2 != 0) {
      (__this->fields).POLEIDMHDNP = lVar2;
    }
    pBVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pBVar3,pGVar1);
    return;
  }
  return;
}


// ===== public override string ToString()  [RVA 0x3232EC8]
// BFLFFPLIIFM$$ToString @ RVA 0x3232EC8

System_String_o * BFLFFPLIIFM__ToString(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566fee & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566fee = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3232F20]
// BFLFFPLIIFM$$GetHashCode @ RVA 0x3232F20

int32_t BFLFFPLIIFM__GetHashCode(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).POLEIDMHDNP;
  if (lVar4 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar4;
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  pGVar3 = (__this->fields).CKFPENBPNML;
  if (pGVar3 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3232B5C]
// BFLFFPLIIFM$$FFHIHGCDGAK @ RVA 0x3232B5C

Google_Protobuf_Reflection_MessageDescriptor_o * BFLFFPLIIFM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566fef & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566fef = 1;
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
        goto LAB_03332c44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03332c44:
                    /* WARNING: Could not recover jumptable at 0x03332c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0xd,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(BFLFFPLIIFM IBKIPBJJCPG)  [RVA 0x3232E3C]
// BFLFFPLIIFM$$.ctor @ RVA 0x3232E3C

void BFLFFPLIIFM___ctor(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    (__this->fields).POLEIDMHDNP = (IBKIPBJJCPG->fields).POLEIDMHDNP;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x3232F84]
// BFLFFPLIIFM$$CalculateSize @ RVA 0x3232F84

int32_t BFLFFPLIIFM__CalculateSize(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  
  if ((DAT_04566ff0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566ff0 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).POLEIDMHDNP;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== private static void .cctor()  [RVA 0x3233004]
// BFLFFPLIIFM$$.cctor @ RVA 0x3233004

void BFLFFPLIIFM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BFLFFPLIIFM__o *__this;
  
  if ((DAT_04566ff1 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    FUN_01bab630(&System_Func<BFLFFPLIIFM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BFLFFPLIIFM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BFLFFPLIIFM>_TypeInfo);
    FUN_01bab630(&Method_BFLFFPLIIFM_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&BFLFFPLIIFM_<>c_TypeInfo);
    DAT_04566ff1 = 1;
  }
  if ((BFLFFPLIIFM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BFLFFPLIIFM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BFLFFPLIIFM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BFLFFPLIIFM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BFLFFPLIIFM>__ctor__);
  BFLFFPLIIFM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BFLFFPLIIFM_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3232F7C]
// BFLFFPLIIFM$$.ctor @ RVA 0x3232F7C

void BFLFFPLIIFM___ctor(BFLFFPLIIFM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x323311C]
// BFLFFPLIIFM$$Equals @ RVA 0x323311C

bool BFLFFPLIIFM__Equals(BFLFFPLIIFM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566ff2 & 1) == 0) {
    FUN_01bab630(&BFLFFPLIIFM_TypeInfo);
    DAT_04566ff2 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BFLFFPLIIFM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BFLFFPLIIFM__Equals(__this,(BFLFFPLIIFM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

