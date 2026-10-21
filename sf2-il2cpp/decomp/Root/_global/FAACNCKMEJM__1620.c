// TypeDefIndex 1620
// Namespace: 
// public sealed class FAACNCKMEJM : IMessage<FAACNCKMEJM>, IMessage, IEquatable<FAACNCKMEJM>, IDeepCloneable<FAACNCKMEJM>
// Fields:
//   private static readonly MessageParser<FAACNCKMEJM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BCPFHAFPJBL = 1;
//   private string GJNOEAKNMOG; // 0x18
//   public const int GFLKIADANAA = 2;
//   private bool FAJBKFIAOPL; // 0x20

// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x31BBCE8]
// FAACNCKMEJM$$Equals @ RVA 0x31BBCE8

bool FAACNCKMEJM__Equals(FAACNCKMEJM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566be6 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566be6 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FAACNCKMEJM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FAACNCKMEJM__Equals(__this,(FAACNCKMEJM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public FAACNCKMEJM Clone()  [RVA 0x31BBDCC]
// FAACNCKMEJM$$Clone @ RVA 0x31BBDCC

FAACNCKMEJM_o * FAACNCKMEJM__Clone(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  FAACNCKMEJM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566be7 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566be7 = 1;
    method = extraout_x1;
  }
  __this_00 = (FAACNCKMEJM_o *)thunk_FUN_01bda818(FAACNCKMEJM_TypeInfo,method);
  FAACNCKMEJM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int CalculateSize()  [RVA 0x31BBE7C]
// FAACNCKMEJM$$CalculateSize @ RVA 0x31BBE7C

int32_t FAACNCKMEJM__CalculateSize(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566be8 & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566be8 = 1;
  }
  value = (__this->fields).GJNOEAKNMOG;
  if (value != (System_String_o *)0x0) {
    iVar2 = 0;
    if ((value->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if ((__this->fields).FAJBKFIAOPL != false) {
      iVar2 = iVar2 + 2;
    }
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


// ===== public static MessageParser<FAACNCKMEJM> PGCAHPDCJBC()  [RVA 0x31BBF18]
// FAACNCKMEJM$$PGCAHPDCJBC @ RVA 0x31BBF18

Google_Protobuf_MessageParser_FAACNCKMEJM__o * FAACNCKMEJM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566be9 & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566be9 = 1;
  }
  if ((FAACNCKMEJM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FAACNCKMEJM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(FAACNCKMEJM IBKIPBJJCPG)  [RVA 0x31BBF70]
// FAACNCKMEJM$$MergeFrom @ RVA 0x31BBF70

void FAACNCKMEJM__MergeFrom(FAACNCKMEJM_o *__this,FAACNCKMEJM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  System_String_o *CJNHFNHJHPE;
  FAACNCKMEJM_Fields *pFVar2;
  
  if (IBKIPBJJCPG == (FAACNCKMEJM_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      FAACNCKMEJM__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    if ((IBKIPBJJCPG->fields).FAJBKFIAOPL != false) {
      (__this->fields).FAJBKFIAOPL = true;
    }
    pFVar2 = &__this->fields;
    pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pFVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pFVar2->CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(pFVar2,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31BC060]
// FAACNCKMEJM$$.ctor @ RVA 0x31BC060

void FAACNCKMEJM___ctor(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  if ((DAT_04566bea & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566bea = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31BC0B8]
// FAACNCKMEJM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31BC0B8

Google_Protobuf_Reflection_MessageDescriptor_o *
FAACNCKMEJM__pb__Google_Protobuf_IMessage_get_Descriptor(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  FAACNCKMEJM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566beb & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    DAT_04566beb = 1;
    method = extraout_x1;
  }
  method_00 = FAACNCKMEJM_TypeInfo;
  if ((FAACNCKMEJM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FAACNCKMEJM_c *)thunk_FUN_01ba7564(FAACNCKMEJM_TypeInfo,method);
  }
  pGVar1 = FAACNCKMEJM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x31BBFE4]
// FAACNCKMEJM$$HCOCAAIGNNL @ RVA 0x31BBFE4

void FAACNCKMEJM__HCOCAAIGNNL(FAACNCKMEJM_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  FUN_03f939f0(DAT_04566bec);
  return;
}


// ===== private static void .cctor()  [RVA 0x31BC208]
// FAACNCKMEJM$$.cctor @ RVA 0x31BC208

void FAACNCKMEJM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FAACNCKMEJM__o *__this;
  
  if ((DAT_04566bed & 1) == 0) {
    FUN_01bab630(&FAACNCKMEJM_TypeInfo);
    FUN_01bab630(&System_Func<FAACNCKMEJM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FAACNCKMEJM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FAACNCKMEJM>_TypeInfo);
    FUN_01bab630(&Method_FAACNCKMEJM_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&FAACNCKMEJM_<>c_TypeInfo);
    DAT_04566bed = 1;
  }
  if ((FAACNCKMEJM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FAACNCKMEJM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FAACNCKMEJM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FAACNCKMEJM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FAACNCKMEJM>__ctor__);
  FAACNCKMEJM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FAACNCKMEJM_TypeInfo->static_fields,__this);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x31BC320]
// FAACNCKMEJM$$WriteTo @ RVA 0x31BC320

void FAACNCKMEJM__WriteTo
               (FAACNCKMEJM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032bc3b8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).FAJBKFIAOPL != false) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_032bc3b8;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBool
                (JBGJLELBMJF,(__this->fields).FAJBKFIAOPL,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_032bc3b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(FAACNCKMEJM IBKIPBJJCPG)  [RVA 0x31BBE24]
// FAACNCKMEJM$$.ctor @ RVA 0x31BBE24

void FAACNCKMEJM___ctor(FAACNCKMEJM_o *__this,FAACNCKMEJM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  FAACNCKMEJM___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (FAACNCKMEJM_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    (__this->fields).FAJBKFIAOPL = (IBKIPBJJCPG->fields).FAJBKFIAOPL;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x31BC3BC]
// FAACNCKMEJM$$MergeFrom @ RVA 0x31BC3BC

void FAACNCKMEJM__MergeFrom
               (FAACNCKMEJM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  FAACNCKMEJM_Fields *pFVar1;
  bool bVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pFVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          FAACNCKMEJM__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar3 != 0x10) break;
        bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).FAJBKFIAOPL = bVar2;
      }
      if (uVar3 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pFVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pFVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pFVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x31BC45C]
// FAACNCKMEJM$$GetHashCode @ RVA 0x31BC45C

int32_t FAACNCKMEJM__GetHashCode(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bee & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04566bee = 1;
    method = extraout_x1;
  }
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
    if ((__this->fields).FAJBKFIAOPL != false) {
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
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
  FUN_01bab8c8(0,method);
}


// ===== public void HKEFFKGODCC(bool CJNHFNHJHPE)  [RVA 0x31BC518]
// FAACNCKMEJM$$HKEFFKGODCC @ RVA 0x31BC518

void FAACNCKMEJM__HKEFFKGODCC(FAACNCKMEJM_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FAJBKFIAOPL = CJNHFNHJHPE;
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x31BC524]
// FAACNCKMEJM$$KCHJCGEMCGE @ RVA 0x31BC524

System_String_o * FAACNCKMEJM__KCHJCGEMCGE(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  return (__this->fields).GJNOEAKNMOG;
}


// ===== public bool Equals(FAACNCKMEJM IBKIPBJJCPG)  [RVA 0x31BBD4C]
// FAACNCKMEJM$$Equals @ RVA 0x31BBD4C

bool FAACNCKMEJM__Equals(FAACNCKMEJM_o *__this,FAACNCKMEJM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FAACNCKMEJM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) &&
       (((__this->fields).FAJBKFIAOPL != false) == ((IBKIPBJJCPG->fields).FAJBKFIAOPL != false))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override string ToString()  [RVA 0x31BC52C]
// FAACNCKMEJM$$ToString @ RVA 0x31BC52C

System_String_o * FAACNCKMEJM__ToString(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566bef & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566bef = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x31BC104]
// FAACNCKMEJM$$FFHIHGCDGAK @ RVA 0x31BC104

Google_Protobuf_Reflection_MessageDescriptor_o * FAACNCKMEJM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566bf0 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566bf0 = 1;
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
        goto LAB_032bc1ec;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_032bc1ec:
                    /* WARNING: Could not recover jumptable at 0x032bc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x44,pVVar2->method);
  return pGVar3;
}


// ===== public bool LILIENPIGAD()  [RVA 0x31BC584]
// FAACNCKMEJM$$LILIENPIGAD @ RVA 0x31BC584

bool FAACNCKMEJM__LILIENPIGAD(FAACNCKMEJM_o *__this,MethodInfo *method)

{
  return (__this->fields).FAJBKFIAOPL;
}

