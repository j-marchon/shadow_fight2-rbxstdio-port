// TypeDefIndex 750
// Namespace: 
// public sealed class AJINOJNMEEK : IMessage<AJINOJNMEEK>, IMessage, IEquatable<AJINOJNMEEK>, IDeepCloneable<AJINOJNMEEK>
// Fields:
//   private static readonly MessageParser<AJINOJNMEEK> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KBFHJCMJINK = 1;
//   private CKLIGNAPKFO EMDNDLOODLG; // 0x18
//   public const int KPJHOMEKKMH = 2;
//   private string EGELDFKMOCJ; // 0x20
//   public const int PCJCPMADIAB = 3;
//   private static readonly FieldCodec<string> GLHDOIAKLDH; // 0x8
//   private string ABFBDJFPIMM; // 0x28

// ===== public void .ctor()  [RVA 0x304D7A4]
// AJINOJNMEEK$$.ctor @ RVA 0x304D7A4

void AJINOJNMEEK___ctor(AJINOJNMEEK_o *__this,MethodInfo *method)

{
                    /* try { // try from 0314d7bc to 0324d7bf has its CatchHandler @ 0314d7dc */
                    /* try { // try from 0314d7c0 to 0324d7d7 has its CatchHandler @ 0314d7d8 */
  if ((DAT_04565e1f & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565e1f = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d7c0 with catch @ 0314d7d8
                       try { // try from 0314d7d8 to 0324d80f has its CatchHandler @ 0314d674 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d7bc with catch @ 0314d7dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d6fc with catch @ 0314d7e0
                        */
  (__this->fields).EGELDFKMOCJ = StringLiteral_1/*""*/;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d760 with catch @ 0314d7e4
                        */
  thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d738 with catch @ 0314d7e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d70c with catch @ 0314d7ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d6ec with catch @ 0314d7f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d6e4 with catch @ 0314d7f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d6d8 with catch @ 0314d7f8
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x304D7FC]
// AJINOJNMEEK$$Equals @ RVA 0x304D7FC

bool AJINOJNMEEK__Equals(AJINOJNMEEK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0314d810 to 0324d813 has its CatchHandler @ 0314d844 */
                    /* try { // try from 0314d814 to 0324d847 has its CatchHandler @ 0314d674 */
  if ((DAT_04565e20 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e20 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 0314d810 with catch @ 0314d844 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)AJINOJNMEEK_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* try { // try from 0314d854 to 0324d85f has its CatchHandler @ 0314d674 */
  bVar1 = AJINOJNMEEK__Equals(__this,(AJINOJNMEEK_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override string ToString()  [RVA 0x304D8E4]
// AJINOJNMEEK$$ToString @ RVA 0x304D8E4

System_String_o * AJINOJNMEEK__ToString(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e21 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565e21 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x304D93C]
// AJINOJNMEEK$$FFHIHGCDGAK @ RVA 0x304D93C

Google_Protobuf_Reflection_MessageDescriptor_o * AJINOJNMEEK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565e22 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 0314d968 to 0324d96b has its CatchHandler @ 0314d9c8 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565e22 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0314d988 to 0324d993 has its CatchHandler @ 0314d9cc */
  if (DAT_04565d86 == '\0') {
                    /* try { // try from 0314d994 to 0324d9e3 has its CatchHandler @ 0314d8e0 */
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d968 with catch @ 0314d9c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314d988 with catch @ 0314d9cc
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
                    /* try { // try from 0314d9e4 to 0324d9e7 has its CatchHandler @ 0314d9f4 */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0314d9e4 with catch @ 0314d9f4 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 0314da18 to 0324da1f has its CatchHandler @ 0314da20 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314d9fc with catch @ 0314da20
                       catch(type#2 @ 00000000) { ... } // from try @ 0314da18 with catch @ 0314da20
                        */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0314da24;
      }
                    /* try { // try from 0314d9fc to 0324da0b has its CatchHandler @ 0314da20 */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 0314da0c to 0324da17 has its CatchHandler @ 0314d8e0 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0314da24:
                    /* WARNING: Could not recover jumptable at 0x0314da38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(AJINOJNMEEK IBKIPBJJCPG)  [RVA 0x304D860]
// AJINOJNMEEK$$Equals @ RVA 0x304D860

bool AJINOJNMEEK__Equals(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0314d860 to 0324d867 has its CatchHandler @ 0314d868 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314d848 with catch @ 0314d868
                       catch(type#2 @ 00000000) { ... } // from try @ 0314d860 with catch @ 0314d868
                        */
  if (IBKIPBJJCPG != (AJINOJNMEEK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).EGELDFKMOCJ,(IBKIPBJJCPG->fields).EGELDFKMOCJ,
                            (MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = System_String__op_Inequality
                          ((__this->fields).ABFBDJFPIMM,(IBKIPBJJCPG->fields).ABFBDJFPIMM,
                           (MethodInfo *)0x0), !bVar1)) {
                    /* try { // try from 0314d8e0 to 0324d967 has its CatchHandler @ 0314d8e0
                       catch() { ... } // from try @ 0314d8e0 with catch @ 0314d8e0
                       catch() { ... } // from try @ 0314d994 with catch @ 0314d8e0
                       catch() { ... } // from try @ 0314da0c with catch @ 0314d8e0 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public static MessageParser<AJINOJNMEEK> PGCAHPDCJBC()  [RVA 0x304DA40]
// AJINOJNMEEK$$PGCAHPDCJBC @ RVA 0x304DA40

Google_Protobuf_MessageParser_AJINOJNMEEK__o * AJINOJNMEEK__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565e23 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e23 = 1;
  }
  if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return AJINOJNMEEK_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public CKLIGNAPKFO NHGGBEACKBD()  [RVA 0x304DA98]
// AJINOJNMEEK$$NHGGBEACKBD @ RVA 0x304DA98

int32_t AJINOJNMEEK__NHGGBEACKBD(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDNDLOODLG;
}


// ===== public string KJNGJNFJBJC()  [RVA 0x304DAA0]
// AJINOJNMEEK$$KJNGJNFJBJC @ RVA 0x304DAA0

System_String_o * AJINOJNMEEK__KJNGJNFJBJC(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  return (__this->fields).ABFBDJFPIMM;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x304DAA8]
// AJINOJNMEEK$$WriteTo @ RVA 0x304DAA8

void AJINOJNMEEK__WriteTo
               (AJINOJNMEEK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_FieldCodec_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  System_String_o *pSVar1;
  
  if ((DAT_04565e24 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_WriteTagAndValue__);
    DAT_04565e24 = 1;
  }
                    /* try { // try from 0314dae8 to 0324dd1f has its CatchHandler @ 0314dae8
                       catch() { ... } // from try @ 0314dae8 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314ddc0 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314dedc with catch @ 0314dae8
                       catch() { ... } // from try @ 0314df40 with catch @ 0314dae8
                       catch() { ... } // from try @ 0314dff0 with catch @ 0314dae8 */
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314dbb4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).EGELDFKMOCJ;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0314dbb4;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).EGELDFKMOCJ,(MethodInfo *)0x0);
    }
    if ((__this->fields).ABFBDJFPIMM != (System_String_o *)0x0) {
      if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
      if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314dbb4;
      Google_Protobuf_FieldCodec<object>__WriteTagAndValue
                ((Google_Protobuf_FieldCodec_T__o *)__this_00,JBGJLELBMJF,
                 (Il2CppObject *)(__this->fields).ABFBDJFPIMM,
                 Method_Google_Protobuf_FieldCodec<string>_WriteTagAndValue__);
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0314dbb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x304DBB8]
// AJINOJNMEEK$$GetHashCode @ RVA 0x304DBB8

int32_t AJINOJNMEEK__GetHashCode(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pSVar4 = (__this->fields).EGELDFKMOCJ;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pSVar4 = (__this->fields).ABFBDJFPIMM;
    if (pSVar4 != (System_String_o *)0x0) {
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x304DC50]
// AJINOJNMEEK$$.cctor @ RVA 0x304DC50

void AJINOJNMEEK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_AJINOJNMEEK__o *__this;
  Google_Protobuf_FieldCodec_string__o *pGVar1;
  Google_Protobuf_FieldCodec_string__o **ppGVar2;
  
  if ((DAT_04565e25 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForClassWrapper<string>__);
    FUN_01bab630(&System_Func<AJINOJNMEEK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<AJINOJNMEEK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<AJINOJNMEEK>_TypeInfo);
    FUN_01bab630(&Method_AJINOJNMEEK_<>c_AFCHNCJIIDO__);
    FUN_01bab630(&AJINOJNMEEK_<>c_TypeInfo);
    DAT_04565e25 = 1;
  }
  if ((AJINOJNMEEK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0314dd20 to 0324dd47 has its CatchHandler @ 0314df54 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<AJINOJNMEEK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_AJINOJNMEEK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<AJINOJNMEEK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<AJINOJNMEEK>__ctor__);
  AJINOJNMEEK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(AJINOJNMEEK_TypeInfo->static_fields,__this);
  pGVar1 = (Google_Protobuf_FieldCodec_string__o *)
           Google_Protobuf_FieldCodec__ForClassWrapper<object>
                     (0x1a,Method_Google_Protobuf_FieldCodec_ForClassWrapper<string>__);
                    /* try { // try from 0314dd7c to 0324dda3 has its CatchHandler @ 0314df50 */
  ppGVar2 = &AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public int CalculateSize()  [RVA 0x304DDA0]
// AJINOJNMEEK$$CalculateSize @ RVA 0x304DDA0

int32_t AJINOJNMEEK__CalculateSize(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_FieldCodec_string__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *value_00;
  
                    /* try { // try from 0314dda4 to 0324ddbf has its CatchHandler @ 0314df58 */
  if ((DAT_04565e26 & 1) == 0) {
                    /* try { // try from 0314ddc0 to 0324ded7 has its CatchHandler @ 0314dae8 */
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_CalculateSizeWithTag__);
    DAT_04565e26 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).EMDNDLOODLG;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).EGELDFKMOCJ;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    if ((__this->fields).ABFBDJFPIMM != (System_String_o *)0x0) {
      if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
      if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314debc;
      iVar1 = Google_Protobuf_FieldCodec<object>__CalculateSizeWithTag
                        ((Google_Protobuf_FieldCodec_T__o *)__this_00,
                         (Il2CppObject *)(__this->fields).ABFBDJFPIMM,
                         Method_Google_Protobuf_FieldCodec<string>_CalculateSizeWithTag__);
      iVar2 = iVar1 + iVar2;
    }
    __this_01 = (__this->fields).CKFPENBPNML;
    if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
LAB_0314debc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(AJINOJNMEEK IBKIPBJJCPG)  [RVA 0x304DEC0]
// AJINOJNMEEK$$MergeFrom @ RVA 0x304DEC0

void AJINOJNMEEK__MergeFrom(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  AJINOJNMEEK_Fields *pAVar5;
  System_String_o **ppSVar6;
  
                    /* try { // try from 0314ded8 to 0324dedb has its CatchHandler @ 0314df4c */
  if ((DAT_04565e27 & 1) == 0) {
                    /* try { // try from 0314dedc to 0324df3b has its CatchHandler @ 0314dae8 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565e27 = 1;
  }
  if (IBKIPBJJCPG == (AJINOJNMEEK_o *)0x0) {
                    /* catch() { ... } // from try @ 0314df70 with catch @ 0314df88 */
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    (__this->fields).EMDNDLOODLG = iVar1;
  }
  pSVar4 = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
  if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pSVar4->fields)._stringLength != 0) {
    AJINOJNMEEK__IPNMMELEIJE(__this,pSVar4,method);
  }
  pSVar4 = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
  if (pSVar4 != (System_String_o *)0x0) {
    ppSVar6 = &(__this->fields).ABFBDJFPIMM;
    if (*ppSVar6 != (System_String_o *)0x0) {
                    /* try { // try from 0314df3c to 0324df3f has its CatchHandler @ 0314df48 */
                    /* try { // try from 0314df40 to 0324df6f has its CatchHandler @ 0314dae8 */
      bVar2 = System_String__op_Inequality(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314df3c with catch @ 0314df48
                        */
      if (!bVar2) goto LAB_0314df5c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314ded8 with catch @ 0314df4c
                        */
      pSVar4 = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dd7c with catch @ 0314df50
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dd20 with catch @ 0314df54
                        */
    *ppSVar6 = pSVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0314dda4 with catch @ 0314df58
                        */
    thunk_FUN_01c20e04(ppSVar6);
  }
LAB_0314df5c:
  pAVar5 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pAVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 0314df70 to 0324df73 has its CatchHandler @ 0314df88 */
  pAVar5->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pAVar5,pGVar3);
  return;
}


// ===== public void IHBGCOPIKOF(string CJNHFNHJHPE)  [RVA 0x304E010]
// AJINOJNMEEK$$IHBGCOPIKOF @ RVA 0x304E010

void AJINOJNMEEK__IHBGCOPIKOF(AJINOJNMEEK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ABFBDJFPIMM = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void GNLPNKGBAFL(CKLIGNAPKFO CJNHFNHJHPE)  [RVA 0x304E018]
// AJINOJNMEEK$$GNLPNKGBAFL @ RVA 0x304E018

void AJINOJNMEEK__GNLPNKGBAFL(AJINOJNMEEK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMDNDLOODLG = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x304E020]
// AJINOJNMEEK$$MergeFrom @ RVA 0x304E020

void AJINOJNMEEK__MergeFrom
               (AJINOJNMEEK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  AJINOJNMEEK_Fields *pAVar2;
  bool bVar3;
  uint32_t uVar4;
  int32_t iVar5;
  Google_Protobuf_FieldCodec_string__o *__this_00;
  System_String_o *pSVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  
  if ((DAT_04565e28 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<string>_Read__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565e28 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0314e194:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppSVar1 = &(__this->fields).ABFBDJFPIMM;
  pAVar2 = &__this->fields;
LAB_0314e098:
  while( true ) {
    while( true ) {
      while (uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            (int)uVar4 < 0x12) {
        if (uVar4 != 8) {
          if (uVar4 == 0) {
            return;
          }
          goto LAB_0314e158;
        }
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMDNDLOODLG = iVar5;
      }
      if (uVar4 != 0x12) break;
      pSVar6 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
      AJINOJNMEEK__IPNMMELEIJE(__this,pSVar6,method);
    }
    if (uVar4 == 0x1a) break;
LAB_0314e158:
    method = (MethodInfo *)0x0;
    pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                       (pAVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
    pAVar2->CKFPENBPNML = pGVar7;
    thunk_FUN_01c20e04(pAVar2,pGVar7);
  }
  if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = AJINOJNMEEK_TypeInfo->static_fields->GLHDOIAKLDH;
  if (__this_00 == (Google_Protobuf_FieldCodec_string__o *)0x0) goto LAB_0314e194;
  method = Method_Google_Protobuf_FieldCodec<string>_Read__;
  pSVar6 = (System_String_o *)
           Google_Protobuf_FieldCodec<object>__Read
                     ((Google_Protobuf_FieldCodec_T__o *)__this_00,AIGOBLJEBCA,
                      (MethodInfo_250B49C *)Method_Google_Protobuf_FieldCodec<string>_Read__);
  if (*ppSVar1 != (System_String_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar3 = System_String__op_Inequality(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if (!bVar3) goto LAB_0314e098;
  }
  *ppSVar1 = pSVar6;
  thunk_FUN_01c20e04(ppSVar1,pSVar6);
  goto LAB_0314e098;
}


// ===== public AJINOJNMEEK Clone()  [RVA 0x304E198]
// AJINOJNMEEK$$Clone @ RVA 0x304E198

AJINOJNMEEK_o * AJINOJNMEEK__Clone(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  AJINOJNMEEK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565e29 & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e29 = 1;
    method = extraout_x1;
  }
  __this_00 = (AJINOJNMEEK_o *)thunk_FUN_01bda818(AJINOJNMEEK_TypeInfo,method);
  AJINOJNMEEK___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x304E258]
// AJINOJNMEEK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x304E258

Google_Protobuf_Reflection_MessageDescriptor_o *
AJINOJNMEEK__pb__Google_Protobuf_IMessage_get_Descriptor(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  AJINOJNMEEK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e2a & 1) == 0) {
    FUN_01bab630(&AJINOJNMEEK_TypeInfo);
    DAT_04565e2a = 1;
    method = extraout_x1;
  }
  method_00 = AJINOJNMEEK_TypeInfo;
  if ((AJINOJNMEEK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (AJINOJNMEEK_c *)thunk_FUN_01ba7564(AJINOJNMEEK_TypeInfo,method);
  }
  pGVar1 = AJINOJNMEEK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor(AJINOJNMEEK IBKIPBJJCPG)  [RVA 0x304E1F0]
// AJINOJNMEEK$$.ctor @ RVA 0x304E1F0

void AJINOJNMEEK___ctor(AJINOJNMEEK_o *__this,AJINOJNMEEK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  AJINOJNMEEK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (AJINOJNMEEK_o *)0x0) {
    (__this->fields).EMDNDLOODLG = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).EGELDFKMOCJ = (IBKIPBJJCPG->fields).EGELDFKMOCJ;
    thunk_FUN_01c20e04();
    (__this->fields).ABFBDJFPIMM = (IBKIPBJJCPG->fields).ABFBDJFPIMM;
    thunk_FUN_01c20e04();
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string CNNCHPPECHP()  [RVA 0x304E2A4]
// AJINOJNMEEK$$CNNCHPPECHP @ RVA 0x304E2A4

System_String_o * AJINOJNMEEK__CNNCHPPECHP(AJINOJNMEEK_o *__this,MethodInfo *method)

{
  return (__this->fields).EGELDFKMOCJ;
}


// ===== public void IPNMMELEIJE(string CJNHFNHJHPE)  [RVA 0x304DF94]
// AJINOJNMEEK$$IPNMMELEIJE @ RVA 0x304DF94

void AJINOJNMEEK__IPNMMELEIJE(AJINOJNMEEK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565e2b & 1) == 0) {
                    /* try { // try from 0314dfc8 to 0324dfef has its CatchHandler @ 0314e004 */
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04565e2b = 1;
  }
                    /* try { // try from 0314dff0 to 0324dffb has its CatchHandler @ 0314dae8 */
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).EGELDFKMOCJ;
  *ppSVar2 = pSVar1;
                    /* try { // try from 0314dffc to 0324e003 has its CatchHandler @ 0314e004 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0314dfc8 with catch @ 0314e004
                       catch(type#2 @ 00000000) { ... } // from try @ 0314dffc with catch @ 0314e004
                        */
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

