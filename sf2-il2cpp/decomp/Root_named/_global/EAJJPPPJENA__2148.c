// TypeDefIndex 2148
// Namespace: 
// public sealed class EAJJPPPJENA : IMessage<EAJJPPPJENA>, IMessage, IEquatable<EAJJPPPJENA>, IDeepCloneable<EAJJPPPJENA>
// Fields:
//   private static readonly MessageParser<EAJJPPPJENA> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EHGPOBHFGIO = 1;
//   private int EMOLIBOCKJK; // 0x18
//   public const int JPDHJHEPCAI = 2;
//   private JMCDPBKILIN NCFPAHCCDBB; // 0x20

// ===== public static MessageParser<EAJJPPPJENA> PGCAHPDCJBC()  [RVA 0x32D59D8]
// EAJJPPPJENA$$PGCAHPDCJBC @ RVA 0x32D59D8

Google_Protobuf_MessageParser_EAJJPPPJENA__o * EAJJPPPJENA__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567584 & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_04567584 = 1;
  }
  if ((EAJJPPPJENA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EAJJPPPJENA_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32D5A30]
// EAJJPPPJENA$$MergeFrom @ RVA 0x32D5A30

void EAJJPPPJENA__MergeFrom
               (EAJJPPPJENA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  JMCDPBKILIN_o **ppJVar1;
  EAJJPPPJENA_Fields *pEVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  JMCDPBKILIN_o *pJVar6;
  
  if ((DAT_04567585 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04567585 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppJVar1 = &(__this->fields).NCFPAHCCDBB;
    pEVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).EMOLIBOCKJK = iVar4;
        }
        if (uVar3 != 0x12) break;
        pJVar6 = *ppJVar1;
        if (pJVar6 == (JMCDPBKILIN_o *)0x0) {
          pJVar6 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo);
          JMCDPBKILIN___ctor(pJVar6,(MethodInfo *)0x0);
          *ppJVar1 = pJVar6;
          thunk_FUN_01c20e04(ppJVar1,pJVar6);
          pJVar6 = *ppJVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pJVar6,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pEVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pEVar2->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pEVar2,pGVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(EAJJPPPJENA IBKIPBJJCPG)  [RVA 0x32D5B2C]
// EAJJPPPJENA$$.ctor @ RVA 0x32D5B2C

void EAJJPPPJENA___ctor(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  JMCDPBKILIN_o *pJVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    (__this->fields).EMOLIBOCKJK = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
    pJVar1 = (IBKIPBJJCPG->fields).NCFPAHCCDBB;
    if (pJVar1 == (JMCDPBKILIN_o *)0x0) {
      pJVar1 = (JMCDPBKILIN_o *)0x0;
    }
    else {
      pJVar1 = JMCDPBKILIN__Clone(pJVar1,(MethodInfo *)0x0);
    }
    (__this->fields).NCFPAHCCDBB = pJVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PGOIFJBNJCE(int CJNHFNHJHPE)  [RVA 0x32D5BA8]
// EAJJPPPJENA$$PGOIFJBNJCE @ RVA 0x32D5BA8

void EAJJPPPJENA__PGOIFJBNJCE(EAJJPPPJENA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMOLIBOCKJK = CJNHFNHJHPE;
  return;
}


// ===== public JMCDPBKILIN GILHMJAIMBE()  [RVA 0x32D5BB0]
// EAJJPPPJENA$$GILHMJAIMBE @ RVA 0x32D5BB0

JMCDPBKILIN_o * EAJJPPPJENA__GILHMJAIMBE(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  return (__this->fields).NCFPAHCCDBB;
}


// ===== public void MergeFrom(EAJJPPPJENA IBKIPBJJCPG)  [RVA 0x32D5BB8]
// EAJJPPPJENA$$MergeFrom @ RVA 0x32D5BB8

void EAJJPPPJENA__MergeFrom(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  JMCDPBKILIN_o *pJVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  EAJJPPPJENA_Fields *pEVar4;
  JMCDPBKILIN_o **ppJVar5;
  
  if ((DAT_04567586 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04567586 = 1;
  }
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
    if (iVar1 != 0) {
      (__this->fields).EMOLIBOCKJK = iVar1;
    }
    if ((IBKIPBJJCPG->fields).NCFPAHCCDBB != (JMCDPBKILIN_o *)0x0) {
      ppJVar5 = &(__this->fields).NCFPAHCCDBB;
      pJVar2 = *ppJVar5;
      if (pJVar2 == (JMCDPBKILIN_o *)0x0) {
        pJVar2 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo);
        JMCDPBKILIN___ctor(pJVar2,(MethodInfo *)0x0);
        *ppJVar5 = pJVar2;
        thunk_FUN_01c20e04(ppJVar5,pJVar2);
        pJVar2 = *ppJVar5;
        if (pJVar2 == (JMCDPBKILIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      JMCDPBKILIN__MergeFrom(pJVar2,(IBKIPBJJCPG->fields).NCFPAHCCDBB,(MethodInfo *)0x0);
    }
    pEVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pEVar4,pGVar3);
    return;
  }
  return;
}


// ===== public EAJJPPPJENA Clone()  [RVA 0x32D5C90]
// EAJJPPPJENA$$Clone @ RVA 0x32D5C90

EAJJPPPJENA_o * EAJJPPPJENA__Clone(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  EAJJPPPJENA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567587 & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_04567587 = 1;
    method = extraout_x1;
  }
  __this_00 = (EAJJPPPJENA_o *)thunk_FUN_01bda818(EAJJPPPJENA_TypeInfo,method);
  EAJJPPPJENA___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void PLNCMCGAHEL(JMCDPBKILIN CJNHFNHJHPE)  [RVA 0x32D5CE8]
// EAJJPPPJENA$$PLNCMCGAHEL @ RVA 0x32D5CE8

void EAJJPPPJENA__PLNCMCGAHEL(EAJJPPPJENA_o *__this,JMCDPBKILIN_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NCFPAHCCDBB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override int GetHashCode()  [RVA 0x32D5CF0]
// EAJJPPPJENA$$GetHashCode @ RVA 0x32D5CF0

int32_t EAJJPPPJENA__GetHashCode(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  JMCDPBKILIN_o *pJVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).EMOLIBOCKJK;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pJVar4 = (__this->fields).NCFPAHCCDBB;
  if (pJVar4 != (JMCDPBKILIN_o *)0x0) {
    uVar3 = (*(pJVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pJVar4,(pJVar4->klass->vtable)._2_GetHashCode.method);
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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x32D5D64]
// EAJJPPPJENA$$FFHIHGCDGAK @ RVA 0x32D5D64

Google_Protobuf_Reflection_MessageDescriptor_o * EAJJPPPJENA__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567588 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567588 = 1;
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
        goto LAB_033d5e4c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033d5e4c:
                    /* WARNING: Could not recover jumptable at 0x033d5e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2e,pVVar2->method);
  return pGVar3;
}


// ===== public int CalculateSize()  [RVA 0x32D5E68]
// EAJJPPPJENA$$CalculateSize @ RVA 0x32D5E68

int32_t EAJJPPPJENA__CalculateSize(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  JMCDPBKILIN_o *value_00;
  
  if ((DAT_04567589 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567589 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).EMOLIBOCKJK;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).NCFPAHCCDBB;
  if (value_00 != (JMCDPBKILIN_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32D5F1C]
// EAJJPPPJENA$$WriteTo @ RVA 0x32D5F1C

void EAJJPPPJENA__WriteTo
               (EAJJPPPJENA_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).EMOLIBOCKJK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033d5fac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).EMOLIBOCKJK,(MethodInfo *)0x0);
  }
  if ((__this->fields).NCFPAHCCDBB != (JMCDPBKILIN_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_033d5fac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).NCFPAHCCDBB,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32D5BA0]
// EAJJPPPJENA$$.ctor @ RVA 0x32D5BA0

void EAJJPPPJENA___ctor(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x32D5FB0]
// EAJJPPPJENA$$.cctor @ RVA 0x32D5FB0

void EAJJPPPJENA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EAJJPPPJENA__o *__this;
  
  if ((DAT_0456758a & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    FUN_01bab630(&System_Func<EAJJPPPJENA>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EAJJPPPJENA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EAJJPPPJENA>_TypeInfo);
    FUN_01bab630(&Method_EAJJPPPJENA_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EAJJPPPJENA_<>c_TypeInfo);
    DAT_0456758a = 1;
  }
  if ((EAJJPPPJENA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EAJJPPPJENA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EAJJPPPJENA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EAJJPPPJENA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EAJJPPPJENA>__ctor__);
  EAJJPPPJENA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EAJJPPPJENA_TypeInfo->static_fields,__this);
  return;
}


// ===== public int JCIGPDGHOMK()  [RVA 0x32D60C8]
// EAJJPPPJENA$$JCIGPDGHOMK @ RVA 0x32D60C8

int32_t EAJJPPPJENA__JCIGPDGHOMK(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  return (__this->fields).EMOLIBOCKJK;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32D60D0]
// EAJJPPPJENA$$Equals @ RVA 0x32D60D0

bool EAJJPPPJENA__Equals(EAJJPPPJENA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456758b & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_0456758b = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EAJJPPPJENA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EAJJPPPJENA__Equals(__this,(EAJJPPPJENA_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public bool Equals(EAJJPPPJENA IBKIPBJJCPG)  [RVA 0x32D6134]
// EAJJPPPJENA$$Equals @ RVA 0x32D6134

bool EAJJPPPJENA__Equals(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).EMOLIBOCKJK == (IBKIPBJJCPG->fields).EMOLIBOCKJK) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).NCFPAHCCDBB,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).NCFPAHCCDBB,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x32D61A4]
// EAJJPPPJENA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32D61A4

Google_Protobuf_Reflection_MessageDescriptor_o *
EAJJPPPJENA__pb__Google_Protobuf_IMessage_get_Descriptor(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  EAJJPPPJENA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456758c & 1) == 0) {
    FUN_01bab630(&EAJJPPPJENA_TypeInfo);
    DAT_0456758c = 1;
    method = extraout_x1;
  }
  method_00 = EAJJPPPJENA_TypeInfo;
  if ((EAJJPPPJENA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EAJJPPPJENA_c *)thunk_FUN_01ba7564(EAJJPPPJENA_TypeInfo,method);
  }
  pGVar1 = EAJJPPPJENA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override string ToString()  [RVA 0x32D61F0]
// EAJJPPPJENA$$ToString @ RVA 0x32D61F0

System_String_o * EAJJPPPJENA__ToString(EAJJPPPJENA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456758d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456758d = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}

