// TypeDefIndex 1401
// Namespace: 
// public sealed class MEPKDDGONGE : IMessage<MEPKDDGONGE>, IMessage, IEquatable<MEPKDDGONGE>, IDeepCloneable<MEPKDDGONGE>
// Fields:
//   private static readonly MessageParser<MEPKDDGONGE> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JMPPAOKGBAB = 1;
//   private int CCCDGBNPNOD; // 0x18
//   public const int NEKHLMOEJAA = 2;
//   private static readonly FieldCodec<string> ADCKHCEHBAG; // 0x8
//   private readonly RepeatedField<string> IECICFJIDPO; // 0x20

// ===== public void .ctor(MEPKDDGONGE IBKIPBJJCPG)  [RVA 0x3178EB8]
// MEPKDDGONGE$$.ctor @ RVA 0x3178EB8

void MEPKDDGONGE___ctor(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03278e64 with catch @ 03278eb8
                        */
                    /* try { // try from 03278ed0 to 03378ed3 has its CatchHandler @ 03278ef4 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456696f & 1) == 0) {
                    /* try { // try from 03278ed4 to 03378efb has its CatchHandler @ 03278dc0 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
    DAT_0456696f = 1;
    method_00 = extraout_x1;
  }
  MEPKDDGONGE___ctor(__this,method_00);
  if (IBKIPBJJCPG != (MEPKDDGONGE_o *)0x0) {
                    /* catch() { ... } // from try @ 03278ed0 with catch @ 03278ef4 */
    (__this->fields).CCCDGBNPNOD = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
                    /* try { // try from 03278efc to 03378f03 has its CatchHandler @ 03278f18 */
    pGVar1 = (IBKIPBJJCPG->fields).IECICFJIDPO;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
                    /* try { // try from 03278f04 to 03378f0f has its CatchHandler @ 03278dc0 */
                    /* try { // try from 03278f10 to 03378f17 has its CatchHandler @ 03278f18 */
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_string__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<string>_Clone__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03278efc with catch @ 03278f18
                       catch(type#2 @ 00000000) { ... } // from try @ 03278f10 with catch @ 03278f18
                        */
      (__this->fields).IECICFJIDPO = pGVar1;
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


// ===== public static MessageParser<MEPKDDGONGE> PGCAHPDCJBC()  [RVA 0x3178FD4]
// MEPKDDGONGE$$PGCAHPDCJBC @ RVA 0x3178FD4

Google_Protobuf_MessageParser_MEPKDDGONGE__o * MEPKDDGONGE__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566970 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_04566970 = 1;
  }
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return MEPKDDGONGE_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x317902C]
// MEPKDDGONGE$$MergeFrom @ RVA 0x317902C

void MEPKDDGONGE__MergeFrom
               (MEPKDDGONGE_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  MEPKDDGONGE_Fields *pMVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  
  if ((DAT_04566971 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    DAT_04566971 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pMVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CCCDGBNPNOD = iVar3;
        }
        if (uVar2 == 0x12) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pMVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pMVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pMVar1,pGVar4);
      }
      __this_00 = (__this->fields).IECICFJIDPO;
      if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG
                 ,Method_Google_Protobuf_Collections_RepeatedField<string>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3179130]
// MEPKDDGONGE$$FFHIHGCDGAK @ RVA 0x3179130

Google_Protobuf_Reflection_MessageDescriptor_o * MEPKDDGONGE__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566972 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566972 = 1;
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
        goto LAB_03279218;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03279218:
                    /* WARNING: Could not recover jumptable at 0x0327922c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x24,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(MEPKDDGONGE IBKIPBJJCPG)  [RVA 0x3179234]
// MEPKDDGONGE$$MergeFrom @ RVA 0x3179234

void MEPKDDGONGE__MergeFrom(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MEPKDDGONGE_Fields *pMVar3;
  
  if ((DAT_04566973 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    DAT_04566973 = 1;
  }
  if (IBKIPBJJCPG == (MEPKDDGONGE_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).CCCDGBNPNOD;
  if (iVar1 != 0) {
    (__this->fields).CCCDGBNPNOD = iVar1;
  }
  __this_00 = (__this->fields).IECICFJIDPO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IECICFJIDPO,
               Method_Google_Protobuf_Collections_RepeatedField<string>_Add__);
    pMVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pMVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pMVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pMVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31792C8]
// MEPKDDGONGE$$.cctor @ RVA 0x31792C8

void MEPKDDGONGE___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_MEPKDDGONGE__o *__this;
  Google_Protobuf_FieldCodec_string__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o **ppGVar2;
  
  if ((DAT_04566974 & 1) == 0) {
    FUN_01bab630(&System_Func<MEPKDDGONGE>_TypeInfo);
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<MEPKDDGONGE>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<MEPKDDGONGE>_TypeInfo);
    FUN_01bab630(&Method_MEPKDDGONGE_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&MEPKDDGONGE_<>c_TypeInfo);
    DAT_04566974 = 1;
  }
  if ((MEPKDDGONGE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<MEPKDDGONGE>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_MEPKDDGONGE__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<MEPKDDGONGE>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<MEPKDDGONGE>__ctor__);
  MEPKDDGONGE_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(MEPKDDGONGE_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForString(0x12,(MethodInfo *)0x0);
  ppGVar2 = &MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void IAJAOBGCOKE(int CJNHFNHJHPE)  [RVA 0x3179404]
// MEPKDDGONGE$$IAJAOBGCOKE @ RVA 0x3179404

void MEPKDDGONGE__IAJAOBGCOKE(MEPKDDGONGE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CCCDGBNPNOD = CJNHFNHJHPE;
  return;
}


// ===== public override int GetHashCode()  [RVA 0x317940C]
// MEPKDDGONGE$$GetHashCode @ RVA 0x317940C

int32_t MEPKDDGONGE__GetHashCode(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_string__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).CCCDGBNPNOD;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pGVar4 = (__this->fields).IECICFJIDPO;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar3 = uVar3 ^ uVar2;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int EOIAHAGEICB()  [RVA 0x3179488]
// MEPKDDGONGE$$EOIAHAGEICB @ RVA 0x3179488

int32_t MEPKDDGONGE__EOIAHAGEICB(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  return (__this->fields).CCCDGBNPNOD;
}


// ===== public RepeatedField<string> GEJDOCFKHNM()  [RVA 0x3179490]
// MEPKDDGONGE$$GEJDOCFKHNM @ RVA 0x3179490

Google_Protobuf_Collections_RepeatedField_string__o *
MEPKDDGONGE__GEJDOCFKHNM(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  return (__this->fields).IECICFJIDPO;
}


// ===== public override string ToString()  [RVA 0x3179498]
// MEPKDDGONGE$$ToString @ RVA 0x3179498

System_String_o * MEPKDDGONGE__ToString(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566975 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566975 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31794F0]
// MEPKDDGONGE$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31794F0

Google_Protobuf_Reflection_MessageDescriptor_o *
MEPKDDGONGE__pb__Google_Protobuf_IMessage_get_Descriptor(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  MEPKDDGONGE_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566976 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_04566976 = 1;
    method = extraout_x1;
  }
  method_00 = MEPKDDGONGE_TypeInfo;
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MEPKDDGONGE_c *)thunk_FUN_01ba7564(MEPKDDGONGE_TypeInfo,method);
  }
  pGVar1 = MEPKDDGONGE__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x3178F4C]
// MEPKDDGONGE$$.ctor @ RVA 0x3178F4C

void MEPKDDGONGE___ctor(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566977 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<string>_TypeInfo);
    DAT_04566977 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_string__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<string>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<string>__ctor__);
  ppGVar1 = &(__this->fields).IECICFJIDPO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x317953C]
// MEPKDDGONGE$$WriteTo @ RVA 0x317953C

void MEPKDDGONGE__WriteTo
               (MEPKDDGONGE_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_01;
  
  if ((DAT_04566978 & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    DAT_04566978 = 1;
  }
  if ((__this->fields).CCCDGBNPNOD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0327961c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).CCCDGBNPNOD,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IECICFJIDPO;
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG,
               Method_Google_Protobuf_Collections_RepeatedField<string>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0327961c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x3179620]
// MEPKDDGONGE$$CalculateSize @ RVA 0x3179620

int32_t MEPKDDGONGE__CalculateSize(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_01;
  int iVar2;
  
  if ((DAT_04566979 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__);
    DAT_04566979 = 1;
    method = extraout_x1;
  }
  iVar2 = (__this->fields).CCCDGBNPNOD;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_01 = (__this->fields).IECICFJIDPO;
  if ((MEPKDDGONGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       MEPKDDGONGE_TypeInfo->static_fields->ADCKHCEHBAG,
                       Method_Google_Protobuf_Collections_RepeatedField<string>_CalculateSize__);
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3179714]
// MEPKDDGONGE$$Equals @ RVA 0x3179714

bool MEPKDDGONGE__Equals(MEPKDDGONGE_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456697a & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_0456697a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)MEPKDDGONGE_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = MEPKDDGONGE__Equals(__this,(MEPKDDGONGE_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public bool Equals(MEPKDDGONGE IBKIPBJJCPG)  [RVA 0x3179778]
// MEPKDDGONGE$$Equals @ RVA 0x3179778

bool MEPKDDGONGE__Equals(MEPKDDGONGE_o *__this,MEPKDDGONGE_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_string__o *__this_00;
  
  if ((DAT_0456697b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
    DAT_0456697b = 1;
  }
  if (IBKIPBJJCPG != (MEPKDDGONGE_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).CCCDGBNPNOD == (IBKIPBJJCPG->fields).CCCDGBNPNOD) {
      __this_00 = (__this->fields).IECICFJIDPO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).IECICFJIDPO,
                         Method_Google_Protobuf_Collections_RepeatedField<string>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public MEPKDDGONGE Clone()  [RVA 0x3179818]
// MEPKDDGONGE$$Clone @ RVA 0x3179818

MEPKDDGONGE_o * MEPKDDGONGE__Clone(MEPKDDGONGE_o *__this,MethodInfo *method)

{
  MEPKDDGONGE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456697c & 1) == 0) {
    FUN_01bab630(&MEPKDDGONGE_TypeInfo);
    DAT_0456697c = 1;
    method = extraout_x1;
  }
  __this_00 = (MEPKDDGONGE_o *)thunk_FUN_01bda818(MEPKDDGONGE_TypeInfo,method);
  MEPKDDGONGE___ctor(__this_00,__this,in_x2);
  return __this_00;
}

