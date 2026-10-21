// TypeDefIndex 3114
// Namespace: 
// public sealed class KCPFIELGGLA : IMessage<KCPFIELGGLA>, IMessage, IEquatable<KCPFIELGGLA>, IDeepCloneable<KCPFIELGGLA>
// Fields:
//   private static readonly MessageParser<KCPFIELGGLA> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JGIFNJHMMMK = 1;
//   private static readonly FieldCodec<PIADCKMDDAK> IODFLINNJEL; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> EHBNKDHKJNI; // 0x18

// ===== public bool Equals(KCPFIELGGLA IBKIPBJJCPG)  [RVA 0x34CCDC8]
// KCPFIELGGLA$$Equals @ RVA 0x34CCDC8

bool KCPFIELGGLA__Equals(KCPFIELGGLA_o *__this,KCPFIELGGLA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04568681 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    DAT_04568681 = 1;
  }
  if (IBKIPBJJCPG != (KCPFIELGGLA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).EHBNKDHKJNI,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 035cce50 to 036cce57 has its CatchHandler @ 035ccebc */
  return false;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34CCE58]
// KCPFIELGGLA$$WriteTo @ RVA 0x34CCE58

void KCPFIELGGLA__WriteTo
               (KCPFIELGGLA_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
                    /* try { // try from 035cce58 to 036cce5b has its CatchHandler @ 035cceb0 */
                    /* try { // try from 035cce5c to 036cce5f has its CatchHandler @ 035cceac */
                    /* try { // try from 035cce60 to 036cce63 has its CatchHandler @ 035ccea0 */
                    /* try { // try from 035cce64 to 036cce67 has its CatchHandler @ 035cce9c */
                    /* try { // try from 035cce68 to 036cce6b has its CatchHandler @ 035ccae0 */
                    /* try { // try from 035cce6c to 036cce6f has its CatchHandler @ 035cce88 */
                    /* try { // try from 035cce70 to 036cced3 has its CatchHandler @ 035ccae0 */
  if ((DAT_04568682 & 1) == 0) {
                    /* catch() { ... } // from try @ 035cce6c with catch @ 035cce88 */
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
                    /* catch() { ... } // from try @ 035ccce4 with catch @ 035cce8c */
                    /* catch() { ... } // from try @ 035cccf4 with catch @ 035cce90 */
                    /* catch() { ... } // from try @ 035cccfc with catch @ 035cce94 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
                    /* catch() { ... } // from try @ 035ccd10 with catch @ 035cce98 */
                    /* catch() { ... } // from try @ 035cce64 with catch @ 035cce9c */
    DAT_04568682 = 1;
  }
                    /* catch() { ... } // from try @ 035cce60 with catch @ 035ccea0 */
                    /* catch() { ... } // from try @ 035cccbc with catch @ 035ccea4 */
  __this_01 = (__this->fields).EHBNKDHKJNI;
                    /* catch() { ... } // from try @ 035ccccc with catch @ 035ccea8 */
                    /* catch() { ... } // from try @ 035cce5c with catch @ 035cceac */
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035cce58 with catch @ 035cceb0 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 035ccc54 with catch @ 035cceb4 */
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* catch() { ... } // from try @ 035ccbf8 with catch @ 035cceb8 */
                    /* catch() { ... } // from try @ 035cce50 with catch @ 035ccebc */
                    /* try { // try from 035cced4 to 036cced7 has its CatchHandler @ 035cceec */
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* catch() { ... } // from try @ 035cced4 with catch @ 035cceec */
                    /* try { // try from 035ccef4 to 036ccf5b has its CatchHandler @ 035ccf70 */
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x34CCF10]
// KCPFIELGGLA$$ToString @ RVA 0x34CCF10

System_String_o * KCPFIELGGLA__ToString(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568683 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568683 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 035ccf5c to 036ccf67 has its CatchHandler @ 035ccae0 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34CCF68]
// KCPFIELGGLA$$MergeFrom @ RVA 0x34CCF68

void KCPFIELGGLA__MergeFrom
               (KCPFIELGGLA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KCPFIELGGLA_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
                    /* try { // try from 035ccf68 to 036ccf6f has its CatchHandler @ 035ccf70 */
                    /* catch() { ... } // from try @ 035ccef4 with catch @ 035ccf70
                       catch() { ... } // from try @ 035ccf68 with catch @ 035ccf70 */
  if ((DAT_04568684 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04568684 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 != 10) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pKVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pKVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34CD050]
// KCPFIELGGLA$$Equals @ RVA 0x34CD050

bool KCPFIELGGLA__Equals(KCPFIELGGLA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568685 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_04568685 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KCPFIELGGLA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KCPFIELGGLA__Equals(__this,(KCPFIELGGLA_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34CD0B4]
// KCPFIELGGLA$$FFHIHGCDGAK @ RVA 0x34CD0B4

Google_Protobuf_Reflection_MessageDescriptor_o * KCPFIELGGLA__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568686 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568686 = 1;
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
        goto LAB_035cd19c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035cd19c:
                    /* WARNING: Could not recover jumptable at 0x035cd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x10,pVVar2->method);
  return pGVar3;
}


// ===== public override int GetHashCode()  [RVA 0x34CD1B8]
// KCPFIELGGLA$$GetHashCode @ RVA 0x34CD1B8

int32_t KCPFIELGGLA__GetHashCode(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).EHBNKDHKJNI;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar1 = uVar1 ^ 1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<KCPFIELGGLA> PGCAHPDCJBC()  [RVA 0x34CD204]
// KCPFIELGGLA$$PGCAHPDCJBC @ RVA 0x34CD204

Google_Protobuf_MessageParser_KCPFIELGGLA__o * KCPFIELGGLA__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568687 & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_04568687 = 1;
  }
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KCPFIELGGLA_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public RepeatedField<PIADCKMDDAK> BBDAKDCNDFF()  [RVA 0x34CD25C]
// KCPFIELGGLA$$BBDAKDCNDFF @ RVA 0x34CD25C

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
KCPFIELGGLA__BBDAKDCNDFF(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  return (__this->fields).EHBNKDHKJNI;
}


// ===== private static void .cctor()  [RVA 0x34CD264]
// KCPFIELGGLA$$.cctor @ RVA 0x34CD264

void KCPFIELGGLA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KCPFIELGGLA__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04568688 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KCPFIELGGLA>_TypeInfo);
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KCPFIELGGLA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KCPFIELGGLA>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KCPFIELGGLA_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&KCPFIELGGLA_<>c_TypeInfo);
    DAT_04568688 = 1;
  }
  if ((KCPFIELGGLA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KCPFIELGGLA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KCPFIELGGLA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KCPFIELGGLA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KCPFIELGGLA>__ctor__);
  KCPFIELGGLA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KCPFIELGGLA_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void .ctor(KCPFIELGGLA IBKIPBJJCPG)  [RVA 0x34CD414]
// KCPFIELGGLA$$.ctor @ RVA 0x34CD414

void KCPFIELGGLA___ctor(KCPFIELGGLA_o *__this,KCPFIELGGLA_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568689 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04568689 = 1;
    method_00 = extraout_x1;
  }
  KCPFIELGGLA___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (KCPFIELGGLA_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    (__this->fields).EHBNKDHKJNI = pGVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(KCPFIELGGLA IBKIPBJJCPG)  [RVA 0x34CD528]
// KCPFIELGGLA$$MergeFrom @ RVA 0x34CD528

void KCPFIELGGLA__MergeFrom(KCPFIELGGLA_o *__this,KCPFIELGGLA_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  KCPFIELGGLA_Fields *pKVar2;
  
  if ((DAT_0456868a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456868a = 1;
  }
  if (IBKIPBJJCPG != (KCPFIELGGLA_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      pKVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pKVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pKVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pKVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34CD5B0]
// KCPFIELGGLA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34CD5B0

Google_Protobuf_Reflection_MessageDescriptor_o *
KCPFIELGGLA__pb__Google_Protobuf_IMessage_get_Descriptor(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  KCPFIELGGLA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456868b & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_0456868b = 1;
    method = extraout_x1;
  }
  method_00 = KCPFIELGGLA_TypeInfo;
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KCPFIELGGLA_c *)thunk_FUN_01ba7564(KCPFIELGGLA_TypeInfo,method);
  }
  pGVar1 = KCPFIELGGLA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x34CD4A0]
// KCPFIELGGLA$$.ctor @ RVA 0x34CD4A0

void KCPFIELGGLA___ctor(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456868c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    DAT_0456868c = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int CalculateSize()  [RVA 0x34CD5FC]
// KCPFIELGGLA$$CalculateSize @ RVA 0x34CD5FC

int32_t KCPFIELGGLA__CalculateSize(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456868d & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_0456868d = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((KCPFIELGGLA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KCPFIELGGLA_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* try { // try from 035cd670 to 036cd897 has its CatchHandler @ 035cd670
                       catch() { ... } // from try @ 035cd670 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd8b8 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd8e4 with catch @ 035cd670
                       catch() { ... } // from try @ 035cd90c with catch @ 035cd670
                       catch() { ... } // from try @ 035cd93c with catch @ 035cd670 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KCPFIELGGLA_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KCPFIELGGLA Clone()  [RVA 0x34CD6A4]
// KCPFIELGGLA$$Clone @ RVA 0x34CD6A4

KCPFIELGGLA_o * KCPFIELGGLA__Clone(KCPFIELGGLA_o *__this,MethodInfo *method)

{
  KCPFIELGGLA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456868e & 1) == 0) {
    FUN_01bab630(&KCPFIELGGLA_TypeInfo);
    DAT_0456868e = 1;
    method = extraout_x1;
  }
  __this_00 = (KCPFIELGGLA_o *)thunk_FUN_01bda818(KCPFIELGGLA_TypeInfo,method);
  KCPFIELGGLA___ctor(__this_00,__this,in_x2);
  return __this_00;
}

