// TypeDefIndex 801
// Namespace: 
// public sealed class GGDHPLABCGI : IMessage<GGDHPLABCGI>, IMessage, IEquatable<GGDHPLABCGI>, IDeepCloneable<GGDHPLABCGI>
// Fields:
//   private static readonly MessageParser<GGDHPLABCGI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int NOFHGLLGLLE = 1;
//   private int PDOMCPONBNB; // 0x18
//   public const int KBFHJCMJINK = 2;
//   private IFOIPICDFHN EMDNDLOODLG; // 0x1C

// ===== public override string ToString()  [RVA 0x3071B40]
// GGDHPLABCGI$$ToString @ RVA 0x3071B40

System_String_o * GGDHPLABCGI__ToString(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f7b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565f7b = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageParser<GGDHPLABCGI> PGCAHPDCJBC()  [RVA 0x3071B98]
// GGDHPLABCGI$$PGCAHPDCJBC @ RVA 0x3071B98

Google_Protobuf_MessageParser_GGDHPLABCGI__o * GGDHPLABCGI__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565f7c & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f7c = 1;
  }
  if ((GGDHPLABCGI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return GGDHPLABCGI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3071BF0]
// GGDHPLABCGI$$FFHIHGCDGAK @ RVA 0x3071BF0

Google_Protobuf_Reflection_MessageDescriptor_o * GGDHPLABCGI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565f7d & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565f7d = 1;
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
        goto LAB_03171cd8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03171cd8:
                    /* WARNING: Could not recover jumptable at 0x03171cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x15,pVVar2->method);
  return pGVar3;
}


// ===== public int JMAMKPDNING()  [RVA 0x3071CF4]
// GGDHPLABCGI$$JMAMKPDNING @ RVA 0x3071CF4

int32_t GGDHPLABCGI__JMAMKPDNING(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  return (__this->fields).PDOMCPONBNB;
}


// ===== public void .ctor()  [RVA 0x3071CFC]
// GGDHPLABCGI$$.ctor @ RVA 0x3071CFC

void GGDHPLABCGI___ctor(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public GGDHPLABCGI Clone()  [RVA 0x3071D04]
// GGDHPLABCGI$$Clone @ RVA 0x3071D04

GGDHPLABCGI_o * GGDHPLABCGI__Clone(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  GGDHPLABCGI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565f7e & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f7e = 1;
    method = extraout_x1;
  }
  __this_00 = (GGDHPLABCGI_o *)thunk_FUN_01bda818(GGDHPLABCGI_TypeInfo,method);
  GGDHPLABCGI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(GGDHPLABCGI IBKIPBJJCPG)  [RVA 0x3071DA8]
// GGDHPLABCGI$$MergeFrom @ RVA 0x3071DA8

void GGDHPLABCGI__MergeFrom(GGDHPLABCGI_o *__this,GGDHPLABCGI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  GGDHPLABCGI_Fields *pGVar3;
  
  if (IBKIPBJJCPG != (GGDHPLABCGI_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    if (iVar1 != 0) {
      (__this->fields).PDOMCPONBNB = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    if (iVar1 != 0) {
      (__this->fields).EMDNDLOODLG = iVar1;
    }
    pGVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pGVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pGVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pGVar3,pGVar2);
    return;
  }
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3071DF4]
// GGDHPLABCGI$$MergeFrom @ RVA 0x3071DF4

void GGDHPLABCGI__MergeFrom
               (GGDHPLABCGI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GGDHPLABCGI_Fields *pGVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pGVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PDOMCPONBNB = iVar3;
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMDNDLOODLG = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pGVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pGVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pGVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IFOIPICDFHN NHGGBEACKBD()  [RVA 0x3071E88]
// GGDHPLABCGI$$NHGGBEACKBD @ RVA 0x3071E88

int32_t GGDHPLABCGI__NHGGBEACKBD(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDNDLOODLG;
}


// ===== public override int GetHashCode()  [RVA 0x3071E90]
// GGDHPLABCGI$$GetHashCode @ RVA 0x3071E90

int32_t GGDHPLABCGI__GetHashCode(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long local_18;
  
  local_18 = 0;
  uVar2 = (__this->fields).PDOMCPONBNB;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = (ulong)uVar2 << 0x20;
    uVar2 = System_Int32__GetHashCode((int)&local_18 + 4,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    local_18 = CONCAT44(local_18._4_4_,iVar1);
    uVar3 = System_Int32__GetHashCode((int32_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public void .ctor(GGDHPLABCGI IBKIPBJJCPG)  [RVA 0x3071D5C]
// GGDHPLABCGI$$.ctor @ RVA 0x3071D5C

void GGDHPLABCGI___ctor(GGDHPLABCGI_o *__this,GGDHPLABCGI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (GGDHPLABCGI_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).EMDNDLOODLG;
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    (__this->fields).EMDNDLOODLG = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EMKELMJKKLO(int CJNHFNHJHPE)  [RVA 0x3071F08]
// GGDHPLABCGI$$EMKELMJKKLO @ RVA 0x3071F08

void GGDHPLABCGI__EMKELMJKKLO(GGDHPLABCGI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDOMCPONBNB = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3071F10]
// GGDHPLABCGI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3071F10

Google_Protobuf_Reflection_MessageDescriptor_o *
GGDHPLABCGI__pb__Google_Protobuf_IMessage_get_Descriptor(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  GGDHPLABCGI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565f7f & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f7f = 1;
    method = extraout_x1;
  }
  method_00 = GGDHPLABCGI_TypeInfo;
  if ((GGDHPLABCGI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GGDHPLABCGI_c *)thunk_FUN_01ba7564(GGDHPLABCGI_TypeInfo,method);
  }
  pGVar1 = GGDHPLABCGI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3071F5C]
// GGDHPLABCGI$$WriteTo @ RVA 0x3071F5C

void GGDHPLABCGI__WriteTo
               (GGDHPLABCGI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03171fec;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  if ((__this->fields).EMDNDLOODLG != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03171fec:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).EMDNDLOODLG,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int CalculateSize()  [RVA 0x3071FF0]
// GGDHPLABCGI$$CalculateSize @ RVA 0x3071FF0

int32_t GGDHPLABCGI__CalculateSize(GGDHPLABCGI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_04565f80 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04565f80 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).PDOMCPONBNB;
  iVar3 = 0;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).EMDNDLOODLG;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public bool Equals(GGDHPLABCGI IBKIPBJJCPG)  [RVA 0x30720A4]
// GGDHPLABCGI$$Equals @ RVA 0x30720A4

bool GGDHPLABCGI__Equals(GGDHPLABCGI_o *__this,GGDHPLABCGI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (GGDHPLABCGI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
       ((__this->fields).EMDNDLOODLG == (IBKIPBJJCPG->fields).EMDNDLOODLG)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void GNLPNKGBAFL(IFOIPICDFHN CJNHFNHJHPE)  [RVA 0x30720F0]
// GGDHPLABCGI$$GNLPNKGBAFL @ RVA 0x30720F0

void GGDHPLABCGI__GNLPNKGBAFL(GGDHPLABCGI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMDNDLOODLG = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x30720F8]
// GGDHPLABCGI$$.cctor @ RVA 0x30720F8

void GGDHPLABCGI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GGDHPLABCGI__o *__this;
  
  if ((DAT_04565f81 & 1) == 0) {
    FUN_01bab630(&System_Func<GGDHPLABCGI>_TypeInfo);
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GGDHPLABCGI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GGDHPLABCGI>_TypeInfo);
    FUN_01bab630(&Method_GGDHPLABCGI_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GGDHPLABCGI_<>c_TypeInfo);
    DAT_04565f81 = 1;
  }
  if ((GGDHPLABCGI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GGDHPLABCGI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GGDHPLABCGI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GGDHPLABCGI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GGDHPLABCGI>__ctor__);
  GGDHPLABCGI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GGDHPLABCGI_TypeInfo->static_fields,__this);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3072210]
// GGDHPLABCGI$$Equals @ RVA 0x3072210

bool GGDHPLABCGI__Equals(GGDHPLABCGI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565f82 & 1) == 0) {
    FUN_01bab630(&GGDHPLABCGI_TypeInfo);
    DAT_04565f82 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GGDHPLABCGI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GGDHPLABCGI__Equals(__this,(GGDHPLABCGI_o *)IBKIPBJJCPG,method);
  return bVar1;
}

