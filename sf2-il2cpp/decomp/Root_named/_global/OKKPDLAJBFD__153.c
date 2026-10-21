// TypeDefIndex 153
// Namespace: 
// public sealed class OKKPDLAJBFD : IMessage<OKKPDLAJBFD>, IMessage, IEquatable<OKKPDLAJBFD>, IDeepCloneable<OKKPDLAJBFD>
// Fields:
//   private static readonly MessageParser<OKKPDLAJBFD> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int IGOIOJLCDNM = 1;
//   private PGICCMFLDPI LGHDNNJIJGO; // 0x18
//   public const int FGFFAGIMLOA = 2;
//   private PGICCMFLDPI IPIKAEDIBOD; // 0x20

// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3021CA4]
// OKKPDLAJBFD$$WriteTo @ RVA 0x3021CA4

void OKKPDLAJBFD__WriteTo
               (OKKPDLAJBFD_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).LGHDNNJIJGO != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03121d34;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LGHDNNJIJGO,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IPIKAEDIBOD != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03121d34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03121cf8 to 03221d1f has its CatchHandler @ 03121f60 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IPIKAEDIBOD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3021D38]
// OKKPDLAJBFD$$.ctor @ RVA 0x3021D38

void OKKPDLAJBFD___ctor(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3021D40]
// OKKPDLAJBFD$$FFHIHGCDGAK @ RVA 0x3021D40

Google_Protobuf_Reflection_MessageDescriptor_o * OKKPDLAJBFD__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03121d54 to 03221d97 has its CatchHandler @ 03121f64 */
  if ((DAT_04565c55 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04565c55 = 1;
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
                    /* try { // try from 03121e24 to 03221e4b has its CatchHandler @ 03121f54 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03121e28;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03121e28:
                    /* WARNING: Could not recover jumptable at 0x03121e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,6,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(OKKPDLAJBFD IBKIPBJJCPG)  [RVA 0x3021E44]
// OKKPDLAJBFD$$Equals @ RVA 0x3021E44

bool OKKPDLAJBFD__Equals(OKKPDLAJBFD_o *__this,OKKPDLAJBFD_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 03121e4c to 03221f13 has its CatchHandler @ 03121bac */
  if (IBKIPBJJCPG != (OKKPDLAJBFD_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).LGHDNNJIJGO,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).LGHDNNJIJGO,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IPIKAEDIBOD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IPIKAEDIBOD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3021EB8]
// OKKPDLAJBFD$$MergeFrom @ RVA 0x3021EB8

void OKKPDLAJBFD__MergeFrom
               (OKKPDLAJBFD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  PGICCMFLDPI_o **ppPVar2;
  OKKPDLAJBFD_Fields *pOVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04565c56 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04565c56 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).IPIKAEDIBOD;
  ppPVar2 = &(__this->fields).LGHDNNJIJGO;
  pOVar3 = &__this->fields;
LAB_03121f08:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03121f14 to 03221f17 has its CatchHandler @ 03121f70 */
                    /* try { // try from 03121f18 to 03221f1b has its CatchHandler @ 03121f6c */
    if (uVar4 == 10) {
      pPVar6 = *ppPVar2;
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
                    /* try { // try from 03121f88 to 03221f8b has its CatchHandler @ 03121fa0 */
        pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03121f88 with catch @ 03121fa0 */
        *ppPVar2 = pPVar6;
        thunk_FUN_01c20e04(ppPVar2,pPVar6);
        pPVar6 = *ppPVar2;
      }
    }
    else {
                    /* try { // try from 03121f1c to 03221f1f has its CatchHandler @ 03121f68 */
                    /* try { // try from 03121f20 to 03221f23 has its CatchHandler @ 03121f5c */
      if (uVar4 != 0x12) {
                    /* try { // try from 03121f24 to 03221f2f has its CatchHandler @ 03121f58 */
        if (uVar4 == 0) {
          return;
        }
                    /* try { // try from 03121f30 to 03221f33 has its CatchHandler @ 03121bac */
                    /* try { // try from 03121f34 to 03221f37 has its CatchHandler @ 03121f50 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03121f38 to 03221f3f has its CatchHandler @ 03121bac */
        pOVar3->CKFPENBPNML = pGVar5;
                    /* try { // try from 03121f40 to 03221f43 has its CatchHandler @ 03121f4c */
                    /* try { // try from 03121f44 to 03221f4b has its CatchHandler @ 03121f54 */
        thunk_FUN_01c20e04(pOVar3,pGVar5);
        goto LAB_03121f08;
      }
                    /* catch() { ... } // from try @ 03121f40 with catch @ 03121f4c
                       try { // try from 03121f4c to 03221f87 has its CatchHandler @ 03121bac */
      pPVar6 = *ppPVar1;
                    /* catch() { ... } // from try @ 03121f34 with catch @ 03121f50 */
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
                    /* catch() { ... } // from try @ 03121e24 with catch @ 03121f54
                       catch() { ... } // from try @ 03121f44 with catch @ 03121f54 */
                    /* catch() { ... } // from try @ 03121f24 with catch @ 03121f58 */
        pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* catch() { ... } // from try @ 03121f20 with catch @ 03121f5c */
                    /* catch() { ... } // from try @ 03121cf8 with catch @ 03121f60 */
                    /* catch() { ... } // from try @ 03121d54 with catch @ 03121f64 */
        PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03121f1c with catch @ 03121f68 */
                    /* catch() { ... } // from try @ 03121f18 with catch @ 03121f6c */
                    /* catch() { ... } // from try @ 03121f14 with catch @ 03121f70 */
        *ppPVar1 = pPVar6;
        thunk_FUN_01c20e04(ppPVar1,pPVar6);
        pPVar6 = *ppPVar1;
      }
    }
                    /* try { // try from 03121fb0 to 0322201f has its CatchHandler @ 03122034 */
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
  } while( true );
}


// ===== public override int GetHashCode()  [RVA 0x3021FD8]
// OKKPDLAJBFD$$GetHashCode @ RVA 0x3021FD8

int32_t OKKPDLAJBFD__GetHashCode(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pPVar3 = (__this->fields).LGHDNNJIJGO;
  if (pPVar3 == (PGICCMFLDPI_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pPVar3 = (__this->fields).IPIKAEDIBOD;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 03122020 to 0322202b has its CatchHandler @ 03121bac */
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 0312202c to 03222033 has its CatchHandler @ 03122034 */
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* catch() { ... } // from try @ 03121fb0 with catch @ 03122034
                       catch() { ... } // from try @ 0312202c with catch @ 03122034 */
  return uVar1;
}


// ===== public void MergeFrom(OKKPDLAJBFD IBKIPBJJCPG)  [RVA 0x3022044]
// OKKPDLAJBFD$$MergeFrom @ RVA 0x3022044

void OKKPDLAJBFD__MergeFrom(OKKPDLAJBFD_o *__this,OKKPDLAJBFD_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OKKPDLAJBFD_Fields *pOVar3;
  PGICCMFLDPI_o **ppPVar4;
  
  if ((DAT_04565c57 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04565c57 = 1;
  }
  if (IBKIPBJJCPG == (OKKPDLAJBFD_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).LGHDNNJIJGO != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).LGHDNNJIJGO;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) goto LAB_03122160;
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).LGHDNNJIJGO,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IPIKAEDIBOD != (PGICCMFLDPI_o *)0x0) {
    ppPVar4 = &(__this->fields).IPIKAEDIBOD;
    pPVar1 = *ppPVar4;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar4 = pPVar1;
      thunk_FUN_01c20e04(ppPVar4,pPVar1);
      pPVar1 = *ppPVar4;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
LAB_03122160:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).IPIKAEDIBOD,(MethodInfo *)0x0);
  }
  pOVar3 = &__this->fields;
  pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar3->CKFPENBPNML = pGVar2;
  thunk_FUN_01c20e04(pOVar3,pGVar2);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3022164]
// OKKPDLAJBFD$$Equals @ RVA 0x3022164

bool OKKPDLAJBFD__Equals(OKKPDLAJBFD_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565c58 & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c58 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OKKPDLAJBFD_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OKKPDLAJBFD__Equals(__this,(OKKPDLAJBFD_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30221C8]
// OKKPDLAJBFD$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30221C8

Google_Protobuf_Reflection_MessageDescriptor_o *
OKKPDLAJBFD__pb__Google_Protobuf_IMessage_get_Descriptor(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  OKKPDLAJBFD_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c59 & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c59 = 1;
    method = extraout_x1;
  }
  method_00 = OKKPDLAJBFD_TypeInfo;
  if ((OKKPDLAJBFD_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OKKPDLAJBFD_c *)thunk_FUN_01ba7564(OKKPDLAJBFD_TypeInfo,method);
  }
  pGVar1 = OKKPDLAJBFD__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x3022214]
// OKKPDLAJBFD$$.cctor @ RVA 0x3022214

void OKKPDLAJBFD___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OKKPDLAJBFD__o *__this;
  
  if ((DAT_04565c5a & 1) == 0) {
    FUN_01bab630(&System_Func<OKKPDLAJBFD>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OKKPDLAJBFD>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OKKPDLAJBFD>_TypeInfo);
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    FUN_01bab630(&Method_OKKPDLAJBFD_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&OKKPDLAJBFD_<>c_TypeInfo);
    DAT_04565c5a = 1;
  }
  if ((OKKPDLAJBFD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OKKPDLAJBFD>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OKKPDLAJBFD__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OKKPDLAJBFD>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OKKPDLAJBFD>__ctor__);
  OKKPDLAJBFD_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OKKPDLAJBFD_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor(OKKPDLAJBFD IBKIPBJJCPG)  [RVA 0x302232C]
// OKKPDLAJBFD$$.ctor @ RVA 0x302232C

void OKKPDLAJBFD___ctor(OKKPDLAJBFD_o *__this,OKKPDLAJBFD_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OKKPDLAJBFD_o *)0x0) {
    pPVar1 = (IBKIPBJJCPG->fields).LGHDNNJIJGO;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    if (__this != (OKKPDLAJBFD_o *)0x0) {
      (__this->fields).LGHDNNJIJGO = pPVar1;
      thunk_FUN_01c20e04();
      pPVar1 = (IBKIPBJJCPG->fields).IPIKAEDIBOD;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
        pPVar1 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
      }
      (__this->fields).IPIKAEDIBOD = pPVar1;
      thunk_FUN_01c20e04();
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<OKKPDLAJBFD> PGCAHPDCJBC()  [RVA 0x30223C4]
// OKKPDLAJBFD$$PGCAHPDCJBC @ RVA 0x30223C4

Google_Protobuf_MessageParser_OKKPDLAJBFD__o * OKKPDLAJBFD__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565c5b & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c5b = 1;
  }
  if ((OKKPDLAJBFD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OKKPDLAJBFD_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void DEMMEBNPAGL(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x302241C]
// OKKPDLAJBFD$$DEMMEBNPAGL @ RVA 0x302241C

void OKKPDLAJBFD__DEMMEBNPAGL(OKKPDLAJBFD_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IPIKAEDIBOD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void BNODFGLDDPP(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3022424]
// OKKPDLAJBFD$$BNODFGLDDPP @ RVA 0x3022424

void OKKPDLAJBFD__BNODFGLDDPP(OKKPDLAJBFD_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LGHDNNJIJGO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public OKKPDLAJBFD Clone()  [RVA 0x302242C]
// OKKPDLAJBFD$$Clone @ RVA 0x302242C

OKKPDLAJBFD_o * OKKPDLAJBFD__Clone(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  OKKPDLAJBFD_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565c5c & 1) == 0) {
    FUN_01bab630(&OKKPDLAJBFD_TypeInfo);
    DAT_04565c5c = 1;
    method = extraout_x1;
  }
  __this_00 = (OKKPDLAJBFD_o *)thunk_FUN_01bda818(OKKPDLAJBFD_TypeInfo,method);
  OKKPDLAJBFD___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public PGICCMFLDPI LPLEAOHPCKB()  [RVA 0x3022484]
// OKKPDLAJBFD$$LPLEAOHPCKB @ RVA 0x3022484

PGICCMFLDPI_o * OKKPDLAJBFD__LPLEAOHPCKB(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  return (__this->fields).IPIKAEDIBOD;
}


// ===== public PGICCMFLDPI MKOCEFJACHL()  [RVA 0x302248C]
// OKKPDLAJBFD$$MKOCEFJACHL @ RVA 0x302248C

PGICCMFLDPI_o * OKKPDLAJBFD__MKOCEFJACHL(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  return (__this->fields).LGHDNNJIJGO;
}


// ===== public int CalculateSize()  [RVA 0x3022494]
// OKKPDLAJBFD$$CalculateSize @ RVA 0x3022494

int32_t OKKPDLAJBFD__CalculateSize(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  PGICCMFLDPI_o *pPVar3;
  
  if ((DAT_04565c5d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04565c5d = 1;
    method = extraout_x1;
  }
  pPVar3 = (__this->fields).LGHDNNJIJGO;
  iVar2 = 0;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  pPVar3 = (__this->fields).IPIKAEDIBOD;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar3,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public override string ToString()  [RVA 0x3022548]
// OKKPDLAJBFD$$ToString @ RVA 0x3022548

System_String_o * OKKPDLAJBFD__ToString(OKKPDLAJBFD_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c5e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565c5e = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

