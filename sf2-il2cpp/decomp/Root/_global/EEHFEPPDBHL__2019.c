// TypeDefIndex 2019
// Namespace: 
// public sealed class EEHFEPPDBHL : IMessage<EEHFEPPDBHL>, IMessage, IEquatable<EEHFEPPDBHL>, IDeepCloneable<EEHFEPPDBHL>
// Fields:
//   private static readonly MessageParser<EEHFEPPDBHL> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int FJHKLNJGDEK = 1;
//   private string KKMDFLKPNNJ; // 0x18
//   public const int MEEMCILBCAM = 2;
//   private string JAAACMPGMKJ; // 0x20
//   public const int MOIOMICHJIH = 3;
//   private BANEEHPJOIB JODJOLBBJNI; // 0x28
//   public const int EGKAEOGAIKJ = 4;
//   private int IFICKDAKCHN; // 0x2C

// ===== public void .ctor(EEHFEPPDBHL IBKIPBJJCPG)  [RVA 0x329BADC]
// EEHFEPPDBHL$$.ctor @ RVA 0x329BADC

void EEHFEPPDBHL___ctor(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  EEHFEPPDBHL___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (EEHFEPPDBHL_o *)0x0) {
    (__this->fields).KKMDFLKPNNJ = (IBKIPBJJCPG->fields).KKMDFLKPNNJ;
    thunk_FUN_01c20e04();
    (__this->fields).JAAACMPGMKJ = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
    thunk_FUN_01c20e04();
    iVar1 = (IBKIPBJJCPG->fields).IFICKDAKCHN;
    (__this->fields).JODJOLBBJNI = (IBKIPBJJCPG->fields).JODJOLBBJNI;
    (__this->fields).IFICKDAKCHN = iVar1;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int IMHKDHEJLKH()  [RVA 0x329BB44]
// EEHFEPPDBHL$$IMHKDHEJLKH @ RVA 0x329BB44

int32_t EEHFEPPDBHL__IMHKDHEJLKH(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  return (__this->fields).IFICKDAKCHN;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x329BB4C]
// EEHFEPPDBHL$$FFHIHGCDGAK @ RVA 0x329BB4C

Google_Protobuf_Reflection_MessageDescriptor_o * EEHFEPPDBHL__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567395 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567395 = 1;
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
        goto LAB_0339bc34;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0339bc34:
                    /* WARNING: Could not recover jumptable at 0x0339bc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3d,pVVar2->method);
  return pGVar3;
}


// ===== public int CalculateSize()  [RVA 0x329BC50]
// EEHFEPPDBHL$$CalculateSize @ RVA 0x329BC50

int32_t EEHFEPPDBHL__CalculateSize(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04567396 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567396 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).KKMDFLKPNNJ;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      iVar3 = 0;
    }
    else {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
      iVar3 = iVar2 + 1;
    }
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeStringSize(pSVar4,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).JODJOLBBJNI;
      if (iVar1 != 0) {
        if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
        iVar3 = iVar3 + iVar2 + 1;
      }
      iVar1 = (__this->fields).IFICKDAKCHN;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x329BD78]
// EEHFEPPDBHL$$MergeFrom @ RVA 0x329BD78

void EEHFEPPDBHL__MergeFrom
               (EEHFEPPDBHL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EEHFEPPDBHL_Fields *pEVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pEVar1 = &__this->fields;
    do {
      if (uVar2 < 0x13) {
        if (uVar2 == 10) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EEHFEPPDBHL__HLPHKOBKPML(__this,pSVar4,method);
        }
        else if (uVar2 == 0x12) {
          pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          EEHFEPPDBHL__FFHJDGPNCKJ(__this,pSVar4,method);
        }
        else {
LAB_0339bdf8:
          method = (MethodInfo *)0x0;
          pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pEVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pEVar1->CKFPENBPNML = pGVar5;
          thunk_FUN_01c20e04(pEVar1,pGVar5);
        }
      }
      else if (uVar2 == 0x18) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).JODJOLBBJNI = iVar3;
      }
      else {
        if (uVar2 != 0x20) goto LAB_0339bdf8;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).IFICKDAKCHN = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}


// ===== public EEHFEPPDBHL Clone()  [RVA 0x329BE68]
// EEHFEPPDBHL$$Clone @ RVA 0x329BE68

EEHFEPPDBHL_o * EEHFEPPDBHL__Clone(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567397 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04567397 = 1;
    method = extraout_x1;
  }
  __this_00 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo,method);
  EEHFEPPDBHL___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<EEHFEPPDBHL> PGCAHPDCJBC()  [RVA 0x329BEC0]
// EEHFEPPDBHL$$PGCAHPDCJBC @ RVA 0x329BEC0

Google_Protobuf_MessageParser_EEHFEPPDBHL__o * EEHFEPPDBHL__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567398 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04567398 = 1;
  }
  if ((EEHFEPPDBHL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EEHFEPPDBHL_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x329BF18]
// EEHFEPPDBHL$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x329BF18

Google_Protobuf_Reflection_MessageDescriptor_o *
EEHFEPPDBHL__pb__Google_Protobuf_IMessage_get_Descriptor(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  EEHFEPPDBHL_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567399 & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_04567399 = 1;
    method = extraout_x1;
  }
  method_00 = EEHFEPPDBHL_TypeInfo;
  if ((EEHFEPPDBHL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EEHFEPPDBHL_c *)thunk_FUN_01ba7564(EEHFEPPDBHL_TypeInfo,method);
  }
  pGVar1 = EEHFEPPDBHL__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x329BF64]
// EEHFEPPDBHL$$DNOMHOGFIFO @ RVA 0x329BF64

System_String_o * EEHFEPPDBHL__DNOMHOGFIFO(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  return (__this->fields).JAAACMPGMKJ;
}


// ===== public void .ctor()  [RVA 0x328FA6C]
// EEHFEPPDBHL$$.ctor @ RVA 0x328FA6C

void EEHFEPPDBHL___ctor(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  if ((DAT_0456739a & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456739a = 1;
  }
  (__this->fields).KKMDFLKPNNJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).JAAACMPGMKJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x329BF6C]
// EEHFEPPDBHL$$WriteTo @ RVA 0x329BF6C

void EEHFEPPDBHL__WriteTo
               (EEHFEPPDBHL_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  pSVar1 = (__this->fields).KKMDFLKPNNJ;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).KKMDFLKPNNJ,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).JAAACMPGMKJ;
    if (pSVar1 != (System_String_o *)0x0) {
      if ((pSVar1->fields)._stringLength != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteString
                  (JBGJLELBMJF,(__this->fields).JAAACMPGMKJ,(MethodInfo *)0x0);
      }
      if ((__this->fields).JODJOLBBJNI != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteEnum
                  (JBGJLELBMJF,(__this->fields).JODJOLBBJNI,(MethodInfo *)0x0);
      }
      if ((__this->fields).IFICKDAKCHN != 0) {
        if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0339c064;
        Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
        Google_Protobuf_CodedOutputStream__WriteInt32
                  (JBGJLELBMJF,(__this->fields).IFICKDAKCHN,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).CKFPENBPNML;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0339c064:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x329C068]
// EEHFEPPDBHL$$ToString @ RVA 0x329C068

System_String_o * EEHFEPPDBHL__ToString(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456739b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456739b = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x328F7AC]
// EEHFEPPDBHL$$FFHJDGPNCKJ @ RVA 0x328F7AC

void EEHFEPPDBHL__FFHJDGPNCKJ(EEHFEPPDBHL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456739c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_0456739c = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).JAAACMPGMKJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x329C0C0]
// EEHFEPPDBHL$$GetHashCode @ RVA 0x329C0C0

int32_t EEHFEPPDBHL__GetHashCode(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  undefined8 local_18;
  
  local_18 = 0;
  pSVar4 = (__this->fields).KKMDFLKPNNJ;
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar2 ^ 1;
      method = extraout_x1;
    }
    pSVar4 = (__this->fields).JAAACMPGMKJ;
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength != 0) {
        uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).JODJOLBBJNI;
      if (iVar1 != 0) {
        local_18 = CONCAT44(iVar1,(undefined4)local_18);
        uVar3 = System_Int32__GetHashCode((int)&local_18 + 4,(MethodInfo *)0x0);
        uVar2 = uVar3 ^ uVar2;
      }
      iVar1 = (__this->fields).IFICKDAKCHN;
      if (iVar1 != 0) {
        local_18 = CONCAT44(local_18._4_4_,iVar1);
        uVar3 = System_Int32__GetHashCode((int32_t)&local_18,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void HLPHKOBKPML(string CJNHFNHJHPE)  [RVA 0x328F91C]
// EEHFEPPDBHL$$HLPHKOBKPML @ RVA 0x328F91C

void EEHFEPPDBHL__HLPHKOBKPML(EEHFEPPDBHL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456739d & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_0456739d = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).KKMDFLKPNNJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x329C17C]
// EEHFEPPDBHL$$Equals @ RVA 0x329C17C

bool EEHFEPPDBHL__Equals(EEHFEPPDBHL_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456739e & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    DAT_0456739e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EEHFEPPDBHL_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EEHFEPPDBHL__Equals(__this,(EEHFEPPDBHL_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private static void .cctor()  [RVA 0x329C274]
// EEHFEPPDBHL$$.cctor @ RVA 0x329C274

void EEHFEPPDBHL___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EEHFEPPDBHL__o *__this;
  
  if ((DAT_0456739f & 1) == 0) {
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
    FUN_01bab630(&System_Func<EEHFEPPDBHL>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EEHFEPPDBHL>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EEHFEPPDBHL>_TypeInfo);
    FUN_01bab630(&Method_EEHFEPPDBHL_<>c_LNJPIHAONCC__);
    FUN_01bab630(&EEHFEPPDBHL_<>c_TypeInfo);
    DAT_0456739f = 1;
  }
  if ((EEHFEPPDBHL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EEHFEPPDBHL>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EEHFEPPDBHL__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EEHFEPPDBHL>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EEHFEPPDBHL>__ctor__);
  EEHFEPPDBHL_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EEHFEPPDBHL_TypeInfo->static_fields,__this);
  return;
}


// ===== public void LFDAAKBMELE(BANEEHPJOIB CJNHFNHJHPE)  [RVA 0x329C38C]
// EEHFEPPDBHL$$LFDAAKBMELE @ RVA 0x329C38C

void EEHFEPPDBHL__LFDAAKBMELE(EEHFEPPDBHL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JODJOLBBJNI = CJNHFNHJHPE;
  return;
}


// ===== public void BPIBLPAPJOL(int CJNHFNHJHPE)  [RVA 0x329C394]
// EEHFEPPDBHL$$BPIBLPAPJOL @ RVA 0x329C394

void EEHFEPPDBHL__BPIBLPAPJOL(EEHFEPPDBHL_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IFICKDAKCHN = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(EEHFEPPDBHL IBKIPBJJCPG)  [RVA 0x329C39C]
// EEHFEPPDBHL$$MergeFrom @ RVA 0x329C39C

void EEHFEPPDBHL__MergeFrom(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *pSVar3;
  EEHFEPPDBHL_Fields *pEVar4;
  
  if (IBKIPBJJCPG == (EEHFEPPDBHL_o *)0x0) {
    return;
  }
  pSVar3 = (IBKIPBJJCPG->fields).KKMDFLKPNNJ;
  if (pSVar3 != (System_String_o *)0x0) {
    if ((pSVar3->fields)._stringLength != 0) {
      EEHFEPPDBHL__HLPHKOBKPML(__this,pSVar3,method);
    }
    pSVar3 = (IBKIPBJJCPG->fields).JAAACMPGMKJ;
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength != 0) {
        EEHFEPPDBHL__FFHJDGPNCKJ(__this,pSVar3,method);
      }
      iVar1 = (IBKIPBJJCPG->fields).JODJOLBBJNI;
      if (iVar1 != 0) {
        (__this->fields).JODJOLBBJNI = iVar1;
      }
      iVar1 = (IBKIPBJJCPG->fields).IFICKDAKCHN;
      if (iVar1 != 0) {
        (__this->fields).IFICKDAKCHN = iVar1;
      }
      pEVar4 = &__this->fields;
      pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pEVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pEVar4->CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(pEVar4,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BANEEHPJOIB CBPBLADDCLE()  [RVA 0x329C430]
// EEHFEPPDBHL$$CBPBLADDCLE @ RVA 0x329C430

int32_t EEHFEPPDBHL__CBPBLADDCLE(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  return (__this->fields).JODJOLBBJNI;
}


// ===== public bool Equals(EEHFEPPDBHL IBKIPBJJCPG)  [RVA 0x329C1E0]
// EEHFEPPDBHL$$Equals @ RVA 0x329C1E0

bool EEHFEPPDBHL__Equals(EEHFEPPDBHL_o *__this,EEHFEPPDBHL_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (EEHFEPPDBHL_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_String__op_Inequality
                      ((__this->fields).KKMDFLKPNNJ,(IBKIPBJJCPG->fields).KKMDFLKPNNJ,
                       (MethodInfo *)0x0);
    if ((((!bVar1) &&
         (bVar1 = System_String__op_Inequality
                            ((__this->fields).JAAACMPGMKJ,(IBKIPBJJCPG->fields).JAAACMPGMKJ,
                             (MethodInfo *)0x0), !bVar1)) &&
        ((__this->fields).JODJOLBBJNI == (IBKIPBJJCPG->fields).JODJOLBBJNI)) &&
       ((__this->fields).IFICKDAKCHN == (IBKIPBJJCPG->fields).IFICKDAKCHN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public string CJPIFPJMENP()  [RVA 0x329C438]
// EEHFEPPDBHL$$CJPIFPJMENP @ RVA 0x329C438

System_String_o * EEHFEPPDBHL__CJPIFPJMENP(EEHFEPPDBHL_o *__this,MethodInfo *method)

{
  return (__this->fields).KKMDFLKPNNJ;
}

