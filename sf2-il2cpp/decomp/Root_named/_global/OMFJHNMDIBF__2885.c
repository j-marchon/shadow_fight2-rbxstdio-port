// TypeDefIndex 2885
// Namespace: 
// public sealed class OMFJHNMDIBF : IMessage<OMFJHNMDIBF>, IMessage, IEquatable<OMFJHNMDIBF>, IDeepCloneable<OMFJHNMDIBF>
// Fields:
//   private static readonly MessageParser<OMFJHNMDIBF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EHGPOBHFGIO = 1;
//   private static readonly FieldCodec<Nullable<int>> BBDGIEPPGAM; // 0x8
//   private Nullable<int> EMOLIBOCKJK; // 0x18
//   public const int PHJEDPPJMFI = 2;
//   private PIADCKMDDAK JMACIOLHEOF; // 0x20
//   public const int BPNLOEDNKGB = 3;
//   private PIADCKMDDAK IEDLACLJJOK; // 0x28
//   public const int DJDODJFOFMH = 4;
//   private static readonly FieldCodec<Nullable<int>> DBPADDIIBMJ; // 0x10
//   private Nullable<int> NLLKMEMKBAF; // 0x30

// ===== public OMFJHNMDIBF Clone()  [RVA 0x343F118]
// OMFJHNMDIBF$$Clone @ RVA 0x343F118

OMFJHNMDIBF_o * OMFJHNMDIBF__Clone(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  OMFJHNMDIBF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568206 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568206 = 1;
    method = extraout_x1;
  }
  __this_00 = (OMFJHNMDIBF_o *)thunk_FUN_01bda818(OMFJHNMDIBF_TypeInfo,method);
  OMFJHNMDIBF___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x343F214]
// OMFJHNMDIBF$$Equals @ RVA 0x343F214

bool OMFJHNMDIBF__Equals(OMFJHNMDIBF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568207 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568207 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OMFJHNMDIBF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
                    /* try { // try from 0353f274 to 0363f27f has its CatchHandler @ 0353f5dc */
  bVar1 = OMFJHNMDIBF__Equals(__this,(OMFJHNMDIBF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public Nullable<int> JCIGPDGHOMK()  [RVA 0x343F370]
// OMFJHNMDIBF$$JCIGPDGHOMK @ RVA 0x343F370

System_Nullable_int__o OMFJHNMDIBF__JCIGPDGHOMK(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  return (System_Nullable_int__o)(__this->fields).EMOLIBOCKJK.fields;
}


// ===== public PIADCKMDDAK NIGKCIHAAFH()  [RVA 0x343F378]
// OMFJHNMDIBF$$NIGKCIHAAFH @ RVA 0x343F378

PIADCKMDDAK_o * OMFJHNMDIBF__NIGKCIHAAFH(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  return (__this->fields).IEDLACLJJOK;
}


// ===== public bool Equals(OMFJHNMDIBF IBKIPBJJCPG)  [RVA 0x343F278]
// OMFJHNMDIBF$$Equals @ RVA 0x343F278

bool OMFJHNMDIBF__Equals(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568208 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_04568208 = 1;
  }
  if (IBKIPBJJCPG != (OMFJHNMDIBF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0353f2d0 to 0363f2d7 has its CatchHandler @ 0353f5c4 */
    if ((__this->fields).EMOLIBOCKJK.fields.value != (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields.value)
    {
      return false;
    }
    if (((*(uint *)&(__this->fields).EMOLIBOCKJK.fields & 0xff) == 0) ==
        ((*(uint *)&(IBKIPBJJCPG->fields).EMOLIBOCKJK.fields & 0xff) != 0)) {
      return false;
    }
                    /* try { // try from 0353f2f8 to 0363f2ff has its CatchHandler @ 0353f514 */
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).JMACIOLHEOF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).JMACIOLHEOF,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IEDLACLJJOK,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IEDLACLJJOK,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 0353f334 to 0363f33f has its CatchHandler @ 0353f508 */
      if ((__this->fields).NLLKMEMKBAF.fields.value !=
          (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields.value) {
        return false;
      }
      if (((*(uint *)&(__this->fields).NLLKMEMKBAF.fields & 0xff) == 0) ==
          ((*(uint *)&(IBKIPBJJCPG->fields).NLLKMEMKBAF.fields & 0xff) != 0)) {
        return false;
      }
                    /* try { // try from 0353f354 to 0363f35f has its CatchHandler @ 0353f4ec */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 0353f368 to 0363f3c3 has its CatchHandler @ 0353f510 */
  return false;
}


// ===== private static void .cctor()  [RVA 0x343F380]
// OMFJHNMDIBF$$.cctor @ RVA 0x343F380

void OMFJHNMDIBF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OMFJHNMDIBF__o *__this;
  Google_Protobuf_FieldCodec_Nullable_T___o *pGVar1;
  Google_Protobuf_FieldCodec_Nullable_int___o **ppGVar2;
  
  if ((DAT_04568209 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
    FUN_01bab630(&System_Func<OMFJHNMDIBF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OMFJHNMDIBF>__ctor__);
                    /* try { // try from 0353f3d0 to 0363f3db has its CatchHandler @ 0353f504 */
    FUN_01bab630(&Google_Protobuf_MessageParser<OMFJHNMDIBF>_TypeInfo);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&Method_OMFJHNMDIBF_<>c_BAAJBPDPFGC__);
                    /* try { // try from 0353f3f0 to 0363f3fb has its CatchHandler @ 0353f4f0 */
    FUN_01bab630(&OMFJHNMDIBF_<>c_TypeInfo);
    DAT_04568209 = 1;
  }
                    /* try { // try from 0353f404 to 0363f47b has its CatchHandler @ 0353f50c */
  if ((OMFJHNMDIBF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OMFJHNMDIBF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OMFJHNMDIBF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OMFJHNMDIBF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OMFJHNMDIBF>__ctor__);
                    /* try { // try from 0353f48c to 0363f497 has its CatchHandler @ 0353f510 */
  OMFJHNMDIBF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OMFJHNMDIBF_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<int>
                     (10,Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
                    /* try { // try from 0353f4ac to 0363f4b3 has its CatchHandler @ 0353f5cc */
  ppGVar2 = &OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_int___o *)pGVar1;
                    /* try { // try from 0353f4bc to 0363f4bf has its CatchHandler @ 0353f4f8 */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
                    /* try { // try from 0353f4c4 to 0363f4c7 has its CatchHandler @ 0353f4f4 */
  pGVar1 = Google_Protobuf_FieldCodec__ForStructWrapper<int>
                     (0x22,Method_Google_Protobuf_FieldCodec_ForStructWrapper<int>__);
                    /* try { // try from 0353f4cc to 0363f4cf has its CatchHandler @ 0353f4fc */
                    /* try { // try from 0353f4d4 to 0363f4df has its CatchHandler @ 0353f500 */
  ppGVar2 = &OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
                    /* try { // try from 0353f4e4 to 0363f4e7 has its CatchHandler @ 0353f4fc */
  *ppGVar2 = (Google_Protobuf_FieldCodec_Nullable_int___o *)pGVar1;
                    /* try { // try from 0353f4e8 to 0363f52b has its CatchHandler @ 0353f0b0 */
                    /* catch() { ... } // from try @ 0353f354 with catch @ 0353f4ec */
                    /* catch() { ... } // from try @ 0353f3f0 with catch @ 0353f4f0 */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void PGOIFJBNJCE(Nullable<int> CJNHFNHJHPE)  [RVA 0x343F4F4]
// OMFJHNMDIBF$$PGOIFJBNJCE @ RVA 0x343F4F4

void OMFJHNMDIBF__PGOIFJBNJCE
               (OMFJHNMDIBF_o *__this,System_Nullable_int__o CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0353f4c4 with catch @ 0353f4f4 */
  (__this->fields).EMOLIBOCKJK.fields = CJNHFNHJHPE.fields;
                    /* catch() { ... } // from try @ 0353f4bc with catch @ 0353f4f8 */
  return;
}


// ===== public override string ToString()  [RVA 0x343F4FC]
// OMFJHNMDIBF$$ToString @ RVA 0x343F4FC

System_String_o * OMFJHNMDIBF__ToString(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0353f4cc with catch @ 0353f4fc
                       catch() { ... } // from try @ 0353f4e4 with catch @ 0353f4fc */
                    /* catch() { ... } // from try @ 0353f4d4 with catch @ 0353f500 */
                    /* catch() { ... } // from try @ 0353f3d0 with catch @ 0353f504 */
                    /* catch() { ... } // from try @ 0353f334 with catch @ 0353f508 */
                    /* catch() { ... } // from try @ 0353f404 with catch @ 0353f50c */
                    /* catch() { ... } // from try @ 0353f368 with catch @ 0353f510
                       catch() { ... } // from try @ 0353f48c with catch @ 0353f510 */
                    /* catch() { ... } // from try @ 0353f2f8 with catch @ 0353f514 */
  if ((DAT_0456820a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* try { // try from 0353f52c to 0363f52f has its CatchHandler @ 0353f5b8 */
    DAT_0456820a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0353f530 to 0363f583 has its CatchHandler @ 0353f0b0 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x343F554]
// OMFJHNMDIBF$$.ctor @ RVA 0x343F554

void OMFJHNMDIBF___ctor(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x343F55C]
// OMFJHNMDIBF$$FFHIHGCDGAK @ RVA 0x343F55C

Google_Protobuf_Reflection_MessageDescriptor_o * OMFJHNMDIBF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456820b & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0353f584 to 0363f59b has its CatchHandler @ 0353f650 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456820b = 1;
  }
                    /* try { // try from 0353f59c to 0363f59f has its CatchHandler @ 0353f5d8 */
                    /* try { // try from 0353f5a0 to 0363f5a7 has its CatchHandler @ 0353f5d4 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0353f5a8 to 0363f5ab has its CatchHandler @ 0353f5d0 */
                    /* try { // try from 0353f5ac to 0363f5b3 has its CatchHandler @ 0353f5c8 */
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 0353f5b4 to 0363f5f7 has its CatchHandler @ 0353f0b0 */
                    /* catch() { ... } // from try @ 0353f52c with catch @ 0353f5b8 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* catch() { ... } // from try @ 0353f2d0 with catch @ 0353f5c4 */
    DAT_04565d86 = '\x01';
  }
                    /* catch() { ... } // from try @ 0353f5ac with catch @ 0353f5c8 */
                    /* catch() { ... } // from try @ 0353f4ac with catch @ 0353f5cc */
                    /* catch() { ... } // from try @ 0353f5a8 with catch @ 0353f5d0 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0353f5a0 with catch @ 0353f5d4 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0353f59c with catch @ 0353f5d8 */
  }
                    /* catch() { ... } // from try @ 0353f274 with catch @ 0353f5dc */
                    /* catch() { ... } // from try @ 0353f260 with catch @ 0353f5e0 */
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
                    /* try { // try from 0353f5f8 to 0363f5fb has its CatchHandler @ 0353f624 */
                    /* try { // try from 0353f5fc to 0363f633 has its CatchHandler @ 0353f0b0 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 0353f63c to 0363f647 has its CatchHandler @ 0353f0b0 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0353f644;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0353f5f8 with catch @ 0353f624 */
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* try { // try from 0353f634 to 0363f63b has its CatchHandler @ 0353f650 */
LAB_0353f644:
                    /* try { // try from 0353f648 to 0363f64f has its CatchHandler @ 0353f650 */
                    /* catch() { ... } // from try @ 0353f584 with catch @ 0353f650
                       catch() { ... } // from try @ 0353f634 with catch @ 0353f650
                       catch() { ... } // from try @ 0353f648 with catch @ 0353f650 */
                    /* WARNING: Could not recover jumptable at 0x0353f658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x37,pVVar2->method);
  return pGVar3;
}


// ===== public void GOEEGCGLADH(PIADCKMDDAK CJNHFNHJHPE)  [RVA 0x343F660]
// OMFJHNMDIBF$$GOEEGCGLADH @ RVA 0x343F660

void OMFJHNMDIBF__GOEEGCGLADH(OMFJHNMDIBF_o *__this,PIADCKMDDAK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IEDLACLJJOK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void HBLNDPNDOMF(PIADCKMDDAK CJNHFNHJHPE)  [RVA 0x343F668]
// OMFJHNMDIBF$$HBLNDPNDOMF @ RVA 0x343F668

void OMFJHNMDIBF__HBLNDPNDOMF(OMFJHNMDIBF_o *__this,PIADCKMDDAK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JMACIOLHEOF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x343F670]
// OMFJHNMDIBF$$MergeFrom @ RVA 0x343F670

void OMFJHNMDIBF__MergeFrom
               (OMFJHNMDIBF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PIADCKMDDAK_o **ppPVar1;
  PIADCKMDDAK_o **ppPVar2;
  OMFJHNMDIBF_Fields *pOVar3;
  uint uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar6;
  System_Nullable_int__Fields SVar7;
  PIADCKMDDAK_o *pPVar8;
  
  if ((DAT_0456820c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
                    /* try { // try from 0353f6c4 to 0363f767 has its CatchHandler @ 0353f6c4
                       catch() { ... } // from try @ 0353f6c4 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f7c4 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f800 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f838 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f870 with catch @ 0353f6c4 */
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_0456820c = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 != 0) {
      ppPVar1 = &(__this->fields).IEDLACLJJOK;
      ppPVar2 = &(__this->fields).JMACIOLHEOF;
      pOVar3 = &__this->fields;
      do {
        if (uVar4 < 0x13) {
          if (uVar4 == 10) {
            if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0353f7f4 to 0363f7f7 has its CatchHandler @ 0353f814 */
                    /* try { // try from 0353f7f8 to 0363f7fb has its CatchHandler @ 0353f80c */
            pGVar6 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
                    /* try { // try from 0353f7fc to 0363f7ff has its CatchHandler @ 0353f808 */
            if (pGVar6 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353f890;
                    /* try { // try from 0353f800 to 0363f833 has its CatchHandler @ 0353f6c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7b8 with catch @ 0353f804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7fc with catch @ 0353f808
                        */
            SVar7 = (System_Nullable_int__Fields)
                    Google_Protobuf_FieldCodec<Nullable<int>>__Read
                              (pGVar6,AIGOBLJEBCA,
                               Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7f8 with catch @ 0353f80c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7a8 with catch @ 0353f810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7f4 with catch @ 0353f814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f77c with catch @ 0353f818
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f768 with catch @ 0353f81c
                        */
            if ((((__this->fields).EMOLIBOCKJK.fields.hasValue == false) ||
                ((ulong)SVar7 >> 0x20 != 0)) || (((ulong)SVar7 & 0xff) == 0)) {
              (__this->fields).EMOLIBOCKJK.fields = SVar7;
            }
          }
          else {
            if (uVar4 == 0x12) {
              pPVar8 = *ppPVar2;
              if (pPVar8 == (PIADCKMDDAK_o *)0x0) {
                pPVar8 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
                PIADCKMDDAK___ctor(pPVar8,(MethodInfo *)0x0);
                *ppPVar2 = pPVar8;
                thunk_FUN_01c20e04(ppPVar2,pPVar8);
                pPVar8 = *ppPVar2;
              }
              goto LAB_0353f85c;
            }
LAB_0353f7bc:
                    /* try { // try from 0353f7c4 to 0363f7f3 has its CatchHandler @ 0353f6c4 */
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pOVar3->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pOVar3,pGVar5);
          }
        }
        else if (uVar4 == 0x1a) {
          pPVar8 = *ppPVar1;
          if (pPVar8 == (PIADCKMDDAK_o *)0x0) {
                    /* try { // try from 0353f834 to 0363f837 has its CatchHandler @ 0353f860 */
                    /* try { // try from 0353f838 to 0363f867 has its CatchHandler @ 0353f6c4 */
            pPVar8 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
            PIADCKMDDAK___ctor(pPVar8,(MethodInfo *)0x0);
            *ppPVar1 = pPVar8;
            thunk_FUN_01c20e04(ppPVar1,pPVar8);
            pPVar8 = *ppPVar1;
          }
LAB_0353f85c:
                    /* catch() { ... } // from try @ 0353f834 with catch @ 0353f860 */
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar8,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 0353f768 to 0363f76f has its CatchHandler @ 0353f81c */
          if (uVar4 != 0x22) goto LAB_0353f7bc;
          if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0353f77c to 0363f787 has its CatchHandler @ 0353f818 */
            thunk_FUN_01ba7564();
          }
          pGVar6 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
          if (pGVar6 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353f890;
          SVar7 = (System_Nullable_int__Fields)
                  Google_Protobuf_FieldCodec<Nullable<int>>__Read
                            (pGVar6,AIGOBLJEBCA,
                             Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
                    /* try { // try from 0353f7a8 to 0363f7b3 has its CatchHandler @ 0353f810 */
          if ((((__this->fields).NLLKMEMKBAF.fields.hasValue == false) ||
              ((ulong)SVar7 >> 0x20 != 0)) || (((ulong)SVar7 & 0xff) == 0)) {
            (__this->fields).NLLKMEMKBAF.fields = SVar7;
                    /* try { // try from 0353f7b8 to 0363f7c3 has its CatchHandler @ 0353f804 */
          }
        }
                    /* try { // try from 0353f868 to 0363f86f has its CatchHandler @ 0353f884 */
                    /* try { // try from 0353f870 to 0363f87b has its CatchHandler @ 0353f6c4 */
        uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar4 != 0);
    }
                    /* try { // try from 0353f87c to 0363f883 has its CatchHandler @ 0353f884 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353f868 with catch @ 0353f884
                       catch(type#2 @ 00000000) { ... } // from try @ 0353f87c with catch @ 0353f884
                        */
    return;
  }
LAB_0353f890:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PIADCKMDDAK BIBCEJEJJJN()  [RVA 0x343F894]
// OMFJHNMDIBF$$BIBCEJEJJJN @ RVA 0x343F894

PIADCKMDDAK_o * OMFJHNMDIBF__BIBCEJEJJJN(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  return (__this->fields).JMACIOLHEOF;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x343F89C]
// OMFJHNMDIBF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x343F89C

Google_Protobuf_Reflection_MessageDescriptor_o *
OMFJHNMDIBF__pb__Google_Protobuf_IMessage_get_Descriptor(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  OMFJHNMDIBF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456820d & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_0456820d = 1;
    method = extraout_x1;
  }
  method_00 = OMFJHNMDIBF_TypeInfo;
  if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OMFJHNMDIBF_c *)thunk_FUN_01ba7564(OMFJHNMDIBF_TypeInfo,method);
  }
  pGVar1 = OMFJHNMDIBF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor(OMFJHNMDIBF IBKIPBJJCPG)  [RVA 0x343F170]
// OMFJHNMDIBF$$.ctor @ RVA 0x343F170

void OMFJHNMDIBF___ctor(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  PIADCKMDDAK_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OMFJHNMDIBF_o *)0x0) {
    (__this->fields).EMOLIBOCKJK.fields = (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields;
    pPVar1 = (IBKIPBJJCPG->fields).JMACIOLHEOF;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)0x0;
    }
    else {
      pPVar1 = PIADCKMDDAK__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).JMACIOLHEOF = pPVar1;
    thunk_FUN_01c20e04();
    pPVar1 = (IBKIPBJJCPG->fields).IEDLACLJJOK;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)0x0;
    }
    else {
      pPVar1 = PIADCKMDDAK__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).IEDLACLJJOK = pPVar1;
    thunk_FUN_01c20e04();
    (__this->fields).NLLKMEMKBAF.fields = (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x343F8E8]
// OMFJHNMDIBF$$GetHashCode @ RVA 0x343F8E8

int32_t OMFJHNMDIBF__GetHashCode(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PIADCKMDDAK_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_Nullable_int__Fields local_28;
  
  if ((DAT_0456820e & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetHashCode__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_0456820e = 1;
  }
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0;
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue == false) {
    uVar1 = 1;
  }
  else {
    local_28 = (__this->fields).EMOLIBOCKJK.fields;
    uVar1 = System_Nullable<int>__GetHashCode
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_GetHashCode__);
    uVar1 = uVar1 ^ 1;
  }
  pPVar3 = (__this->fields).JMACIOLHEOF;
  if (pPVar3 != (PIADCKMDDAK_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar3 = (__this->fields).IEDLACLJJOK;
  if (pPVar3 != (PIADCKMDDAK_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    local_28 = (__this->fields).NLLKMEMKBAF.fields;
    uVar2 = System_Nullable<int>__GetHashCode
                      ((System_Nullable_int__o)&local_28,Method_System_Nullable<int>_GetHashCode__);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public int CalculateSize()  [RVA 0x343F9D4]
// OMFJHNMDIBF$$CalculateSize @ RVA 0x343F9D4

int32_t OMFJHNMDIBF__CalculateSize(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  PIADCKMDDAK_o *pPVar4;
  
  if ((DAT_0456820f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_0456820f = 1;
    method = extraout_x1;
  }
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue == false) {
    iVar1 = 0;
  }
  else {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OMFJHNMDIBF_TypeInfo,method);
    }
    pGVar3 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
    if (pGVar3 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353fb40;
    iVar1 = Google_Protobuf_FieldCodec<Nullable<int>>__CalculateSizeWithTag
                      (pGVar3,(System_Nullable_int__o)(__this->fields).EMOLIBOCKJK.fields,
                       Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
  }
  pPVar4 = (__this->fields).JMACIOLHEOF;
  if (pPVar4 != (PIADCKMDDAK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  pPVar4 = (__this->fields).IEDLACLJJOK;
  if (pPVar4 != (PIADCKMDDAK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pPVar4,(MethodInfo *)0x0);
    iVar1 = iVar1 + iVar2 + 1;
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar3 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
    if (pGVar3 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) {
LAB_0353fb40:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Google_Protobuf_FieldCodec<Nullable<int>>__CalculateSizeWithTag
                      (pGVar3,(System_Nullable_int__o)(__this->fields).NLLKMEMKBAF.fields,
                       Method_Google_Protobuf_FieldCodec<Nullable<int>>_CalculateSizeWithTag__);
    iVar1 = iVar2 + iVar1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}


// ===== public static MessageParser<OMFJHNMDIBF> PGCAHPDCJBC()  [RVA 0x343FB44]
// OMFJHNMDIBF$$PGCAHPDCJBC @ RVA 0x343FB44

Google_Protobuf_MessageParser_OMFJHNMDIBF__o * OMFJHNMDIBF__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568210 & 1) == 0) {
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568210 = 1;
  }
  if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OMFJHNMDIBF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void OFJLHAKNDGH(Nullable<int> CJNHFNHJHPE)  [RVA 0x343FB9C]
// OMFJHNMDIBF$$OFJLHAKNDGH @ RVA 0x343FB9C

void OMFJHNMDIBF__OFJLHAKNDGH
               (OMFJHNMDIBF_o *__this,System_Nullable_int__o CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NLLKMEMKBAF.fields = CJNHFNHJHPE.fields;
  return;
}


// ===== public void MergeFrom(OMFJHNMDIBF IBKIPBJJCPG)  [RVA 0x343FBA4]
// OMFJHNMDIBF$$MergeFrom @ RVA 0x343FBA4

void OMFJHNMDIBF__MergeFrom(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  PIADCKMDDAK_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_Nullable_int__Fields SVar3;
  OMFJHNMDIBF_Fields *pOVar4;
  PIADCKMDDAK_o **ppPVar5;
  
  if ((DAT_04568211 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_04568211 = 1;
  }
  if (IBKIPBJJCPG == (OMFJHNMDIBF_o *)0x0) {
    return;
  }
  if (((IBKIPBJJCPG->fields).EMOLIBOCKJK.fields.hasValue != false) &&
     (((SVar3 = (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields,
       (__this->fields).EMOLIBOCKJK.fields.hasValue == false || ((ulong)SVar3 >> 0x20 != 0)) ||
      (((ulong)SVar3 & 0xff) == 0)))) {
    (__this->fields).EMOLIBOCKJK.fields = SVar3;
  }
  if ((IBKIPBJJCPG->fields).JMACIOLHEOF != (PIADCKMDDAK_o *)0x0) {
    ppPVar5 = &(__this->fields).JMACIOLHEOF;
    pPVar1 = *ppPVar5;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar5 = pPVar1;
      thunk_FUN_01c20e04(ppPVar5,pPVar1);
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PIADCKMDDAK_o *)0x0) goto LAB_0353fd28;
    }
    PIADCKMDDAK__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).JMACIOLHEOF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IEDLACLJJOK != (PIADCKMDDAK_o *)0x0) {
    ppPVar5 = &(__this->fields).IEDLACLJJOK;
    pPVar1 = *ppPVar5;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar5 = pPVar1;
      thunk_FUN_01c20e04(ppPVar5,pPVar1);
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
LAB_0353fd28:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PIADCKMDDAK__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).IEDLACLJJOK,(MethodInfo *)0x0);
  }
  if (((IBKIPBJJCPG->fields).NLLKMEMKBAF.fields.hasValue != false) &&
     (((SVar3 = (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields,
       (__this->fields).NLLKMEMKBAF.fields.hasValue == false || ((ulong)SVar3 >> 0x20 != 0)) ||
      (((ulong)SVar3 & 0xff) == 0)))) {
    (__this->fields).NLLKMEMKBAF.fields = SVar3;
  }
  pOVar4 = &__this->fields;
  pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar4->CKFPENBPNML = pGVar2;
  thunk_FUN_01c20e04(pOVar4,pGVar2);
  return;
}


// ===== public Nullable<int> DENKJCBILMC()  [RVA 0x343FD2C]
// OMFJHNMDIBF$$DENKJCBILMC @ RVA 0x343FD2C

System_Nullable_int__o OMFJHNMDIBF__DENKJCBILMC(OMFJHNMDIBF_o *__this,MethodInfo *method)

{
  return (System_Nullable_int__o)(__this->fields).NLLKMEMKBAF.fields;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x343FD34]
// OMFJHNMDIBF$$WriteTo @ RVA 0x343FD34

void OMFJHNMDIBF__WriteTo
               (OMFJHNMDIBF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((DAT_04568212 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    DAT_04568212 = 1;
  }
  if ((__this->fields).EMOLIBOCKJK.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar1 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
    if (pGVar1 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_FieldCodec<Nullable<int>>__WriteTagAndValue
              (pGVar1,JBGJLELBMJF,(System_Nullable_int__o)(__this->fields).EMOLIBOCKJK.fields,
               Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
  }
  if ((__this->fields).JMACIOLHEOF != (PIADCKMDDAK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).JMACIOLHEOF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IEDLACLJJOK != (PIADCKMDDAK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0353fe88;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IEDLACLJJOK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).NLLKMEMKBAF.fields.hasValue != false) {
    if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar1 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
    if (pGVar1 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) {
LAB_0353fe88:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_FieldCodec<Nullable<int>>__WriteTagAndValue
              (pGVar1,JBGJLELBMJF,(System_Nullable_int__o)(__this->fields).NLLKMEMKBAF.fields,
               Method_Google_Protobuf_FieldCodec<Nullable<int>>_WriteTagAndValue__);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

