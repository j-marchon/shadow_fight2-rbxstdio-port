// TypeDefIndex 3064
// Namespace: 
// public sealed class PBGDDCFGPJI : IMessage<PBGDDCFGPJI>, IMessage, IEquatable<PBGDDCFGPJI>, IDeepCloneable<PBGDDCFGPJI>
// Fields:
//   private static readonly MessageParser<PBGDDCFGPJI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KFHAHJBIBNO = 1;
//   private GLPEFEEGCPM KEIBPDJHHBB; // 0x18

// ===== public PBGDDCFGPJI Clone()  [RVA 0x34BC954]
// PBGDDCFGPJI$$Clone @ RVA 0x34BC954

PBGDDCFGPJI_o * PBGDDCFGPJI__Clone(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  PBGDDCFGPJI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045685ec & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685ec = 1;
    method = extraout_x1;
  }
  __this_00 = (PBGDDCFGPJI_o *)thunk_FUN_01bda818(PBGDDCFGPJI_TypeInfo,method);
  PBGDDCFGPJI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public GLPEFEEGCPM NEHMMPDFBOK()  [RVA 0x34BCA1C]
// PBGDDCFGPJI$$NEHMMPDFBOK @ RVA 0x34BCA1C

GLPEFEEGCPM_o * PBGDDCFGPJI__NEHMMPDFBOK(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  return (__this->fields).KEIBPDJHHBB;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34BCA24]
// PBGDDCFGPJI$$Equals @ RVA 0x34BCA24

bool PBGDDCFGPJI__Equals(PBGDDCFGPJI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045685ed & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685ed = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)PBGDDCFGPJI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = PBGDDCFGPJI__Equals(__this,(PBGDDCFGPJI_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor(PBGDDCFGPJI IBKIPBJJCPG)  [RVA 0x34BC9AC]
// PBGDDCFGPJI$$.ctor @ RVA 0x34BC9AC

void PBGDDCFGPJI___ctor(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  GLPEFEEGCPM_o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    pGVar1 = (IBKIPBJJCPG->fields).KEIBPDJHHBB;
    if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
      pGVar1 = (GLPEFEEGCPM_o *)0x0;
    }
    else {
      pGVar1 = GLPEFEEGCPM__Clone(pGVar1,(MethodInfo *)0x0);
    }
    if (__this != (PBGDDCFGPJI_o *)0x0) {
      (__this->fields).KEIBPDJHHBB = pGVar1;
      thunk_FUN_01c20e04();
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x34BCAF0]
// PBGDDCFGPJI$$GetHashCode @ RVA 0x34BCAF0

int32_t PBGDDCFGPJI__GetHashCode(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).KEIBPDJHHBB;
  if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public void .ctor()  [RVA 0x34BCAE8]
// PBGDDCFGPJI$$.ctor @ RVA 0x34BCAE8

void PBGDDCFGPJI___ctor(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool Equals(PBGDDCFGPJI IBKIPBJJCPG)  [RVA 0x34BCA88]
// PBGDDCFGPJI$$Equals @ RVA 0x34BCA88

bool PBGDDCFGPJI__Equals(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).KEIBPDJHHBB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== private static void .cctor()  [RVA 0x34BCB44]
// PBGDDCFGPJI$$.cctor @ RVA 0x34BCB44

void PBGDDCFGPJI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_PBGDDCFGPJI__o *__this;
  
  if ((DAT_045685ee & 1) == 0) {
    FUN_01bab630(&System_Func<PBGDDCFGPJI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<PBGDDCFGPJI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<PBGDDCFGPJI>_TypeInfo);
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    FUN_01bab630(&Method_PBGDDCFGPJI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&PBGDDCFGPJI_<>c_TypeInfo);
    DAT_045685ee = 1;
  }
  if ((PBGDDCFGPJI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<PBGDDCFGPJI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_PBGDDCFGPJI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<PBGDDCFGPJI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<PBGDDCFGPJI>__ctor__);
  PBGDDCFGPJI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(PBGDDCFGPJI_TypeInfo->static_fields,__this);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34BCC5C]
// PBGDDCFGPJI$$WriteTo @ RVA 0x34BCC5C

void PBGDDCFGPJI__WriteTo
               (PBGDDCFGPJI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).KEIBPDJHHBB,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34BCCC4]
// PBGDDCFGPJI$$FFHIHGCDGAK @ RVA 0x34BCCC4

Google_Protobuf_Reflection_MessageDescriptor_o * PBGDDCFGPJI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045685ef & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045685ef = 1;
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
        goto LAB_035bcdac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035bcdac:
                    /* WARNING: Could not recover jumptable at 0x035bcdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x34,pVVar2->method);
  return pGVar3;
}


// ===== public int CalculateSize()  [RVA 0x34BCDC8]
// PBGDDCFGPJI$$CalculateSize @ RVA 0x34BCDC8

int32_t PBGDDCFGPJI__CalculateSize(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  GLPEFEEGCPM_o *value;
  
  if ((DAT_045685f0 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045685f0 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).KEIBPDJHHBB;
  iVar2 = 0;
  if (value != (GLPEFEEGCPM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public static MessageParser<PBGDDCFGPJI> PGCAHPDCJBC()  [RVA 0x34BCE48]
// PBGDDCFGPJI$$PGCAHPDCJBC @ RVA 0x34BCE48

Google_Protobuf_MessageParser_PBGDDCFGPJI__o * PBGDDCFGPJI__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045685f1 & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685f1 = 1;
  }
  if ((PBGDDCFGPJI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return PBGDDCFGPJI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34BCEA0]
// PBGDDCFGPJI$$MergeFrom @ RVA 0x34BCEA0

void PBGDDCFGPJI__MergeFrom
               (PBGDDCFGPJI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GLPEFEEGCPM_o **ppGVar1;
  PBGDDCFGPJI_Fields *pPVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  GLPEFEEGCPM_o *pGVar5;
  
  if ((DAT_045685f2 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_045685f2 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppGVar1 = &(__this->fields).KEIBPDJHHBB;
    pPVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 == 10) {
        pGVar5 = *ppGVar1;
        if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
          pGVar5 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
          GLPEFEEGCPM___ctor(pGVar5,(MethodInfo *)0x0);
          *ppGVar1 = pGVar5;
          thunk_FUN_01c20e04(ppGVar1,pGVar5);
          pGVar5 = *ppGVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pGVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pPVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pPVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pPVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(PBGDDCFGPJI IBKIPBJJCPG)  [RVA 0x34BCF78]
// PBGDDCFGPJI$$MergeFrom @ RVA 0x34BCF78

void PBGDDCFGPJI__MergeFrom(PBGDDCFGPJI_o *__this,PBGDDCFGPJI_o *IBKIPBJJCPG,MethodInfo *method)

{
  GLPEFEEGCPM_o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  PBGDDCFGPJI_Fields *pPVar3;
  GLPEFEEGCPM_o **ppGVar4;
  
  if ((DAT_045685f3 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    DAT_045685f3 = 1;
  }
  if (IBKIPBJJCPG != (PBGDDCFGPJI_o *)0x0) {
    if ((IBKIPBJJCPG->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
      ppGVar4 = &(__this->fields).KEIBPDJHHBB;
      pGVar1 = *ppGVar4;
      if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
        pGVar1 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
        GLPEFEEGCPM___ctor(pGVar1,(MethodInfo *)0x0);
        *ppGVar4 = pGVar1;
        thunk_FUN_01c20e04(ppGVar4,pGVar1);
        pGVar1 = *ppGVar4;
        if (pGVar1 == (GLPEFEEGCPM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      GLPEFEEGCPM__MergeFrom(pGVar1,(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
    }
    pPVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pPVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pPVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pPVar3,pGVar2);
    return;
  }
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34BD044]
// PBGDDCFGPJI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34BD044

Google_Protobuf_Reflection_MessageDescriptor_o *
PBGDDCFGPJI__pb__Google_Protobuf_IMessage_get_Descriptor(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  PBGDDCFGPJI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685f4 & 1) == 0) {
    FUN_01bab630(&PBGDDCFGPJI_TypeInfo);
    DAT_045685f4 = 1;
    method = extraout_x1;
  }
  method_00 = PBGDDCFGPJI_TypeInfo;
  if ((PBGDDCFGPJI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PBGDDCFGPJI_c *)thunk_FUN_01ba7564(PBGDDCFGPJI_TypeInfo,method);
  }
  pGVar1 = PBGDDCFGPJI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override string ToString()  [RVA 0x34BD090]
// PBGDDCFGPJI$$ToString @ RVA 0x34BD090

System_String_o * PBGDDCFGPJI__ToString(PBGDDCFGPJI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045685f5 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045685f5 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void FBKOPIHENKH(GLPEFEEGCPM CJNHFNHJHPE)  [RVA 0x34BD0E8]
// PBGDDCFGPJI$$FBKOPIHENKH @ RVA 0x34BD0E8

void PBGDDCFGPJI__FBKOPIHENKH(PBGDDCFGPJI_o *__this,GLPEFEEGCPM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KEIBPDJHHBB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

