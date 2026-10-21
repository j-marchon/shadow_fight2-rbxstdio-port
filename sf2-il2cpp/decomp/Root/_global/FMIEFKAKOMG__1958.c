// TypeDefIndex 1958
// Namespace: 
// public sealed class FMIEFKAKOMG : IMessage<FMIEFKAKOMG>, IMessage, IEquatable<FMIEFKAKOMG>, IDeepCloneable<FMIEFKAKOMG>
// Fields:
//   private static readonly MessageParser<FMIEFKAKOMG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private BECIPDJBAOG MJIIHOLHNCK; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3280634]
// FMIEFKAKOMG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3280634

Google_Protobuf_Reflection_MessageDescriptor_o *
FMIEFKAKOMG__pb__Google_Protobuf_IMessage_get_Descriptor(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  FMIEFKAKOMG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456728a & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
                    /* try { // try from 03380660 to 03480667 has its CatchHandler @ 033806c0 */
    DAT_0456728a = 1;
    method = extraout_x1;
  }
  method_00 = FMIEFKAKOMG_TypeInfo;
  if ((FMIEFKAKOMG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FMIEFKAKOMG_c *)thunk_FUN_01ba7564(FMIEFKAKOMG_TypeInfo,method);
  }
                    /* try { // try from 03380674 to 0348067b has its CatchHandler @ 033806b4 */
                    /* try { // try from 0338067c to 034806a3 has its CatchHandler @ 033804bc */
  pGVar1 = FMIEFKAKOMG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MergeFrom(FMIEFKAKOMG IBKIPBJJCPG)  [RVA 0x3280784]
// FMIEFKAKOMG$$MergeFrom @ RVA 0x3280784

void FMIEFKAKOMG__MergeFrom(FMIEFKAKOMG_o *__this,FMIEFKAKOMG_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  FMIEFKAKOMG_Fields *pFVar4;
  BECIPDJBAOG_o **ppBVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_0456728b & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_0456728b = 1;
  }
  if (IBKIPBJJCPG == (FMIEFKAKOMG_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    ppBVar5 = &(__this->fields).MJIIHOLHNCK;
    pBVar1 = *ppBVar5;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
      BECIPDJBAOG___ctor(pBVar1,(MethodInfo *)0x0);
      *ppBVar5 = pBVar1;
      thunk_FUN_01c20e04(ppBVar5,pBVar1);
      pBVar1 = *ppBVar5;
      if (pBVar1 == (BECIPDJBAOG_o *)0x0) goto LAB_033808ac;
    }
    BECIPDJBAOG__MergeFrom(pBVar1,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
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
LAB_033808ac:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pFVar4 = &__this->fields;
                    /* try { // try from 03380878 to 03480aff has its CatchHandler @ 03380878
                       catch() { ... } // from try @ 03380878 with catch @ 03380878
                       catch() { ... } // from try @ 03380bb8 with catch @ 03380878
                       catch() { ... } // from try @ 03380e30 with catch @ 03380878
                       catch() { ... } // from try @ 03380eec with catch @ 03380878
                       catch() { ... } // from try @ 03380f00 with catch @ 03380878
                       catch() { ... } // from try @ 03380fb8 with catch @ 03380878
                       catch() { ... } // from try @ 0338103c with catch @ 03380878 */
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pFVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pFVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pFVar4,pGVar3);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3280680]
// FMIEFKAKOMG$$FFHIHGCDGAK @ RVA 0x3280680

Google_Protobuf_Reflection_MessageDescriptor_o * FMIEFKAKOMG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456728c & 1) == 0) {
                    /* try { // try from 033806a4 to 034806a7 has its CatchHandler @ 033806b8 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 033806a8 to 034806ab has its CatchHandler @ 033806b0 */
                    /* try { // try from 033806ac to 034806d7 has its CatchHandler @ 033804bc */
                    /* catch() { ... } // from try @ 033806a8 with catch @ 033806b0 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* catch() { ... } // from try @ 03380674 with catch @ 033806b4 */
                    /* catch() { ... } // from try @ 033806a4 with catch @ 033806b8 */
    DAT_0456728c = 1;
  }
                    /* catch() { ... } // from try @ 033805d4 with catch @ 033806bc */
                    /* catch() { ... } // from try @ 03380660 with catch @ 033806c0 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 033806d8 to 034806db has its CatchHandler @ 033806f8 */
                    /* try { // try from 033806dc to 034806ff has its CatchHandler @ 033804bc */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033806d8 with catch @ 033806f8 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03380700 to 03480713 has its CatchHandler @ 03380774 */
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033805c0 with catch @ 03380714
                       try { // try from 03380714 to 0348072b has its CatchHandler @ 033804bc */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* try { // try from 0338072c to 0348072f has its CatchHandler @ 03380750 */
                    /* try { // try from 03380730 to 03480757 has its CatchHandler @ 033804bc */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03380760 to 0348076b has its CatchHandler @ 033804bc */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03380768;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0338072c with catch @ 03380750 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* try { // try from 03380758 to 0348075f has its CatchHandler @ 03380774 */
LAB_03380768:
                    /* try { // try from 0338076c to 03480773 has its CatchHandler @ 03380774 */
                    /* catch() { ... } // from try @ 03380700 with catch @ 03380774
                       catch() { ... } // from try @ 03380758 with catch @ 03380774
                       catch() { ... } // from try @ 0338076c with catch @ 03380774 */
                    /* WARNING: Could not recover jumptable at 0x0338077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x39,pVVar2->method);
  return pGVar3;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32808B0]
// FMIEFKAKOMG$$Equals @ RVA 0x32808B0

bool FMIEFKAKOMG__Equals(FMIEFKAKOMG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456728d & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_0456728d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FMIEFKAKOMG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FMIEFKAKOMG__Equals(__this,(FMIEFKAKOMG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x3280988]
// FMIEFKAKOMG$$IIBFFDJAKFB @ RVA 0x3280988

void FMIEFKAKOMG__IIBFFDJAKFB(FMIEFKAKOMG_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3280990]
// FMIEFKAKOMG$$WriteTo @ RVA 0x3280990

void FMIEFKAKOMG__WriteTo
               (FMIEFKAKOMG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03380a20;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03380a20:
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
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public FMIEFKAKOMG Clone()  [RVA 0x3280A24]
// FMIEFKAKOMG$$Clone @ RVA 0x3280A24

FMIEFKAKOMG_o * FMIEFKAKOMG__Clone(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  FMIEFKAKOMG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456728e & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_0456728e = 1;
    method = extraout_x1;
  }
  __this_00 = (FMIEFKAKOMG_o *)thunk_FUN_01bda818(FMIEFKAKOMG_TypeInfo,method);
  FMIEFKAKOMG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void EAAABDOJHNI(BECIPDJBAOG CJNHFNHJHPE)  [RVA 0x3280B14]
// FMIEFKAKOMG$$EAAABDOJHNI @ RVA 0x3280B14

void FMIEFKAKOMG__EAAABDOJHNI(FMIEFKAKOMG_o *__this,BECIPDJBAOG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MJIIHOLHNCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(FMIEFKAKOMG IBKIPBJJCPG)  [RVA 0x3280A7C]
// FMIEFKAKOMG$$.ctor @ RVA 0x3280A7C

void FMIEFKAKOMG___ctor(FMIEFKAKOMG_o *__this,FMIEFKAKOMG_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (FMIEFKAKOMG_o *)0x0) {
    pBVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar1 = BECIPDJBAOG__Clone(pBVar1,(MethodInfo *)0x0);
    }
    if (__this != (FMIEFKAKOMG_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar1;
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
                    /* try { // try from 03380b00 to 03480b27 has its CatchHandler @ 03380fb8 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3280B24]
// FMIEFKAKOMG$$.cctor @ RVA 0x3280B24

void FMIEFKAKOMG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FMIEFKAKOMG__o *__this;
  
  if ((DAT_0456728f & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
                    /* try { // try from 03380b5c to 03480b83 has its CatchHandler @ 03380f1c */
    FUN_01bab630(&System_Func<FMIEFKAKOMG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FMIEFKAKOMG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FMIEFKAKOMG>_TypeInfo);
    FUN_01bab630(&Method_FMIEFKAKOMG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&FMIEFKAKOMG_<>c_TypeInfo);
    DAT_0456728f = 1;
  }
                    /* try { // try from 03380b9c to 03480bb7 has its CatchHandler @ 03380f14 */
                    /* try { // try from 03380bb8 to 03480d77 has its CatchHandler @ 03380878 */
  if ((FMIEFKAKOMG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FMIEFKAKOMG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FMIEFKAKOMG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FMIEFKAKOMG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FMIEFKAKOMG>__ctor__);
  FMIEFKAKOMG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FMIEFKAKOMG_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3280C3C]
// FMIEFKAKOMG$$MergeFrom @ RVA 0x3280C3C

void FMIEFKAKOMG__MergeFrom
               (FMIEFKAKOMG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  BECIPDJBAOG_o **ppBVar2;
  FMIEFKAKOMG_Fields *pFVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
  if ((DAT_04567290 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04567290 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
  ppBVar2 = &(__this->fields).MJIIHOLHNCK;
  pFVar3 = &__this->fields;
LAB_03380ca0:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pKVar6 = (KAMBBJFPLGM_o *)*ppBVar2;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(__this_00,(MethodInfo *)0x0);
        *ppBVar2 = __this_00;
        thunk_FUN_01c20e04(ppBVar2,__this_00);
        pKVar6 = (KAMBBJFPLGM_o *)*ppBVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pFVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pFVar3->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pFVar3,pGVar5);
        goto LAB_03380ca0;
      }
      pKVar6 = *ppKVar1;
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


// ===== public override string ToString()  [RVA 0x3280D70]
// FMIEFKAKOMG$$ToString @ RVA 0x3280D70

System_String_o * FMIEFKAKOMG__ToString(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03380d78 to 03480d9f has its CatchHandler @ 03380f20 */
  if ((DAT_04567291 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567291 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x3280B1C]
// FMIEFKAKOMG$$.ctor @ RVA 0x3280B1C

void FMIEFKAKOMG___ctor(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x3280DC8]
// FMIEFKAKOMG$$JCKINNMKHBA @ RVA 0x3280DC8

KAMBBJFPLGM_o * FMIEFKAKOMG__JCKINNMKHBA(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public static MessageParser<FMIEFKAKOMG> PGCAHPDCJBC()  [RVA 0x3280DD0]
// FMIEFKAKOMG$$PGCAHPDCJBC @ RVA 0x3280DD0

Google_Protobuf_MessageParser_FMIEFKAKOMG__o * FMIEFKAKOMG__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 03380dd4 to 03480dfb has its CatchHandler @ 03380f18 */
  if ((DAT_04567292 & 1) == 0) {
    FUN_01bab630(&FMIEFKAKOMG_TypeInfo);
    DAT_04567292 = 1;
  }
  if ((FMIEFKAKOMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03380e14 to 03480e2f has its CatchHandler @ 03380f10 */
  return FMIEFKAKOMG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int CalculateSize()  [RVA 0x3280E28]
// FMIEFKAKOMG$$CalculateSize @ RVA 0x3280E28

int32_t FMIEFKAKOMG__CalculateSize(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  BECIPDJBAOG_o *value;
  KAMBBJFPLGM_o *value_00;
  
                    /* try { // try from 03380e30 to 03480ee3 has its CatchHandler @ 03380878 */
  if ((DAT_04567293 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567293 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  iVar2 = 0;
  if (value != (BECIPDJBAOG_o *)0x0) {
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


// ===== public bool Equals(FMIEFKAKOMG IBKIPBJJCPG)  [RVA 0x3280914]
// FMIEFKAKOMG$$Equals @ RVA 0x3280914

bool FMIEFKAKOMG__Equals(FMIEFKAKOMG_o *__this,FMIEFKAKOMG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FMIEFKAKOMG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override int GetHashCode()  [RVA 0x3280EDC]
// FMIEFKAKOMG$$GetHashCode @ RVA 0x3280EDC

int32_t FMIEFKAKOMG__GetHashCode(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
                    /* try { // try from 03380ee4 to 03480ee7 has its CatchHandler @ 03380f0c */
                    /* try { // try from 03380ee8 to 03480eeb has its CatchHandler @ 03380f08 */
  pBVar3 = (__this->fields).MJIIHOLHNCK;
                    /* try { // try from 03380eec to 03480ef7 has its CatchHandler @ 03380878 */
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
                    /* catch() { ... } // from try @ 03380ef8 with catch @ 03380f04 */
    uVar1 = 1;
  }
  else {
                    /* try { // try from 03380ef8 to 03480efb has its CatchHandler @ 03380f04 */
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 03380efc to 03480eff has its CatchHandler @ 03380f00 */
    uVar1 = uVar1 ^ 1;
                    /* catch() { ... } // from try @ 03380efc with catch @ 03380f00
                       try { // try from 03380f00 to 03480f2f has its CatchHandler @ 03380878 */
  }
                    /* catch() { ... } // from try @ 03380ee8 with catch @ 03380f08 */
  pKVar4 = (__this->fields).OPHCNELIOLD;
                    /* catch() { ... } // from try @ 03380ee4 with catch @ 03380f0c */
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
                    /* catch() { ... } // from try @ 03380e14 with catch @ 03380f10 */
                    /* catch() { ... } // from try @ 03380b9c with catch @ 03380f14 */
                    /* catch() { ... } // from try @ 03380dd4 with catch @ 03380f18 */
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
                    /* catch() { ... } // from try @ 03380b5c with catch @ 03380f1c */
    uVar1 = uVar2 ^ uVar1;
  }
                    /* catch() { ... } // from try @ 03380d78 with catch @ 03380f20 */
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03380f30 to 03480f33 has its CatchHandler @ 03380f4c */
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public BECIPDJBAOG NNAKKCHDFAN()  [RVA 0x3280F48]
// FMIEFKAKOMG$$NNAKKCHDFAN @ RVA 0x3280F48

BECIPDJBAOG_o * FMIEFKAKOMG__NNAKKCHDFAN(FMIEFKAKOMG_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03380f30 with catch @ 03380f4c */
  return (__this->fields).MJIIHOLHNCK;
}

