// TypeDefIndex 2245
// Namespace: 
// public sealed class EPCCNLNOALL : IMessage<EPCCNLNOALL>, IMessage, IEquatable<EPCCNLNOALL>, IDeepCloneable<EPCCNLNOALL>
// Fields:
//   private static readonly MessageParser<EPCCNLNOALL> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KHFBGCMGGLE = 1;
//   private OJEHKJHEBID KOGEBALMCBB; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32FB514]
// EPCCNLNOALL$$Equals @ RVA 0x32FB514

bool EPCCNLNOALL__Equals(EPCCNLNOALL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 033fb51c to 034fb533 has its CatchHandler @ 033fb6e8 */
  if ((DAT_045676d9 & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
                    /* try { // try from 033fb540 to 034fb547 has its CatchHandler @ 033fb6bc */
    DAT_045676d9 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* try { // try from 033fb558 to 034fb55f has its CatchHandler @ 033fb6c0 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)EPCCNLNOALL_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
  bVar1 = EPCCNLNOALL__Equals(__this,(EPCCNLNOALL_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(EPCCNLNOALL IBKIPBJJCPG)  [RVA 0x32FB5EC]
// EPCCNLNOALL$$.ctor @ RVA 0x32FB5EC

void EPCCNLNOALL___ctor(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  OJEHKJHEBID_o *pOVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EPCCNLNOALL_o *)0x0) {
    pOVar1 = (IBKIPBJJCPG->fields).KOGEBALMCBB;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
      pOVar1 = (OJEHKJHEBID_o *)0x0;
    }
    else {
      pOVar1 = OJEHKJHEBID__Clone(pOVar1,(MethodInfo *)0x0);
    }
    if (__this != (EPCCNLNOALL_o *)0x0) {
      (__this->fields).KOGEBALMCBB = pOVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
                    /* try { // try from 033fb670 to 034fb677 has its CatchHandler @ 033fb6f8 */
                    /* try { // try from 033fb678 to 034fb67b has its CatchHandler @ 033fb6e0 */
                    /* try { // try from 033fb67c to 034fb67f has its CatchHandler @ 033fb6dc */
                    /* try { // try from 033fb680 to 034fb683 has its CatchHandler @ 033fb6b4 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32FB68C]
// EPCCNLNOALL$$MergeFrom @ RVA 0x32FB68C

void EPCCNLNOALL__MergeFrom
               (EPCCNLNOALL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  OJEHKJHEBID_o **ppOVar2;
  EPCCNLNOALL_Fields *pEVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  OJEHKJHEBID_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
                    /* try { // try from 033fb690 to 034fb693 has its CatchHandler @ 033fb288 */
                    /* try { // try from 033fb694 to 034fb697 has its CatchHandler @ 033fb6a0 */
                    /* try { // try from 033fb698 to 034fb717 has its CatchHandler @ 033fb288 */
                    /* catch() { ... } // from try @ 033fb694 with catch @ 033fb6a0 */
                    /* catch() { ... } // from try @ 033fb4c0 with catch @ 033fb6a4 */
                    /* catch() { ... } // from try @ 033fb4ac with catch @ 033fb6a8 */
                    /* catch() { ... } // from try @ 033fb684 with catch @ 033fb6ac */
  if ((DAT_045676da & 1) == 0) {
                    /* catch() { ... } // from try @ 033fb560 with catch @ 033fb6b0 */
                    /* catch() { ... } // from try @ 033fb680 with catch @ 033fb6b4 */
                    /* catch() { ... } // from try @ 033fb510 with catch @ 033fb6b8 */
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
                    /* catch() { ... } // from try @ 033fb540 with catch @ 033fb6bc */
                    /* catch() { ... } // from try @ 033fb558 with catch @ 033fb6c0 */
                    /* catch() { ... } // from try @ 033fb5ac with catch @ 033fb6c4 */
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
                    /* catch() { ... } // from try @ 033fb4f8 with catch @ 033fb6c8 */
                    /* catch() { ... } // from try @ 033fb4d0 with catch @ 033fb6cc */
    DAT_045676da = 1;
  }
                    /* catch() { ... } // from try @ 033fb484 with catch @ 033fb6d0 */
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fb738 with catch @ 033fb7bc
                       catch() { ... } // from try @ 033fb7b4 with catch @ 033fb7bc */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033fb4a0 with catch @ 033fb6d4 */
                    /* catch() { ... } // from try @ 033fb490 with catch @ 033fb6d8 */
                    /* catch() { ... } // from try @ 033fb67c with catch @ 033fb6dc */
                    /* catch() { ... } // from try @ 033fb678 with catch @ 033fb6e0 */
                    /* catch() { ... } // from try @ 033fb474 with catch @ 033fb6e4 */
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
                    /* catch() { ... } // from try @ 033fb51c with catch @ 033fb6e8 */
  ppOVar2 = &(__this->fields).KOGEBALMCBB;
                    /* catch() { ... } // from try @ 033fb688 with catch @ 033fb6ec */
  pEVar3 = &__this->fields;
LAB_033fb6f0:
  do {
                    /* catch() { ... } // from try @ 033fb408 with catch @ 033fb6f0 */
                    /* catch() { ... } // from try @ 033fb3ac with catch @ 033fb6f4 */
                    /* catch() { ... } // from try @ 033fb670 with catch @ 033fb6f8 */
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pKVar6 = (KAMBBJFPLGM_o *)*ppOVar2;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        __this_00 = (OJEHKJHEBID_o *)thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo);
        OJEHKJHEBID___ctor(__this_00,(MethodInfo *)0x0);
        *ppOVar2 = __this_00;
        thunk_FUN_01c20e04(ppOVar2,__this_00);
        pKVar6 = (KAMBBJFPLGM_o *)*ppOVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
                    /* try { // try from 033fb7a8 to 034fb7b3 has its CatchHandler @ 033fb288 */
                    /* try { // try from 033fb7b4 to 034fb7bb has its CatchHandler @ 033fb7bc */
          return;
        }
                    /* try { // try from 033fb718 to 034fb71b has its CatchHandler @ 033fb728 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pEVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pEVar3->CKFPENBPNML = pGVar5;
                    /* catch() { ... } // from try @ 033fb718 with catch @ 033fb728 */
        thunk_FUN_01c20e04(pEVar3,pGVar5);
        goto LAB_033fb6f0;
      }
      pKVar6 = *ppKVar1;
                    /* try { // try from 033fb738 to 034fb7a7 has its CatchHandler @ 033fb7bc */
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        pKVar6 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar6,(MethodInfo *)0x0);
        *ppKVar1 = pKVar6;
        thunk_FUN_01c20e04(ppKVar1,pKVar6);
        pKVar6 = *ppKVar1;
      }
    }
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar6,(MethodInfo *)0x0);
  } while( true );
}


// ===== public override string ToString()  [RVA 0x32FB7C0]
// EPCCNLNOALL$$ToString @ RVA 0x32FB7C0

System_String_o * EPCCNLNOALL__ToString(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676db & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045676db = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x32FB818]
// EPCCNLNOALL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32FB818

Google_Protobuf_Reflection_MessageDescriptor_o *
EPCCNLNOALL__pb__Google_Protobuf_IMessage_get_Descriptor(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  EPCCNLNOALL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045676dc & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676dc = 1;
    method = extraout_x1;
  }
  method_00 = EPCCNLNOALL_TypeInfo;
  if ((EPCCNLNOALL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EPCCNLNOALL_c *)thunk_FUN_01ba7564(EPCCNLNOALL_TypeInfo,method);
  }
  pGVar1 = EPCCNLNOALL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public EPCCNLNOALL Clone()  [RVA 0x32FB968]
// EPCCNLNOALL$$Clone @ RVA 0x32FB968

EPCCNLNOALL_o * EPCCNLNOALL__Clone(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  EPCCNLNOALL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045676dd & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676dd = 1;
    method = extraout_x1;
  }
  __this_00 = (EPCCNLNOALL_o *)thunk_FUN_01bda818(EPCCNLNOALL_TypeInfo,method);
  EPCCNLNOALL___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x32FB9C0]
// EPCCNLNOALL$$.cctor @ RVA 0x32FB9C0

void EPCCNLNOALL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EPCCNLNOALL__o *__this;
  
                    /* try { // try from 033fb9d4 to 034fbac7 has its CatchHandler @ 033fb9d4
                       catch() { ... } // from try @ 033fb9d4 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbae4 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbb54 with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbb7c with catch @ 033fb9d4
                       catch() { ... } // from try @ 033fbbbc with catch @ 033fb9d4 */
  if ((DAT_045676de & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    FUN_01bab630(&System_Func<EPCCNLNOALL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EPCCNLNOALL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EPCCNLNOALL>_TypeInfo);
    FUN_01bab630(&Method_EPCCNLNOALL_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EPCCNLNOALL_<>c_TypeInfo);
    DAT_045676de = 1;
  }
  if ((EPCCNLNOALL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EPCCNLNOALL>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EPCCNLNOALL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EPCCNLNOALL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EPCCNLNOALL>__ctor__);
  EPCCNLNOALL_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 033fbac8 to 034fbacf has its CatchHandler @ 033fbb60 */
  thunk_FUN_01c20e04(EPCCNLNOALL_TypeInfo->static_fields,__this);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32FBAD8]
// EPCCNLNOALL$$WriteTo @ RVA 0x32FBAD8

void EPCCNLNOALL__WriteTo
               (EPCCNLNOALL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 033fbadc to 034fbae3 has its CatchHandler @ 033fbb5c */
                    /* try { // try from 033fbae4 to 034fbb4f has its CatchHandler @ 033fb9d4 */
  if ((__this->fields).KOGEBALMCBB != (OJEHKJHEBID_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033fbb68;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).KOGEBALMCBB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_033fbb68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 033fbb50 to 034fbb53 has its CatchHandler @ 033fbb58 */
                    /* try { // try from 033fbb54 to 034fbb77 has its CatchHandler @ 033fb9d4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbb50 with catch @ 033fbb58
                        */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbadc with catch @ 033fbb5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033fbac8 with catch @ 033fbb60
                        */
  return;
}


// ===== public void .ctor()  [RVA 0x32FB684]
// EPCCNLNOALL$$.ctor @ RVA 0x32FB684

void EPCCNLNOALL___ctor(EPCCNLNOALL_o *__this,MethodInfo *method)

{
                    /* try { // try from 033fb684 to 034fb687 has its CatchHandler @ 033fb6ac */
                    /* try { // try from 033fb688 to 034fb68f has its CatchHandler @ 033fb6ec */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ALODPEMPAHE(OJEHKJHEBID CJNHFNHJHPE)  [RVA 0x32FBB6C]
// EPCCNLNOALL$$ALODPEMPAHE @ RVA 0x32FBB6C

void EPCCNLNOALL__ALODPEMPAHE(EPCCNLNOALL_o *__this,OJEHKJHEBID_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KOGEBALMCBB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageParser<EPCCNLNOALL> PGCAHPDCJBC()  [RVA 0x32FBB74]
// EPCCNLNOALL$$PGCAHPDCJBC @ RVA 0x32FBB74

Google_Protobuf_MessageParser_EPCCNLNOALL__o * EPCCNLNOALL__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 033fbb78 to 034fbb7b has its CatchHandler @ 033fbba4 */
                    /* try { // try from 033fbb7c to 034fbbb3 has its CatchHandler @ 033fb9d4 */
  if ((DAT_045676df & 1) == 0) {
    FUN_01bab630(&EPCCNLNOALL_TypeInfo);
    DAT_045676df = 1;
  }
                    /* catch() { ... } // from try @ 033fbb78 with catch @ 033fbba4 */
  if ((EPCCNLNOALL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 033fbbb4 to 034fbbbb has its CatchHandler @ 033fbbd0 */
  }
                    /* try { // try from 033fbbbc to 034fbbc7 has its CatchHandler @ 033fb9d4 */
                    /* try { // try from 033fbbc8 to 034fbbcf has its CatchHandler @ 033fbbd0 */
  return EPCCNLNOALL_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x32FB864]
// EPCCNLNOALL$$FFHIHGCDGAK @ RVA 0x32FB864

Google_Protobuf_Reflection_MessageDescriptor_o * EPCCNLNOALL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045676e0 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045676e0 = 1;
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
        goto LAB_033fb94c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033fb94c:
                    /* WARNING: Could not recover jumptable at 0x033fb960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x40,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(EPCCNLNOALL IBKIPBJJCPG)  [RVA 0x32FB578]
// EPCCNLNOALL$$Equals @ RVA 0x32FB578

bool EPCCNLNOALL__Equals(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EPCCNLNOALL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).KOGEBALMCBB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).KOGEBALMCBB,(MethodInfo *)0x0);
                    /* try { // try from 033fb5ac to 034fb5cf has its CatchHandler @ 033fb6c4 */
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 033fb5d0 to 034fb66f has its CatchHandler @ 033fb288 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public int CalculateSize()  [RVA 0x32FBBCC]
// EPCCNLNOALL$$CalculateSize @ RVA 0x32FBBCC

int32_t EPCCNLNOALL__CalculateSize(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  OJEHKJHEBID_o *value;
  KAMBBJFPLGM_o *value_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033fbbb4 with catch @ 033fbbd0
                       catch(type#2 @ 00000000) { ... } // from try @ 033fbbc8 with catch @ 033fbbd0
                        */
  if ((DAT_045676e1 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045676e1 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).KOGEBALMCBB;
  iVar2 = 0;
  if (value != (OJEHKJHEBID_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OPHCNELIOLD;
  if (value_00 != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void MergeFrom(EPCCNLNOALL IBKIPBJJCPG)  [RVA 0x32FBC80]
// EPCCNLNOALL$$MergeFrom @ RVA 0x32FBC80

void EPCCNLNOALL__MergeFrom(EPCCNLNOALL_o *__this,EPCCNLNOALL_o *IBKIPBJJCPG,MethodInfo *method)

{
  OJEHKJHEBID_o *pOVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  EPCCNLNOALL_Fields *pEVar4;
  OJEHKJHEBID_o **ppOVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_045676e2 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_045676e2 = 1;
  }
  if (IBKIPBJJCPG == (EPCCNLNOALL_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).KOGEBALMCBB != (OJEHKJHEBID_o *)0x0) {
    ppOVar5 = &(__this->fields).KOGEBALMCBB;
    pOVar1 = *ppOVar5;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
      pOVar1 = (OJEHKJHEBID_o *)thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo);
      OJEHKJHEBID___ctor(pOVar1,(MethodInfo *)0x0);
      *ppOVar5 = pOVar1;
      thunk_FUN_01c20e04(ppOVar5,pOVar1);
      pOVar1 = *ppOVar5;
      if (pOVar1 == (OJEHKJHEBID_o *)0x0) goto LAB_033fbda8;
    }
    OJEHKJHEBID__MergeFrom(pOVar1,(IBKIPBJJCPG->fields).KOGEBALMCBB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = *ppKVar6;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar2,(MethodInfo *)0x0);
      *ppKVar6 = pKVar2;
      thunk_FUN_01c20e04(ppKVar6,pKVar2);
      pKVar2 = *ppKVar6;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
LAB_033fbda8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pEVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pEVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pEVar4,pGVar3);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x32FBDAC]
// EPCCNLNOALL$$GetHashCode @ RVA 0x32FBDAC

int32_t EPCCNLNOALL__GetHashCode(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  OJEHKJHEBID_o *pOVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pOVar3 = (__this->fields).KOGEBALMCBB;
  if (pOVar3 == (OJEHKJHEBID_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pOVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pOVar3,(pOVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pKVar4 = (__this->fields).OPHCNELIOLD;
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x32FBE18]
// EPCCNLNOALL$$IIBFFDJAKFB @ RVA 0x32FBE18

void EPCCNLNOALL__IIBFFDJAKFB(EPCCNLNOALL_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x32FBE20]
// EPCCNLNOALL$$JCKINNMKHBA @ RVA 0x32FBE20

KAMBBJFPLGM_o * EPCCNLNOALL__JCKINNMKHBA(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public OJEHKJHEBID JDJENCCNOFI()  [RVA 0x32FBE28]
// EPCCNLNOALL$$JDJENCCNOFI @ RVA 0x32FBE28

OJEHKJHEBID_o * EPCCNLNOALL__JDJENCCNOFI(EPCCNLNOALL_o *__this,MethodInfo *method)

{
  return (__this->fields).KOGEBALMCBB;
}

