// TypeDefIndex 2696
// Namespace: 
// public sealed class FADHMEJJCPO : IMessage<FADHMEJJCPO>, IMessage, IEquatable<FADHMEJJCPO>, IDeepCloneable<FADHMEJJCPO>
// Fields:
//   private static readonly MessageParser<FADHMEJJCPO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int NOFHGLLGLLE = 1;
//   private int PDOMCPONBNB; // 0x18
//   public const int IHKKAOBBNID = 2;
//   private PGICCMFLDPI IMNALGKNMNP; // 0x20

// ===== private static void .cctor()  [RVA 0x33CE024]
// FADHMEJJCPO$$.cctor @ RVA 0x33CE024

void FADHMEJJCPO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FADHMEJJCPO__o *__this;
  
  if ((DAT_04567e3c & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    FUN_01bab630(&System_Func<FADHMEJJCPO>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FADHMEJJCPO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FADHMEJJCPO>_TypeInfo);
    FUN_01bab630(&Method_FADHMEJJCPO_<>c_PICNPKNBICJ__);
    FUN_01bab630(&FADHMEJJCPO_<>c_TypeInfo);
    DAT_04567e3c = 1;
  }
  if ((FADHMEJJCPO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FADHMEJJCPO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FADHMEJJCPO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FADHMEJJCPO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FADHMEJJCPO>__ctor__);
  FADHMEJJCPO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FADHMEJJCPO_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x33CE13C]
// FADHMEJJCPO$$MergeFrom @ RVA 0x33CE13C

void FADHMEJJCPO__MergeFrom
               (FADHMEJJCPO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  FADHMEJJCPO_Fields *pFVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04567e3d & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04567e3d = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppPVar1 = &(__this->fields).IMNALGKNMNP;
    pFVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PDOMCPONBNB = iVar4;
        }
        if (uVar3 != 0x12) break;
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
      if (uVar3 == 0) break;
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pFVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pFVar2->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pFVar2,pGVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33CE238]
// FADHMEJJCPO$$.ctor @ RVA 0x33CE238

void FADHMEJJCPO___ctor(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int JMAMKPDNING()  [RVA 0x33CE240]
// FADHMEJJCPO$$JMAMKPDNING @ RVA 0x33CE240

int32_t FADHMEJJCPO__JMAMKPDNING(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  return (__this->fields).PDOMCPONBNB;
}


// ===== public override int GetHashCode()  [RVA 0x33CE248]
// FADHMEJJCPO$$GetHashCode @ RVA 0x33CE248

int32_t FADHMEJJCPO__GetHashCode(FADHMEJJCPO_o *__this,MethodInfo *method)

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
  pPVar4 = (__this->fields).IMNALGKNMNP;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
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


// ===== public void FFNNHKOKGEH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x33CE2BC]
// FADHMEJJCPO$$FFNNHKOKGEH @ RVA 0x33CE2BC

void FADHMEJJCPO__FFNNHKOKGEH(FADHMEJJCPO_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IMNALGKNMNP = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x33CE2C4]
// FADHMEJJCPO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33CE2C4

Google_Protobuf_Reflection_MessageDescriptor_o *
FADHMEJJCPO__pb__Google_Protobuf_IMessage_get_Descriptor(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  FADHMEJJCPO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e3e & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e3e = 1;
    method = extraout_x1;
  }
  method_00 = FADHMEJJCPO_TypeInfo;
  if ((FADHMEJJCPO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FADHMEJJCPO_c *)thunk_FUN_01ba7564(FADHMEJJCPO_TypeInfo,method);
  }
  pGVar1 = FADHMEJJCPO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor(FADHMEJJCPO IBKIPBJJCPG)  [RVA 0x33CE414]
// FADHMEJJCPO$$.ctor @ RVA 0x33CE414

void FADHMEJJCPO___ctor(FADHMEJJCPO_o *__this,FADHMEJJCPO_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (FADHMEJJCPO_o *)0x0) {
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    pPVar1 = (IBKIPBJJCPG->fields).IMNALGKNMNP;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).IMNALGKNMNP = pPVar1;
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


// ===== public void MergeFrom(FADHMEJJCPO IBKIPBJJCPG)  [RVA 0x33CE488]
// FADHMEJJCPO$$MergeFrom @ RVA 0x33CE488

void FADHMEJJCPO__MergeFrom(FADHMEJJCPO_o *__this,FADHMEJJCPO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  FADHMEJJCPO_Fields *pFVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_04567e3f & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04567e3f = 1;
  }
  if (IBKIPBJJCPG != (FADHMEJJCPO_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    if (iVar1 != 0) {
      (__this->fields).PDOMCPONBNB = iVar1;
    }
    if ((IBKIPBJJCPG->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).IMNALGKNMNP;
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
      PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0);
    }
    pFVar4 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pFVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pFVar4->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pFVar4,pGVar3);
    return;
  }
  return;
}


// ===== public PGICCMFLDPI LFNBOGPIBLJ()  [RVA 0x33CE560]
// FADHMEJJCPO$$LFNBOGPIBLJ @ RVA 0x33CE560

PGICCMFLDPI_o * FADHMEJJCPO__LFNBOGPIBLJ(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  return (__this->fields).IMNALGKNMNP;
}


// ===== public override string ToString()  [RVA 0x33CE568]
// FADHMEJJCPO$$ToString @ RVA 0x33CE568

System_String_o * FADHMEJJCPO__ToString(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e40 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567e40 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x33CE5C0]
// FADHMEJJCPO$$CalculateSize @ RVA 0x33CE5C0

int32_t FADHMEJJCPO__CalculateSize(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  PGICCMFLDPI_o *value_00;
  
  if ((DAT_04567e41 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567e41 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).PDOMCPONBNB;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).IMNALGKNMNP;
  if (value_00 != (PGICCMFLDPI_o *)0x0) {
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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x33CE310]
// FADHMEJJCPO$$FFHIHGCDGAK @ RVA 0x33CE310

Google_Protobuf_Reflection_MessageDescriptor_o * FADHMEJJCPO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567e42 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567e42 = 1;
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
        goto LAB_034ce3f8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_034ce3f8:
                    /* WARNING: Could not recover jumptable at 0x034ce40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x31,pVVar2->method);
  return pGVar3;
}


// ===== public static MessageParser<FADHMEJJCPO> PGCAHPDCJBC()  [RVA 0x33CE674]
// FADHMEJJCPO$$PGCAHPDCJBC @ RVA 0x33CE674

Google_Protobuf_MessageParser_FADHMEJJCPO__o * FADHMEJJCPO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567e43 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e43 = 1;
  }
  if ((FADHMEJJCPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FADHMEJJCPO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public FADHMEJJCPO Clone()  [RVA 0x33CE6CC]
// FADHMEJJCPO$$Clone @ RVA 0x33CE6CC

FADHMEJJCPO_o * FADHMEJJCPO__Clone(FADHMEJJCPO_o *__this,MethodInfo *method)

{
  FADHMEJJCPO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567e44 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e44 = 1;
    method = extraout_x1;
  }
  __this_00 = (FADHMEJJCPO_o *)thunk_FUN_01bda818(FADHMEJJCPO_TypeInfo,method);
  FADHMEJJCPO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static bool LFHPFJOAJIO(FADHMEJJCPO PDCJHMOBMPK, FADHMEJJCPO NECMHLICHNE)  [RVA 0x33CE724]
// FADHMEJJCPO$$LFHPFJOAJIO @ RVA 0x33CE724

bool FADHMEJJCPO__LFHPFJOAJIO
               (FADHMEJJCPO_o *PDCJHMOBMPK,FADHMEJJCPO_o *NECMHLICHNE,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_04567e45 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_PPBANLLIGDK<FADHMEJJCPO>__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04567e45 = 1;
  }
  local_24[0] = (System_Nullable_bool__Fields)
                AJKNKCLEEAD__PPBANLLIGDK<object>
                          ((Il2CppObject *)PDCJHMOBMPK,(Il2CppObject *)NECMHLICHNE,
                           Method_AJKNKCLEEAD_PPBANLLIGDK<FADHMEJJCPO>__);
  if (((ushort)local_24[0] & 0xff) == 0) {
    if ((PDCJHMOBMPK == (FADHMEJJCPO_o *)0x0) || (NECMHLICHNE == (FADHMEJJCPO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((PDCJHMOBMPK->fields).PDOMCPONBNB == (NECMHLICHNE->fields).PDOMCPONBNB) {
      bVar1 = (PDCJHMOBMPK->fields).IMNALGKNMNP == (NECMHLICHNE->fields).IMNALGKNMNP;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = System_Nullable<bool>__get_Value
                      ((System_Nullable_bool__o)SUB82(local_24,0),
                       Method_System_Nullable<bool>_get_Value__);
  }
  return bVar1;
}


// ===== public bool Equals(FADHMEJJCPO IBKIPBJJCPG)  [RVA 0x33CE7F4]
// FADHMEJJCPO$$Equals @ RVA 0x33CE7F4

bool FADHMEJJCPO__Equals(FADHMEJJCPO_o *__this,FADHMEJJCPO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FADHMEJJCPO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IMNALGKNMNP,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IMNALGKNMNP,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x33CE864]
// FADHMEJJCPO$$WriteTo @ RVA 0x33CE864

void FADHMEJJCPO__WriteTo
               (FADHMEJJCPO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_034ce8f4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  if ((__this->fields).IMNALGKNMNP != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_034ce8f4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IMNALGKNMNP,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 034ce8ec to 035ceb4b has its CatchHandler @ 034ce8ec
                       catch() { ... } // from try @ 034ce8ec with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf378 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf408 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf520 with catch @ 034ce8ec
                       catch() { ... } // from try @ 034cf580 with catch @ 034ce8ec */
  return;
}


// ===== public void EMKELMJKKLO(int CJNHFNHJHPE)  [RVA 0x33CE8F8]
// FADHMEJJCPO$$EMKELMJKKLO @ RVA 0x33CE8F8

void FADHMEJJCPO__EMKELMJKKLO(FADHMEJJCPO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDOMCPONBNB = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x33CE900]
// FADHMEJJCPO$$Equals @ RVA 0x33CE900

bool FADHMEJJCPO__Equals(FADHMEJJCPO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567e46 & 1) == 0) {
    FUN_01bab630(&FADHMEJJCPO_TypeInfo);
    DAT_04567e46 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FADHMEJJCPO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FADHMEJJCPO__Equals(__this,(FADHMEJJCPO_o *)IBKIPBJJCPG,method);
  return bVar1;
}

