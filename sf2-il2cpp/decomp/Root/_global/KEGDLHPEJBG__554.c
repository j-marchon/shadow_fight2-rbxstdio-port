// TypeDefIndex 554
// Namespace: 
// public sealed class KEGDLHPEJBG : IMessage<KEGDLHPEJBG>, IMessage, IEquatable<KEGDLHPEJBG>, IDeepCloneable<KEGDLHPEJBG>
// Fields:
//   private static readonly MessageParser<KEGDLHPEJBG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BCPFHAFPJBL = 1;
//   private string GJNOEAKNMOG; // 0x18
//   public const int CNFNCMIBPLD = 2;
//   private long HFHGCALGKHH; // 0x20

// ===== public static MessageParser<KEGDLHPEJBG> PGCAHPDCJBC()  [RVA 0x35A8F9C]
// KEGDLHPEJBG$$PGCAHPDCJBC @ RVA 0x35A8F9C

Google_Protobuf_MessageParser_KEGDLHPEJBG__o * KEGDLHPEJBG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568e2f & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e2f = 1;
  }
  if ((KEGDLHPEJBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KEGDLHPEJBG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35A8FF4]
// KEGDLHPEJBG$$MergeFrom @ RVA 0x35A8FF4

void KEGDLHPEJBG__MergeFrom
               (KEGDLHPEJBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KEGDLHPEJBG_Fields *pKVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  int64_t iVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pKVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          KEGDLHPEJBG__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HFHGCALGKHH = iVar4;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(pKVar1,pGVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x35A910C]
// KEGDLHPEJBG$$ToString @ RVA 0x35A910C

System_String_o * KEGDLHPEJBG__ToString(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e30 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568e30 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public long DJIGKBFMLNB()  [RVA 0x35A9164]
// KEGDLHPEJBG$$DJIGKBFMLNB @ RVA 0x35A9164

int64_t KEGDLHPEJBG__DJIGKBFMLNB(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  return (__this->fields).HFHGCALGKHH;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35A916C]
// KEGDLHPEJBG$$Equals @ RVA 0x35A916C

bool KEGDLHPEJBG__Equals(KEGDLHPEJBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568e31 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e31 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KEGDLHPEJBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KEGDLHPEJBG__Equals(__this,(KEGDLHPEJBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(KEGDLHPEJBG IBKIPBJJCPG)  [RVA 0x35A9240]
// KEGDLHPEJBG$$MergeFrom @ RVA 0x35A9240

void KEGDLHPEJBG__MergeFrom(KEGDLHPEJBG_o *__this,KEGDLHPEJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *CJNHFNHJHPE;
  long lVar2;
  KEGDLHPEJBG_Fields *pKVar3;
  
  if (IBKIPBJJCPG == (KEGDLHPEJBG_o *)0x0) {
                    /* try { // try from 036a92a0 to 037a9623 has its CatchHandler @ 036a92a0
                       catch() { ... } // from try @ 036a92a0 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a988c with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b48 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b54 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b68 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9b78 with catch @ 036a92a0
                       catch() { ... } // from try @ 036a9c90 with catch @ 036a92a0 */
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      KEGDLHPEJBG__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    lVar2 = (IBKIPBJJCPG->fields).HFHGCALGKHH;
    if (lVar2 != 0) {
      (__this->fields).HFHGCALGKHH = lVar2;
    }
    pKVar3 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pKVar3,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35A92B0]
// KEGDLHPEJBG$$WriteTo @ RVA 0x35A92B0

void KEGDLHPEJBG__WriteTo
               (KEGDLHPEJBG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036a9348;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).HFHGCALGKHH != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036a9348;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).HFHGCALGKHH,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036a9348:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KEGDLHPEJBG Clone()  [RVA 0x35A934C]
// KEGDLHPEJBG$$Clone @ RVA 0x35A934C

KEGDLHPEJBG_o * KEGDLHPEJBG__Clone(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  KEGDLHPEJBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e32 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e32 = 1;
    method = extraout_x1;
  }
  __this_00 = (KEGDLHPEJBG_o *)thunk_FUN_01bda818(KEGDLHPEJBG_TypeInfo,method);
  KEGDLHPEJBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor(KEGDLHPEJBG IBKIPBJJCPG)  [RVA 0x35A93A4]
// KEGDLHPEJBG$$.ctor @ RVA 0x35A93A4

void KEGDLHPEJBG___ctor(KEGDLHPEJBG_o *__this,KEGDLHPEJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  KEGDLHPEJBG___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (KEGDLHPEJBG_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    (__this->fields).HFHGCALGKHH = (IBKIPBJJCPG->fields).HFHGCALGKHH;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x35A9090]
// KEGDLHPEJBG$$HCOCAAIGNNL @ RVA 0x35A9090

void KEGDLHPEJBG__HCOCAAIGNNL(KEGDLHPEJBG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568e33 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_04568e33 = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).GJNOEAKNMOG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x35A9454]
// KEGDLHPEJBG$$KCHJCGEMCGE @ RVA 0x35A9454

System_String_o * KEGDLHPEJBG__KCHJCGEMCGE(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  return (__this->fields).GJNOEAKNMOG;
}


// ===== public void DNLFOEBCKFP(long CJNHFNHJHPE)  [RVA 0x35A945C]
// KEGDLHPEJBG$$DNLFOEBCKFP @ RVA 0x35A945C

void KEGDLHPEJBG__DNLFOEBCKFP(KEGDLHPEJBG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HFHGCALGKHH = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x35A93FC]
// KEGDLHPEJBG$$.ctor @ RVA 0x35A93FC

void KEGDLHPEJBG___ctor(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  if ((DAT_04568e34 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e34 = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int CalculateSize()  [RVA 0x35A9464]
// KEGDLHPEJBG$$CalculateSize @ RVA 0x35A9464

int32_t KEGDLHPEJBG__CalculateSize(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value;
  long value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04568e35 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568e35 = 1;
  }
  value = (__this->fields).GJNOEAKNMOG;
  if (value != (System_String_o *)0x0) {
    if ((value->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    value_00 = (__this->fields).HFHGCALGKHH;
    if (value_00 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public override int GetHashCode()  [RVA 0x35A952C]
// KEGDLHPEJBG$$GetHashCode @ RVA 0x35A952C

int32_t KEGDLHPEJBG__GetHashCode(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_18;
  
  local_18 = 0;
  pSVar3 = (__this->fields).GJNOEAKNMOG;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (*(pSVar3->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar1 ^ 1;
    }
    lVar5 = (__this->fields).HFHGCALGKHH;
    if (lVar5 != 0) {
      local_18 = lVar5;
      uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35A95AC]
// KEGDLHPEJBG$$FFHIHGCDGAK @ RVA 0x35A95AC

Google_Protobuf_Reflection_MessageDescriptor_o * KEGDLHPEJBG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568e36 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568e36 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036a9624 to 037a964b has its CatchHandler @ 036a9be8 */
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
        goto LAB_036a9694;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 036a9680 to 037a96ab has its CatchHandler @ 036a9be4 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036a9694:
                    /* WARNING: Could not recover jumptable at 0x036a96a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x19,pVVar2->method);
  return pGVar3;
}


// ===== public bool Equals(KEGDLHPEJBG IBKIPBJJCPG)  [RVA 0x35A91D0]
// KEGDLHPEJBG$$Equals @ RVA 0x35A91D0

bool KEGDLHPEJBG__Equals(KEGDLHPEJBG_o *__this,KEGDLHPEJBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KEGDLHPEJBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).HFHGCALGKHH == (IBKIPBJJCPG->fields).HFHGCALGKHH)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35A96B0]
// KEGDLHPEJBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35A96B0

Google_Protobuf_Reflection_MessageDescriptor_o *
KEGDLHPEJBG__pb__Google_Protobuf_IMessage_get_Descriptor(KEGDLHPEJBG_o *__this,MethodInfo *method)

{
  KEGDLHPEJBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e37 & 1) == 0) {
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    DAT_04568e37 = 1;
    method = extraout_x1;
  }
  method_00 = KEGDLHPEJBG_TypeInfo;
  if ((KEGDLHPEJBG_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036a96ec to 037a96f3 has its CatchHandler @ 036a9bcc */
    method_00 = (KEGDLHPEJBG_c *)thunk_FUN_01ba7564(KEGDLHPEJBG_TypeInfo,method);
  }
  pGVar1 = KEGDLHPEJBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x35A96FC]
// KEGDLHPEJBG$$.cctor @ RVA 0x35A96FC

void KEGDLHPEJBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KEGDLHPEJBG__o *__this;
  
                    /* try { // try from 036a96fc to 037a9703 has its CatchHandler @ 036a9bdc */
                    /* try { // try from 036a9704 to 037a970f has its CatchHandler @ 036a9bd0 */
                    /* try { // try from 036a9714 to 037a971b has its CatchHandler @ 036a9be0 */
  if ((DAT_04568e38 & 1) == 0) {
                    /* try { // try from 036a9728 to 037a972f has its CatchHandler @ 036a9bc4 */
    FUN_01bab630(&System_Func<KEGDLHPEJBG>_TypeInfo);
    FUN_01bab630(&KEGDLHPEJBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KEGDLHPEJBG>__ctor__);
                    /* try { // try from 036a9744 to 037a974b has its CatchHandler @ 036a9bc8 */
    FUN_01bab630(&Google_Protobuf_MessageParser<KEGDLHPEJBG>_TypeInfo);
    FUN_01bab630(&Method_KEGDLHPEJBG_<>c_AFJKCJDOFEL__);
                    /* try { // try from 036a975c to 037a975f has its CatchHandler @ 036a9bbc */
    FUN_01bab630(&KEGDLHPEJBG_<>c_TypeInfo);
                    /* try { // try from 036a9768 to 037a976f has its CatchHandler @ 036a9bac */
    DAT_04568e38 = 1;
  }
                    /* try { // try from 036a9780 to 037a9787 has its CatchHandler @ 036a9bc0 */
                    /* try { // try from 036a978c to 037a9793 has its CatchHandler @ 036a9bb4 */
  if ((KEGDLHPEJBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036a97ac to 037a97af has its CatchHandler @ 036a9b88 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KEGDLHPEJBG>_TypeInfo);
                    /* try { // try from 036a97bc to 037a97eb has its CatchHandler @ 036a9b8c */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KEGDLHPEJBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KEGDLHPEJBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KEGDLHPEJBG>__ctor__);
  KEGDLHPEJBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 036a9804 to 037a980b has its CatchHandler @ 036a9b98 */
  thunk_FUN_01c20e04(KEGDLHPEJBG_TypeInfo->static_fields,__this);
  return;
}

