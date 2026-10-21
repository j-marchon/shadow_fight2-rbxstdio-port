// TypeDefIndex 1869
// Namespace: 
// public sealed class ELBBEAGGAOH : IMessage<ELBBEAGGAOH>, IMessage, IEquatable<ELBBEAGGAOH>, IDeepCloneable<ELBBEAGGAOH>
// Fields:
//   private static readonly MessageParser<ELBBEAGGAOH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int JMMHGCNFDJD = 1;
//   private KAMBBJFPLGM CBHDCHDBFGB; // 0x18
//   public const int KAFGKKCGKEP = 2;
//   private KAMBBJFPLGM IFDHENIKFKC; // 0x20
//   public const int GBJKIOCLJLO = 3;
//   private EKCGNICFDEO DNKENJFJOMD; // 0x28
//   public const int HHDPGKFGHJA = 4;
//   private EKCGNICFDEO FFDNNGLMPJJ; // 0x30
//   public const int KFHAHJBIBNO = 5;
//   private GLPEFEEGCPM KEIBPDJHHBB; // 0x38
//   public const int IGDMLFCJJOM = 6;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x40
//   public const int FFDAHFKILNO = 7;
//   private ByteString DKOBFIICAFM; // 0x48
//   public const int DMMOAHLBADE = 8;
//   private int EMNNAEAIMNH; // 0x50
//   public const int MODEIFFLMIF = 9;
//   private static readonly FieldCodec<KMAOIKKMFJF> AJFGPDHFEMK; // 0x8
//   private readonly RepeatedField<KMAOIKKMFJF> OOPOHLJPBHE; // 0x58

// ===== public KAMBBJFPLGM OHLPLHJKIGO()  [RVA 0x324AF40]
// ELBBEAGGAOH$$OHLPLHJKIGO @ RVA 0x324AF40

KAMBBJFPLGM_o * ELBBEAGGAOH__OHLPLHJKIGO(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).IFDHENIKFKC;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x324AF48]
// ELBBEAGGAOH$$MergeFrom @ RVA 0x324AF48

void ELBBEAGGAOH__MergeFrom
               (ELBBEAGGAOH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  GLPEFEEGCPM_o **ppGVar2;
  EKCGNICFDEO_o **ppEVar3;
  EKCGNICFDEO_o **ppEVar4;
  KAMBBJFPLGM_o **ppKVar5;
  KAMBBJFPLGM_o **ppKVar6;
  ELBBEAGGAOH_Fields *pEVar7;
  uint uVar8;
  int32_t iVar9;
  PGICCMFLDPI_o *__this_00;
  EKCGNICFDEO_o *pEVar10;
  Google_Protobuf_UnknownFieldSet_o *pGVar11;
  GLPEFEEGCPM_o *__this_01;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  KAMBBJFPLGM_o *pKVar12;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_02;
  
                    /* try { // try from 0334af5c to 0344af63 has its CatchHandler @ 0334b0ec */
  if ((DAT_045670f2 & 1) == 0) {
                    /* try { // try from 0334af78 to 0344af7f has its CatchHandler @ 0334b0e8 */
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0334af80 to 0344b0db has its CatchHandler @ 0334ab78 */
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_AddEntriesFrom__);
    DAT_045670f2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0334b290:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar8 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar8 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    ppGVar2 = &(__this->fields).KEIBPDJHHBB;
    ppEVar3 = &(__this->fields).FFDNNGLMPJJ;
    ppEVar4 = &(__this->fields).DNKENJFJOMD;
    ppKVar5 = &(__this->fields).IFDHENIKFKC;
    ppKVar6 = &(__this->fields).CBHDCHDBFGB;
    pEVar7 = &__this->fields;
    do {
      if (uVar8 < 0x23) {
        if (uVar8 < 0x13) {
          if (uVar8 == 10) {
            pKVar12 = *ppKVar6;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              pKVar12 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
              KAMBBJFPLGM___ctor(pKVar12,(MethodInfo *)0x0);
              *ppKVar6 = pKVar12;
              thunk_FUN_01c20e04(ppKVar6,pKVar12);
              pKVar12 = *ppKVar6;
            }
          }
          else {
            if (uVar8 != 0x12) {
LAB_0334b150:
                    /* try { // try from 0334b154 to 0344b15b has its CatchHandler @ 0334b15c */
              method = (MethodInfo *)0x0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334b140 with catch @ 0334b15c
                       catch(type#2 @ 00000000) { ... } // from try @ 0334b154 with catch @ 0334b15c
                        */
              pGVar11 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                  (pEVar7->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pEVar7->CKFPENBPNML = pGVar11;
              thunk_FUN_01c20e04(pEVar7,pGVar11);
              goto LAB_0334b230;
            }
            pKVar12 = *ppKVar5;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              pKVar12 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
              KAMBBJFPLGM___ctor(pKVar12,(MethodInfo *)0x0);
              *ppKVar5 = pKVar12;
              thunk_FUN_01c20e04(ppKVar5,pKVar12);
              pKVar12 = *ppKVar5;
            }
          }
        }
        else if (uVar8 == 0x1a) {
          pKVar12 = (KAMBBJFPLGM_o *)*ppEVar4;
          if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
            pEVar10 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
            EKCGNICFDEO___ctor(pEVar10,(MethodInfo *)0x0);
            *ppEVar4 = pEVar10;
            thunk_FUN_01c20e04(ppEVar4,pEVar10);
            pKVar12 = (KAMBBJFPLGM_o *)*ppEVar4;
          }
        }
        else {
          if (uVar8 != 0x22) goto LAB_0334b150;
          pKVar12 = (KAMBBJFPLGM_o *)*ppEVar3;
          if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
            pEVar10 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0334b0dc to 0344b0df has its CatchHandler @ 0334b0e4 */
            EKCGNICFDEO___ctor(pEVar10,(MethodInfo *)0x0);
                    /* try { // try from 0334b0e0 to 0344b103 has its CatchHandler @ 0334ab78 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334b0dc with catch @ 0334b0e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334af78 with catch @ 0334b0e8
                        */
            *ppEVar3 = pEVar10;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334af5c with catch @ 0334b0ec
                        */
            thunk_FUN_01c20e04(ppEVar3,pEVar10);
            pKVar12 = (KAMBBJFPLGM_o *)*ppEVar3;
          }
        }
LAB_0334b224:
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar12,(MethodInfo *)0x0);
      }
      else {
        if (uVar8 < 0x33) {
          if (uVar8 == 0x2a) {
            pKVar12 = (KAMBBJFPLGM_o *)*ppGVar2;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              __this_01 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
              GLPEFEEGCPM___ctor(__this_01,(MethodInfo *)0x0);
              *ppGVar2 = __this_01;
              thunk_FUN_01c20e04(ppGVar2,__this_01);
              pKVar12 = (KAMBBJFPLGM_o *)*ppGVar2;
            }
          }
          else {
            if (uVar8 != 0x32) goto LAB_0334b150;
            pKVar12 = (KAMBBJFPLGM_o *)*ppPVar1;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
              *ppPVar1 = __this_00;
              thunk_FUN_01c20e04(ppPVar1,__this_00);
              pKVar12 = (KAMBBJFPLGM_o *)*ppPVar1;
            }
          }
          goto LAB_0334b224;
        }
        if (uVar8 == 0x3a) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes(AIGOBLJEBCA,(MethodInfo *)0x0);
          ELBBEAGGAOH__AKKHFOGFIMC(__this,CJNHFNHJHPE,method);
        }
        else {
                    /* try { // try from 0334b104 to 0344b107 has its CatchHandler @ 0334b130 */
          if (uVar8 == 0x40) {
            iVar9 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).EMNNAEAIMNH = iVar9;
          }
          else {
                    /* try { // try from 0334b108 to 0344b13f has its CatchHandler @ 0334ab78 */
            if (uVar8 != 0x4a) goto LAB_0334b150;
            __this_02 = (__this->fields).OOPOHLJPBHE;
            if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_02 == (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0)
            goto LAB_0334b290;
                    /* catch() { ... } // from try @ 0334b104 with catch @ 0334b130 */
            method = (MethodInfo *)ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK;
                    /* try { // try from 0334b140 to 0344b147 has its CatchHandler @ 0334b15c */
                    /* try { // try from 0334b148 to 0344b153 has its CatchHandler @ 0334ab78 */
            Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,AIGOBLJEBCA,
                       (Google_Protobuf_FieldCodec_T__o *)method,
                       Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_AddEntriesFrom__
                      );
          }
        }
      }
LAB_0334b230:
      uVar8 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar8 != 0);
  }
  return;
}


// ===== public int CalculateSize()  [RVA 0x324B310]
// ELBBEAGGAOH$$CalculateSize @ RVA 0x324B310

int32_t ELBBEAGGAOH__CalculateSize(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_ByteString_o *pGVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  KAMBBJFPLGM_o *pKVar3;
  EKCGNICFDEO_o *pEVar4;
  GLPEFEEGCPM_o *value_00;
  PGICCMFLDPI_o *value_01;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_01;
  int iVar5;
  
  if ((DAT_045670f3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_CalculateSize__);
    DAT_045670f3 = 1;
    method = extraout_x1;
  }
  pKVar3 = (__this->fields).CBHDCHDBFGB;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    iVar5 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pKVar3,(MethodInfo *)0x0);
    iVar5 = iVar1 + 1;
  }
  pKVar3 = (__this->fields).IFDHENIKFKC;
  if (pKVar3 != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pKVar3,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pEVar4 = (__this->fields).DNKENJFJOMD;
  if (pEVar4 != (EKCGNICFDEO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pEVar4,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pEVar4 = (__this->fields).FFDNNGLMPJJ;
  if (pEVar4 != (EKCGNICFDEO_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)pEVar4,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  value_00 = (__this->fields).KEIBPDJHHBB;
  if (value_00 != (GLPEFEEGCPM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  value_01 = (__this->fields).MIINPPOCPCN;
  if (value_01 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
    iVar5 = iVar5 + iVar1 + 1;
  }
  pGVar2 = (__this->fields).DKOBFIICAFM;
  if (pGVar2 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(pGVar2,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      pGVar2 = (__this->fields).DKOBFIICAFM;
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeBytesSize(pGVar2,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar1 + 1;
    }
    value = (__this->fields).EMNNAEAIMNH;
    if (value != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
      iVar5 = iVar5 + iVar1 + 1;
    }
    __this_01 = (__this->fields).OOPOHLJPBHE;
    if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                         (Google_Protobuf_FieldCodec_T__o *)
                         ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK,
                         Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_CalculateSize__
                        );
      __this_00 = (__this->fields).CKFPENBPNML;
      iVar5 = iVar1 + iVar5;
      if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
        iVar5 = iVar1 + iVar5;
      }
      return iVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(ELBBEAGGAOH IBKIPBJJCPG)  [RVA 0x324B548]
// ELBBEAGGAOH$$MergeFrom @ RVA 0x324B548

void ELBBEAGGAOH__MergeFrom(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  KAMBBJFPLGM_o *pKVar3;
  EKCGNICFDEO_o *pEVar4;
  GLPEFEEGCPM_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  ELBBEAGGAOH_Fields *pEVar8;
  KAMBBJFPLGM_o **ppKVar9;
  EKCGNICFDEO_o **ppEVar10;
  GLPEFEEGCPM_o **ppGVar11;
  PGICCMFLDPI_o **ppPVar12;
  
  if ((DAT_045670f4 & 1) == 0) {
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Add__);
    DAT_045670f4 = 1;
  }
  if (IBKIPBJJCPG == (ELBBEAGGAOH_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).CBHDCHDBFGB != (KAMBBJFPLGM_o *)0x0) {
    ppKVar9 = &(__this->fields).CBHDCHDBFGB;
    pKVar3 = *ppKVar9;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar9 = pKVar3;
      thunk_FUN_01c20e04(ppKVar9,pKVar3);
      pKVar3 = *ppKVar9;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).CBHDCHDBFGB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IFDHENIKFKC != (KAMBBJFPLGM_o *)0x0) {
    ppKVar9 = &(__this->fields).IFDHENIKFKC;
    pKVar3 = *ppKVar9;
    if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
      pKVar3 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar9 = pKVar3;
      thunk_FUN_01c20e04(ppKVar9,pKVar3);
      pKVar3 = *ppKVar9;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    KAMBBJFPLGM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).IFDHENIKFKC,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).DNKENJFJOMD != (EKCGNICFDEO_o *)0x0) {
    ppEVar10 = &(__this->fields).DNKENJFJOMD;
    pEVar4 = *ppEVar10;
    if (pEVar4 == (EKCGNICFDEO_o *)0x0) {
      pEVar4 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
      EKCGNICFDEO___ctor(pEVar4,(MethodInfo *)0x0);
      *ppEVar10 = pEVar4;
      thunk_FUN_01c20e04(ppEVar10,pEVar4);
      pEVar4 = *ppEVar10;
      if (pEVar4 == (EKCGNICFDEO_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    EKCGNICFDEO__MergeFrom(pEVar4,(IBKIPBJJCPG->fields).DNKENJFJOMD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).FFDNNGLMPJJ != (EKCGNICFDEO_o *)0x0) {
    ppEVar10 = &(__this->fields).FFDNNGLMPJJ;
    pEVar4 = *ppEVar10;
    if (pEVar4 == (EKCGNICFDEO_o *)0x0) {
      pEVar4 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
      EKCGNICFDEO___ctor(pEVar4,(MethodInfo *)0x0);
      *ppEVar10 = pEVar4;
      thunk_FUN_01c20e04(ppEVar10,pEVar4);
      pEVar4 = *ppEVar10;
      if (pEVar4 == (EKCGNICFDEO_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    EKCGNICFDEO__MergeFrom(pEVar4,(IBKIPBJJCPG->fields).FFDNNGLMPJJ,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
    ppGVar11 = &(__this->fields).KEIBPDJHHBB;
    pGVar5 = *ppGVar11;
    if (pGVar5 == (GLPEFEEGCPM_o *)0x0) {
      pGVar5 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
      GLPEFEEGCPM___ctor(pGVar5,(MethodInfo *)0x0);
      *ppGVar11 = pGVar5;
      thunk_FUN_01c20e04(ppGVar11,pGVar5);
      pGVar5 = *ppGVar11;
      if (pGVar5 == (GLPEFEEGCPM_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    GLPEFEEGCPM__MergeFrom(pGVar5,(IBKIPBJJCPG->fields).KEIBPDJHHBB,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    ppPVar12 = &(__this->fields).MIINPPOCPCN;
    pPVar6 = *ppPVar12;
    if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
      pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
      *ppPVar12 = pPVar6;
      thunk_FUN_01c20e04(ppPVar12,pPVar6);
      pPVar6 = *ppPVar12;
      if (pPVar6 == (PGICCMFLDPI_o *)0x0) goto LAB_0334b82c;
    }
    method = (MethodInfo *)0x0;
    PGICCMFLDPI__MergeFrom(pPVar6,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
  }
  __this_00 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar2 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      ELBBEAGGAOH__AKKHFOGFIMC(__this,(IBKIPBJJCPG->fields).DKOBFIICAFM,method);
    }
    iVar1 = (IBKIPBJJCPG->fields).EMNNAEAIMNH;
    if (iVar1 != 0) {
      (__this->fields).EMNNAEAIMNH = iVar1;
    }
    __this_01 = (__this->fields).OOPOHLJPBHE;
    if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).OOPOHLJPBHE,
                 Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Add__);
      pEVar8 = &__this->fields;
      pGVar7 = Google_Protobuf_UnknownFieldSet__MergeFrom
                         (pEVar8->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      pEVar8->CKFPENBPNML = pGVar7;
      thunk_FUN_01c20e04(pEVar8,pGVar7);
      return;
    }
  }
LAB_0334b82c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ELBBEAGGAOH Clone()  [RVA 0x324B830]
// ELBBEAGGAOH$$Clone @ RVA 0x324B830

ELBBEAGGAOH_o * ELBBEAGGAOH__Clone(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  ELBBEAGGAOH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045670f5 & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670f5 = 1;
    method = extraout_x1;
  }
  __this_00 = (ELBBEAGGAOH_o *)thunk_FUN_01bda818(ELBBEAGGAOH_TypeInfo,method);
  ELBBEAGGAOH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public bool OMODJLCIIGD()  [RVA 0x324BA28]
// ELBBEAGGAOH$$OMODJLCIIGD @ RVA 0x324BA28

bool ELBBEAGGAOH__OMODJLCIIGD(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).EMNNAEAIMNH;
}


// ===== public KAMBBJFPLGM KBODMAFMHCC()  [RVA 0x324BA38]
// ELBBEAGGAOH$$KBODMAFMHCC @ RVA 0x324BA38

KAMBBJFPLGM_o * ELBBEAGGAOH__KBODMAFMHCC(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).CBHDCHDBFGB;
}


// ===== public RepeatedField<KMAOIKKMFJF> GDJBAKDPCEH()  [RVA 0x324BA40]
// ELBBEAGGAOH$$GDJBAKDPCEH @ RVA 0x324BA40

Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *
ELBBEAGGAOH__GDJBAKDPCEH(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).OOPOHLJPBHE;
}


// ===== public void AKKHFOGFIMC(ByteString CJNHFNHJHPE)  [RVA 0x324B294]
// ELBBEAGGAOH$$AKKHFOGFIMC @ RVA 0x324B294

void ELBBEAGGAOH__AKKHFOGFIMC
               (ELBBEAGGAOH_o *__this,Google_Protobuf_ByteString_o *CJNHFNHJHPE,MethodInfo *method)

{
  Google_Protobuf_ByteString_o *pGVar1;
  Google_Protobuf_ByteString_o **ppGVar2;
  
  if ((DAT_045670f6 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045670f6 = 1;
  }
  pGVar1 = (Google_Protobuf_ByteString_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<ByteString>__);
  ppGVar2 = &(__this->fields).DKOBFIICAFM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public override string ToString()  [RVA 0x324BA48]
// ELBBEAGGAOH$$ToString @ RVA 0x324BA48

System_String_o * ELBBEAGGAOH__ToString(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670f7 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045670f7 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x324BAA0]
// ELBBEAGGAOH$$KAIDLBNPCJH @ RVA 0x324BAA0

void ELBBEAGGAOH__KAIDLBNPCJH(ELBBEAGGAOH_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x324BAA8]
// ELBBEAGGAOH$$.ctor @ RVA 0x324BAA8

void ELBBEAGGAOH___ctor(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o **ppGVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_045670f8 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_TypeInfo);
    DAT_045670f8 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04561f53 == '\0') {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    DAT_04561f53 = '\x01';
    method = extraout_x1_01;
  }
  if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_ByteString_TypeInfo,method);
  }
  (__this->fields).DKOBFIICAFM = Google_Protobuf_ByteString_TypeInfo->static_fields->empty;
  thunk_FUN_01c20e04();
  __this_00 = (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>__ctor__);
  ppGVar1 = &(__this->fields).OOPOHLJPBHE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public GLPEFEEGCPM NEHMMPDFBOK()  [RVA 0x324BB9C]
// ELBBEAGGAOH$$NEHMMPDFBOK @ RVA 0x324BB9C

GLPEFEEGCPM_o * ELBBEAGGAOH__NEHMMPDFBOK(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).KEIBPDJHHBB;
}


// ===== public EKCGNICFDEO MFEFEPKFEJN()  [RVA 0x324BBA4]
// ELBBEAGGAOH$$MFEFEPKFEJN @ RVA 0x324BBA4

EKCGNICFDEO_o * ELBBEAGGAOH__MFEFEPKFEJN(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).DNKENJFJOMD;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x324BBAC]
// ELBBEAGGAOH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x324BBAC

Google_Protobuf_Reflection_MessageDescriptor_o *
ELBBEAGGAOH__pb__Google_Protobuf_IMessage_get_Descriptor(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  ELBBEAGGAOH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045670f9 & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670f9 = 1;
    method = extraout_x1;
  }
  method_00 = ELBBEAGGAOH_TypeInfo;
  if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (ELBBEAGGAOH_c *)thunk_FUN_01ba7564(ELBBEAGGAOH_TypeInfo,method);
  }
  pGVar1 = ELBBEAGGAOH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public bool Equals(ELBBEAGGAOH IBKIPBJJCPG)  [RVA 0x324BCFC]
// ELBBEAGGAOH$$Equals @ RVA 0x324BCFC

bool ELBBEAGGAOH__Equals(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_00;
  Google_Protobuf_ByteString_o *lhs;
  Google_Protobuf_ByteString_o *rhs;
  
  if ((DAT_045670fa & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_ByteString_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Equals__);
    DAT_045670fa = 1;
  }
  if (IBKIPBJJCPG != (ELBBEAGGAOH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).CBHDCHDBFGB,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).CBHDCHDBFGB,(MethodInfo *)0x0);
    if (((((bVar1) &&
          (bVar1 = System_Object__Equals
                             ((Il2CppObject *)(__this->fields).IFDHENIKFKC,
                              (Il2CppObject *)(IBKIPBJJCPG->fields).IFDHENIKFKC,(MethodInfo *)0x0),
          bVar1)) &&
         (bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).DNKENJFJOMD,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).DNKENJFJOMD,(MethodInfo *)0x0),
         bVar1)) &&
        ((bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).FFDNNGLMPJJ,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).FFDNNGLMPJJ,(MethodInfo *)0x0),
         bVar1 && (bVar1 = System_Object__Equals
                                     ((Il2CppObject *)(__this->fields).KEIBPDJHHBB,
                                      (Il2CppObject *)(IBKIPBJJCPG->fields).KEIBPDJHHBB,
                                      (MethodInfo *)0x0), bVar1)))) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      lhs = (__this->fields).DKOBFIICAFM;
      rhs = (IBKIPBJJCPG->fields).DKOBFIICAFM;
      if ((Google_Protobuf_ByteString_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = Google_Protobuf_ByteString__op_Inequality(lhs,rhs,(MethodInfo *)0x0);
      if ((!bVar1) && ((__this->fields).EMNNAEAIMNH == (IBKIPBJJCPG->fields).EMNNAEAIMNH)) {
        __this_00 = (__this->fields).OOPOHLJPBHE;
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).OOPOHLJPBHE,
                           Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Equals__);
        if (bVar1) {
          bVar1 = System_Object__Equals
                            ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                             (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
  return false;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x324BE60]
// ELBBEAGGAOH$$Equals @ RVA 0x324BE60

bool ELBBEAGGAOH__Equals(ELBBEAGGAOH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045670fb & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670fb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)ELBBEAGGAOH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = ELBBEAGGAOH__Equals(__this,(ELBBEAGGAOH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x324BBF8]
// ELBBEAGGAOH$$FFHIHGCDGAK @ RVA 0x324BBF8

Google_Protobuf_Reflection_MessageDescriptor_o * ELBBEAGGAOH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045670fc & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045670fc = 1;
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
        goto LAB_0334bce0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0334bce0:
                    /* WARNING: Could not recover jumptable at 0x0334bcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1d,pVVar2->method);
  return pGVar3;
}


// ===== public static MessageParser<ELBBEAGGAOH> PGCAHPDCJBC()  [RVA 0x324BEC4]
// ELBBEAGGAOH$$PGCAHPDCJBC @ RVA 0x324BEC4

Google_Protobuf_MessageParser_ELBBEAGGAOH__o * ELBBEAGGAOH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045670fd & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    DAT_045670fd = 1;
  }
  if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return ELBBEAGGAOH_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void HJNKIBNHMFL(EKCGNICFDEO CJNHFNHJHPE)  [RVA 0x324BF1C]
// ELBBEAGGAOH$$HJNKIBNHMFL @ RVA 0x324BF1C

void ELBBEAGGAOH__HJNKIBNHMFL(ELBBEAGGAOH_o *__this,EKCGNICFDEO_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).FFDNNGLMPJJ = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void FBKOPIHENKH(GLPEFEEGCPM CJNHFNHJHPE)  [RVA 0x324BF24]
// ELBBEAGGAOH$$FBKOPIHENKH @ RVA 0x324BF24

void ELBBEAGGAOH__FBKOPIHENKH(ELBBEAGGAOH_o *__this,GLPEFEEGCPM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KEIBPDJHHBB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void AGDGBCGODOA(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x324BF2C]
// ELBBEAGGAOH$$AGDGBCGODOA @ RVA 0x324BF2C

void ELBBEAGGAOH__AGDGBCGODOA(ELBBEAGGAOH_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).CBHDCHDBFGB = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int IBNPJPGEJAG()  [RVA 0x324BF34]
// ELBBEAGGAOH$$IBNPJPGEJAG @ RVA 0x324BF34

int32_t ELBBEAGGAOH__IBNPJPGEJAG(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).EMNNAEAIMNH;
}


// ===== public void KNFMKNJLEIP(int CJNHFNHJHPE)  [RVA 0x324BF3C]
// ELBBEAGGAOH$$KNFMKNJLEIP @ RVA 0x324BF3C

void ELBBEAGGAOH__KNFMKNJLEIP(ELBBEAGGAOH_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).EMNNAEAIMNH = CJNHFNHJHPE;
  return;
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x324BF44]
// ELBBEAGGAOH$$MLFJHBIJMAA @ RVA 0x324BF44

PGICCMFLDPI_o * ELBBEAGGAOH__MLFJHBIJMAA(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== public override int GetHashCode()  [RVA 0x324BF4C]
// ELBBEAGGAOH$$GetHashCode @ RVA 0x324BF4C

int32_t ELBBEAGGAOH__GetHashCode(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int32_t iVar4;
  KAMBBJFPLGM_o *pKVar5;
  EKCGNICFDEO_o *pEVar6;
  GLPEFEEGCPM_o *pGVar7;
  PGICCMFLDPI_o *pPVar8;
  Google_Protobuf_ByteString_o *pGVar9;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *pGVar10;
  Google_Protobuf_UnknownFieldSet_o *pGVar11;
  int local_14;
  
  local_14 = 0;
  pKVar5 = (__this->fields).CBHDCHDBFGB;
  if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pKVar5 = (__this->fields).IFDHENIKFKC;
  if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
    uVar3 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pEVar6 = (__this->fields).DNKENJFJOMD;
  if (pEVar6 != (EKCGNICFDEO_o *)0x0) {
    uVar3 = (*(pEVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar6,(pEVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pEVar6 = (__this->fields).FFDNNGLMPJJ;
  if (pEVar6 != (EKCGNICFDEO_o *)0x0) {
    uVar3 = (*(pEVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pEVar6,(pEVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar7 = (__this->fields).KEIBPDJHHBB;
  if (pGVar7 != (GLPEFEEGCPM_o *)0x0) {
    uVar3 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pPVar8 = (__this->fields).MIINPPOCPCN;
  if (pPVar8 != (PGICCMFLDPI_o *)0x0) {
    uVar3 = (*(pPVar8->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar8,(pPVar8->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar9 = (__this->fields).DKOBFIICAFM;
  if (pGVar9 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar4 = Google_Protobuf_ByteString__get_Length(pGVar9,(MethodInfo *)0x0);
    if (iVar4 != 0) {
      pGVar9 = (__this->fields).DKOBFIICAFM;
      if (pGVar9 == (Google_Protobuf_ByteString_o *)0x0) goto LAB_0334c080;
      uVar3 = (*(pGVar9->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar9,(pGVar9->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    iVar1 = (__this->fields).EMNNAEAIMNH;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar10 = (__this->fields).OOPOHLJPBHE;
    if (pGVar10 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      uVar3 = (*(pGVar10->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar10,(pGVar10->klass->vtable)._2_GetHashCode.method);
      pGVar11 = (__this->fields).CKFPENBPNML;
      uVar3 = uVar3 ^ uVar2;
      if (pGVar11 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar11->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar11,(pGVar11->klass->vtable)._2_GetHashCode.method);
        uVar3 = uVar2 ^ uVar3;
      }
      return uVar3;
    }
  }
LAB_0334c080:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public EKCGNICFDEO HBGDHEKECLB()  [RVA 0x324C084]
// ELBBEAGGAOH$$HBGDHEKECLB @ RVA 0x324C084

EKCGNICFDEO_o * ELBBEAGGAOH__HBGDHEKECLB(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).FFDNNGLMPJJ;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x324C08C]
// ELBBEAGGAOH$$WriteTo @ RVA 0x324C08C

void ELBBEAGGAOH__WriteTo
               (ELBBEAGGAOH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_ByteString_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_02;
  
  if ((DAT_045670fe & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_WriteTo__);
    DAT_045670fe = 1;
  }
  if ((__this->fields).CBHDCHDBFGB != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).CBHDCHDBFGB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IFDHENIKFKC != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IFDHENIKFKC,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).DNKENJFJOMD != (EKCGNICFDEO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).DNKENJFJOMD,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).FFDNNGLMPJJ != (EKCGNICFDEO_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x22,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).FFDNNGLMPJJ,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).KEIBPDJHHBB != (GLPEFEEGCPM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x2a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).KEIBPDJHHBB,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x32,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).DKOBFIICAFM;
  if (__this_00 != (Google_Protobuf_ByteString_o *)0x0) {
    iVar1 = Google_Protobuf_ByteString__get_Length(__this_00,(MethodInfo *)0x0);
    if (iVar1 != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x3a,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteBytes
                (JBGJLELBMJF,(__this->fields).DKOBFIICAFM,(MethodInfo *)0x0);
    }
    if ((__this->fields).EMNNAEAIMNH != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0334c2ac;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x40,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).EMNNAEAIMNH,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).OOPOHLJPBHE;
    if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_02 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK
                 ,Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_WriteTo__);
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_0334c2ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HDEHJOMKACF(EKCGNICFDEO CJNHFNHJHPE)  [RVA 0x324C2B0]
// ELBBEAGGAOH$$HDEHJOMKACF @ RVA 0x324C2B0

void ELBBEAGGAOH__HDEHJOMKACF(ELBBEAGGAOH_o *__this,EKCGNICFDEO_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DNKENJFJOMD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private static void .cctor()  [RVA 0x324C2B8]
// ELBBEAGGAOH$$.cctor @ RVA 0x324C2B8

void ELBBEAGGAOH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_ELBBEAGGAOH__o *__this;
  Google_Protobuf_FieldCodec_KMAOIKKMFJF__o *pGVar1;
  Google_Protobuf_FieldCodec_KMAOIKKMFJF__o **ppGVar2;
  
  if ((DAT_045670ff & 1) == 0) {
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KMAOIKKMFJF>__);
    FUN_01bab630(&System_Func<ELBBEAGGAOH>_TypeInfo);
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<ELBBEAGGAOH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<ELBBEAGGAOH>_TypeInfo);
    FUN_01bab630(&Method_ELBBEAGGAOH_<>c_CDFJHKCBBBE__);
    FUN_01bab630(&ELBBEAGGAOH_<>c_TypeInfo);
    DAT_045670ff = 1;
  }
  if ((ELBBEAGGAOH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<ELBBEAGGAOH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_ELBBEAGGAOH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<ELBBEAGGAOH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<ELBBEAGGAOH>__ctor__);
  ELBBEAGGAOH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(ELBBEAGGAOH_TypeInfo->static_fields,__this);
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567180 == '\0') {
    FUN_01bab630(&KMAOIKKMFJF_TypeInfo);
    DAT_04567180 = '\x01';
  }
  if ((KMAOIKKMFJF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KMAOIKKMFJF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x4a,(Google_Protobuf_MessageParser_T__o *)
                           KMAOIKKMFJF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KMAOIKKMFJF>__);
  ppGVar2 = &ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void BAOCCAEDMHI(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x324C468]
// ELBBEAGGAOH$$BAOCCAEDMHI @ RVA 0x324C468

void ELBBEAGGAOH__BAOCCAEDMHI(ELBBEAGGAOH_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IFDHENIKFKC = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(ELBBEAGGAOH IBKIPBJJCPG)  [RVA 0x324B888]
// ELBBEAGGAOH$$.ctor @ RVA 0x324B888

void ELBBEAGGAOH___ctor(ELBBEAGGAOH_o *__this,ELBBEAGGAOH_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EKCGNICFDEO_o *pEVar2;
  GLPEFEEGCPM_o *pGVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  ELBBEAGGAOH_o *extraout_x1;
  ELBBEAGGAOH_o *method_00;
  Google_Protobuf_ByteString_o **ppGVar7;
  
  method_00 = IBKIPBJJCPG;
  if ((DAT_04567100 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Clone__);
    DAT_04567100 = 1;
    method_00 = extraout_x1;
  }
  ELBBEAGGAOH___ctor(__this,(MethodInfo *)method_00);
  if (IBKIPBJJCPG != (ELBBEAGGAOH_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).CBHDCHDBFGB;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (ELBBEAGGAOH_o *)0x0) {
      (__this->fields).CBHDCHDBFGB = pKVar1;
      thunk_FUN_01c20e04();
      pKVar1 = (IBKIPBJJCPG->fields).IFDHENIKFKC;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
        pKVar1 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
      }
      (__this->fields).IFDHENIKFKC = pKVar1;
      thunk_FUN_01c20e04();
      pEVar2 = (IBKIPBJJCPG->fields).DNKENJFJOMD;
      if (pEVar2 == (EKCGNICFDEO_o *)0x0) {
        pEVar2 = (EKCGNICFDEO_o *)0x0;
      }
      else {
        pEVar2 = EKCGNICFDEO__Clone(pEVar2,(MethodInfo *)0x0);
      }
      (__this->fields).DNKENJFJOMD = pEVar2;
      thunk_FUN_01c20e04();
      pEVar2 = (IBKIPBJJCPG->fields).FFDNNGLMPJJ;
      if (pEVar2 == (EKCGNICFDEO_o *)0x0) {
        pEVar2 = (EKCGNICFDEO_o *)0x0;
      }
      else {
        pEVar2 = EKCGNICFDEO__Clone(pEVar2,(MethodInfo *)0x0);
      }
      (__this->fields).FFDNNGLMPJJ = pEVar2;
      thunk_FUN_01c20e04();
      pGVar3 = (IBKIPBJJCPG->fields).KEIBPDJHHBB;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
        pGVar3 = (GLPEFEEGCPM_o *)0x0;
      }
      else {
        pGVar3 = GLPEFEEGCPM__Clone(pGVar3,(MethodInfo *)0x0);
      }
      (__this->fields).KEIBPDJHHBB = pGVar3;
      thunk_FUN_01c20e04();
      pPVar4 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
      if (pPVar4 == (PGICCMFLDPI_o *)0x0) {
        pPVar4 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar4 = PGICCMFLDPI__Clone(pPVar4,(MethodInfo *)0x0);
      }
      (__this->fields).MIINPPOCPCN = pPVar4;
      thunk_FUN_01c20e04();
      ppGVar7 = &(__this->fields).DKOBFIICAFM;
      *ppGVar7 = (IBKIPBJJCPG->fields).DKOBFIICAFM;
      thunk_FUN_01c20e04(ppGVar7);
      (__this->fields).EMNNAEAIMNH = (IBKIPBJJCPG->fields).EMNNAEAIMNH;
      pGVar5 = (IBKIPBJJCPG->fields).OOPOHLJPBHE;
      if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0) {
        pGVar5 = (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,
                            Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_Clone__);
        (__this->fields).OOPOHLJPBHE = pGVar5;
        thunk_FUN_01c20e04();
        pGVar6 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar6;
        thunk_FUN_01c20e04(&__this->fields,pGVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ByteString JCIKECEOHAJ()  [RVA 0x324C470]
// ELBBEAGGAOH$$JCIKECEOHAJ @ RVA 0x324C470

Google_Protobuf_ByteString_o * ELBBEAGGAOH__JCIKECEOHAJ(ELBBEAGGAOH_o *__this,MethodInfo *method)

{
  return (__this->fields).DKOBFIICAFM;
}

