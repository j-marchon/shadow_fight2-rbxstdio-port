// TypeDefIndex 616
// Namespace: 
// public sealed class OJKCDJCBOBL : IMessage<OJKCDJCBOBL>, IMessage, IEquatable<OJKCDJCBOBL>, IDeepCloneable<OJKCDJCBOBL>
// Fields:
//   private static readonly MessageParser<OJKCDJCBOBL> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DENAGDCDHOL = 1;
//   private static readonly FieldCodec<long> NIKPLHDPOJB; // 0x8
//   private readonly RepeatedField<long> OHMDCKEDOGH; // 0x18

// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35C2490]
// OJKCDJCBOBL$$Equals @ RVA 0x35C2490

bool OJKCDJCBOBL__Equals(OJKCDJCBOBL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568f3d & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f3d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJKCDJCBOBL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJKCDJCBOBL__Equals(__this,(OJKCDJCBOBL_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<OJKCDJCBOBL> PGCAHPDCJBC()  [RVA 0x35C2584]
// OJKCDJCBOBL$$PGCAHPDCJBC @ RVA 0x35C2584

Google_Protobuf_MessageParser_OJKCDJCBOBL__o * OJKCDJCBOBL__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568f3e & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f3e = 1;
  }
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OJKCDJCBOBL_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override string ToString()  [RVA 0x35C25DC]
// OJKCDJCBOBL$$ToString @ RVA 0x35C25DC

System_String_o * OJKCDJCBOBL__ToString(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f3f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568f3f = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor(OJKCDJCBOBL IBKIPBJJCPG)  [RVA 0x35C2634]
// OJKCDJCBOBL$$.ctor @ RVA 0x35C2634

void OJKCDJCBOBL___ctor(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568f40 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    DAT_04568f40 = 1;
    method_00 = extraout_x1;
  }
  OJKCDJCBOBL___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).OHMDCKEDOGH,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    (__this->fields).OHMDCKEDOGH = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 036c26a4 to 037c27af has its CatchHandler @ 036c26a4
                       catch() { ... } // from try @ 036c26a4 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c2824 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c2868 with catch @ 036c26a4
                       catch() { ... } // from try @ 036c28bc with catch @ 036c26a4
                       catch() { ... } // from try @ 036c28f0 with catch @ 036c26a4 */
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public OJKCDJCBOBL Clone()  [RVA 0x35C2748]
// OJKCDJCBOBL$$Clone @ RVA 0x35C2748

OJKCDJCBOBL_o * OJKCDJCBOBL__Clone(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  OJKCDJCBOBL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568f41 & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f41 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo,method);
  OJKCDJCBOBL___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35C27A0]
// OJKCDJCBOBL$$FFHIHGCDGAK @ RVA 0x35C27A0

Google_Protobuf_Reflection_MessageDescriptor_o * OJKCDJCBOBL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 036c27b0 to 037c27b7 has its CatchHandler @ 036c28a4 */
  if ((DAT_04568f42 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568f42 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 036c2808 to 037c2823 has its CatchHandler @ 036c28a0 */
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036c2824 to 037c285b has its CatchHandler @ 036c26a4 */
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2808 with catch @ 036c28a0
                        */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 036c285c to 037c285f has its CatchHandler @ 036c28a8 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_036c2888;
      }
                    /* try { // try from 036c2860 to 037c2863 has its CatchHandler @ 036c289c */
      uVar6 = uVar6 - 1;
                    /* try { // try from 036c2864 to 037c2867 has its CatchHandler @ 036c28a8 */
      piVar7 = piVar7 + 4;
                    /* try { // try from 036c2868 to 037c28b7 has its CatchHandler @ 036c26a4 */
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036c2888:
                    /* WARNING: Could not recover jumptable at 0x036c289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2860 with catch @ 036c289c
                        */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x4c,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(OJKCDJCBOBL IBKIPBJJCPG)  [RVA 0x35C24F4]
// OJKCDJCBOBL$$Equals @ RVA 0x35C24F4

bool OJKCDJCBOBL__Equals(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04568f43 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    DAT_04568f43 = 1;
  }
  if (IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).OHMDCKEDOGH;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Equals
                      (__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).OHMDCKEDOGH,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override int GetHashCode()  [RVA 0x35C28A4]
// OJKCDJCBOBL$$GetHashCode @ RVA 0x35C28A4

int32_t OJKCDJCBOBL__GetHashCode(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c27b0 with catch @ 036c28a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c285c with catch @ 036c28a8
                       catch(type#1 @ 03f99f68) { ... } // from try @ 036c2864 with catch @ 036c28a8
                        */
  pGVar3 = (__this->fields).OHMDCKEDOGH;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 036c28b8 to 037c28bb has its CatchHandler @ 036c28e0 */
                    /* try { // try from 036c28bc to 037c28e7 has its CatchHandler @ 036c26a4 */
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar1 = uVar1 ^ 1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
                    /* catch() { ... } // from try @ 036c28b8 with catch @ 036c28e0 */
                    /* try { // try from 036c28e8 to 037c28ef has its CatchHandler @ 036c2904 */
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35C28F0]
// OJKCDJCBOBL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35C28F0

Google_Protobuf_Reflection_MessageDescriptor_o *
OJKCDJCBOBL__pb__Google_Protobuf_IMessage_get_Descriptor(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  OJKCDJCBOBL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 036c28f0 to 037c28fb has its CatchHandler @ 036c26a4 */
                    /* try { // try from 036c28fc to 037c2903 has its CatchHandler @ 036c2904 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c28e8 with catch @ 036c2904
                       catch(type#2 @ 00000000) { ... } // from try @ 036c28fc with catch @ 036c2904
                        */
  if ((DAT_04568f44 & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568f44 = 1;
    method = extraout_x1;
  }
  method_00 = OJKCDJCBOBL_TypeInfo;
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJKCDJCBOBL_c *)thunk_FUN_01ba7564(OJKCDJCBOBL_TypeInfo,method);
  }
  pGVar1 = OJKCDJCBOBL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35C293C]
// OJKCDJCBOBL$$WriteTo @ RVA 0x35C293C

void OJKCDJCBOBL__WriteTo
               (OJKCDJCBOBL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04568f45 & 1) == 0) {
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    DAT_04568f45 = 1;
  }
  __this_01 = (__this->fields).OHMDCKEDOGH;
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<long>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB,
               Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35C26C0]
// OJKCDJCBOBL$$.ctor @ RVA 0x35C26C0

void OJKCDJCBOBL___ctor(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568f46 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<long>_TypeInfo);
    DAT_04568f46 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_long__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<long>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<long>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
  ppGVar1 = &(__this->fields).OHMDCKEDOGH;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public RepeatedField<long> NOJELIALAIO()  [RVA 0x35C29F4]
// OJKCDJCBOBL$$NOJELIALAIO @ RVA 0x35C29F4

Google_Protobuf_Collections_RepeatedField_long__o *
OJKCDJCBOBL__NOJELIALAIO(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  return (__this->fields).OHMDCKEDOGH;
}


// ===== private static void .cctor()  [RVA 0x35C29FC]
// OJKCDJCBOBL$$.cctor @ RVA 0x35C29FC

void OJKCDJCBOBL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OJKCDJCBOBL__o *__this;
  Google_Protobuf_FieldCodec_long__o *pGVar1;
  Google_Protobuf_FieldCodec_long__o **ppGVar2;
  
  if ((DAT_04568f47 & 1) == 0) {
    FUN_01bab630(&System_Func<OJKCDJCBOBL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OJKCDJCBOBL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OJKCDJCBOBL>_TypeInfo);
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_OJKCDJCBOBL_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&OJKCDJCBOBL_<>c_TypeInfo);
    DAT_04568f47 = 1;
  }
  if ((OJKCDJCBOBL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OJKCDJCBOBL>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OJKCDJCBOBL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OJKCDJCBOBL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OJKCDJCBOBL>__ctor__);
  OJKCDJCBOBL_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OJKCDJCBOBL_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt64(10,(MethodInfo *)0x0);
  ppGVar2 = &OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35C2B38]
// OJKCDJCBOBL$$MergeFrom @ RVA 0x35C2B38

void OJKCDJCBOBL__MergeFrom
               (OJKCDJCBOBL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OJKCDJCBOBL_Fields *pOVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04568f48 & 1) == 0) {
                    /* try { // try from 036c2b60 to 037c2c2f has its CatchHandler @ 036c2b60
                       catch() { ... } // from try @ 036c2b60 with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2c9c with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2cd0 with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2cfc with catch @ 036c2b60
                       catch() { ... } // from try @ 036c2d2c with catch @ 036c2b60 */
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04568f48 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pOVar1 = &__this->fields;
    while( true ) {
      while ((uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
             uVar2 != 8 && (uVar2 != 10))) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pOVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pOVar1,pGVar3);
      }
      __this_00 = (__this->fields).OHMDCKEDOGH;
      if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                (__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB
                 ,Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(OJKCDJCBOBL IBKIPBJJCPG)  [RVA 0x35C2C28]
// OJKCDJCBOBL$$MergeFrom @ RVA 0x35C2C28

void OJKCDJCBOBL__MergeFrom(OJKCDJCBOBL_o *__this,OJKCDJCBOBL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  OJKCDJCBOBL_Fields *pOVar2;
  
                    /* try { // try from 036c2c30 to 037c2c37 has its CatchHandler @ 036c2cd8 */
  if ((DAT_04568f49 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_04568f49 = 1;
  }
  if (IBKIPBJJCPG != (OJKCDJCBOBL_o *)0x0) {
    __this_00 = (__this->fields).OHMDCKEDOGH;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).OHMDCKEDOGH,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
      pOVar2 = &__this->fields;
                    /* try { // try from 036c2c80 to 037c2c9b has its CatchHandler @ 036c2cd4 */
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pOVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pOVar2->CKFPENBPNML = pGVar1;
                    /* try { // try from 036c2c9c to 037c2cbf has its CatchHandler @ 036c2b60 */
      thunk_FUN_01c20e04(pOVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int CalculateSize()  [RVA 0x35C2CB0]
// OJKCDJCBOBL$$CalculateSize @ RVA 0x35C2CB0

int32_t OJKCDJCBOBL__CalculateSize(OJKCDJCBOBL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
                    /* try { // try from 036c2cc0 to 037c2ccf has its CatchHandler @ 036c2ce0 */
  if ((DAT_04568f4a & 1) == 0) {
                    /* try { // try from 036c2cd0 to 037c2cf7 has its CatchHandler @ 036c2b60 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2c80 with catch @ 036c2cd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2c30 with catch @ 036c2cd8
                        */
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c2cc0 with catch @ 036c2ce0
                        */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    DAT_04568f4a = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).OHMDCKEDOGH;
                    /* try { // try from 036c2cf8 to 037c2cfb has its CatchHandler @ 036c2d1c */
                    /* try { // try from 036c2cfc to 037c2d23 has its CatchHandler @ 036c2b60 */
  if ((OJKCDJCBOBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OJKCDJCBOBL_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* catch() { ... } // from try @ 036c2cf8 with catch @ 036c2d1c */
                    /* try { // try from 036c2d24 to 037c2d2b has its CatchHandler @ 036c2d40 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<long>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       OJKCDJCBOBL_TypeInfo->static_fields->NIKPLHDPOJB,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 036c2d2c to 037c2d37 has its CatchHandler @ 036c2b60 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 036c2d38 to 037c2d3f has its CatchHandler @ 036c2d40 */
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c2d24 with catch @ 036c2d40
                       catch(type#2 @ 00000000) { ... } // from try @ 036c2d38 with catch @ 036c2d40
                        */
      iVar1 = iVar2 + iVar1;
    }
                    /* try { // try from 036c2d44 to 037c2def has its CatchHandler @ 036c2d44
                       catch() { ... } // from try @ 036c2d44 with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2e0c with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2e64 with catch @ 036c2d44
                       catch() { ... } // from try @ 036c2ea4 with catch @ 036c2d44 */
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

