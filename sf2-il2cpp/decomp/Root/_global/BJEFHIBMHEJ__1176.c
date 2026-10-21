// TypeDefIndex 1176
// Namespace: 
// public sealed class BJEFHIBMHEJ : IMessage<BJEFHIBMHEJ>, IMessage, IEquatable<BJEFHIBMHEJ>, IDeepCloneable<BJEFHIBMHEJ>
// Fields:
//   private static readonly MessageParser<BJEFHIBMHEJ> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int GIIHGFOLHCC = 1;
//   private int BNFCJPJJIEJ; // 0x18
//   public const int NOHFIIBNOGK = 2;
//   private int PDABDFMKGDH; // 0x1C

// ===== public static MessageParser<BJEFHIBMHEJ> PGCAHPDCJBC()  [RVA 0x310B2C8]
// BJEFHIBMHEJ$$PGCAHPDCJBC @ RVA 0x310B2C8

Google_Protobuf_MessageParser_BJEFHIBMHEJ__o * BJEFHIBMHEJ__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456653c & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
                    /* try { // try from 0320b2f0 to 0330b2f7 has its CatchHandler @ 0320b398 */
    DAT_0456653c = 1;
  }
  if ((BJEFHIBMHEJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0320b30c to 0330b30f has its CatchHandler @ 0320b384 */
                    /* try { // try from 0320b310 to 0330b31f has its CatchHandler @ 0320b394 */
  return BJEFHIBMHEJ_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x310B320]
// BJEFHIBMHEJ$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x310B320

Google_Protobuf_Reflection_MessageDescriptor_o *
BJEFHIBMHEJ__pb__Google_Protobuf_IMessage_get_Descriptor(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  BJEFHIBMHEJ_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0320b334 to 0330b33f has its CatchHandler @ 0320b390 */
  if ((DAT_0456653d & 1) == 0) {
                    /* try { // try from 0320b340 to 0330b34f has its CatchHandler @ 0320b38c */
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_0456653d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320b350 to 0330b377 has its CatchHandler @ 0320b240 */
  method_00 = BJEFHIBMHEJ_TypeInfo;
  if ((BJEFHIBMHEJ_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BJEFHIBMHEJ_c *)thunk_FUN_01ba7564(BJEFHIBMHEJ_TypeInfo,method);
  }
  pGVar1 = BJEFHIBMHEJ__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public int PDDALEFAFEA()  [RVA 0x310B470]
// BJEFHIBMHEJ$$PDDALEFAFEA @ RVA 0x310B470

int32_t BJEFHIBMHEJ__PDDALEFAFEA(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  return (__this->fields).PDABDFMKGDH;
}


// ===== public int CalculateSize()  [RVA 0x310B478]
// BJEFHIBMHEJ$$CalculateSize @ RVA 0x310B478

int32_t BJEFHIBMHEJ__CalculateSize(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_0456653e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_0456653e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).BNFCJPJJIEJ;
  iVar3 = 0;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).PDABDFMKGDH;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public int BKGOEHDDJKK()  [RVA 0x310B52C]
// BJEFHIBMHEJ$$BKGOEHDDJKK @ RVA 0x310B52C

int32_t BJEFHIBMHEJ__BKGOEHDDJKK(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  return (__this->fields).BNFCJPJJIEJ;
}


// ===== public bool Equals(BJEFHIBMHEJ IBKIPBJJCPG)  [RVA 0x310B534]
// BJEFHIBMHEJ$$Equals @ RVA 0x310B534

bool BJEFHIBMHEJ__Equals(BJEFHIBMHEJ_o *__this,BJEFHIBMHEJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BJEFHIBMHEJ_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).BNFCJPJJIEJ == (IBKIPBJJCPG->fields).BNFCJPJJIEJ) &&
       ((__this->fields).PDABDFMKGDH == (IBKIPBJJCPG->fields).PDABDFMKGDH)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override string ToString()  [RVA 0x310B580]
// BJEFHIBMHEJ$$ToString @ RVA 0x310B580

System_String_o * BJEFHIBMHEJ__ToString(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456653f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456653f = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(BJEFHIBMHEJ IBKIPBJJCPG)  [RVA 0x310B5D8]
// BJEFHIBMHEJ$$MergeFrom @ RVA 0x310B5D8

void BJEFHIBMHEJ__MergeFrom(BJEFHIBMHEJ_o *__this,BJEFHIBMHEJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  BJEFHIBMHEJ_Fields *pBVar3;
  
  if (IBKIPBJJCPG != (BJEFHIBMHEJ_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).BNFCJPJJIEJ;
    if (iVar1 != 0) {
      (__this->fields).BNFCJPJJIEJ = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).PDABDFMKGDH;
    if (iVar1 != 0) {
      (__this->fields).PDABDFMKGDH = iVar1;
    }
    pBVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pBVar3,pGVar2);
    return;
  }
  return;
}


// ===== public override int GetHashCode()  [RVA 0x310B624]
// BJEFHIBMHEJ$$GetHashCode @ RVA 0x310B624

int32_t BJEFHIBMHEJ__GetHashCode(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).BNFCJPJJIEJ;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).PDABDFMKGDH;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x310B69C]
// BJEFHIBMHEJ$$MergeFrom @ RVA 0x310B69C

void BJEFHIBMHEJ__MergeFrom
               (BJEFHIBMHEJ_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BJEFHIBMHEJ_Fields *pBVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pBVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).BNFCJPJJIEJ = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PDABDFMKGDH = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pBVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pBVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x310B36C]
// BJEFHIBMHEJ$$FFHIHGCDGAK @ RVA 0x310B36C

Google_Protobuf_Reflection_MessageDescriptor_o * BJEFHIBMHEJ__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 0320b378 to 0330b37f has its CatchHandler @ 0320b388 */
                    /* try { // try from 0320b380 to 0330b3b3 has its CatchHandler @ 0320b240 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b30c with catch @ 0320b384
                        */
  if ((DAT_04566540 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b378 with catch @ 0320b388
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b340 with catch @ 0320b38c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b334 with catch @ 0320b390
                        */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b310 with catch @ 0320b394
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320b2f0 with catch @ 0320b398
                        */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566540 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0320b3b4 to 0330b3b7 has its CatchHandler @ 0320b3d8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0320b3b8 to 0330b3df has its CatchHandler @ 0320b240 */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
                    /* catch() { ... } // from try @ 0320b3b4 with catch @ 0320b3d8 */
                    /* try { // try from 0320b3e0 to 0330b3e7 has its CatchHandler @ 0320b3fc */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0320b3e8 to 0330b3f3 has its CatchHandler @ 0320b240 */
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 0320b3f4 to 0330b3fb has its CatchHandler @ 0320b3fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320b3e0 with catch @ 0320b3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 0320b3f4 with catch @ 0320b3fc
                        */
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
        goto LAB_0320b454;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0320b454:
                    /* WARNING: Could not recover jumptable at 0x0320b468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x27,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor()  [RVA 0x310B730]
// BJEFHIBMHEJ$$.ctor @ RVA 0x310B730

void BJEFHIBMHEJ___ctor(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void LIIAPFHHMEF(int CJNHFNHJHPE)  [RVA 0x310B738]
// BJEFHIBMHEJ$$LIIAPFHHMEF @ RVA 0x310B738

void BJEFHIBMHEJ__LIIAPFHHMEF(BJEFHIBMHEJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDABDFMKGDH = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x310B740]
// BJEFHIBMHEJ$$Equals @ RVA 0x310B740

bool BJEFHIBMHEJ__Equals(BJEFHIBMHEJ_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566541 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_04566541 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BJEFHIBMHEJ_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BJEFHIBMHEJ__Equals(__this,(BJEFHIBMHEJ_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x310B7A4]
// BJEFHIBMHEJ$$WriteTo @ RVA 0x310B7A4

void BJEFHIBMHEJ__WriteTo
               (BJEFHIBMHEJ_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).BNFCJPJJIEJ != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0320b834;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).BNFCJPJJIEJ,(MethodInfo *)0x0);
  }
  if ((__this->fields).PDABDFMKGDH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0320b834:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDABDFMKGDH,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x310B838]
// BJEFHIBMHEJ$$.cctor @ RVA 0x310B838

void BJEFHIBMHEJ___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BJEFHIBMHEJ__o *__this;
  
  if ((DAT_04566542 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    FUN_01bab630(&System_Func<BJEFHIBMHEJ>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BJEFHIBMHEJ>_TypeInfo);
    FUN_01bab630(&Method_BJEFHIBMHEJ_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BJEFHIBMHEJ_<>c_TypeInfo);
    DAT_04566542 = 1;
  }
  if ((BJEFHIBMHEJ_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BJEFHIBMHEJ>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BJEFHIBMHEJ__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BJEFHIBMHEJ>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BJEFHIBMHEJ>__ctor__);
  BJEFHIBMHEJ_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BJEFHIBMHEJ_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor(BJEFHIBMHEJ IBKIPBJJCPG)  [RVA 0x310B950]
// BJEFHIBMHEJ$$.ctor @ RVA 0x310B950

void BJEFHIBMHEJ___ctor(BJEFHIBMHEJ_o *__this,BJEFHIBMHEJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BJEFHIBMHEJ_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDABDFMKGDH;
    (__this->fields).BNFCJPJJIEJ = (IBKIPBJJCPG->fields).BNFCJPJJIEJ;
    (__this->fields).PDABDFMKGDH = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BJEFHIBMHEJ Clone()  [RVA 0x310B99C]
// BJEFHIBMHEJ$$Clone @ RVA 0x310B99C

BJEFHIBMHEJ_o * BJEFHIBMHEJ__Clone(BJEFHIBMHEJ_o *__this,MethodInfo *method)

{
  BJEFHIBMHEJ_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566543 & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_04566543 = 1;
    method = extraout_x1;
  }
  __this_00 = (BJEFHIBMHEJ_o *)thunk_FUN_01bda818(BJEFHIBMHEJ_TypeInfo,method);
  BJEFHIBMHEJ___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void DPMIFDKPDMG(int CJNHFNHJHPE)  [RVA 0x310B9F4]
// BJEFHIBMHEJ$$DPMIFDKPDMG @ RVA 0x310B9F4

void BJEFHIBMHEJ__DPMIFDKPDMG(BJEFHIBMHEJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BNFCJPJJIEJ = CJNHFNHJHPE;
  return;
}

