// TypeDefIndex 2528
// Namespace: 
// public sealed class HBHFOKIPAHA : IMessage<HBHFOKIPAHA>, IMessage, IEquatable<HBHFOKIPAHA>, IDeepCloneable<HBHFOKIPAHA>
// Fields:
//   private static readonly MessageParser<HBHFOKIPAHA> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int IBOGBLEGAHB = 1;
//   private long MAHGAIJBBHF; // 0x18
//   public const int PNPGJIBHDPF = 2;
//   private long MKGNDFBBANC; // 0x20
//   public const int GDBFCDFOIPH = 3;
//   private KCFAKHLDKJM IGBAAAHPLAA; // 0x28

// ===== public HBHFOKIPAHA Clone()  [RVA 0x338FA14]
// HBHFOKIPAHA$$Clone @ RVA 0x338FA14

HBHFOKIPAHA_o * HBHFOKIPAHA__Clone(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  HBHFOKIPAHA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567c14 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c14 = 1;
    method = extraout_x1;
  }
  __this_00 = (HBHFOKIPAHA_o *)thunk_FUN_01bda818(HBHFOKIPAHA_TypeInfo,method);
  HBHFOKIPAHA___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<HBHFOKIPAHA> PGCAHPDCJBC()  [RVA 0x338FAC0]
// HBHFOKIPAHA$$PGCAHPDCJBC @ RVA 0x338FAC0

Google_Protobuf_MessageParser_HBHFOKIPAHA__o * HBHFOKIPAHA__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567c15 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c15 = 1;
  }
  if ((HBHFOKIPAHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HBHFOKIPAHA_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void OEPCNHDIKJH(KCFAKHLDKJM CJNHFNHJHPE)  [RVA 0x338FB18]
// HBHFOKIPAHA$$OEPCNHDIKJH @ RVA 0x338FB18

void HBHFOKIPAHA__OEPCNHDIKJH(HBHFOKIPAHA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IGBAAAHPLAA = CJNHFNHJHPE;
  return;
}


// ===== public int CalculateSize()  [RVA 0x338FB20]
// HBHFOKIPAHA$$CalculateSize @ RVA 0x338FB20

int32_t HBHFOKIPAHA__CalculateSize(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long lVar3;
  
  if ((DAT_04567c16 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567c16 = 1;
    method = extraout_x1;
  }
  lVar3 = (__this->fields).MAHGAIJBBHF;
  iVar2 = 0;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  lVar3 = (__this->fields).MKGNDFBBANC;
  if (lVar3 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(lVar3,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  value = (__this->fields).IGBAAAHPLAA;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x338FC00]
// HBHFOKIPAHA$$FFHIHGCDGAK @ RVA 0x338FC00

Google_Protobuf_Reflection_MessageDescriptor_o * HBHFOKIPAHA__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567c17 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567c17 = 1;
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
        goto LAB_0348fce8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0348fce8:
                    /* WARNING: Could not recover jumptable at 0x0348fcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x47,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x338FD04]
// HBHFOKIPAHA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x338FD04

Google_Protobuf_Reflection_MessageDescriptor_o *
HBHFOKIPAHA__pb__Google_Protobuf_IMessage_get_Descriptor(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  HBHFOKIPAHA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c18 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c18 = 1;
    method = extraout_x1;
  }
  method_00 = HBHFOKIPAHA_TypeInfo;
  if ((HBHFOKIPAHA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HBHFOKIPAHA_c *)thunk_FUN_01ba7564(HBHFOKIPAHA_TypeInfo,method);
  }
  pGVar1 = HBHFOKIPAHA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x338FD50]
// HBHFOKIPAHA$$.ctor @ RVA 0x338FD50

void HBHFOKIPAHA___ctor(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x338FD58]
// HBHFOKIPAHA$$MergeFrom @ RVA 0x338FD58

void HBHFOKIPAHA__MergeFrom
               (HBHFOKIPAHA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  HBHFOKIPAHA_Fields *pHVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int64_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pHVar1 = &__this->fields;
  do {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    switch(uVar2 >> 3 | uVar2 << 0x1d) {
    case 0:
      return;
    case 1:
      iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).MAHGAIJBBHF = iVar4;
      break;
    case 2:
      iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).MKGNDFBBANC = iVar4;
      break;
    case 3:
      iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IGBAAAHPLAA = iVar3;
      break;
    default:
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar1->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pHVar1,pGVar5);
    }
  } while( true );
}


// ===== public bool Equals(HBHFOKIPAHA IBKIPBJJCPG)  [RVA 0x338FE18]
// HBHFOKIPAHA$$Equals @ RVA 0x338FE18

bool HBHFOKIPAHA__Equals(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).MAHGAIJBBHF == (IBKIPBJJCPG->fields).MAHGAIJBBHF) &&
        ((__this->fields).MKGNDFBBANC == (IBKIPBJJCPG->fields).MKGNDFBBANC)) &&
       ((__this->fields).IGBAAAHPLAA == (IBKIPBJJCPG->fields).IGBAAAHPLAA)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void .ctor(HBHFOKIPAHA IBKIPBJJCPG)  [RVA 0x338FA6C]
// HBHFOKIPAHA$$.ctor @ RVA 0x338FA6C

void HBHFOKIPAHA___ctor(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  int64_t iVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    iVar2 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    (__this->fields).MKGNDFBBANC = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    (__this->fields).MAHGAIJBBHF = iVar2;
    (__this->fields).IGBAAAHPLAA = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long PACDGHACPFJ()  [RVA 0x338FE74]
// HBHFOKIPAHA$$PACDGHACPFJ @ RVA 0x338FE74

int64_t HBHFOKIPAHA__PACDGHACPFJ(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  return (__this->fields).MKGNDFBBANC;
}


// ===== public KCFAKHLDKJM EIDMKPDFEJM()  [RVA 0x338FE7C]
// HBHFOKIPAHA$$EIDMKPDFEJM @ RVA 0x338FE7C

int32_t HBHFOKIPAHA__EIDMKPDFEJM(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  return (__this->fields).IGBAAAHPLAA;
}


// ===== public void DPNGBFACKOL(long CJNHFNHJHPE)  [RVA 0x338FE84]
// HBHFOKIPAHA$$DPNGBFACKOL @ RVA 0x338FE84

void HBHFOKIPAHA__DPNGBFACKOL(HBHFOKIPAHA_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MKGNDFBBANC = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x338FE8C]
// HBHFOKIPAHA$$Equals @ RVA 0x338FE8C

bool HBHFOKIPAHA__Equals(HBHFOKIPAHA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567c19 & 1) == 0) {
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    DAT_04567c19 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HBHFOKIPAHA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HBHFOKIPAHA__Equals(__this,(HBHFOKIPAHA_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(HBHFOKIPAHA IBKIPBJJCPG)  [RVA 0x338FEF0]
// HBHFOKIPAHA$$MergeFrom @ RVA 0x338FEF0

void HBHFOKIPAHA__MergeFrom(HBHFOKIPAHA_o *__this,HBHFOKIPAHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  HBHFOKIPAHA_Fields *pHVar4;
  
  if (IBKIPBJJCPG != (HBHFOKIPAHA_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    if (lVar3 != 0) {
      (__this->fields).MAHGAIJBBHF = lVar3;
    }
    lVar3 = (IBKIPBJJCPG->fields).MKGNDFBBANC;
    if (lVar3 != 0) {
      (__this->fields).MKGNDFBBANC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).IGBAAAHPLAA;
    if (iVar1 != 0) {
      (__this->fields).IGBAAAHPLAA = iVar1;
    }
    pHVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar4,pGVar2);
    return;
  }
  return;
}


// ===== public override string ToString()  [RVA 0x338FF48]
// HBHFOKIPAHA$$ToString @ RVA 0x338FF48

System_String_o * HBHFOKIPAHA__ToString(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c1a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567c1a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x338FFA0]
// HBHFOKIPAHA$$WriteTo @ RVA 0x338FFA0

void HBHFOKIPAHA__WriteTo
               (HBHFOKIPAHA_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MAHGAIJBBHF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0349005c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).MAHGAIJBBHF,(MethodInfo *)0x0);
  }
  if ((__this->fields).MKGNDFBBANC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0349005c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).MKGNDFBBANC,(MethodInfo *)0x0);
  }
  if ((__this->fields).IGBAAAHPLAA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0349005c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).IGBAAAHPLAA,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public long DGDDIIMMPEL()  [RVA 0x3390060]
// HBHFOKIPAHA$$DGDDIIMMPEL @ RVA 0x3390060

int64_t HBHFOKIPAHA__DGDDIIMMPEL(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  return (__this->fields).MAHGAIJBBHF;
}


// ===== public void OPKJBABEHFH(long CJNHFNHJHPE)  [RVA 0x3390068]
// HBHFOKIPAHA$$OPKJBABEHFH @ RVA 0x3390068

void HBHFOKIPAHA__OPKJBABEHFH(HBHFOKIPAHA_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MAHGAIJBBHF = CJNHFNHJHPE;
  return;
}


// ===== public override int GetHashCode()  [RVA 0x3390070]
// HBHFOKIPAHA$$GetHashCode @ RVA 0x3390070

int32_t HBHFOKIPAHA__GetHashCode(HBHFOKIPAHA_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar5 = (__this->fields).MAHGAIJBBHF;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  lVar5 = (__this->fields).MKGNDFBBANC;
  if (lVar5 != 0) {
    local_18 = lVar5;
    uVar3 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).IGBAAAHPLAA;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x339010C]
// HBHFOKIPAHA$$.cctor @ RVA 0x339010C

void HBHFOKIPAHA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HBHFOKIPAHA__o *__this;
  
  if ((DAT_04567c1b & 1) == 0) {
    FUN_01bab630(&System_Func<HBHFOKIPAHA>_TypeInfo);
    FUN_01bab630(&HBHFOKIPAHA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HBHFOKIPAHA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HBHFOKIPAHA>_TypeInfo);
    FUN_01bab630(&Method_HBHFOKIPAHA_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&HBHFOKIPAHA_<>c_TypeInfo);
    DAT_04567c1b = 1;
  }
  if ((HBHFOKIPAHA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HBHFOKIPAHA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HBHFOKIPAHA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HBHFOKIPAHA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HBHFOKIPAHA>__ctor__);
  HBHFOKIPAHA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HBHFOKIPAHA_TypeInfo->static_fields,__this);
  return;
}

