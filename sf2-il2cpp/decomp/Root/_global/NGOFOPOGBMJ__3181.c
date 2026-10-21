// TypeDefIndex 3181
// Namespace: 
// public sealed class NGOFOPOGBMJ : IMessage<NGOFOPOGBMJ>, IMessage, IEquatable<NGOFOPOGBMJ>, IDeepCloneable<NGOFOPOGBMJ>
// Fields:
//   private static readonly MessageParser<NGOFOPOGBMJ> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KJCADNEFABE = 1;
//   private long GDKPGIBMFPA; // 0x18

// ===== public override int GetHashCode()  [RVA 0x34E5710]
// NGOFOPOGBMJ$$GetHashCode @ RVA 0x34E5710

int32_t NGOFOPOGBMJ__GetHashCode(NGOFOPOGBMJ_o *__this,MethodInfo *method)

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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34E576C]
// NGOFOPOGBMJ$$FFHIHGCDGAK @ RVA 0x34E576C

Google_Protobuf_Reflection_MessageDescriptor_o * NGOFOPOGBMJ__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456875d & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456875d = 1;
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
        goto LAB_035e5854;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035e5854:
                    /* WARNING: Could not recover jumptable at 0x035e5868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0xe,pVVar2->method);
  return pGVar3;
}


// ===== public int CalculateSize()  [RVA 0x34E5870]
// NGOFOPOGBMJ$$CalculateSize @ RVA 0x34E5870

int32_t NGOFOPOGBMJ__CalculateSize(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  
  if ((DAT_0456875e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_0456875e = 1;
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34E58F0]
// NGOFOPOGBMJ$$Equals @ RVA 0x34E58F0

bool NGOFOPOGBMJ__Equals(NGOFOPOGBMJ_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456875f & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_0456875f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NGOFOPOGBMJ_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NGOFOPOGBMJ__Equals(__this,(NGOFOPOGBMJ_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(NGOFOPOGBMJ IBKIPBJJCPG)  [RVA 0x34E5990]
// NGOFOPOGBMJ$$.ctor @ RVA 0x34E5990

void NGOFOPOGBMJ___ctor(NGOFOPOGBMJ_o *__this,NGOFOPOGBMJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
                    /* try { // try from 035e5998 to 036e5b2b has its CatchHandler @ 035e5998
                       catch() { ... } // from try @ 035e5998 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5bdc with catch @ 035e5998
                       catch() { ... } // from try @ 035e5c88 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5ca4 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5d00 with catch @ 035e5998
                       catch() { ... } // from try @ 035e5d40 with catch @ 035e5998 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NGOFOPOGBMJ_o *)0x0) {
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


// ===== public static MessageParser<NGOFOPOGBMJ> PGCAHPDCJBC()  [RVA 0x34E59E4]
// NGOFOPOGBMJ$$PGCAHPDCJBC @ RVA 0x34E59E4

Google_Protobuf_MessageParser_NGOFOPOGBMJ__o * NGOFOPOGBMJ__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568760 & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_04568760 = 1;
  }
  if ((NGOFOPOGBMJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return NGOFOPOGBMJ_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private static void .cctor()  [RVA 0x34E5A3C]
// NGOFOPOGBMJ$$.cctor @ RVA 0x34E5A3C

void NGOFOPOGBMJ___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NGOFOPOGBMJ__o *__this;
  
  if ((DAT_04568761 & 1) == 0) {
    FUN_01bab630(&System_Func<NGOFOPOGBMJ>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NGOFOPOGBMJ>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NGOFOPOGBMJ>_TypeInfo);
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    FUN_01bab630(&Method_NGOFOPOGBMJ_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&NGOFOPOGBMJ_<>c_TypeInfo);
    DAT_04568761 = 1;
  }
  if ((NGOFOPOGBMJ_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NGOFOPOGBMJ>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NGOFOPOGBMJ__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NGOFOPOGBMJ>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NGOFOPOGBMJ>__ctor__);
                    /* try { // try from 035e5b2c to 036e5b33 has its CatchHandler @ 035e5ce4 */
  NGOFOPOGBMJ_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 035e5b40 to 036e5b4b has its CatchHandler @ 035e5ce0 */
  thunk_FUN_01c20e04(NGOFOPOGBMJ_TypeInfo->static_fields,__this);
  return;
}


// ===== public bool Equals(NGOFOPOGBMJ IBKIPBJJCPG)  [RVA 0x34E5954]
// NGOFOPOGBMJ$$Equals @ RVA 0x34E5954

bool NGOFOPOGBMJ__Equals(NGOFOPOGBMJ_o *__this,NGOFOPOGBMJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (NGOFOPOGBMJ_o *)0x0) {
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


// ===== public void MergeFrom(NGOFOPOGBMJ IBKIPBJJCPG)  [RVA 0x34E5B54]
// NGOFOPOGBMJ$$MergeFrom @ RVA 0x34E5B54

void NGOFOPOGBMJ__MergeFrom(NGOFOPOGBMJ_o *__this,NGOFOPOGBMJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  NGOFOPOGBMJ_Fields *pNVar3;
  
                    /* try { // try from 035e5b54 to 036e5b5f has its CatchHandler @ 035e5cd8 */
  if (IBKIPBJJCPG != (NGOFOPOGBMJ_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pNVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pNVar3->CKFPENBPNML = pGVar1;
                    /* try { // try from 035e5b84 to 036e5b93 has its CatchHandler @ 035e5ccc */
    thunk_FUN_01c20e04(pNVar3,pGVar1);
    return;
  }
  return;
}


// ===== public long CNKOOLDMAGC()  [RVA 0x34E5B94]
// NGOFOPOGBMJ$$CNKOOLDMAGC @ RVA 0x34E5B94

int64_t NGOFOPOGBMJ__CNKOOLDMAGC(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  return (__this->fields).GDKPGIBMFPA;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34E5B9C]
// NGOFOPOGBMJ$$WriteTo @ RVA 0x34E5B9C

void NGOFOPOGBMJ__WriteTo
               (NGOFOPOGBMJ_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 035e5ba4 to 036e5bab has its CatchHandler @ 035e5cc8 */
  if ((__this->fields).GDKPGIBMFPA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 035e5bb8 to 036e5bc7 has its CatchHandler @ 035e5cbc */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 035e5bc8 to 036e5bdb has its CatchHandler @ 035e5cc0 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 035e5bdc to 036e5c7f has its CatchHandler @ 035e5998 */
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34E5C04]
// NGOFOPOGBMJ$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34E5C04

Google_Protobuf_Reflection_MessageDescriptor_o *
NGOFOPOGBMJ__pb__Google_Protobuf_IMessage_get_Descriptor(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  NGOFOPOGBMJ_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568762 & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
    DAT_04568762 = 1;
    method = extraout_x1;
  }
  method_00 = NGOFOPOGBMJ_TypeInfo;
  if ((NGOFOPOGBMJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NGOFOPOGBMJ_c *)thunk_FUN_01ba7564(NGOFOPOGBMJ_TypeInfo,method);
  }
  pGVar1 = NGOFOPOGBMJ__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public NGOFOPOGBMJ Clone()  [RVA 0x34E5C50]
// NGOFOPOGBMJ$$Clone @ RVA 0x34E5C50

NGOFOPOGBMJ_o * NGOFOPOGBMJ__Clone(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  NGOFOPOGBMJ_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568763 & 1) == 0) {
    FUN_01bab630(&NGOFOPOGBMJ_TypeInfo);
                    /* try { // try from 035e5c80 to 036e5c83 has its CatchHandler @ 035e5cdc */
    DAT_04568763 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035e5c84 to 036e5c87 has its CatchHandler @ 035e5cd4 */
                    /* try { // try from 035e5c88 to 036e5c8b has its CatchHandler @ 035e5998 */
  __this_00 = (NGOFOPOGBMJ_o *)thunk_FUN_01bda818(NGOFOPOGBMJ_TypeInfo,method);
                    /* try { // try from 035e5c8c to 036e5c8f has its CatchHandler @ 035e5cd0 */
                    /* try { // try from 035e5c90 to 036e5c93 has its CatchHandler @ 035e5cc4 */
                    /* try { // try from 035e5c94 to 036e5c97 has its CatchHandler @ 035e5cb8 */
  NGOFOPOGBMJ___ctor(__this_00,__this,in_x2);
                    /* try { // try from 035e5c98 to 036e5c9b has its CatchHandler @ 035e5cac */
                    /* try { // try from 035e5c9c to 036e5c9f has its CatchHandler @ 035e5ca8 */
                    /* try { // try from 035e5ca0 to 036e5ca3 has its CatchHandler @ 035e5ca4 */
                    /* catch() { ... } // from try @ 035e5ca0 with catch @ 035e5ca4
                       try { // try from 035e5ca4 to 036e5cfb has its CatchHandler @ 035e5998 */
  return __this_00;
}


// ===== public void PKPLAKAMOPO(long CJNHFNHJHPE)  [RVA 0x34E5CA8]
// NGOFOPOGBMJ$$PKPLAKAMOPO @ RVA 0x34E5CA8

void NGOFOPOGBMJ__PKPLAKAMOPO(NGOFOPOGBMJ_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035e5c9c with catch @ 035e5ca8 */
  (__this->fields).GDKPGIBMFPA = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 035e5c98 with catch @ 035e5cac */
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34E5CB0]
// NGOFOPOGBMJ$$MergeFrom @ RVA 0x34E5CB0

void NGOFOPOGBMJ__MergeFrom
               (NGOFOPOGBMJ_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NGOFOPOGBMJ_Fields *pNVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
                    /* catch() { ... } // from try @ 035e5c94 with catch @ 035e5cb8 */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* catch() { ... } // from try @ 035e5bb8 with catch @ 035e5cbc */
                    /* catch() { ... } // from try @ 035e5bc8 with catch @ 035e5cc0 */
                    /* catch() { ... } // from try @ 035e5c90 with catch @ 035e5cc4 */
    pNVar1 = &__this->fields;
    while( true ) {
                    /* catch() { ... } // from try @ 035e5ba4 with catch @ 035e5cc8 */
                    /* catch() { ... } // from try @ 035e5b84 with catch @ 035e5ccc */
                    /* catch() { ... } // from try @ 035e5c8c with catch @ 035e5cd0 */
                    /* catch() { ... } // from try @ 035e5c84 with catch @ 035e5cd4 */
                    /* catch() { ... } // from try @ 035e5b54 with catch @ 035e5cd8 */
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar4;
      }
                    /* catch() { ... } // from try @ 035e5c80 with catch @ 035e5cdc */
      if (uVar2 == 0) break;
                    /* catch() { ... } // from try @ 035e5b40 with catch @ 035e5ce0 */
                    /* catch() { ... } // from try @ 035e5b2c with catch @ 035e5ce4 */
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pNVar1->CKFPENBPNML = pGVar3;
                    /* try { // try from 035e5cfc to 036e5cff has its CatchHandler @ 035e5d28 */
      thunk_FUN_01c20e04(pNVar1,pGVar3);
                    /* try { // try from 035e5d00 to 036e5d37 has its CatchHandler @ 035e5998 */
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34E59DC]
// NGOFOPOGBMJ$$.ctor @ RVA 0x34E59DC

void NGOFOPOGBMJ___ctor(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override string ToString()  [RVA 0x34E5D28]
// NGOFOPOGBMJ$$ToString @ RVA 0x34E5D28

System_String_o * NGOFOPOGBMJ__ToString(NGOFOPOGBMJ_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035e5cfc with catch @ 035e5d28 */
                    /* try { // try from 035e5d38 to 036e5d3f has its CatchHandler @ 035e5d54 */
                    /* try { // try from 035e5d40 to 036e5d4b has its CatchHandler @ 035e5998 */
  if ((DAT_04568764 & 1) == 0) {
                    /* try { // try from 035e5d4c to 036e5d53 has its CatchHandler @ 035e5d54 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 035e5d38 with catch @ 035e5d54
                       catch() { ... } // from try @ 035e5d4c with catch @ 035e5d54 */
    DAT_04568764 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

