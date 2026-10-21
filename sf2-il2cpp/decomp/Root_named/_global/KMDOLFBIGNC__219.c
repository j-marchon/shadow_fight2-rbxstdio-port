// TypeDefIndex 219
// Namespace: 
// public sealed class KMDOLFBIGNC : IMessage<KMDOLFBIGNC>, IMessage, IEquatable<KMDOLFBIGNC>, IDeepCloneable<KMDOLFBIGNC>
// Fields:
//   private static readonly MessageParser<KMDOLFBIGNC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int NOFHGLLGLLE = 1;
//   private int PDOMCPONBNB; // 0x18
//   public const int HCGJNLLKBHP = 2;
//   private PGICCMFLDPI PNGGPPDKHPH; // 0x20
//   public const int OODJAACHNGM = 3;
//   private int HCBJCMDLODI; // 0x28

// ===== public int JMAMKPDNING()  [RVA 0x3122D14]
// KMDOLFBIGNC$$JMAMKPDNING @ RVA 0x3122D14

int32_t KMDOLFBIGNC__JMAMKPDNING(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  return (__this->fields).PDOMCPONBNB;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3122D1C]
// KMDOLFBIGNC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3122D1C

Google_Protobuf_Reflection_MessageDescriptor_o *
KMDOLFBIGNC__pb__Google_Protobuf_IMessage_get_Descriptor(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  KMDOLFBIGNC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566635 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04566635 = 1;
    method = extraout_x1;
  }
  method_00 = KMDOLFBIGNC_TypeInfo;
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KMDOLFBIGNC_c *)thunk_FUN_01ba7564(KMDOLFBIGNC_TypeInfo,method);
  }
  pGVar1 = KMDOLFBIGNC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void HHDBPBCFLOK(int CJNHFNHJHPE)  [RVA 0x3122E6C]
// KMDOLFBIGNC$$HHDBPBCFLOK @ RVA 0x3122E6C

void KMDOLFBIGNC__HHDBPBCFLOK(KMDOLFBIGNC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HCBJCMDLODI = CJNHFNHJHPE;
  return;
}


// ===== public int MJIGJNKOMEI()  [RVA 0x3122E74]
// KMDOLFBIGNC$$MJIGJNKOMEI @ RVA 0x3122E74

int32_t KMDOLFBIGNC__MJIGJNKOMEI(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  return (__this->fields).HCBJCMDLODI;
}


// ===== public bool Equals(KMDOLFBIGNC IBKIPBJJCPG)  [RVA 0x3122E7C]
// KMDOLFBIGNC$$Equals @ RVA 0x3122E7C

bool KMDOLFBIGNC__Equals(KMDOLFBIGNC_o *__this,KMDOLFBIGNC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KMDOLFBIGNC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).PNGGPPDKHPH,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).PNGGPPDKHPH,(MethodInfo *)0x0),
        bVar1)) && ((__this->fields).HCBJCMDLODI == (IBKIPBJJCPG->fields).HCBJCMDLODI)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override int GetHashCode()  [RVA 0x3122EFC]
// KMDOLFBIGNC$$GetHashCode @ RVA 0x3122EFC

int32_t KMDOLFBIGNC__GetHashCode(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).PDOMCPONBNB;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pPVar4 = (__this->fields).PNGGPPDKHPH;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
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


// ===== public int CalculateSize()  [RVA 0x3122F8C]
// KMDOLFBIGNC$$CalculateSize @ RVA 0x3122F8C

int32_t KMDOLFBIGNC__CalculateSize(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  PGICCMFLDPI_o *value;
  
  if ((DAT_04566636 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566636 = 1;
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
  value = (__this->fields).PNGGPPDKHPH;
  if (value != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public void EMKELMJKKLO(int CJNHFNHJHPE)  [RVA 0x312306C]
// KMDOLFBIGNC$$EMKELMJKKLO @ RVA 0x312306C

void KMDOLFBIGNC__EMKELMJKKLO(KMDOLFBIGNC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDOMCPONBNB = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3123074]
// KMDOLFBIGNC$$Equals @ RVA 0x3123074

bool KMDOLFBIGNC__Equals(KMDOLFBIGNC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566637 & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04566637 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KMDOLFBIGNC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KMDOLFBIGNC__Equals(__this,(KMDOLFBIGNC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x31230D8]
// KMDOLFBIGNC$$MergeFrom @ RVA 0x31230D8

void KMDOLFBIGNC__MergeFrom
               (KMDOLFBIGNC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  KMDOLFBIGNC_Fields *pKVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04566638 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566638 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).PNGGPPDKHPH;
  pKVar2 = &__this->fields;
  do {
    while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar3) {
      if (uVar3 == 0x12) {
        pPVar6 = *ppPVar1;
        if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
          pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
          *ppPVar1 = pPVar6;
          thunk_FUN_01c20e04(ppPVar1,pPVar6);
          pPVar6 = *ppPVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
      }
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HCBJCMDLODI = iVar4;
      }
      else {
LAB_032231bc:
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pKVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pKVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pKVar2,pGVar5);
      }
    }
    if (uVar3 != 8) {
      if (uVar3 == 0) {
        return;
      }
      goto LAB_032231bc;
    }
    iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
    (__this->fields).PDOMCPONBNB = iVar4;
  } while( true );
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3122D68]
// KMDOLFBIGNC$$FFHIHGCDGAK @ RVA 0x3122D68

Google_Protobuf_Reflection_MessageDescriptor_o * KMDOLFBIGNC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566639 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566639 = 1;
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
        goto LAB_03222e50;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03222e50:
                    /* WARNING: Could not recover jumptable at 0x03222e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,5,pVVar2->method);
  return pGVar3;
}


// ===== public override string ToString()  [RVA 0x31231F8]
// KMDOLFBIGNC$$ToString @ RVA 0x31231F8

System_String_o * KMDOLFBIGNC__ToString(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456663a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456663a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3123250]
// KMDOLFBIGNC$$.cctor @ RVA 0x3123250

void KMDOLFBIGNC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KMDOLFBIGNC__o *__this;
  
  if ((DAT_0456663b & 1) == 0) {
    FUN_01bab630(&System_Func<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KMDOLFBIGNC>_TypeInfo);
    FUN_01bab630(&Method_KMDOLFBIGNC_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&KMDOLFBIGNC_<>c_TypeInfo);
    DAT_0456663b = 1;
  }
  if ((KMDOLFBIGNC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KMDOLFBIGNC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KMDOLFBIGNC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KMDOLFBIGNC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KMDOLFBIGNC>__ctor__);
  KMDOLFBIGNC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KMDOLFBIGNC_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(KMDOLFBIGNC IBKIPBJJCPG)  [RVA 0x3123368]
// KMDOLFBIGNC$$MergeFrom @ RVA 0x3123368

void KMDOLFBIGNC__MergeFrom(KMDOLFBIGNC_o *__this,KMDOLFBIGNC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  KMDOLFBIGNC_Fields *pKVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_0456663c & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_0456663c = 1;
  }
  if (IBKIPBJJCPG != (KMDOLFBIGNC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    if (iVar1 != 0) {
      (__this->fields).PDOMCPONBNB = iVar1;
    }
    if ((IBKIPBJJCPG->fields).PNGGPPDKHPH != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).PNGGPPDKHPH;
      pPVar2 = *ppPVar5;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
        *ppPVar5 = pPVar2;
        thunk_FUN_01c20e04(ppPVar5,pPVar2);
        pPVar2 = *ppPVar5;
        if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).PNGGPPDKHPH,(MethodInfo *)0x0);
    }
    iVar1 = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    if (iVar1 != 0) {
      (__this->fields).HCBJCMDLODI = iVar1;
    }
    pKVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pKVar4,pGVar3);
    return;
  }
  return;
}


// ===== public static MessageParser<KMDOLFBIGNC> PGCAHPDCJBC()  [RVA 0x312344C]
// KMDOLFBIGNC$$PGCAHPDCJBC @ RVA 0x312344C

Google_Protobuf_MessageParser_KMDOLFBIGNC__o * KMDOLFBIGNC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456663d & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_0456663d = 1;
  }
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KMDOLFBIGNC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void IKFMHNAFHDD(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x31234A4]
// KMDOLFBIGNC$$IKFMHNAFHDD @ RVA 0x31234A4

void KMDOLFBIGNC__IKFMHNAFHDD(KMDOLFBIGNC_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PNGGPPDKHPH = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x31234AC]
// KMDOLFBIGNC$$WriteTo @ RVA 0x31234AC

void KMDOLFBIGNC__WriteTo
               (KMDOLFBIGNC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03223568;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  if ((__this->fields).PNGGPPDKHPH != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03223568;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PNGGPPDKHPH,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).HCBJCMDLODI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03223568:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HCBJCMDLODI,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public PGICCMFLDPI IBBECMECOEE()  [RVA 0x312356C]
// KMDOLFBIGNC$$IBBECMECOEE @ RVA 0x312356C

PGICCMFLDPI_o * KMDOLFBIGNC__IBBECMECOEE(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  return (__this->fields).PNGGPPDKHPH;
}


// ===== public void .ctor()  [RVA 0x3123574]
// KMDOLFBIGNC$$.ctor @ RVA 0x3123574

void KMDOLFBIGNC___ctor(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public KMDOLFBIGNC Clone()  [RVA 0x312357C]
// KMDOLFBIGNC$$Clone @ RVA 0x312357C

KMDOLFBIGNC_o * KMDOLFBIGNC__Clone(KMDOLFBIGNC_o *__this,MethodInfo *method)

{
  KMDOLFBIGNC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456663e & 1) == 0) {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_0456663e = 1;
    method = extraout_x1;
  }
  __this_00 = (KMDOLFBIGNC_o *)thunk_FUN_01bda818(KMDOLFBIGNC_TypeInfo,method);
  KMDOLFBIGNC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void .ctor(KMDOLFBIGNC IBKIPBJJCPG)  [RVA 0x31235D4]
// KMDOLFBIGNC$$.ctor @ RVA 0x31235D4

void KMDOLFBIGNC___ctor(KMDOLFBIGNC_o *__this,KMDOLFBIGNC_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KMDOLFBIGNC_o *)0x0) {
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    pPVar1 = (IBKIPBJJCPG->fields).PNGGPPDKHPH;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).PNGGPPDKHPH = pPVar1;
    thunk_FUN_01c20e04();
    (__this->fields).HCBJCMDLODI = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

