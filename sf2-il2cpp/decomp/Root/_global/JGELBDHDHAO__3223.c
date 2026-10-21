// TypeDefIndex 3223
// Namespace: 
// public sealed class JGELBDHDHAO : IMessage<JGELBDHDHAO>, IMessage, IEquatable<JGELBDHDHAO>, IDeepCloneable<JGELBDHDHAO>
// Fields:
//   private static readonly MessageParser<JGELBDHDHAO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BEEBFNABDGK = 1;
//   private bool IFBHDAMCHNM; // 0x18
//   public const int INGGNGPMCCK = 2;
//   private static readonly FieldCodec<PIADCKMDDAK> EEIBKMBPHLJ; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> DDEAFMPDPBJ; // 0x20

// ===== public bool Equals(JGELBDHDHAO IBKIPBJJCPG)  [RVA 0x350410C]
// JGELBDHDHAO$$Equals @ RVA 0x350410C

bool JGELBDHDHAO__Equals(JGELBDHDHAO_o *__this,JGELBDHDHAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
                    /* try { // try from 0360410c to 0370410f has its CatchHandler @ 0360411c */
                    /* try { // try from 03604110 to 03704133 has its CatchHandler @ 03603edc */
                    /* catch() { ... } // from try @ 036040c0 with catch @ 03604114 */
                    /* catch() { ... } // from try @ 03604080 with catch @ 03604118 */
                    /* catch() { ... } // from try @ 0360410c with catch @ 0360411c */
                    /* catch() { ... } // from try @ 0360406c with catch @ 03604120 */
  if ((DAT_0456887f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
                    /* try { // try from 03604134 to 03704137 has its CatchHandler @ 036041b0 */
                    /* try { // try from 03604138 to 03704183 has its CatchHandler @ 03603edc */
    DAT_0456887f = 1;
  }
  if (IBKIPBJJCPG != (JGELBDHDHAO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).IFBHDAMCHNM != false) == ((IBKIPBJJCPG->fields).IFBHDAMCHNM != false)) {
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
                    /* try { // try from 03604184 to 0370419b has its CatchHandler @ 03604238 */
      if (bVar1) {
                    /* try { // try from 0360419c to 037041a3 has its CatchHandler @ 036041c8 */
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* try { // try from 036041a4 to 037041a7 has its CatchHandler @ 036041c0 */
                    /* try { // try from 036041ac to 037041e3 has its CatchHandler @ 03603edc */
                    /* catch() { ... } // from try @ 03604134 with catch @ 036041b0 */
  return false;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35041BC]
// JGELBDHDHAO$$Equals @ RVA 0x35041BC

bool JGELBDHDHAO__Equals(JGELBDHDHAO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* catch() { ... } // from try @ 036041a8 with catch @ 036041bc */
                    /* catch() { ... } // from try @ 036041a4 with catch @ 036041c0 */
                    /* catch() { ... } // from try @ 036040f0 with catch @ 036041c4 */
                    /* catch() { ... } // from try @ 0360419c with catch @ 036041c8 */
                    /* catch() { ... } // from try @ 03604050 with catch @ 036041cc */
                    /* catch() { ... } // from try @ 03604030 with catch @ 036041d0 */
  if ((DAT_04568880 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
                    /* try { // try from 036041e4 to 037041e7 has its CatchHandler @ 03604214 */
                    /* try { // try from 036041e8 to 0370421b has its CatchHandler @ 03603edc */
    DAT_04568880 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JGELBDHDHAO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* catch() { ... } // from try @ 036041e4 with catch @ 03604214 */
                    /* try { // try from 0360421c to 03704223 has its CatchHandler @ 03604238 */
  bVar1 = JGELBDHDHAO__Equals(__this,(JGELBDHDHAO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3504220]
// JGELBDHDHAO$$GetHashCode @ RVA 0x3504220

int32_t JGELBDHDHAO__GetHashCode(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar3;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
                    /* try { // try from 03604224 to 0370422f has its CatchHandler @ 03603edc */
                    /* try { // try from 03604230 to 03704237 has its CatchHandler @ 03604238 */
  if ((DAT_04568881 & 1) == 0) {
                    /* catch() { ... } // from try @ 03604184 with catch @ 03604238
                       catch() { ... } // from try @ 0360421c with catch @ 03604238
                       catch() { ... } // from try @ 03604230 with catch @ 03604238 */
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568881 = 1;
    method = extraout_x1;
  }
  uVar1 = 1;
  if ((__this->fields).IFBHDAMCHNM != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar1 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  pGVar3 = (__this->fields).DDEAFMPDPBJ;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar2 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35042D0]
// JGELBDHDHAO$$.cctor @ RVA 0x35042D0

void JGELBDHDHAO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JGELBDHDHAO__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04568882 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<JGELBDHDHAO>_TypeInfo);
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JGELBDHDHAO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JGELBDHDHAO>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_JGELBDHDHAO_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JGELBDHDHAO_<>c_TypeInfo);
    DAT_04568882 = 1;
  }
  if ((JGELBDHDHAO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JGELBDHDHAO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JGELBDHDHAO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JGELBDHDHAO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JGELBDHDHAO>__ctor__);
  JGELBDHDHAO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JGELBDHDHAO_TypeInfo->static_fields,__this);
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
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void .ctor()  [RVA 0x3504480]
// JGELBDHDHAO$$.ctor @ RVA 0x3504480

void JGELBDHDHAO___ctor(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568883 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    DAT_04568883 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).DDEAFMPDPBJ;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public JGELBDHDHAO Clone()  [RVA 0x3504508]
// JGELBDHDHAO$$Clone @ RVA 0x3504508

JGELBDHDHAO_o * JGELBDHDHAO__Clone(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  JGELBDHDHAO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568884 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    DAT_04568884 = 1;
    method = extraout_x1;
  }
  __this_00 = (JGELBDHDHAO_o *)thunk_FUN_01bda818(JGELBDHDHAO_TypeInfo,method);
  JGELBDHDHAO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public RepeatedField<PIADCKMDDAK> LMJPMJFJLNE()  [RVA 0x35045F4]
// JGELBDHDHAO$$LMJPMJFJLNE @ RVA 0x35045F4

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
JGELBDHDHAO__LMJPMJFJLNE(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  return (__this->fields).DDEAFMPDPBJ;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35045FC]
// JGELBDHDHAO$$WriteTo @ RVA 0x35045FC

void JGELBDHDHAO__WriteTo
               (JGELBDHDHAO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_04568885 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_04568885 = 1;
  }
  if ((__this->fields).IFBHDAMCHNM != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036046dc;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).IFBHDAMCHNM,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).DDEAFMPDPBJ;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036046dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35046E0]
// JGELBDHDHAO$$FFHIHGCDGAK @ RVA 0x35046E0

Google_Protobuf_Reflection_MessageDescriptor_o * JGELBDHDHAO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568886 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568886 = 1;
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
        goto LAB_036047c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036047c8:
                    /* WARNING: Could not recover jumptable at 0x036047dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2b,pVVar2->method);
  return pGVar3;
}


// ===== public bool DLPLGJHFNPE()  [RVA 0x35047E4]
// JGELBDHDHAO$$DLPLGJHFNPE @ RVA 0x35047E4

bool JGELBDHDHAO__DLPLGJHFNPE(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  return (__this->fields).IFBHDAMCHNM;
}


// ===== public void GHGHBICABHJ(bool CJNHFNHJHPE)  [RVA 0x35047EC]
// JGELBDHDHAO$$GHGHBICABHJ @ RVA 0x35047EC

void JGELBDHDHAO__GHGHBICABHJ(JGELBDHDHAO_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IFBHDAMCHNM = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35047F8]
// JGELBDHDHAO$$MergeFrom @ RVA 0x35047F8

void JGELBDHDHAO__MergeFrom
               (JGELBDHDHAO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  JGELBDHDHAO_Fields *pJVar1;
  bool bVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04568887 & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04568887 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pJVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IFBHDAMCHNM = bVar2;
        }
        if (uVar3 == 0x12) break;
        if (uVar3 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pJVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pJVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pJVar1,pGVar4);
      }
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(JGELBDHDHAO IBKIPBJJCPG)  [RVA 0x3504560]
// JGELBDHDHAO$$.ctor @ RVA 0x3504560

void JGELBDHDHAO___ctor(JGELBDHDHAO_o *__this,JGELBDHDHAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568888 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04568888 = 1;
    method_00 = extraout_x1;
  }
  JGELBDHDHAO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (JGELBDHDHAO_o *)0x0) {
    (__this->fields).IFBHDAMCHNM = (IBKIPBJJCPG->fields).IFBHDAMCHNM;
    pGVar1 = (IBKIPBJJCPG->fields).DDEAFMPDPBJ;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
      (__this->fields).DDEAFMPDPBJ = pGVar1;
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


// ===== public override string ToString()  [RVA 0x3504900]
// JGELBDHDHAO$$ToString @ RVA 0x3504900

System_String_o * JGELBDHDHAO__ToString(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568889 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568889 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03604938 to 03704a63 has its CatchHandler @ 03604938
                       catch() { ... } // from try @ 03604938 with catch @ 03604938
                       catch() { ... } // from try @ 03604b28 with catch @ 03604938
                       catch() { ... } // from try @ 03604b68 with catch @ 03604938
                       catch() { ... } // from try @ 03604ba8 with catch @ 03604938
                       catch() { ... } // from try @ 03604bd8 with catch @ 03604938 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(JGELBDHDHAO IBKIPBJJCPG)  [RVA 0x3504958]
// JGELBDHDHAO$$MergeFrom @ RVA 0x3504958

void JGELBDHDHAO__MergeFrom(JGELBDHDHAO_o *__this,JGELBDHDHAO_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  JGELBDHDHAO_Fields *pJVar2;
  
  if ((DAT_0456888a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456888a = 1;
  }
  if (IBKIPBJJCPG == (JGELBDHDHAO_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).IFBHDAMCHNM != false) {
    (__this->fields).IFBHDAMCHNM = true;
  }
  __this_00 = (__this->fields).DDEAFMPDPBJ;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DDEAFMPDPBJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    pJVar2 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar2->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pJVar2,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35049F0]
// JGELBDHDHAO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35049F0

Google_Protobuf_Reflection_MessageDescriptor_o *
JGELBDHDHAO__pb__Google_Protobuf_IMessage_get_Descriptor(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  JGELBDHDHAO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456888b & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    DAT_0456888b = 1;
    method = extraout_x1;
  }
  method_00 = JGELBDHDHAO_TypeInfo;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JGELBDHDHAO_c *)thunk_FUN_01ba7564(JGELBDHDHAO_TypeInfo,method);
  }
  pGVar1 = JGELBDHDHAO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public int CalculateSize()  [RVA 0x3504A3C]
// JGELBDHDHAO$$CalculateSize @ RVA 0x3504A3C

int32_t JGELBDHDHAO__CalculateSize(JGELBDHDHAO_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456888c & 1) == 0) {
                    /* try { // try from 03604a64 to 03704a6b has its CatchHandler @ 03604b84 */
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
                    /* try { // try from 03604a78 to 03704a87 has its CatchHandler @ 03604b8c */
    DAT_0456888c = 1;
    method = extraout_x1;
  }
  bVar1 = (__this->fields).IFBHDAMCHNM;
  __this_01 = (__this->fields).DDEAFMPDPBJ;
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JGELBDHDHAO_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* try { // try from 03604a9c to 03704a9f has its CatchHandler @ 03604b70 */
                    /* try { // try from 03604ab0 to 03704ab3 has its CatchHandler @ 03604b6c */
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       JGELBDHDHAO_TypeInfo->static_fields->EEIBKMBPHLJ,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar3 = iVar2 + (uint)bVar1 * 2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<JGELBDHDHAO> PGCAHPDCJBC()  [RVA 0x3504AF4]
// JGELBDHDHAO$$PGCAHPDCJBC @ RVA 0x3504AF4

Google_Protobuf_MessageParser_JGELBDHDHAO__o * JGELBDHDHAO__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 03604b04 to 03704b27 has its CatchHandler @ 03604b74 */
  if ((DAT_0456888d & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    DAT_0456888d = 1;
  }
                    /* try { // try from 03604b28 to 03704b53 has its CatchHandler @ 03604938 */
  if ((JGELBDHDHAO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return JGELBDHDHAO_TypeInfo->static_fields->NNMODPGDIDE;
}

