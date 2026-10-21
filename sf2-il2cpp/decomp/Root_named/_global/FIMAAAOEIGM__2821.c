// TypeDefIndex 2821
// Namespace: 
// public sealed class FIMAAAOEIGM : IMessage<FIMAAAOEIGM>, IMessage, IEquatable<FIMAAAOEIGM>, IDeepCloneable<FIMAAAOEIGM>
// Fields:
//   private static readonly MessageParser<FIMAAAOEIGM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MPGIALFAHMH = 1;
//   private AADKBCFCLKK PMFAFJFPHGO; // 0x18
//   public const int APNHEJIIIOK = 2;
//   private bool AFIPKDNMBKJ; // 0x20
//   public const int FHBKDHIFKHM = 3;
//   private PGICCMFLDPI OBKCJGGIEMF; // 0x28
//   public const int KGBOMFIKDEC = 4;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x30

// ===== public void MergeFrom(FIMAAAOEIGM IBKIPBJJCPG)  [RVA 0x3425874]
// FIMAAAOEIGM$$MergeFrom @ RVA 0x3425874

void FIMAAAOEIGM__MergeFrom(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  FIMAAAOEIGM_Fields *pFVar5;
  AADKBCFCLKK_o **ppAVar6;
  PGICCMFLDPI_o **ppPVar7;
  KAMBBJFPLGM_o **ppKVar8;
  
  if ((DAT_04568107 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568107 = 1;
  }
  if (IBKIPBJJCPG == (FIMAAAOEIGM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    ppAVar6 = &(__this->fields).PMFAFJFPHGO;
    pAVar1 = *ppAVar6;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar6 = pAVar1;
      thunk_FUN_01c20e04(ppAVar6,pAVar1);
      pAVar1 = *ppAVar6;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_03525a0c;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).AFIPKDNMBKJ != false) {
    (__this->fields).AFIPKDNMBKJ = true;
  }
  if ((IBKIPBJJCPG->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    ppPVar7 = &(__this->fields).OBKCJGGIEMF;
    pPVar2 = *ppPVar7;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar7 = pPVar2;
      thunk_FUN_01c20e04(ppPVar7,pPVar2);
      pPVar2 = *ppPVar7;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) goto LAB_03525a0c;
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar8 = &(__this->fields).OPHCNELIOLD;
    pKVar3 = *ppKVar8;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar8 = pKVar3;
      thunk_FUN_01c20e04(ppKVar8,pKVar3);
      pKVar3 = *ppKVar8;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
LAB_03525a0c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pFVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pFVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pFVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pFVar5,pGVar4);
  return;
}


// ===== public void EOAPIKJCIMD(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x3425A10]
// FIMAAAOEIGM$$EOAPIKJCIMD @ RVA 0x3425A10

void FIMAAAOEIGM__EOAPIKJCIMD(FIMAAAOEIGM_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OBKCJGGIEMF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int CalculateSize()  [RVA 0x3425A18]
// FIMAAAOEIGM$$CalculateSize @ RVA 0x3425A18

int32_t FIMAAAOEIGM__CalculateSize(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  AADKBCFCLKK_o *value;
  PGICCMFLDPI_o *value_00;
  KAMBBJFPLGM_o *value_01;
  
  if ((DAT_04568108 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568108 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).PMFAFJFPHGO;
  if (value == (AADKBCFCLKK_o *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OBKCJGGIEMF;
  if ((__this->fields).AFIPKDNMBKJ != false) {
    iVar2 = iVar2 + 2;
  }
  if (value_00 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  value_01 = (__this->fields).OPHCNELIOLD;
  if (value_01 != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3425B10]
// FIMAAAOEIGM$$MergeFrom @ RVA 0x3425B10

void FIMAAAOEIGM__MergeFrom
               (FIMAAAOEIGM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  PGICCMFLDPI_o **ppPVar2;
  AADKBCFCLKK_o **ppAVar3;
  FIMAAAOEIGM_Fields *pFVar4;
  bool bVar5;
  uint uVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  AADKBCFCLKK_o *__this_00;
  PGICCMFLDPI_o *__this_01;
  KAMBBJFPLGM_o *pKVar8;
  
  if ((DAT_04568109 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568109 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 != 0) {
    ppKVar1 = &(__this->fields).OPHCNELIOLD;
    ppPVar2 = &(__this->fields).OBKCJGGIEMF;
    ppAVar3 = &(__this->fields).PMFAFJFPHGO;
    pFVar4 = &__this->fields;
    do {
      if (uVar6 < 0x11) {
        if (uVar6 == 10) {
          pKVar8 = (KAMBBJFPLGM_o *)*ppAVar3;
          if (pKVar8 == (KAMBBJFPLGM_o *)0x0) {
            __this_00 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
            AADKBCFCLKK___ctor(__this_00,(MethodInfo *)0x0);
            *ppAVar3 = __this_00;
            thunk_FUN_01c20e04(ppAVar3,__this_00);
            pKVar8 = (KAMBBJFPLGM_o *)*ppAVar3;
          }
          goto LAB_03525ca0;
        }
        if (uVar6 == 0x10) {
          bVar5 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).AFIPKDNMBKJ = bVar5;
        }
        else {
LAB_03525c18:
          pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pFVar4->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pFVar4->CKFPENBPNML = pGVar7;
          thunk_FUN_01c20e04(pFVar4,pGVar7);
        }
      }
      else {
        if (uVar6 == 0x1a) {
          pKVar8 = (KAMBBJFPLGM_o *)*ppPVar2;
          if (pKVar8 == (KAMBBJFPLGM_o *)0x0) {
            __this_01 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(__this_01,(MethodInfo *)0x0);
            *ppPVar2 = __this_01;
            thunk_FUN_01c20e04(ppPVar2,__this_01);
            pKVar8 = (KAMBBJFPLGM_o *)*ppPVar2;
          }
        }
        else {
          if (uVar6 != 0x22) goto LAB_03525c18;
          pKVar8 = *ppKVar1;
          if (pKVar8 == (KAMBBJFPLGM_o *)0x0) {
            pKVar8 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
            KAMBBJFPLGM___ctor(pKVar8,(MethodInfo *)0x0);
            *ppKVar1 = pKVar8;
            thunk_FUN_01c20e04(ppKVar1,pKVar8);
            pKVar8 = *ppKVar1;
          }
        }
LAB_03525ca0:
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar8,(MethodInfo *)0x0);
      }
      uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar6 != 0);
  }
  return;
}


// ===== public bool KPLCEBDFCNC()  [RVA 0x3425CDC]
// FIMAAAOEIGM$$KPLCEBDFCNC @ RVA 0x3425CDC

bool FIMAAAOEIGM__KPLCEBDFCNC(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  return (__this->fields).AFIPKDNMBKJ;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x3425CE4]
// FIMAAAOEIGM$$JCKINNMKHBA @ RVA 0x3425CE4

KAMBBJFPLGM_o * FIMAAAOEIGM__JCKINNMKHBA(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x3425CEC]
// FIMAAAOEIGM$$IIBFFDJAKFB @ RVA 0x3425CEC

void FIMAAAOEIGM__IIBFFDJAKFB(FIMAAAOEIGM_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(FIMAAAOEIGM IBKIPBJJCPG)  [RVA 0x3425CF4]
// FIMAAAOEIGM$$.ctor @ RVA 0x3425CF4

void FIMAAAOEIGM___ctor(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  AADKBCFCLKK_o **ppAVar5;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (FIMAAAOEIGM_o *)0x0) {
    pAVar1 = (IBKIPBJJCPG->fields).PMFAFJFPHGO;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)0x0;
    }
    else {
      pAVar1 = AADKBCFCLKK__Clone(pAVar1,(MethodInfo *)0x0);
    }
    if (__this != (FIMAAAOEIGM_o *)0x0) {
      ppAVar5 = &(__this->fields).PMFAFJFPHGO;
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5);
      (__this->fields).AFIPKDNMBKJ = (IBKIPBJJCPG->fields).AFIPKDNMBKJ;
      pPVar2 = (IBKIPBJJCPG->fields).OBKCJGGIEMF;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OBKCJGGIEMF = pPVar2;
      thunk_FUN_01c20e04();
      pKVar3 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
        pKVar3 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar3 = KAMBBJFPLGM__Clone(pKVar3,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar3;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3425DC8]
// FIMAAAOEIGM$$ToString @ RVA 0x3425DC8

System_String_o * FIMAAAOEIGM__ToString(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456810a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456810a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void KMCLBIGPCDD(bool CJNHFNHJHPE)  [RVA 0x3425E20]
// FIMAAAOEIGM$$KMCLBIGPCDD @ RVA 0x3425E20

void FIMAAAOEIGM__KMCLBIGPCDD(FIMAAAOEIGM_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AFIPKDNMBKJ = CJNHFNHJHPE;
  return;
}


// ===== public PGICCMFLDPI GJAMLPCIDGC()  [RVA 0x3425E2C]
// FIMAAAOEIGM$$GJAMLPCIDGC @ RVA 0x3425E2C

PGICCMFLDPI_o * FIMAAAOEIGM__GJAMLPCIDGC(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  return (__this->fields).OBKCJGGIEMF;
}


// ===== public AADKBCFCLKK OFEJDPOADJM()  [RVA 0x3425E34]
// FIMAAAOEIGM$$OFEJDPOADJM @ RVA 0x3425E34

AADKBCFCLKK_o * FIMAAAOEIGM__OFEJDPOADJM(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  return (__this->fields).PMFAFJFPHGO;
}


// ===== public FIMAAAOEIGM Clone()  [RVA 0x3425E3C]
// FIMAAAOEIGM$$Clone @ RVA 0x3425E3C

FIMAAAOEIGM_o * FIMAAAOEIGM__Clone(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  FIMAAAOEIGM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456810b & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810b = 1;
    method = extraout_x1;
  }
  __this_00 = (FIMAAAOEIGM_o *)thunk_FUN_01bda818(FIMAAAOEIGM_TypeInfo,method);
  FIMAAAOEIGM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3425E94]
// FIMAAAOEIGM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3425E94

Google_Protobuf_Reflection_MessageDescriptor_o *
FIMAAAOEIGM__pb__Google_Protobuf_IMessage_get_Descriptor(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  FIMAAAOEIGM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456810c & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810c = 1;
    method = extraout_x1;
  }
  method_00 = FIMAAAOEIGM_TypeInfo;
  if ((FIMAAAOEIGM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FIMAAAOEIGM_c *)thunk_FUN_01ba7564(FIMAAAOEIGM_TypeInfo,method);
  }
  pGVar1 = FIMAAAOEIGM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3425EE0]
// FIMAAAOEIGM$$FFHIHGCDGAK @ RVA 0x3425EE0

Google_Protobuf_Reflection_MessageDescriptor_o * FIMAAAOEIGM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456810d & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456810d = 1;
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
        goto LAB_03525fc8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03525fc8:
                    /* WARNING: Could not recover jumptable at 0x03525fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x29,pVVar2->method);
  return pGVar3;
}


// ===== public void PBEBGPLJMDE(AADKBCFCLKK CJNHFNHJHPE)  [RVA 0x3425FE4]
// FIMAAAOEIGM$$PBEBGPLJMDE @ RVA 0x3425FE4

void FIMAAAOEIGM__PBEBGPLJMDE(FIMAAAOEIGM_o *__this,AADKBCFCLKK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PMFAFJFPHGO = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3425FEC]
// FIMAAAOEIGM$$WriteTo @ RVA 0x3425FEC

void FIMAAAOEIGM__WriteTo
               (FIMAAAOEIGM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035260d4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PMFAFJFPHGO,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).AFIPKDNMBKJ != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035260d4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).AFIPKDNMBKJ,(MethodInfo *)0x0);
  }
  if ((__this->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035260d4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OBKCJGGIEMF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_035260d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34260D8]
// FIMAAAOEIGM$$Equals @ RVA 0x34260D8

bool FIMAAAOEIGM__Equals(FIMAAAOEIGM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456810e & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810e = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)FIMAAAOEIGM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = FIMAAAOEIGM__Equals(__this,(FIMAAAOEIGM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3425DC0]
// FIMAAAOEIGM$$.ctor @ RVA 0x3425DC0

void FIMAAAOEIGM___ctor(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<FIMAAAOEIGM> PGCAHPDCJBC()  [RVA 0x34261E4]
// FIMAAAOEIGM$$PGCAHPDCJBC @ RVA 0x34261E4

Google_Protobuf_MessageParser_FIMAAAOEIGM__o * FIMAAAOEIGM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456810f & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    DAT_0456810f = 1;
  }
  if ((FIMAAAOEIGM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return FIMAAAOEIGM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x342623C]
// FIMAAAOEIGM$$GetHashCode @ RVA 0x342623C

int32_t FIMAAAOEIGM__GetHashCode(FIMAAAOEIGM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  AADKBCFCLKK_o *pAVar3;
  PGICCMFLDPI_o *pPVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04568110 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_04568110 = 1;
    method = extraout_x1;
  }
  pAVar3 = (__this->fields).PMFAFJFPHGO;
  if (pAVar3 == (AADKBCFCLKK_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pAVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1_00;
  }
  if ((__this->fields).AFIPKDNMBKJ != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pPVar4 = (__this->fields).OBKCJGGIEMF;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pKVar5 = (__this->fields).OPHCNELIOLD;
  if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== private static void .cctor()  [RVA 0x342631C]
// FIMAAAOEIGM$$.cctor @ RVA 0x342631C

void FIMAAAOEIGM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FIMAAAOEIGM__o *__this;
  
  if ((DAT_04568111 & 1) == 0) {
    FUN_01bab630(&FIMAAAOEIGM_TypeInfo);
    FUN_01bab630(&System_Func<FIMAAAOEIGM>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FIMAAAOEIGM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FIMAAAOEIGM>_TypeInfo);
    FUN_01bab630(&Method_FIMAAAOEIGM_<>c_LNJPIHAONCC__);
    FUN_01bab630(&FIMAAAOEIGM_<>c_TypeInfo);
    DAT_04568111 = 1;
  }
  if ((FIMAAAOEIGM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FIMAAAOEIGM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FIMAAAOEIGM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FIMAAAOEIGM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FIMAAAOEIGM>__ctor__);
  FIMAAAOEIGM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FIMAAAOEIGM_TypeInfo->static_fields,__this);
  return;
}


// ===== public bool Equals(FIMAAAOEIGM IBKIPBJJCPG)  [RVA 0x342613C]
// FIMAAAOEIGM$$Equals @ RVA 0x342613C

bool FIMAAAOEIGM__Equals(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (FIMAAAOEIGM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PMFAFJFPHGO,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
    if ((((bVar1) &&
         (((__this->fields).AFIPKDNMBKJ != false) == ((IBKIPBJJCPG->fields).AFIPKDNMBKJ != false)))
        && (bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).OBKCJGGIEMF,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0),
           bVar1)) &&
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

