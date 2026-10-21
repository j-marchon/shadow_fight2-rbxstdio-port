// TypeDefIndex 1133
// Namespace: 
// public sealed class IBMLPPNMDCI : IMessage<IBMLPPNMDCI>, IMessage, IEquatable<IBMLPPNMDCI>, IDeepCloneable<IBMLPPNMDCI>
// Fields:
//   private static readonly MessageParser<IBMLPPNMDCI> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JGIFNJHMMMK = 1;
//   private static readonly FieldCodec<long> IODFLINNJEL; // 0x8
//   private readonly RepeatedField<long> EHBNKDHKJNI; // 0x18

// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30F5CB4]
// IBMLPPNMDCI$$WriteTo @ RVA 0x30F5CB4

void IBMLPPNMDCI__WriteTo
               (IBMLPPNMDCI_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04566451 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    DAT_04566451 = 1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<long>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL,
               Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<IBMLPPNMDCI> PGCAHPDCJBC()  [RVA 0x30F5D6C]
// IBMLPPNMDCI$$PGCAHPDCJBC @ RVA 0x30F5D6C

Google_Protobuf_MessageParser_IBMLPPNMDCI__o * IBMLPPNMDCI__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566452 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_04566452 = 1;
  }
  if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return IBMLPPNMDCI_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30F5DC4]
// IBMLPPNMDCI$$MergeFrom @ RVA 0x30F5DC4

void IBMLPPNMDCI__MergeFrom
               (IBMLPPNMDCI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  IBMLPPNMDCI_Fields *pIVar1;
  uint32_t uVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04566453 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04566453 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pIVar1 = &__this->fields;
    while( true ) {
      while ((uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
             uVar2 != 8 && (uVar2 != 10))) {
        if (uVar2 == 0) {
          return;
        }
        pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pIVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pIVar1->CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(pIVar1,pGVar3);
      }
      __this_00 = (__this->fields).EHBNKDHKJNI;
      if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                (__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL
                 ,Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(IBMLPPNMDCI IBKIPBJJCPG)  [RVA 0x30F5EB4]
// IBMLPPNMDCI$$MergeFrom @ RVA 0x30F5EB4

void IBMLPPNMDCI__MergeFrom(IBMLPPNMDCI_o *__this,IBMLPPNMDCI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  IBMLPPNMDCI_Fields *pIVar2;
  
  if ((DAT_04566454 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    DAT_04566454 = 1;
  }
  if (IBKIPBJJCPG != (IBMLPPNMDCI_o *)0x0) {
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<long>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EHBNKDHKJNI,
                 Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
      pIVar2 = &__this->fields;
      pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pIVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pIVar2->CKFPENBPNML = pGVar1;
      thunk_FUN_01c20e04(pIVar2,pGVar1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30F5F3C]
// IBMLPPNMDCI$$Equals @ RVA 0x30F5F3C

bool IBMLPPNMDCI__Equals(IBMLPPNMDCI_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566455 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_04566455 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)IBMLPPNMDCI_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = IBMLPPNMDCI__Equals(__this,(IBMLPPNMDCI_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public override string ToString()  [RVA 0x30F6030]
// IBMLPPNMDCI$$ToString @ RVA 0x30F6030

System_String_o * IBMLPPNMDCI__ToString(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566456 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566456 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30F6088]
// IBMLPPNMDCI$$FFHIHGCDGAK @ RVA 0x30F6088

Google_Protobuf_Reflection_MessageDescriptor_o * IBMLPPNMDCI__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566457 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566457 = 1;
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
        goto LAB_031f6170;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031f6170:
                    /* WARNING: Could not recover jumptable at 0x031f6184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,4,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor()  [RVA 0x30F618C]
// IBMLPPNMDCI$$.ctor @ RVA 0x30F618C

void IBMLPPNMDCI___ctor(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566458 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<long>_TypeInfo);
    DAT_04566458 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_long__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<long>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<long>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
  ppGVar1 = &(__this->fields).EHBNKDHKJNI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public IBMLPPNMDCI Clone()  [RVA 0x30F6214]
// IBMLPPNMDCI$$Clone @ RVA 0x30F6214

IBMLPPNMDCI_o * IBMLPPNMDCI__Clone(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  IBMLPPNMDCI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566459 & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_04566459 = 1;
    method = extraout_x1;
  }
  __this_00 = (IBMLPPNMDCI_o *)thunk_FUN_01bda818(IBMLPPNMDCI_TypeInfo,method);
  IBMLPPNMDCI___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public int CalculateSize()  [RVA 0x30F62F8]
// IBMLPPNMDCI$$CalculateSize @ RVA 0x30F62F8

int32_t IBMLPPNMDCI__CalculateSize(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_0456645a & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    DAT_0456645a = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).EHBNKDHKJNI;
  if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IBMLPPNMDCI_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<long>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(IBMLPPNMDCI IBKIPBJJCPG)  [RVA 0x30F5FA0]
// IBMLPPNMDCI$$Equals @ RVA 0x30F5FA0

bool IBMLPPNMDCI__Equals(IBMLPPNMDCI_o *__this,IBMLPPNMDCI_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_0456645b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    DAT_0456645b = 1;
  }
  if (IBKIPBJJCPG != (IBMLPPNMDCI_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).EHBNKDHKJNI;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Equals
                      (__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).EHBNKDHKJNI,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public RepeatedField<long> BBDAKDCNDFF()  [RVA 0x30F63A0]
// IBMLPPNMDCI$$BBDAKDCNDFF @ RVA 0x30F63A0

Google_Protobuf_Collections_RepeatedField_long__o *
IBMLPPNMDCI__BBDAKDCNDFF(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  return (__this->fields).EHBNKDHKJNI;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30F63A8]
// IBMLPPNMDCI$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30F63A8

Google_Protobuf_Reflection_MessageDescriptor_o *
IBMLPPNMDCI__pb__Google_Protobuf_IMessage_get_Descriptor(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  IBMLPPNMDCI_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456645c & 1) == 0) {
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    DAT_0456645c = 1;
    method = extraout_x1;
  }
  method_00 = IBMLPPNMDCI_TypeInfo;
  if ((IBMLPPNMDCI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (IBMLPPNMDCI_c *)thunk_FUN_01ba7564(IBMLPPNMDCI_TypeInfo,method);
  }
  pGVar1 = IBMLPPNMDCI__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x30F63F4]
// IBMLPPNMDCI$$.cctor @ RVA 0x30F63F4

void IBMLPPNMDCI___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_IBMLPPNMDCI__o *__this;
  Google_Protobuf_FieldCodec_long__o *pGVar1;
  Google_Protobuf_FieldCodec_long__o **ppGVar2;
  
  if ((DAT_0456645d & 1) == 0) {
    FUN_01bab630(&System_Func<IBMLPPNMDCI>_TypeInfo);
    FUN_01bab630(&IBMLPPNMDCI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<IBMLPPNMDCI>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<IBMLPPNMDCI>_TypeInfo);
    FUN_01bab630(&Method_IBMLPPNMDCI_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&IBMLPPNMDCI_<>c_TypeInfo);
    DAT_0456645d = 1;
  }
  if ((IBMLPPNMDCI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<IBMLPPNMDCI>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_IBMLPPNMDCI__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<IBMLPPNMDCI>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<IBMLPPNMDCI>__ctor__);
  IBMLPPNMDCI_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(IBMLPPNMDCI_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt64(10,(MethodInfo *)0x0);
  ppGVar2 = &IBMLPPNMDCI_TypeInfo->static_fields->IODFLINNJEL;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void .ctor(IBMLPPNMDCI IBKIPBJJCPG)  [RVA 0x30F626C]
// IBMLPPNMDCI$$.ctor @ RVA 0x30F626C

void IBMLPPNMDCI___ctor(IBMLPPNMDCI_o *__this,IBMLPPNMDCI_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456645e & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    DAT_0456645e = 1;
    method_00 = extraout_x1;
  }
  IBMLPPNMDCI___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (IBMLPPNMDCI_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).EHBNKDHKJNI,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
    (__this->fields).EHBNKDHKJNI = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
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


// ===== public override int GetHashCode()  [RVA 0x30F6530]
// IBMLPPNMDCI$$GetHashCode @ RVA 0x30F6530

int32_t IBMLPPNMDCI__GetHashCode(IBMLPPNMDCI_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pGVar3 = (__this->fields).EHBNKDHKJNI;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pGVar4 = (__this->fields).CKFPENBPNML;
    uVar1 = uVar1 ^ 1;
    if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
      uVar1 = uVar2 ^ uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

