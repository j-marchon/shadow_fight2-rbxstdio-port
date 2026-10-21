// TypeDefIndex 280
// Namespace: 
// public sealed class DLOALGNBPNL : IMessage<DLOALGNBPNL>, IMessage, IEquatable<DLOALGNBPNL>, IDeepCloneable<DLOALGNBPNL>
// Fields:
//   private static readonly MessageParser<DLOALGNBPNL> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JGIFNJHMMMK = 1;
//   private static readonly FieldCodec<CBPENMDOJDB> IODFLINNJEL; // 0x8
//   private readonly RepeatedField<CBPENMDOJDB> EHBNKDHKJNI; // 0x18

// ===== public void .ctor()  [RVA 0x3233CCC]
// DLOALGNBPNL$$.ctor @ RVA 0x3233CCC

void DLOALGNBPNL___ctor(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o **ppGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03333ccc to 03433cd7 has its CatchHandler @ 03333d6c */
                    /* try { // try from 03333cd8 to 03433d5f has its CatchHandler @ 03333bfc */
  if ((DAT_04567000 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_TypeInfo);
    DAT_04567000 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3233D54]
// DLOALGNBPNL$$FFHIHGCDGAK @ RVA 0x3233D54

Google_Protobuf_Reflection_MessageDescriptor_o * DLOALGNBPNL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03333d60 to 03433d63 has its CatchHandler @ 03333d6c */
                    /* try { // try from 03333d64 to 03433d83 has its CatchHandler @ 03333bfc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03333ccc with catch @ 03333d6c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03333d60 with catch @ 03333d6c
                        */
  if ((DAT_04567001 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03333d84 to 03433d87 has its CatchHandler @ 03333d94 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567001 = 1;
  }
                    /* catch() { ... } // from try @ 03333d84 with catch @ 03333d94 */
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03333dcc to 03433df3 has its CatchHandler @ 03333e08 */
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
                    /* try { // try from 03333df4 to 03433dff has its CatchHandler @ 03333bfc */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* try { // try from 03333e00 to 03433e07 has its CatchHandler @ 03333e08 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03333dcc with catch @ 03333e08
                       catch(type#2 @ 00000000) { ... } // from try @ 03333e00 with catch @ 03333e08
                        */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03333e3c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03333e3c:
                    /* WARNING: Could not recover jumptable at 0x03333e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x4b,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(DLOALGNBPNL IBKIPBJJCPG)  [RVA 0x3233E58]
// DLOALGNBPNL$$Equals @ RVA 0x3233E58

bool DLOALGNBPNL__Equals(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  
  if ((DAT_04567002 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Equals__);
    DAT_04567002 = 1;
  }
  if (IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).EHBNKDHKJNI,
                       Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(DLOALGNBPNL IBKIPBJJCPG)  [RVA 0x3233EE8]
// DLOALGNBPNL$$MergeFrom @ RVA 0x3233EE8

void DLOALGNBPNL__MergeFrom(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  DLOALGNBPNL_Fields *pDVar2;
  
  if ((DAT_04567003 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    DAT_04567003 = 1;
  }
  if (IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
      pDVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pDVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pDVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pDVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3233F70]
// DLOALGNBPNL$$MergeFrom @ RVA 0x3233F70

void DLOALGNBPNL__MergeFrom
               (DLOALGNBPNL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  DLOALGNBPNL_Fields *pDVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  
  if ((DAT_04567004 & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_AddEntriesFrom__);
    DAT_04567004 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pDVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 != 10) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pDVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pDVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pDVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x3234058]
// DLOALGNBPNL$$GetHashCode @ RVA 0x3234058

int32_t DLOALGNBPNL__GetHashCode(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).EHBNKDHKJNI;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
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


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32340A4]
// DLOALGNBPNL$$WriteTo @ RVA 0x32340A4

void DLOALGNBPNL__WriteTo
               (DLOALGNBPNL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_01;
  
  if ((DAT_04567005 & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_WriteTo__);
    DAT_04567005 = 1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL,
               Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_WriteTo__);
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


// ===== public void .ctor(DLOALGNBPNL IBKIPBJJCPG)  [RVA 0x323415C]
// DLOALGNBPNL$$.ctor @ RVA 0x323415C

void DLOALGNBPNL___ctor(DLOALGNBPNL_o *__this,DLOALGNBPNL_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567006 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Clone__);
    DAT_04567006 = 1;
    method_00 = extraout_x1;
  }
  DLOALGNBPNL___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (DLOALGNBPNL_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Clone__);
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


// ===== private static void .cctor()  [RVA 0x32341E8]
// DLOALGNBPNL$$.cctor @ RVA 0x32341E8

void DLOALGNBPNL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DLOALGNBPNL__o *__this;
  Google_Protobuf_FieldCodec_CBPENMDOJDB__o *pGVar1;
  Google_Protobuf_FieldCodec_CBPENMDOJDB__o **ppGVar2;
  
                    /* try { // try from 033341fc to 034342c7 has its CatchHandler @ 033341fc
                       catch() { ... } // from try @ 033341fc with catch @ 033341fc
                       catch() { ... } // from try @ 033343cc with catch @ 033341fc
                       catch() { ... } // from try @ 03334484 with catch @ 033341fc
                       catch() { ... } // from try @ 0333448c with catch @ 033341fc
                       catch() { ... } // from try @ 03334554 with catch @ 033341fc */
  if ((DAT_04567007 & 1) == 0) {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<CBPENMDOJDB>__);
    FUN_01bab630(&System_Func<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DLOALGNBPNL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_DLOALGNBPNL_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&DLOALGNBPNL_<>c_TypeInfo);
    DAT_04567007 = 1;
  }
  if ((DLOALGNBPNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DLOALGNBPNL>_TypeInfo);
                    /* try { // try from 033342c8 to 034342ef has its CatchHandler @ 033344b8 */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DLOALGNBPNL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DLOALGNBPNL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DLOALGNBPNL>__ctor__);
  DLOALGNBPNL_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DLOALGNBPNL_TypeInfo->static_fields,__this);
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03334324 to 0343434f has its CatchHandler @ 033344b4 */
  if (DAT_0456707c == '\0') {
    FUN_01bab630(&CBPENMDOJDB_TypeInfo);
    DAT_0456707c = '\x01';
  }
  if ((CBPENMDOJDB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_CBPENMDOJDB__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         CBPENMDOJDB_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<CBPENMDOJDB>__);
  ppGVar2 = &DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
                    /* try { // try from 0333438c to 03434393 has its CatchHandler @ 033344ac */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public RepeatedField<CBPENMDOJDB> BBDAKDCNDFF()  [RVA 0x3234398]
// DLOALGNBPNL$$BBDAKDCNDFF @ RVA 0x3234398

Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *
DLOALGNBPNL__BBDAKDCNDFF(DLOALGNBPNL_o *__this,MethodInfo *method)

{
                    /* try { // try from 03334398 to 034343a3 has its CatchHandler @ 033344b0 */
  return (__this->fields).EHBNKDHKJNI;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32343A0]
// DLOALGNBPNL$$Equals @ RVA 0x32343A0

bool DLOALGNBPNL__Equals(DLOALGNBPNL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 033343b4 to 034343bb has its CatchHandler @ 0333449c */
  if ((DAT_04567008 & 1) == 0) {
                    /* try { // try from 033343c0 to 034343cb has its CatchHandler @ 033344a0 */
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
                    /* try { // try from 033343cc to 0343446f has its CatchHandler @ 033341fc */
    DAT_04567008 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DLOALGNBPNL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DLOALGNBPNL__Equals(__this,(DLOALGNBPNL_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<DLOALGNBPNL> PGCAHPDCJBC()  [RVA 0x3234404]
// DLOALGNBPNL$$PGCAHPDCJBC @ RVA 0x3234404

Google_Protobuf_MessageParser_DLOALGNBPNL__o * DLOALGNBPNL__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567009 & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    DAT_04567009 = 1;
  }
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DLOALGNBPNL_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x323445C]
// DLOALGNBPNL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x323445C

Google_Protobuf_Reflection_MessageDescriptor_o *
DLOALGNBPNL__pb__Google_Protobuf_IMessage_get_Descriptor(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  DLOALGNBPNL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03334470 to 03434477 has its CatchHandler @ 033344bc */
  if ((DAT_0456700a & 1) == 0) {
                    /* try { // try from 03334478 to 0343447b has its CatchHandler @ 033344a8 */
                    /* try { // try from 0333447c to 0343447f has its CatchHandler @ 033344a4 */
                    /* try { // try from 03334480 to 03434483 has its CatchHandler @ 03334498 */
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
                    /* try { // try from 03334484 to 03434487 has its CatchHandler @ 033341fc */
                    /* try { // try from 03334488 to 0343448b has its CatchHandler @ 03334494 */
    DAT_0456700a = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0333448c to 034344d3 has its CatchHandler @ 033341fc */
                    /* catch() { ... } // from try @ 03334488 with catch @ 03334494 */
  method_00 = DLOALGNBPNL_TypeInfo;
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03334480 with catch @ 03334498 */
    method_00 = (DLOALGNBPNL_c *)thunk_FUN_01ba7564(DLOALGNBPNL_TypeInfo,method);
  }
                    /* catch() { ... } // from try @ 033343b4 with catch @ 0333449c */
                    /* catch() { ... } // from try @ 033343c0 with catch @ 033344a0 */
                    /* catch() { ... } // from try @ 0333447c with catch @ 033344a4 */
  pGVar1 = DLOALGNBPNL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override string ToString()  [RVA 0x32344A8]
// DLOALGNBPNL$$ToString @ RVA 0x32344A8

System_String_o * DLOALGNBPNL__ToString(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 03334478 with catch @ 033344a8 */
                    /* catch() { ... } // from try @ 0333438c with catch @ 033344ac */
                    /* catch() { ... } // from try @ 03334398 with catch @ 033344b0 */
                    /* catch() { ... } // from try @ 03334324 with catch @ 033344b4 */
                    /* catch() { ... } // from try @ 033342c8 with catch @ 033344b8 */
                    /* catch() { ... } // from try @ 03334470 with catch @ 033344bc */
  if ((DAT_0456700b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* try { // try from 033344d4 to 034344d7 has its CatchHandler @ 033344e4 */
    DAT_0456700b = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033344d4 with catch @ 033344e4 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 033344ec to 03434553 has its CatchHandler @ 03334568 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x3234500]
// DLOALGNBPNL$$CalculateSize @ RVA 0x3234500

int32_t DLOALGNBPNL__CalculateSize(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_01;
  
  if ((DAT_0456700c & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_CalculateSize__);
    DAT_0456700c = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((DLOALGNBPNL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DLOALGNBPNL_TypeInfo,method);
  }
                    /* try { // try from 03334554 to 0343455f has its CatchHandler @ 033341fc */
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* try { // try from 03334560 to 03434567 has its CatchHandler @ 03334568 */
                    /* catch() { ... } // from try @ 033344ec with catch @ 03334568
                       catch() { ... } // from try @ 03334560 with catch @ 03334568 */
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       DLOALGNBPNL_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_CalculateSize__
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


// ===== public DLOALGNBPNL Clone()  [RVA 0x32345A8]
// DLOALGNBPNL$$Clone @ RVA 0x32345A8

DLOALGNBPNL_o * DLOALGNBPNL__Clone(DLOALGNBPNL_o *__this,MethodInfo *method)

{
  DLOALGNBPNL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456700d & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    DAT_0456700d = 1;
    method = extraout_x1;
  }
  __this_00 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo,method);
  DLOALGNBPNL___ctor(__this_00,__this,in_x2);
  return __this_00;
}

