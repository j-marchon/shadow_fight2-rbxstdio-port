// TypeDefIndex 3443
// Namespace: 
// public sealed class CADIGFIBFEN : IMessage<CADIGFIBFEN>, IMessage, IEquatable<CADIGFIBFEN>, IDeepCloneable<CADIGFIBFEN>
// Fields:
//   private static readonly MessageParser<CADIGFIBFEN> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int BGAKLOIAKBB = 1;
//   private bool PCKJAOOKJKK; // 0x18
//   public const int IGDMLFCJJOM = 2;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x20
//   public const int BEBBJILMBJJ = 4;
//   private bool PLIIOMEEPLO; // 0x28
//   public const int OIJCHCHOAFE = 5;
//   private IBKKEEIKKNN BLGKCOLNMCK; // 0x2C

// ===== public bool BONAJDHFEDJ()  [RVA 0x35653F4]
// CADIGFIBFEN$$BONAJDHFEDJ @ RVA 0x35653F4

bool CADIGFIBFEN__BONAJDHFEDJ(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  return (__this->fields).PCKJAOOKJKK;
}


// ===== public void MergeFrom(CADIGFIBFEN IBKIPBJJCPG)  [RVA 0x35653FC]
// CADIGFIBFEN$$MergeFrom @ RVA 0x35653FC

void CADIGFIBFEN__MergeFrom(CADIGFIBFEN_o *__this,CADIGFIBFEN_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  CADIGFIBFEN_Fields *pCVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_04568be9 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568be9 = 1;
  }
  if (IBKIPBJJCPG != (CADIGFIBFEN_o *)0x0) {
    if ((IBKIPBJJCPG->fields).PCKJAOOKJKK != false) {
      (__this->fields).PCKJAOOKJKK = true;
    }
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
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
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    if ((IBKIPBJJCPG->fields).PLIIOMEEPLO != false) {
      (__this->fields).PLIIOMEEPLO = true;
    }
    iVar1 = (IBKIPBJJCPG->fields).BLGKCOLNMCK;
    if (iVar1 != 0) {
      (__this->fields).BLGKCOLNMCK = iVar1;
    }
    pCVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pCVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pCVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pCVar4,pGVar3);
    return;
  }
  return;
}


// ===== public void .ctor(CADIGFIBFEN IBKIPBJJCPG)  [RVA 0x35654F4]
// CADIGFIBFEN$$.ctor @ RVA 0x35654F4

void CADIGFIBFEN___ctor(CADIGFIBFEN_o *__this,CADIGFIBFEN_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CADIGFIBFEN_o *)0x0) {
    (__this->fields).PCKJAOOKJKK = (IBKIPBJJCPG->fields).PCKJAOOKJKK;
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
    (__this->fields).PLIIOMEEPLO = (IBKIPBJJCPG->fields).PLIIOMEEPLO;
    (__this->fields).BLGKCOLNMCK = (IBKIPBJJCPG->fields).BLGKCOLNMCK;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x3565580]
// CADIGFIBFEN$$CalculateSize @ RVA 0x3565580

int32_t CADIGFIBFEN__CalculateSize(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  PGICCMFLDPI_o *value_00;
  uint uVar2;
  
  if ((DAT_04568bea & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568bea = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).MIINPPOCPCN;
  uVar2 = (uint)(__this->fields).PCKJAOOKJKK << 1;
  if (value_00 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    uVar2 = (uVar2 | 1) + iVar1;
  }
  value = (__this->fields).BLGKCOLNMCK;
  if ((__this->fields).PLIIOMEEPLO != false) {
    uVar2 = uVar2 + 2;
  }
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    uVar2 = uVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    uVar2 = iVar1 + uVar2;
  }
  return uVar2;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3565650]
// CADIGFIBFEN$$FFHIHGCDGAK @ RVA 0x3565650

Google_Protobuf_Reflection_MessageDescriptor_o * CADIGFIBFEN__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568beb & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04568beb = 1;
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565c85 == '\0') {
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04565c85 = '\x01';
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO;
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
        goto LAB_03665738;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03665738:
                    /* WARNING: Could not recover jumptable at 0x0366574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,3,pVVar2->method);
  return pGVar3;
}


// ===== public override int GetHashCode()  [RVA 0x3565754]
// CADIGFIBFEN$$GetHashCode @ RVA 0x3565754

int32_t CADIGFIBFEN__GetHashCode(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  int local_28;
  undefined1 local_24 [4];
  
  if ((DAT_04568bec & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568bec = 1;
    method = extraout_x1;
  }
  local_24[0] = 0;
  local_28 = 0;
  uVar2 = 1;
  if ((__this->fields).PCKJAOOKJKK != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pPVar4 = (__this->fields).MIINPPOCPCN;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).PLIIOMEEPLO != false) {
    local_24[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_24,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).BLGKCOLNMCK;
  if (iVar1 != 0) {
    local_28 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_28,(MethodInfo *)0x0);
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


// ===== public bool ALNHMGLLHAB()  [RVA 0x3565854]
// CADIGFIBFEN$$ALNHMGLLHAB @ RVA 0x3565854

bool CADIGFIBFEN__ALNHMGLLHAB(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  return (__this->fields).PLIIOMEEPLO;
}


// ===== public bool Equals(CADIGFIBFEN IBKIPBJJCPG)  [RVA 0x356585C]
// CADIGFIBFEN$$Equals @ RVA 0x356585C

bool CADIGFIBFEN__Equals(CADIGFIBFEN_o *__this,CADIGFIBFEN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (CADIGFIBFEN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((((__this->fields).PCKJAOOKJKK != false) == ((IBKIPBJJCPG->fields).PCKJAOOKJKK != false))
         && (bVar1 = System_Object__Equals
                               ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                                (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0)
            , bVar1)) &&
        (((__this->fields).PLIIOMEEPLO != false) == ((IBKIPBJJCPG->fields).PLIIOMEEPLO != false)))
       && ((__this->fields).BLGKCOLNMCK == (IBKIPBJJCPG->fields).BLGKCOLNMCK)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public static MessageParser<CADIGFIBFEN> PGCAHPDCJBC()  [RVA 0x356590C]
// CADIGFIBFEN$$PGCAHPDCJBC @ RVA 0x356590C

Google_Protobuf_MessageParser_CADIGFIBFEN__o * CADIGFIBFEN__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568bed & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bed = 1;
  }
  if ((CADIGFIBFEN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return CADIGFIBFEN_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3565964]
// CADIGFIBFEN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3565964

Google_Protobuf_Reflection_MessageDescriptor_o *
CADIGFIBFEN__pb__Google_Protobuf_IMessage_get_Descriptor(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  CADIGFIBFEN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568bee & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bee = 1;
    method = extraout_x1;
  }
  method_00 = CADIGFIBFEN_TypeInfo;
  if ((CADIGFIBFEN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CADIGFIBFEN_c *)thunk_FUN_01ba7564(CADIGFIBFEN_TypeInfo,method);
  }
  pGVar1 = CADIGFIBFEN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x3565578]
// CADIGFIBFEN$$.ctor @ RVA 0x3565578

void CADIGFIBFEN___ctor(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35659B0]
// CADIGFIBFEN$$Equals @ RVA 0x35659B0

bool CADIGFIBFEN__Equals(CADIGFIBFEN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568bef & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bef = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CADIGFIBFEN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = CADIGFIBFEN__Equals(__this,(CADIGFIBFEN_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public IBKKEEIKKNN PIIBIKOLOKO()  [RVA 0x3565A14]
// CADIGFIBFEN$$PIIBIKOLOKO @ RVA 0x3565A14

int32_t CADIGFIBFEN__PIIBIKOLOKO(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  return (__this->fields).BLGKCOLNMCK;
}


// ===== public void HLIJMNIPKNH(bool CJNHFNHJHPE)  [RVA 0x3565A1C]
// CADIGFIBFEN$$HLIJMNIPKNH @ RVA 0x3565A1C

void CADIGFIBFEN__HLIJMNIPKNH(CADIGFIBFEN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PLIIOMEEPLO = CJNHFNHJHPE;
  return;
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x3565A28]
// CADIGFIBFEN$$MLFJHBIJMAA @ RVA 0x3565A28

PGICCMFLDPI_o * CADIGFIBFEN__MLFJHBIJMAA(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== public CADIGFIBFEN Clone()  [RVA 0x3565A30]
// CADIGFIBFEN$$Clone @ RVA 0x3565A30

CADIGFIBFEN_o * CADIGFIBFEN__Clone(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  CADIGFIBFEN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568bf0 & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    DAT_04568bf0 = 1;
    method = extraout_x1;
  }
  __this_00 = (CADIGFIBFEN_o *)thunk_FUN_01bda818(CADIGFIBFEN_TypeInfo,method);
  CADIGFIBFEN___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void GNPFIMOEMGH(bool CJNHFNHJHPE)  [RVA 0x3565A88]
// CADIGFIBFEN$$GNPFIMOEMGH @ RVA 0x3565A88

void CADIGFIBFEN__GNPFIMOEMGH(CADIGFIBFEN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PCKJAOOKJKK = CJNHFNHJHPE;
  return;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3565A94]
// CADIGFIBFEN$$KAIDLBNPCJH @ RVA 0x3565A94

void CADIGFIBFEN__KAIDLBNPCJH(CADIGFIBFEN_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x3565A9C]
// CADIGFIBFEN$$ToString @ RVA 0x3565A9C

System_String_o * CADIGFIBFEN__ToString(CADIGFIBFEN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568bf1 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568bf1 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void FLKPNGAOMGD(IBKKEEIKKNN CJNHFNHJHPE)  [RVA 0x3565AF4]
// CADIGFIBFEN$$FLKPNGAOMGD @ RVA 0x3565AF4

void CADIGFIBFEN__FLKPNGAOMGD(CADIGFIBFEN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).BLGKCOLNMCK = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3565AFC]
// CADIGFIBFEN$$MergeFrom @ RVA 0x3565AFC

void CADIGFIBFEN__MergeFrom
               (CADIGFIBFEN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  CADIGFIBFEN_Fields *pCVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  PGICCMFLDPI_o *pPVar7;
  
  if ((DAT_04568bf2 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568bf2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pCVar2 = &__this->fields;
    do {
      if (uVar4 < 0x13) {
        if (uVar4 == 8) {
          bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PCKJAOOKJKK = bVar3;
        }
        else if (uVar4 == 0x12) {
          pPVar7 = *ppPVar1;
          if (pPVar7 == (PGICCMFLDPI_o *)0x0) {
            pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
            *ppPVar1 = pPVar7;
            thunk_FUN_01c20e04(ppPVar1,pPVar7);
            pPVar7 = *ppPVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar7,(MethodInfo *)0x0);
        }
        else {
LAB_03665bd4:
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pCVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pCVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pCVar2,pGVar6);
        }
      }
      else if (uVar4 == 0x20) {
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PLIIOMEEPLO = bVar3;
      }
      else {
        if (uVar4 != 0x28) goto LAB_03665bd4;
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).BLGKCOLNMCK = iVar5;
      }
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3565C4C]
// CADIGFIBFEN$$WriteTo @ RVA 0x3565C4C

void CADIGFIBFEN__WriteTo
               (CADIGFIBFEN_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PCKJAOOKJKK != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03665d34;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).PCKJAOOKJKK,(MethodInfo *)0x0);
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03665d34;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).PLIIOMEEPLO != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03665d34;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).PLIIOMEEPLO,(MethodInfo *)0x0);
  }
  if ((__this->fields).BLGKCOLNMCK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03665d34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).BLGKCOLNMCK,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x3565D38]
// CADIGFIBFEN$$.cctor @ RVA 0x3565D38

void CADIGFIBFEN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CADIGFIBFEN__o *__this;
  
  if ((DAT_04568bf3 & 1) == 0) {
    FUN_01bab630(&CADIGFIBFEN_TypeInfo);
    FUN_01bab630(&System_Func<CADIGFIBFEN>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CADIGFIBFEN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CADIGFIBFEN>_TypeInfo);
    FUN_01bab630(&Method_CADIGFIBFEN_<>c_LNJPIHAONCC__);
    FUN_01bab630(&CADIGFIBFEN_<>c_TypeInfo);
    DAT_04568bf3 = 1;
  }
  if ((CADIGFIBFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CADIGFIBFEN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CADIGFIBFEN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CADIGFIBFEN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CADIGFIBFEN>__ctor__);
  CADIGFIBFEN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CADIGFIBFEN_TypeInfo->static_fields,__this);
  return;
}

