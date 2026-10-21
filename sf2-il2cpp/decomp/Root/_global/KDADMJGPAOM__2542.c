// TypeDefIndex 2542
// Namespace: 
// public sealed class KDADMJGPAOM : IMessage<KDADMJGPAOM>, IMessage, IEquatable<KDADMJGPAOM>, IDeepCloneable<KDADMJGPAOM>
// Fields:
//   private static readonly MessageParser<KDADMJGPAOM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int AMFJKPAHLBO = 1;
//   private int IILCHFKCEEH; // 0x18
//   public const int DMGKMGCIMGB = 2;
//   private int PDGEHKCPGDK; // 0x1C
//   public const int EDDEFDJFBLO = 3;
//   private int IOJIABMGMGB; // 0x20

// ===== public void IFADJKCOFNA(int CJNHFNHJHPE)  [RVA 0x33939D4]
// KDADMJGPAOM$$IFADJKCOFNA @ RVA 0x33939D4

void KDADMJGPAOM__IFADJKCOFNA(KDADMJGPAOM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDGEHKCPGDK = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x33939DC]
// KDADMJGPAOM$$.cctor @ RVA 0x33939DC

void KDADMJGPAOM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KDADMJGPAOM__o *__this;
  
  if ((DAT_04567c3b & 1) == 0) {
    FUN_01bab630(&System_Func<KDADMJGPAOM>_TypeInfo);
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KDADMJGPAOM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KDADMJGPAOM>_TypeInfo);
    FUN_01bab630(&Method_KDADMJGPAOM_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&KDADMJGPAOM_<>c_TypeInfo);
    DAT_04567c3b = 1;
  }
  if ((KDADMJGPAOM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KDADMJGPAOM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KDADMJGPAOM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KDADMJGPAOM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KDADMJGPAOM>__ctor__);
  KDADMJGPAOM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KDADMJGPAOM_TypeInfo->static_fields,__this);
  return;
}


// ===== public int CalculateSize()  [RVA 0x3393AF4]
// KDADMJGPAOM$$CalculateSize @ RVA 0x3393AF4

int32_t KDADMJGPAOM__CalculateSize(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  
  if ((DAT_04567c3c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567c3c = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).IILCHFKCEEH;
  iVar3 = 0;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).PDGEHKCPGDK;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).IOJIABMGMGB;
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


// ===== public void .ctor()  [RVA 0x3393BD4]
// KDADMJGPAOM$$.ctor @ RVA 0x3393BD4

void KDADMJGPAOM___ctor(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(KDADMJGPAOM IBKIPBJJCPG)  [RVA 0x3393BDC]
// KDADMJGPAOM$$.ctor @ RVA 0x3393BDC

void KDADMJGPAOM___ctor(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDGEHKCPGDK;
    (__this->fields).IILCHFKCEEH = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    (__this->fields).PDGEHKCPGDK = iVar1;
    (__this->fields).IOJIABMGMGB = (IBKIPBJJCPG->fields).IOJIABMGMGB;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3393C30]
// KDADMJGPAOM$$MergeFrom @ RVA 0x3393C30

void KDADMJGPAOM__MergeFrom
               (KDADMJGPAOM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KDADMJGPAOM_Fields *pKVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pKVar1 = &__this->fields;
  do {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    switch(uVar2 >> 3 | uVar2 << 0x1d) {
    case 0:
      return;
    case 1:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IILCHFKCEEH = iVar3;
      break;
    case 2:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).PDGEHKCPGDK = iVar3;
      break;
    case 3:
      iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).IOJIABMGMGB = iVar3;
      break;
    default:
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pKVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pKVar1,pGVar4);
    }
  } while( true );
}


// ===== public bool Equals(KDADMJGPAOM IBKIPBJJCPG)  [RVA 0x3393CF0]
// KDADMJGPAOM$$Equals @ RVA 0x3393CF0

bool KDADMJGPAOM__Equals(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((((__this->fields).IILCHFKCEEH == (IBKIPBJJCPG->fields).IILCHFKCEEH) &&
        ((__this->fields).PDGEHKCPGDK == (IBKIPBJJCPG->fields).PDGEHKCPGDK)) &&
       ((__this->fields).IOJIABMGMGB == (IBKIPBJJCPG->fields).IOJIABMGMGB)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public int NJLNNIOKKKE()  [RVA 0x3393D4C]
// KDADMJGPAOM$$NJLNNIOKKKE @ RVA 0x3393D4C

int32_t KDADMJGPAOM__NJLNNIOKKKE(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  return (__this->fields).IOJIABMGMGB;
}


// ===== public void EDJFPOOPKPB(int CJNHFNHJHPE)  [RVA 0x3393D54]
// KDADMJGPAOM$$EDJFPOOPKPB @ RVA 0x3393D54

void KDADMJGPAOM__EDJFPOOPKPB(KDADMJGPAOM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IILCHFKCEEH = CJNHFNHJHPE;
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3393D5C]
// KDADMJGPAOM$$FFHIHGCDGAK @ RVA 0x3393D5C

Google_Protobuf_Reflection_MessageDescriptor_o * KDADMJGPAOM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567c3d & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567c3d = 1;
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
        goto LAB_03493e44;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03493e44:
                    /* WARNING: Could not recover jumptable at 0x03493e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1e,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(KDADMJGPAOM IBKIPBJJCPG)  [RVA 0x3393E60]
// KDADMJGPAOM$$MergeFrom @ RVA 0x3393E60

void KDADMJGPAOM__MergeFrom(KDADMJGPAOM_o *__this,KDADMJGPAOM_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KDADMJGPAOM_Fields *pKVar3;
  
  if (IBKIPBJJCPG != (KDADMJGPAOM_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    if (iVar1 != 0) {
      (__this->fields).IILCHFKCEEH = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).PDGEHKCPGDK;
    if (iVar1 != 0) {
      (__this->fields).PDGEHKCPGDK = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).IOJIABMGMGB;
    if (iVar1 != 0) {
      (__this->fields).IOJIABMGMGB = iVar1;
    }
    pKVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar3,pGVar2);
    return;
  }
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3393EB8]
// KDADMJGPAOM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3393EB8

Google_Protobuf_Reflection_MessageDescriptor_o *
KDADMJGPAOM__pb__Google_Protobuf_IMessage_get_Descriptor(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  KDADMJGPAOM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c3e & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c3e = 1;
    method = extraout_x1;
  }
  method_00 = KDADMJGPAOM_TypeInfo;
  if ((KDADMJGPAOM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KDADMJGPAOM_c *)thunk_FUN_01ba7564(KDADMJGPAOM_TypeInfo,method);
  }
  pGVar1 = KDADMJGPAOM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public int BKNGAJBFAON()  [RVA 0x3393F04]
// KDADMJGPAOM$$BKNGAJBFAON @ RVA 0x3393F04

int32_t KDADMJGPAOM__BKNGAJBFAON(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  return (__this->fields).PDGEHKCPGDK;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3393F0C]
// KDADMJGPAOM$$WriteTo @ RVA 0x3393F0C

void KDADMJGPAOM__WriteTo
               (KDADMJGPAOM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).IILCHFKCEEH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03493fc8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IILCHFKCEEH,(MethodInfo *)0x0);
  }
  if ((__this->fields).PDGEHKCPGDK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03493fc8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDGEHKCPGDK,(MethodInfo *)0x0);
  }
  if ((__this->fields).IOJIABMGMGB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03493fc8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IOJIABMGMGB,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int JOHPOJPPMBO()  [RVA 0x3393FCC]
// KDADMJGPAOM$$JOHPOJPPMBO @ RVA 0x3393FCC

int32_t KDADMJGPAOM__JOHPOJPPMBO(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  return (__this->fields).IILCHFKCEEH;
}


// ===== public override int GetHashCode()  [RVA 0x3393FD4]
// KDADMJGPAOM$$GetHashCode @ RVA 0x3393FD4

int32_t KDADMJGPAOM__GetHashCode(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).IILCHFKCEEH;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).PDGEHKCPGDK;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).IOJIABMGMGB;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
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


// ===== public static MessageParser<KDADMJGPAOM> PGCAHPDCJBC()  [RVA 0x3394068]
// KDADMJGPAOM$$PGCAHPDCJBC @ RVA 0x3394068

Google_Protobuf_MessageParser_KDADMJGPAOM__o * KDADMJGPAOM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567c3f & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c3f = 1;
  }
  if ((KDADMJGPAOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KDADMJGPAOM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override string ToString()  [RVA 0x33940C0]
// KDADMJGPAOM$$ToString @ RVA 0x33940C0

System_String_o * KDADMJGPAOM__ToString(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c40 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567c40 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void HPKABGAINMH(int CJNHFNHJHPE)  [RVA 0x3394118]
// KDADMJGPAOM$$HPKABGAINMH @ RVA 0x3394118

void KDADMJGPAOM__HPKABGAINMH(KDADMJGPAOM_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IOJIABMGMGB = CJNHFNHJHPE;
  return;
}


// ===== public KDADMJGPAOM Clone()  [RVA 0x3394120]
// KDADMJGPAOM$$Clone @ RVA 0x3394120

KDADMJGPAOM_o * KDADMJGPAOM__Clone(KDADMJGPAOM_o *__this,MethodInfo *method)

{
  KDADMJGPAOM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567c41 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c41 = 1;
    method = extraout_x1;
  }
  __this_00 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo,method);
  KDADMJGPAOM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3394178]
// KDADMJGPAOM$$Equals @ RVA 0x3394178

bool KDADMJGPAOM__Equals(KDADMJGPAOM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567c42 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04567c42 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KDADMJGPAOM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KDADMJGPAOM__Equals(__this,(KDADMJGPAOM_o *)IBKIPBJJCPG,method);
  return bVar1;
}

