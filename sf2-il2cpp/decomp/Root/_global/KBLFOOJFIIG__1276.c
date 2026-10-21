// TypeDefIndex 1276
// Namespace: 
// public sealed class KBLFOOJFIIG : IMessage<KBLFOOJFIIG>, IMessage, IEquatable<KBLFOOJFIIG>, IDeepCloneable<KBLFOOJFIIG>
// Fields:
//   private static readonly MessageParser<KBLFOOJFIIG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KJCADNEFABE = 1;
//   private long GDKPGIBMFPA; // 0x18

// ===== public static MessageParser<KBLFOOJFIIG> PGCAHPDCJBC()  [RVA 0x314E748]
// KBLFOOJFIIG$$PGCAHPDCJBC @ RVA 0x314E748

Google_Protobuf_MessageParser_KBLFOOJFIIG__o * KBLFOOJFIIG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045667ed & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667ed = 1;
  }
  if ((KBLFOOJFIIG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KBLFOOJFIIG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void .ctor()  [RVA 0x314E7A0]
// KBLFOOJFIIG$$.ctor @ RVA 0x314E7A0

void KBLFOOJFIIG___ctor(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x314E7A8]
// KBLFOOJFIIG$$Equals @ RVA 0x314E7A8

bool KBLFOOJFIIG__Equals(KBLFOOJFIIG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ee & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667ee = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KBLFOOJFIIG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KBLFOOJFIIG__Equals(__this,(KBLFOOJFIIG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public long CNKOOLDMAGC()  [RVA 0x314E848]
// KBLFOOJFIIG$$CNKOOLDMAGC @ RVA 0x314E848

int64_t KBLFOOJFIIG__CNKOOLDMAGC(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  return (__this->fields).GDKPGIBMFPA;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x314E850]
// KBLFOOJFIIG$$WriteTo @ RVA 0x314E850

void KBLFOOJFIIG__WriteTo
               (KBLFOOJFIIG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).GDKPGIBMFPA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public KBLFOOJFIIG Clone()  [RVA 0x314E8B8]
// KBLFOOJFIIG$$Clone @ RVA 0x314E8B8

KBLFOOJFIIG_o * KBLFOOJFIIG__Clone(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  KBLFOOJFIIG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667ef & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667ef = 1;
    method = extraout_x1;
  }
  __this_00 = (KBLFOOJFIIG_o *)thunk_FUN_01bda818(KBLFOOJFIIG_TypeInfo,method);
  KBLFOOJFIIG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public bool Equals(KBLFOOJFIIG IBKIPBJJCPG)  [RVA 0x314E80C]
// KBLFOOJFIIG$$Equals @ RVA 0x314E80C

bool KBLFOOJFIIG__Equals(KBLFOOJFIIG_o *__this,KBLFOOJFIIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KBLFOOJFIIG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).GDKPGIBMFPA == (IBKIPBJJCPG->fields).GDKPGIBMFPA) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x314E95C]
// KBLFOOJFIIG$$MergeFrom @ RVA 0x314E95C

void KBLFOOJFIIG__MergeFrom
               (KBLFOOJFIIG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KBLFOOJFIIG_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pKVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x314E9D4]
// KBLFOOJFIIG$$ToString @ RVA 0x314E9D4

System_String_o * KBLFOOJFIIG__ToString(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667f0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045667f0 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(KBLFOOJFIIG IBKIPBJJCPG)  [RVA 0x314EA2C]
// KBLFOOJFIIG$$MergeFrom @ RVA 0x314EA2C

void KBLFOOJFIIG__MergeFrom(KBLFOOJFIIG_o *__this,KBLFOOJFIIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  KBLFOOJFIIG_Fields *pKVar3;
  
  if (IBKIPBJJCPG != (KBLFOOJFIIG_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pKVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pKVar3,pGVar1);
    return;
  }
  return;
}


// ===== public override int GetHashCode()  [RVA 0x314EA6C]
// KBLFOOJFIIG$$GetHashCode @ RVA 0x314EA6C

int32_t KBLFOOJFIIG__GetHashCode(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).GDKPGIBMFPA;
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


// ===== public void .ctor(KBLFOOJFIIG IBKIPBJJCPG)  [RVA 0x314E910]
// KBLFOOJFIIG$$.ctor @ RVA 0x314E910

void KBLFOOJFIIG___ctor(KBLFOOJFIIG_o *__this,KBLFOOJFIIG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KBLFOOJFIIG_o *)0x0) {
    (__this->fields).GDKPGIBMFPA = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x314EAC8]
// KBLFOOJFIIG$$.cctor @ RVA 0x314EAC8

void KBLFOOJFIIG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KBLFOOJFIIG__o *__this;
  
  if ((DAT_045667f1 & 1) == 0) {
    FUN_01bab630(&System_Func<KBLFOOJFIIG>_TypeInfo);
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KBLFOOJFIIG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KBLFOOJFIIG>_TypeInfo);
    FUN_01bab630(&Method_KBLFOOJFIIG_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&KBLFOOJFIIG_<>c_TypeInfo);
    DAT_045667f1 = 1;
  }
  if ((KBLFOOJFIIG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KBLFOOJFIIG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KBLFOOJFIIG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KBLFOOJFIIG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KBLFOOJFIIG>__ctor__);
  KBLFOOJFIIG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KBLFOOJFIIG_TypeInfo->static_fields,__this);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x314EBE0]
// KBLFOOJFIIG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314EBE0

Google_Protobuf_Reflection_MessageDescriptor_o *
KBLFOOJFIIG__pb__Google_Protobuf_IMessage_get_Descriptor(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  KBLFOOJFIIG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667f2 & 1) == 0) {
    FUN_01bab630(&KBLFOOJFIIG_TypeInfo);
    DAT_045667f2 = 1;
    method = extraout_x1;
  }
  method_00 = KBLFOOJFIIG_TypeInfo;
  if ((KBLFOOJFIIG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KBLFOOJFIIG_c *)thunk_FUN_01ba7564(KBLFOOJFIIG_TypeInfo,method);
  }
  pGVar1 = KBLFOOJFIIG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x314EC2C]
// KBLFOOJFIIG$$FFHIHGCDGAK @ RVA 0x314EC2C

Google_Protobuf_Reflection_MessageDescriptor_o * KBLFOOJFIIG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045667f3 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045667f3 = 1;
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
        goto LAB_0324ed14;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0324ed14:
                    /* WARNING: Could not recover jumptable at 0x0324ed28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,3,pVVar2->method);
  return pGVar3;
}


// ===== public int CalculateSize()  [RVA 0x314ED30]
// KBLFOOJFIIG$$CalculateSize @ RVA 0x314ED30

int32_t KBLFOOJFIIG__CalculateSize(KBLFOOJFIIG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  
  if ((DAT_045667f4 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045667f4 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).GDKPGIBMFPA;
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


// ===== public void PKPLAKAMOPO(long CJNHFNHJHPE)  [RVA 0x314EDB0]
// KBLFOOJFIIG$$PKPLAKAMOPO @ RVA 0x314EDB0

void KBLFOOJFIIG__PKPLAKAMOPO(KBLFOOJFIIG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GDKPGIBMFPA = CJNHFNHJHPE;
  return;
}

