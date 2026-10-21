// TypeDefIndex 2252
// Namespace: 
// public sealed class PGICCMFLDPI : IMessage<PGICCMFLDPI>, IMessage, IEquatable<PGICCMFLDPI>, IDeepCloneable<PGICCMFLDPI>
// Fields:
//   private static readonly MessageParser<PGICCMFLDPI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KJCADNEFABE = 1;
//   private long GDKPGIBMFPA; // 0x18

// ===== public long CNKOOLDMAGC()  [RVA 0x32FD06C]
// PGICCMFLDPI$$CNKOOLDMAGC @ RVA 0x32FD06C

int64_t PGICCMFLDPI__CNKOOLDMAGC(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  return (__this->fields).GDKPGIBMFPA;
}


// ===== private static void .cctor()  [RVA 0x32FD074]
// PGICCMFLDPI$$.cctor @ RVA 0x32FD074

void PGICCMFLDPI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PGICCMFLDPI__o *__this;
  
                    /* try { // try from 033fd08c to 034fd203 has its CatchHandler @ 033fd08c
                       catch() { ... } // from try @ 033fd08c with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd224 with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd33c with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd368 with catch @ 033fd08c
                       catch() { ... } // from try @ 033fd3a8 with catch @ 033fd08c */
  if ((DAT_045676f5 & 1) == 0) {
    FUN_01bab630(&System_Func<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PGICCMFLDPI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_PGICCMFLDPI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&PGICCMFLDPI_<>c_TypeInfo);
    DAT_045676f5 = 1;
  }
  if ((PGICCMFLDPI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PGICCMFLDPI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PGICCMFLDPI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PGICCMFLDPI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PGICCMFLDPI>__ctor__);
  PGICCMFLDPI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PGICCMFLDPI_TypeInfo->static_fields,__this);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32FD18C]
// PGICCMFLDPI$$WriteTo @ RVA 0x32FD18C

void PGICCMFLDPI__WriteTo
               (PGICCMFLDPI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
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


// ===== public override int GetHashCode()  [RVA 0x32FD1F4]
// PGICCMFLDPI$$GetHashCode @ RVA 0x32FD1F4

int32_t PGICCMFLDPI__GetHashCode(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  long local_18;
  
  local_18 = 0;
  lVar4 = (__this->fields).GDKPGIBMFPA;
                    /* try { // try from 033fd204 to 034fd20b has its CatchHandler @ 033fd34c */
  if (lVar4 == 0) {
                    /* try { // try from 033fd224 to 034fd337 has its CatchHandler @ 033fd08c */
    uVar1 = 1;
  }
  else {
    local_18 = lVar4;
                    /* try { // try from 033fd218 to 034fd223 has its CatchHandler @ 033fd344 */
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


// ===== public override string ToString()  [RVA 0x32FD250]
// PGICCMFLDPI$$ToString @ RVA 0x32FD250

System_String_o * PGICCMFLDPI__ToString(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676f6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045676f6 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void PKPLAKAMOPO(long CJNHFNHJHPE)  [RVA 0x32FD2A8]
// PGICCMFLDPI$$PKPLAKAMOPO @ RVA 0x32FD2A8

void PGICCMFLDPI__PKPLAKAMOPO(PGICCMFLDPI_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GDKPGIBMFPA = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32FD2B0]
// PGICCMFLDPI$$MergeFrom @ RVA 0x32FD2B0

void PGICCMFLDPI__MergeFrom
               (PGICCMFLDPI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_Fields *pPVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pPVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar4;
      }
      if (uVar2 == 0) break;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pPVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pPVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pPVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<PGICCMFLDPI> PGCAHPDCJBC()  [RVA 0x32FD328]
// PGICCMFLDPI$$PGCAHPDCJBC @ RVA 0x32FD328

Google_Protobuf_MessageParser_PGICCMFLDPI__o * PGICCMFLDPI__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 033fd338 to 034fd33b has its CatchHandler @ 033fd348 */
                    /* try { // try from 033fd33c to 034fd363 has its CatchHandler @ 033fd08c */
  if ((DAT_045676f7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fd218 with catch @ 033fd344
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fd338 with catch @ 033fd348
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fd204 with catch @ 033fd34c
                        */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045676f7 = 1;
  }
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033fd364 to 034fd367 has its CatchHandler @ 033fd390 */
    thunk_FUN_01ba7564();
                    /* try { // try from 033fd368 to 034fd39f has its CatchHandler @ 033fd08c */
  }
  return PGICCMFLDPI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x32FD380]
// PGICCMFLDPI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32FD380

Google_Protobuf_Reflection_MessageDescriptor_o *
PGICCMFLDPI__pb__Google_Protobuf_IMessage_get_Descriptor(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  PGICCMFLDPI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033fd364 with catch @ 033fd390 */
  if ((DAT_045676f8 & 1) == 0) {
                    /* try { // try from 033fd3a0 to 034fd3a7 has its CatchHandler @ 033fd3bc */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
                    /* try { // try from 033fd3a8 to 034fd3b3 has its CatchHandler @ 033fd08c */
    DAT_045676f8 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033fd3b4 to 034fd3bb has its CatchHandler @ 033fd3bc */
  method_00 = PGICCMFLDPI_TypeInfo;
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033fd3a0 with catch @ 033fd3bc
                       catch(type#2 @ 00000000) { ... } // from try @ 033fd3b4 with catch @ 033fd3bc
                        */
    method_00 = (PGICCMFLDPI_c *)thunk_FUN_01ba7564(PGICCMFLDPI_TypeInfo,method);
  }
                    /* try { // try from 033fd3c0 to 034fd6a7 has its CatchHandler @ 033fd3c0
                       catch() { ... } // from try @ 033fd3c0 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd854 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd938 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fd940 with catch @ 033fd3c0
                       catch() { ... } // from try @ 033fda20 with catch @ 033fd3c0 */
  pGVar1 = PGICCMFLDPI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public bool Equals(PGICCMFLDPI IBKIPBJJCPG)  [RVA 0x32FD4D0]
// PGICCMFLDPI$$Equals @ RVA 0x32FD4D0

bool PGICCMFLDPI__Equals(PGICCMFLDPI_o *__this,PGICCMFLDPI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (PGICCMFLDPI_o *)0x0) {
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


// ===== public PGICCMFLDPI Clone()  [RVA 0x32FD50C]
// PGICCMFLDPI$$Clone @ RVA 0x32FD50C

PGICCMFLDPI_o * PGICCMFLDPI__Clone(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  PGICCMFLDPI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045676f9 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045676f9 = 1;
    method = extraout_x1;
  }
  __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo,method);
  PGICCMFLDPI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x32FD5B0]
// PGICCMFLDPI$$.ctor @ RVA 0x32FD5B0

void PGICCMFLDPI___ctor(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32FD5B8]
// PGICCMFLDPI$$Equals @ RVA 0x32FD5B8

bool PGICCMFLDPI__Equals(PGICCMFLDPI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045676fa & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045676fa = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PGICCMFLDPI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PGICCMFLDPI__Equals(__this,(PGICCMFLDPI_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(PGICCMFLDPI IBKIPBJJCPG)  [RVA 0x32FD61C]
// PGICCMFLDPI$$MergeFrom @ RVA 0x32FD61C

void PGICCMFLDPI__MergeFrom(PGICCMFLDPI_o *__this,PGICCMFLDPI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  long lVar2;
  PGICCMFLDPI_Fields *pPVar3;
  
  if (IBKIPBJJCPG != (PGICCMFLDPI_o *)0x0) {
    lVar2 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (lVar2 != 0) {
      (__this->fields).GDKPGIBMFPA = lVar2;
    }
    pPVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pPVar3,pGVar1);
    return;
  }
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x32FD3CC]
// PGICCMFLDPI$$FFHIHGCDGAK @ RVA 0x32FD3CC

Google_Protobuf_Reflection_MessageDescriptor_o * PGICCMFLDPI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045676fb & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_045676fb = 1;
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
        goto LAB_033fd4b4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033fd4b4:
                    /* WARNING: Could not recover jumptable at 0x033fd4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,4,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(PGICCMFLDPI IBKIPBJJCPG)  [RVA 0x32FD564]
// PGICCMFLDPI$$.ctor @ RVA 0x32FD564

void PGICCMFLDPI___ctor(PGICCMFLDPI_o *__this,PGICCMFLDPI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (PGICCMFLDPI_o *)0x0) {
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


// ===== public int CalculateSize()  [RVA 0x32FD65C]
// PGICCMFLDPI$$CalculateSize @ RVA 0x32FD65C

int32_t PGICCMFLDPI__CalculateSize(PGICCMFLDPI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  
  if ((DAT_045676fc & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045676fc = 1;
    method = extraout_x1;
  }
  value = (__this->fields).GDKPGIBMFPA;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
                    /* try { // try from 033fd6a8 to 034fd6cf has its CatchHandler @ 033fd97c */
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

