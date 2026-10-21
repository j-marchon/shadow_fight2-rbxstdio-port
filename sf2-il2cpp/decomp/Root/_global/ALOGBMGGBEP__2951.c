// TypeDefIndex 2951
// Namespace: 
// public sealed class ALOGBMGGBEP : IMessage<ALOGBMGGBEP>, IMessage, IEquatable<ALOGBMGGBEP>, IDeepCloneable<ALOGBMGGBEP>
// Fields:
//   private static readonly MessageParser<ALOGBMGGBEP> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int HEPOELOIGNB = 1;
//   private string KBNAEBFHCKD; // 0x18
//   public const int EHLGPOMDHJN = 2;
//   private string FICPNGIAKEH; // 0x20

// ===== public void .ctor(ALOGBMGGBEP IBKIPBJJCPG)  [RVA 0x3492244]
// ALOGBMGGBEP$$.ctor @ RVA 0x3492244

void ALOGBMGGBEP___ctor(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  ALOGBMGGBEP___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (ALOGBMGGBEP_o *)0x0) {
    (__this->fields).KBNAEBFHCKD = (IBKIPBJJCPG->fields).KBNAEBFHCKD;
    thunk_FUN_01c20e04();
    (__this->fields).FICPNGIAKEH = (IBKIPBJJCPG->fields).FICPNGIAKEH;
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


// ===== public override string ToString()  [RVA 0x349230C]
// ALOGBMGGBEP$$ToString @ RVA 0x349230C

System_String_o * ALOGBMGGBEP__ToString(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568426 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568426 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(ALOGBMGGBEP IBKIPBJJCPG)  [RVA 0x3492364]
// ALOGBMGGBEP$$MergeFrom @ RVA 0x3492364

void ALOGBMGGBEP__MergeFrom(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *pSVar2;
  ALOGBMGGBEP_Fields *pAVar3;
  
  if (IBKIPBJJCPG == (ALOGBMGGBEP_o *)0x0) {
    return;
  }
  pSVar2 = (IBKIPBJJCPG->fields).KBNAEBFHCKD;
  if (pSVar2 != (System_String_o *)0x0) {
    if ((pSVar2->fields)._stringLength != 0) {
      ALOGBMGGBEP__CNILLEFMALH(__this,pSVar2,method);
    }
    pSVar2 = (IBKIPBJJCPG->fields).FICPNGIAKEH;
    if (pSVar2 != (System_String_o *)0x0) {
      if ((pSVar2->fields)._stringLength != 0) {
        ALOGBMGGBEP__BKDOEIHJFAP(__this,pSVar2,method);
      }
      pAVar3 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pAVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pAVar3->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pAVar3,pGVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BKDOEIHJFAP(string CJNHFNHJHPE)  [RVA 0x349245C]
// ALOGBMGGBEP$$BKDOEIHJFAP @ RVA 0x349245C

/* WARNING: Control flow encountered unimplemented instructions */

void ALOGBMGGBEP__BKDOEIHJFAP(ALOGBMGGBEP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568427 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).FICPNGIAKEH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public string MIDGLAMEMPA()  [RVA 0x34924D8]
// ALOGBMGGBEP$$MIDGLAMEMPA @ RVA 0x34924D8

System_String_o * ALOGBMGGBEP__MIDGLAMEMPA(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  return (__this->fields).KBNAEBFHCKD;
}


// ===== public static MessageParser<ALOGBMGGBEP> PGCAHPDCJBC()  [RVA 0x34924E0]
// ALOGBMGGBEP$$PGCAHPDCJBC @ RVA 0x34924E0

Google_Protobuf_MessageParser_ALOGBMGGBEP__o * ALOGBMGGBEP__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568428 & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_04568428 = 1;
  }
  if ((ALOGBMGGBEP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ALOGBMGGBEP_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int CalculateSize()  [RVA 0x3492538]
// ALOGBMGGBEP$$CalculateSize @ RVA 0x3492538

int32_t ALOGBMGGBEP__CalculateSize(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04568429 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568429 = 1;
    method = extraout_x1;
  }
  pSVar3 = (__this->fields).KBNAEBFHCKD;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    pSVar3 = (__this->fields).FICPNGIAKEH;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar3,(MethodInfo *)0x0);
        iVar2 = iVar2 + iVar1 + 1;
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar2 = iVar1 + iVar2;
      }
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x3492608]
// ALOGBMGGBEP$$GetHashCode @ RVA 0x3492608

int32_t ALOGBMGGBEP__GetHashCode(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  
  pSVar3 = (__this->fields).KBNAEBFHCKD;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
      method = extraout_x1;
    }
    pSVar3 = (__this->fields).FICPNGIAKEH;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        uVar2 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3492688]
// ALOGBMGGBEP$$Equals @ RVA 0x3492688

bool ALOGBMGGBEP__Equals(ALOGBMGGBEP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456842a & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ALOGBMGGBEP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ALOGBMGGBEP__Equals(__this,(ALOGBMGGBEP_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3492760]
// ALOGBMGGBEP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3492760

Google_Protobuf_Reflection_MessageDescriptor_o *
ALOGBMGGBEP__pb__Google_Protobuf_IMessage_get_Descriptor(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  ALOGBMGGBEP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456842b & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03592798 to 0369279f has its CatchHandler @ 035927e4 */
  method_00 = ALOGBMGGBEP_TypeInfo;
  if ((ALOGBMGGBEP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ALOGBMGGBEP_c *)thunk_FUN_01ba7564(ALOGBMGGBEP_TypeInfo,method);
  }
  pGVar1 = ALOGBMGGBEP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public ALOGBMGGBEP Clone()  [RVA 0x34928B0]
// ALOGBMGGBEP$$Clone @ RVA 0x34928B0

ALOGBMGGBEP_o * ALOGBMGGBEP__Clone(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  ALOGBMGGBEP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456842c & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    DAT_0456842c = 1;
    method = extraout_x1;
  }
  __this_00 = (ALOGBMGGBEP_o *)thunk_FUN_01bda818(ALOGBMGGBEP_TypeInfo,method);
  ALOGBMGGBEP___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor()  [RVA 0x34922A4]
// ALOGBMGGBEP$$.ctor @ RVA 0x34922A4

void ALOGBMGGBEP___ctor(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  if ((DAT_0456842d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456842d = 1;
  }
  (__this->fields).KBNAEBFHCKD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).FICPNGIAKEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3492908]
// ALOGBMGGBEP$$MergeFrom @ RVA 0x3492908

void ALOGBMGGBEP__MergeFrom
               (ALOGBMGGBEP_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ALOGBMGGBEP_Fields *pAVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  System_String_o *pSVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pAVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          ALOGBMGGBEP__CNILLEFMALH(__this,pSVar4,method);
        }
        if (uVar2 != 0x12) break;
        pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        ALOGBMGGBEP__BKDOEIHJFAP(__this,pSVar4,method);
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pAVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pAVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pAVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34927AC]
// ALOGBMGGBEP$$FFHIHGCDGAK @ RVA 0x34927AC

Google_Protobuf_Reflection_MessageDescriptor_o * ALOGBMGGBEP__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 035927ac to 036927b3 has its CatchHandler @ 035927e0 */
                    /* try { // try from 035927b4 to 036927d3 has its CatchHandler @ 03592704 */
  if ((DAT_0456842e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 035927d4 to 036927d7 has its CatchHandler @ 035927dc */
                    /* try { // try from 035927d8 to 036927fb has its CatchHandler @ 03592704 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035927d4 with catch @ 035927dc
                        */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035927ac with catch @ 035927e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03592798 with catch @ 035927e4
                        */
    DAT_0456842e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 035927fc to 036927ff has its CatchHandler @ 03592828 */
                    /* try { // try from 03592800 to 03692837 has its CatchHandler @ 03592704 */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 035927fc with catch @ 03592828 */
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* try { // try from 03592838 to 0369283f has its CatchHandler @ 03592854 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03592840 to 0369284b has its CatchHandler @ 03592704 */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 0359284c to 03692853 has its CatchHandler @ 03592854 */
  uVar6 = (ulong)uVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03592838 with catch @ 03592854
                       catch(type#2 @ 00000000) { ... } // from try @ 0359284c with catch @ 03592854
                        */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03592894;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03592894:
                    /* WARNING: Could not recover jumptable at 0x035928a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3b,pVVar2->method);
  return pGVar3;
}


// ===== public void CNILLEFMALH(string CJNHFNHJHPE)  [RVA 0x34923E0]
// ALOGBMGGBEP$$CNILLEFMALH @ RVA 0x34923E0

void ALOGBMGGBEP__CNILLEFMALH(ALOGBMGGBEP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456842f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_0456842f = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).KBNAEBFHCKD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34929AC]
// ALOGBMGGBEP$$WriteTo @ RVA 0x34929AC

void ALOGBMGGBEP__WriteTo
               (ALOGBMGGBEP_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).KBNAEBFHCKD;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03592a4c;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).KBNAEBFHCKD,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).FICPNGIAKEH;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03592a4c;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).FICPNGIAKEH,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_03592a4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x3492A50]
// ALOGBMGGBEP$$.cctor @ RVA 0x3492A50

void ALOGBMGGBEP___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ALOGBMGGBEP__o *__this;
  
  if ((DAT_04568430 & 1) == 0) {
    FUN_01bab630(&ALOGBMGGBEP_TypeInfo);
    FUN_01bab630(&System_Func<ALOGBMGGBEP>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ALOGBMGGBEP>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ALOGBMGGBEP>_TypeInfo);
    FUN_01bab630(&Method_ALOGBMGGBEP_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&ALOGBMGGBEP_<>c_TypeInfo);
    DAT_04568430 = 1;
  }
  if ((ALOGBMGGBEP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ALOGBMGGBEP>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ALOGBMGGBEP__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ALOGBMGGBEP>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ALOGBMGGBEP>__ctor__);
  ALOGBMGGBEP_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ALOGBMGGBEP_TypeInfo->static_fields,__this);
  return;
}


// ===== public string DMGDHEAGKBJ()  [RVA 0x3492B68]
// ALOGBMGGBEP$$DMGDHEAGKBJ @ RVA 0x3492B68

System_String_o * ALOGBMGGBEP__DMGDHEAGKBJ(ALOGBMGGBEP_o *__this,MethodInfo *method)

{
  return (__this->fields).FICPNGIAKEH;
}


// ===== public bool Equals(ALOGBMGGBEP IBKIPBJJCPG)  [RVA 0x34926EC]
// ALOGBMGGBEP$$Equals @ RVA 0x34926EC

/* WARNING: Control flow encountered bad instruction data */

bool ALOGBMGGBEP__Equals(ALOGBMGGBEP_o *__this,ALOGBMGGBEP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG == (ALOGBMGGBEP_o *)0x0) {
    bVar1 = false;
  }
  else {
                    /* try { // try from 03592704 to 03692797 has its CatchHandler @ 03592704
                       catch() { ... } // from try @ 03592704 with catch @ 03592704
                       catch() { ... } // from try @ 035927b4 with catch @ 03592704
                       catch() { ... } // from try @ 035927d8 with catch @ 03592704
                       catch() { ... } // from try @ 03592800 with catch @ 03592704
                       catch() { ... } // from try @ 03592840 with catch @ 03592704 */
    if (IBKIPBJJCPG != __this) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar1 = true;
  }
  return bVar1;
}

