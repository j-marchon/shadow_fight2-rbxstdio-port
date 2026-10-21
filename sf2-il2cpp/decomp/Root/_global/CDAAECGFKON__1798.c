// TypeDefIndex 1798
// Namespace: 
// public sealed class CDAAECGFKON : IMessage<CDAAECGFKON>, IMessage, IEquatable<CDAAECGFKON>, IDeepCloneable<CDAAECGFKON>
// Fields:
//   private static readonly MessageParser<CDAAECGFKON> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MPGIALFAHMH = 1;
//   private AADKBCFCLKK PMFAFJFPHGO; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3211A88]
// CDAAECGFKON$$FFHIHGCDGAK @ RVA 0x3211A88

Google_Protobuf_Reflection_MessageDescriptor_o * CDAAECGFKON__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 03311a88 to 03411a93 has its CatchHandler @ 03311564 */
                    /* try { // try from 03311a94 to 03411a9b has its CatchHandler @ 03311a9c */
                    /* catch() { ... } // from try @ 03311a18 with catch @ 03311a9c
                       catch() { ... } // from try @ 03311a94 with catch @ 03311a9c */
  if ((DAT_04566e95 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566e95 = 1;
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
        goto LAB_03311b70;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03311b70:
                    /* WARNING: Could not recover jumptable at 0x03311b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2c,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3211B8C]
// CDAAECGFKON$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3211B8C

Google_Protobuf_Reflection_MessageDescriptor_o *
CDAAECGFKON__pb__Google_Protobuf_IMessage_get_Descriptor(CDAAECGFKON_o *__this,MethodInfo *method)

{
  CDAAECGFKON_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e96 & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e96 = 1;
    method = extraout_x1;
  }
  method_00 = CDAAECGFKON_TypeInfo;
  if ((CDAAECGFKON_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (CDAAECGFKON_c *)thunk_FUN_01ba7564(CDAAECGFKON_TypeInfo,method);
  }
  pGVar1 = CDAAECGFKON__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x3211BD8]
// CDAAECGFKON$$JCKINNMKHBA @ RVA 0x3211BD8

KAMBBJFPLGM_o * CDAAECGFKON__JCKINNMKHBA(CDAAECGFKON_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3211BE0]
// CDAAECGFKON$$Equals @ RVA 0x3211BE0

bool CDAAECGFKON__Equals(CDAAECGFKON_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566e97 & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e97 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)CDAAECGFKON_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = CDAAECGFKON__Equals(__this,(CDAAECGFKON_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void MergeFrom(CDAAECGFKON IBKIPBJJCPG)  [RVA 0x3211CB8]
// CDAAECGFKON$$MergeFrom @ RVA 0x3211CB8

void CDAAECGFKON__MergeFrom(CDAAECGFKON_o *__this,CDAAECGFKON_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  CDAAECGFKON_Fields *pCVar4;
  AADKBCFCLKK_o **ppAVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_04566e98 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04566e98 = 1;
  }
  if (IBKIPBJJCPG == (CDAAECGFKON_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    ppAVar5 = &(__this->fields).PMFAFJFPHGO;
    pAVar1 = *ppAVar5;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5,pAVar1);
      pAVar1 = *ppAVar5;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_03311de0;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = *ppKVar6;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar2,(MethodInfo *)0x0);
      *ppKVar6 = pKVar2;
      thunk_FUN_01c20e04(ppKVar6,pKVar2);
      pKVar2 = *ppKVar6;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
LAB_03311de0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pCVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pCVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pCVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pCVar4,pGVar3);
  return;
}


// ===== public bool Equals(CDAAECGFKON IBKIPBJJCPG)  [RVA 0x3211C44]
// CDAAECGFKON$$Equals @ RVA 0x3211C44

bool CDAAECGFKON__Equals(CDAAECGFKON_o *__this,CDAAECGFKON_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (CDAAECGFKON_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PMFAFJFPHGO,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3211DE4]
// CDAAECGFKON$$MergeFrom @ RVA 0x3211DE4

void CDAAECGFKON__MergeFrom
               (CDAAECGFKON_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  AADKBCFCLKK_o **ppAVar2;
  CDAAECGFKON_Fields *pCVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  AADKBCFCLKK_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
  if ((DAT_04566e99 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04566e99 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
  ppAVar2 = &(__this->fields).PMFAFJFPHGO;
  pCVar3 = &__this->fields;
LAB_03311e48:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pKVar6 = (KAMBBJFPLGM_o *)*ppAVar2;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        __this_00 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
        AADKBCFCLKK___ctor(__this_00,(MethodInfo *)0x0);
        *ppAVar2 = __this_00;
        thunk_FUN_01c20e04(ppAVar2,__this_00);
        pKVar6 = (KAMBBJFPLGM_o *)*ppAVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pCVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pCVar3->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pCVar3,pGVar5);
        goto LAB_03311e48;
      }
      pKVar6 = *ppKVar1;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        pKVar6 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar6,(MethodInfo *)0x0);
        *ppKVar1 = pKVar6;
        thunk_FUN_01c20e04(ppKVar1,pKVar6);
        pKVar6 = *ppKVar1;
      }
    }
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar6,(MethodInfo *)0x0);
  } while( true );
}


// ===== public void .ctor(CDAAECGFKON IBKIPBJJCPG)  [RVA 0x3211F18]
// CDAAECGFKON$$.ctor @ RVA 0x3211F18

void CDAAECGFKON___ctor(CDAAECGFKON_o *__this,CDAAECGFKON_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CDAAECGFKON_o *)0x0) {
    pAVar1 = (IBKIPBJJCPG->fields).PMFAFJFPHGO;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)0x0;
    }
    else {
      pAVar1 = AADKBCFCLKK__Clone(pAVar1,(MethodInfo *)0x0);
    }
    if (__this != (CDAAECGFKON_o *)0x0) {
      (__this->fields).PMFAFJFPHGO = pAVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3211FB0]
// CDAAECGFKON$$.ctor @ RVA 0x3211FB0

void CDAAECGFKON___ctor(CDAAECGFKON_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3211FB8]
// CDAAECGFKON$$WriteTo @ RVA 0x3211FB8

void CDAAECGFKON__WriteTo
               (CDAAECGFKON_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03312048;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PMFAFJFPHGO,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03312048:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x321204C]
// CDAAECGFKON$$IIBFFDJAKFB @ RVA 0x321204C

void CDAAECGFKON__IIBFFDJAKFB(CDAAECGFKON_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x3212054]
// CDAAECGFKON$$ToString @ RVA 0x3212054

System_String_o * CDAAECGFKON__ToString(CDAAECGFKON_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566e9a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566e9a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x32120AC]
// CDAAECGFKON$$CalculateSize @ RVA 0x32120AC

int32_t CDAAECGFKON__CalculateSize(CDAAECGFKON_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  AADKBCFCLKK_o *value;
  KAMBBJFPLGM_o *value_00;
  
  if ((DAT_04566e9b & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566e9b = 1;
    method = extraout_x1;
  }
  value = (__this->fields).PMFAFJFPHGO;
  iVar2 = 0;
  if (value != (AADKBCFCLKK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OPHCNELIOLD;
  if (value_00 != (KAMBBJFPLGM_o *)0x0) {
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


// ===== public CDAAECGFKON Clone()  [RVA 0x3212160]
// CDAAECGFKON$$Clone @ RVA 0x3212160

CDAAECGFKON_o * CDAAECGFKON__Clone(CDAAECGFKON_o *__this,MethodInfo *method)

{
  CDAAECGFKON_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04566e9c & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e9c = 1;
    method = extraout_x1;
  }
  __this_00 = (CDAAECGFKON_o *)thunk_FUN_01bda818(CDAAECGFKON_TypeInfo,method);
  CDAAECGFKON___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void PBEBGPLJMDE(AADKBCFCLKK CJNHFNHJHPE)  [RVA 0x32121B8]
// CDAAECGFKON$$PBEBGPLJMDE @ RVA 0x32121B8

void CDAAECGFKON__PBEBGPLJMDE(CDAAECGFKON_o *__this,AADKBCFCLKK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PMFAFJFPHGO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private static void .cctor()  [RVA 0x32121C0]
// CDAAECGFKON$$.cctor @ RVA 0x32121C0

void CDAAECGFKON___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_CDAAECGFKON__o *__this;
  
  if ((DAT_04566e9d & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    FUN_01bab630(&System_Func<CDAAECGFKON>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<CDAAECGFKON>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<CDAAECGFKON>_TypeInfo);
    FUN_01bab630(&Method_CDAAECGFKON_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&CDAAECGFKON_<>c_TypeInfo);
    DAT_04566e9d = 1;
  }
  if ((CDAAECGFKON_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<CDAAECGFKON>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_CDAAECGFKON__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<CDAAECGFKON>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<CDAAECGFKON>__ctor__);
  CDAAECGFKON_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(CDAAECGFKON_TypeInfo->static_fields,__this);
  return;
}


// ===== public static MessageParser<CDAAECGFKON> PGCAHPDCJBC()  [RVA 0x32122D8]
// CDAAECGFKON$$PGCAHPDCJBC @ RVA 0x32122D8

Google_Protobuf_MessageParser_CDAAECGFKON__o * CDAAECGFKON__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 033122e0 to 03412493 has its CatchHandler @ 033122e0
                       catch() { ... } // from try @ 033122e0 with catch @ 033122e0
                       catch() { ... } // from try @ 03312594 with catch @ 033122e0
                       catch() { ... } // from try @ 03312634 with catch @ 033122e0
                       catch() { ... } // from try @ 0331263c with catch @ 033122e0
                       catch() { ... } // from try @ 033126f0 with catch @ 033122e0 */
  if ((DAT_04566e9e & 1) == 0) {
    FUN_01bab630(&CDAAECGFKON_TypeInfo);
    DAT_04566e9e = 1;
  }
  if ((CDAAECGFKON_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return CDAAECGFKON_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x3212330]
// CDAAECGFKON$$GetHashCode @ RVA 0x3212330

int32_t CDAAECGFKON__GetHashCode(CDAAECGFKON_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  AADKBCFCLKK_o *pAVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pAVar3 = (__this->fields).PMFAFJFPHGO;
  if (pAVar3 == (AADKBCFCLKK_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pAVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pKVar4 = (__this->fields).OPHCNELIOLD;
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public AADKBCFCLKK OFEJDPOADJM()  [RVA 0x321239C]
// CDAAECGFKON$$OFEJDPOADJM @ RVA 0x321239C

AADKBCFCLKK_o * CDAAECGFKON__OFEJDPOADJM(CDAAECGFKON_o *__this,MethodInfo *method)

{
  return (__this->fields).PMFAFJFPHGO;
}

