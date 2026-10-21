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

