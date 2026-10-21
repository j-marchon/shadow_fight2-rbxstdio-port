// TypeDefIndex 3159
// Namespace: 
// public sealed class DBOOKMFPFNI : IMessage<DBOOKMFPFNI>, IMessage, IEquatable<DBOOKMFPFNI>, IDeepCloneable<DBOOKMFPFNI>
// Fields:
//   private static readonly MessageParser<DBOOKMFPFNI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MPCEHEPFCOA = 1;
//   private int LPFKPMGBOGB; // 0x18

// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34DADA0]
// DBOOKMFPFNI$$MergeFrom @ RVA 0x34DADA0

void DBOOKMFPFNI__MergeFrom
               (DBOOKMFPFNI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  DBOOKMFPFNI_Fields *pDVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pDVar1 = &__this->fields;
    while( true ) {
      while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar2 == 8) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).LPFKPMGBOGB = iVar3;
      }
      if (uVar2 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pDVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pDVar1->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pDVar1,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public DBOOKMFPFNI Clone()  [RVA 0x34DAE18]
// DBOOKMFPFNI$$Clone @ RVA 0x34DAE18

DBOOKMFPFNI_o * DBOOKMFPFNI__Clone(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  DBOOKMFPFNI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456870a & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_0456870a = 1;
    method = extraout_x1;
  }
  __this_00 = (DBOOKMFPFNI_o *)thunk_FUN_01bda818(DBOOKMFPFNI_TypeInfo,method);
  DBOOKMFPFNI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override int GetHashCode()  [RVA 0x34DAEBC]
// DBOOKMFPFNI$$GetHashCode @ RVA 0x34DAEBC

int32_t DBOOKMFPFNI__GetHashCode(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).LPFKPMGBOGB;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public void .ctor(DBOOKMFPFNI IBKIPBJJCPG)  [RVA 0x34DAE70]
// DBOOKMFPFNI$$.ctor @ RVA 0x34DAE70

void DBOOKMFPFNI___ctor(DBOOKMFPFNI_o *__this,DBOOKMFPFNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (DBOOKMFPFNI_o *)0x0) {
    (__this->fields).LPFKPMGBOGB = (IBKIPBJJCPG->fields).LPFKPMGBOGB;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34DAF20]
// DBOOKMFPFNI$$FFHIHGCDGAK @ RVA 0x34DAF20

Google_Protobuf_Reflection_MessageDescriptor_o * DBOOKMFPFNI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456870b & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456870b = 1;
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
        goto LAB_035db008;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035db008:
                    /* WARNING: Could not recover jumptable at 0x035db01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x30,pVVar2->method);
  return pGVar3;
}


// ===== public void KCBJNKBILBK(int CJNHFNHJHPE)  [RVA 0x34DB024]
// DBOOKMFPFNI$$KCBJNKBILBK @ RVA 0x34DB024

void DBOOKMFPFNI__KCBJNKBILBK(DBOOKMFPFNI_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LPFKPMGBOGB = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x34DB02C]
// DBOOKMFPFNI$$ToString @ RVA 0x34DB02C

System_String_o * DBOOKMFPFNI__ToString(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456870c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456870c = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(DBOOKMFPFNI IBKIPBJJCPG)  [RVA 0x34DB084]
// DBOOKMFPFNI$$MergeFrom @ RVA 0x34DB084

void DBOOKMFPFNI__MergeFrom(DBOOKMFPFNI_o *__this,DBOOKMFPFNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  DBOOKMFPFNI_Fields *pDVar3;
  
  if (IBKIPBJJCPG != (DBOOKMFPFNI_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).LPFKPMGBOGB;
    if (iVar1 != 0) {
      (__this->fields).LPFKPMGBOGB = iVar1;
    }
    pDVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pDVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pDVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pDVar3,pGVar2);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x34DAF18]
// DBOOKMFPFNI$$.ctor @ RVA 0x34DAF18

void DBOOKMFPFNI___ctor(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int CalculateSize()  [RVA 0x34DB0C4]
// DBOOKMFPFNI$$CalculateSize @ RVA 0x34DB0C4

int32_t DBOOKMFPFNI__CalculateSize(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  
  if ((DAT_0456870d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_0456870d = 1;
    method = extraout_x1;
  }
  value = (__this->fields).LPFKPMGBOGB;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== private static void .cctor()  [RVA 0x34DB144]
// DBOOKMFPFNI$$.cctor @ RVA 0x34DB144

void DBOOKMFPFNI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_DBOOKMFPFNI__o *__this;
  
  if ((DAT_0456870e & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    FUN_01bab630(&System_Func<DBOOKMFPFNI>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<DBOOKMFPFNI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<DBOOKMFPFNI>_TypeInfo);
    FUN_01bab630(&Method_DBOOKMFPFNI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&DBOOKMFPFNI_<>c_TypeInfo);
    DAT_0456870e = 1;
  }
  if ((DBOOKMFPFNI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<DBOOKMFPFNI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_DBOOKMFPFNI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<DBOOKMFPFNI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<DBOOKMFPFNI>__ctor__);
  DBOOKMFPFNI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(DBOOKMFPFNI_TypeInfo->static_fields,__this);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34DB25C]
// DBOOKMFPFNI$$Equals @ RVA 0x34DB25C

bool DBOOKMFPFNI__Equals(DBOOKMFPFNI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456870f & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_0456870f = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)DBOOKMFPFNI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = DBOOKMFPFNI__Equals(__this,(DBOOKMFPFNI_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public bool Equals(DBOOKMFPFNI IBKIPBJJCPG)  [RVA 0x34DB2C0]
// DBOOKMFPFNI$$Equals @ RVA 0x34DB2C0

bool DBOOKMFPFNI__Equals(DBOOKMFPFNI_o *__this,DBOOKMFPFNI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (DBOOKMFPFNI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).LPFKPMGBOGB == (IBKIPBJJCPG->fields).LPFKPMGBOGB) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public static MessageParser<DBOOKMFPFNI> PGCAHPDCJBC()  [RVA 0x34DB2FC]
// DBOOKMFPFNI$$PGCAHPDCJBC @ RVA 0x34DB2FC

Google_Protobuf_MessageParser_DBOOKMFPFNI__o * DBOOKMFPFNI__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568710 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_04568710 = 1;
  }
  if ((DBOOKMFPFNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return DBOOKMFPFNI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34DB354]
// DBOOKMFPFNI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34DB354

Google_Protobuf_Reflection_MessageDescriptor_o *
DBOOKMFPFNI__pb__Google_Protobuf_IMessage_get_Descriptor(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  DBOOKMFPFNI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568711 & 1) == 0) {
    FUN_01bab630(&DBOOKMFPFNI_TypeInfo);
    DAT_04568711 = 1;
    method = extraout_x1;
  }
  method_00 = DBOOKMFPFNI_TypeInfo;
  if ((DBOOKMFPFNI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (DBOOKMFPFNI_c *)thunk_FUN_01ba7564(DBOOKMFPFNI_TypeInfo,method);
  }
  pGVar1 = DBOOKMFPFNI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34DB3A0]
// DBOOKMFPFNI$$WriteTo @ RVA 0x34DB3A0

void DBOOKMFPFNI__WriteTo
               (DBOOKMFPFNI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).LPFKPMGBOGB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).LPFKPMGBOGB,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int DAJEEBMIBKL()  [RVA 0x34DB408]
// DBOOKMFPFNI$$DAJEEBMIBKL @ RVA 0x34DB408

int32_t DBOOKMFPFNI__DAJEEBMIBKL(DBOOKMFPFNI_o *__this,MethodInfo *method)

{
  return (__this->fields).LPFKPMGBOGB;
}

