// TypeDefIndex 2082
// Namespace: 
// public sealed class PIADCKMDDAK : IMessage<PIADCKMDDAK>, IMessage, IEquatable<PIADCKMDDAK>, IDeepCloneable<PIADCKMDDAK>
// Fields:
//   private static readonly MessageParser<PIADCKMDDAK> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BCPFHAFPJBL = 1;
//   private string GJNOEAKNMOG; // 0x18
//   public const int KJCADNEFABE = 2;
//   private int GDKPGIBMFPA; // 0x20

// ===== public void .ctor(PIADCKMDDAK IBKIPBJJCPG)  [RVA 0x32BDB5C]
// PIADCKMDDAK$$.ctor @ RVA 0x32BDB5C

void PIADCKMDDAK___ctor(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  PIADCKMDDAK___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (PIADCKMDDAK_o *)0x0) {
    (__this->fields).GJNOEAKNMOG = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
    thunk_FUN_01c20e04();
    (__this->fields).GDKPGIBMFPA = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32BDC0C]
// PIADCKMDDAK$$MergeFrom @ RVA 0x32BDC0C

void PIADCKMDDAK__MergeFrom
               (PIADCKMDDAK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PIADCKMDDAK_Fields *pPVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  System_String_o *CJNHFNHJHPE;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pPVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 10) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          PIADCKMDDAK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
        }
        if (uVar2 != 0x10) break;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).GDKPGIBMFPA = iVar3;
      }
      if (uVar2 == 0) break;
      method = (MethodInfo *)0x0;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pPVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pPVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pPVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32BDD24]
// PIADCKMDDAK$$WriteTo @ RVA 0x32BDD24

void PIADCKMDDAK__WriteTo
               (PIADCKMDDAK_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).GJNOEAKNMOG;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033bddbc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
    }
    if ((__this->fields).GDKPGIBMFPA != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033bddbc;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).GDKPGIBMFPA,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_033bddbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x32BDDC0]
// PIADCKMDDAK$$ToString @ RVA 0x32BDDC0

System_String_o * PIADCKMDDAK__ToString(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674ad & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045674ad = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x32BDE18]
// PIADCKMDDAK$$CalculateSize @ RVA 0x32BDE18

int32_t PIADCKMDDAK__CalculateSize(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  int iVar2;
  System_String_o *value_00;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045674ae & 1) == 0) {
    auVar3 = FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045674ae = 1;
  }
  value_00 = (__this->fields).GJNOEAKNMOG;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength == 0) {
      iVar2 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + 1;
    }
    value = (__this->fields).GDKPGIBMFPA;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32BDEE0]
// PIADCKMDDAK$$Equals @ RVA 0x32BDEE0

bool PIADCKMDDAK__Equals(PIADCKMDDAK_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045674af & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674af = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PIADCKMDDAK_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PIADCKMDDAK__Equals(__this,(PIADCKMDDAK_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x32BDFB4]
// PIADCKMDDAK$$KCHJCGEMCGE @ RVA 0x32BDFB4

System_String_o * PIADCKMDDAK__KCHJCGEMCGE(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  return (__this->fields).GJNOEAKNMOG;
}


// ===== public PIADCKMDDAK Clone()  [RVA 0x32BDFBC]
// PIADCKMDDAK$$Clone @ RVA 0x32BDFBC

PIADCKMDDAK_o * PIADCKMDDAK__Clone(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  PIADCKMDDAK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045674b0 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674b0 = 1;
    method = extraout_x1;
  }
  __this_00 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo,method);
  PIADCKMDDAK___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(PIADCKMDDAK IBKIPBJJCPG)  [RVA 0x32BE014]
// PIADCKMDDAK$$MergeFrom @ RVA 0x32BE014

void PIADCKMDDAK__MergeFrom(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  PIADCKMDDAK_Fields *pPVar3;
  
  if (IBKIPBJJCPG == (PIADCKMDDAK_o *)0x0) {
    return;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).GJNOEAKNMOG;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      PIADCKMDDAK__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).GDKPGIBMFPA;
    if (iVar1 != 0) {
      (__this->fields).GDKPGIBMFPA = iVar1;
    }
    pPVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pPVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x32BE084]
// PIADCKMDDAK$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32BE084

Google_Protobuf_Reflection_MessageDescriptor_o *
PIADCKMDDAK__pb__Google_Protobuf_IMessage_get_Descriptor(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  PIADCKMDDAK_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045674b1 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674b1 = 1;
    method = extraout_x1;
  }
  method_00 = PIADCKMDDAK_TypeInfo;
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PIADCKMDDAK_c *)thunk_FUN_01ba7564(PIADCKMDDAK_TypeInfo,method);
  }
  pGVar1 = PIADCKMDDAK__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public bool Equals(PIADCKMDDAK IBKIPBJJCPG)  [RVA 0x32BDF44]
// PIADCKMDDAK$$Equals @ RVA 0x32BDF44

bool PIADCKMDDAK__Equals(PIADCKMDDAK_o *__this,PIADCKMDDAK_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (PIADCKMDDAK_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).GJNOEAKNMOG,(IBKIPBJJCPG->fields).GJNOEAKNMOG,
                       (MethodInfo *)0x0);
    if ((!bVar1) && ((__this->fields).GDKPGIBMFPA == (IBKIPBJJCPG->fields).GDKPGIBMFPA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void PKPLAKAMOPO(int CJNHFNHJHPE)  [RVA 0x32BE1D4]
// PIADCKMDDAK$$PKPLAKAMOPO @ RVA 0x32BE1D4

void PIADCKMDDAK__PKPLAKAMOPO(PIADCKMDDAK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GDKPGIBMFPA = CJNHFNHJHPE;
  return;
}


// ===== public int CNKOOLDMAGC()  [RVA 0x32BE1DC]
// PIADCKMDDAK$$CNKOOLDMAGC @ RVA 0x32BE1DC

int32_t PIADCKMDDAK__CNKOOLDMAGC(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  return (__this->fields).GDKPGIBMFPA;
}


// ===== public override int GetHashCode()  [RVA 0x32BE1E4]
// PIADCKMDDAK$$GetHashCode @ RVA 0x32BE1E4

int32_t PIADCKMDDAK__GetHashCode(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  pSVar4 = (__this->fields).GJNOEAKNMOG;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
    }
    iVar1 = (__this->fields).GDKPGIBMFPA;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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


// ===== public static MessageParser<PIADCKMDDAK> PGCAHPDCJBC()  [RVA 0x32BE264]
// PIADCKMDDAK$$PGCAHPDCJBC @ RVA 0x32BE264

Google_Protobuf_MessageParser_PIADCKMDDAK__o * PIADCKMDDAK__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045674b2 & 1) == 0) {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045674b2 = 1;
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x32BE0D0]
// PIADCKMDDAK$$FFHIHGCDGAK @ RVA 0x32BE0D0

Google_Protobuf_Reflection_MessageDescriptor_o * PIADCKMDDAK__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045674b3 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045674b3 = 1;
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
        goto LAB_033be1b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033be1b8:
                    /* WARNING: Could not recover jumptable at 0x033be1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0xf,pVVar2->method);
  return pGVar3;
}


// ===== private static void .cctor()  [RVA 0x32BE2BC]
// PIADCKMDDAK$$.cctor @ RVA 0x32BE2BC

void PIADCKMDDAK___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PIADCKMDDAK__o *__this;
  
  if ((DAT_045674b4 & 1) == 0) {
    FUN_01bab630(&System_Func<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_PIADCKMDDAK_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&PIADCKMDDAK_<>c_TypeInfo);
    DAT_045674b4 = 1;
  }
  if ((PIADCKMDDAK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PIADCKMDDAK>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PIADCKMDDAK__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PIADCKMDDAK>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PIADCKMDDAK>__ctor__);
  PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PIADCKMDDAK_TypeInfo->static_fields,__this);
  return;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x32BDCA8]
// PIADCKMDDAK$$HCOCAAIGNNL @ RVA 0x32BDCA8

void PIADCKMDDAK__HCOCAAIGNNL(PIADCKMDDAK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045674b5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045674b5 = 1;
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


// ===== public void .ctor()  [RVA 0x32BDBB4]
// PIADCKMDDAK$$.ctor @ RVA 0x32BDBB4

void PIADCKMDDAK___ctor(PIADCKMDDAK_o *__this,MethodInfo *method)

{
  if ((DAT_045674b6 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045674b6 = 1;
  }
  (__this->fields).GJNOEAKNMOG = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

