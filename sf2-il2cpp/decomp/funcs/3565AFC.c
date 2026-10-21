// CADIGFIBFEN$$MergeFrom @ RVA 0x3565AFC

void CADIGFIBFEN__MergeFrom
               (CADIGFIBFEN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  CADIGFIBFEN_Fields *pCVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  PGICCMFLDPI_o *pPVar7;
  
  if ((DAT_04568bf2 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568bf2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pCVar2 = &__this->fields;
    do {
      if (uVar4 < 0x13) {
        if (uVar4 == 8) {
          bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PCKJAOOKJKK = bVar3;
        }
        else if (uVar4 == 0x12) {
          pPVar7 = *ppPVar1;
          if (pPVar7 == (PGICCMFLDPI_o *)0x0) {
            pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
            PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
            *ppPVar1 = pPVar7;
            thunk_FUN_01c20e04(ppPVar1,pPVar7);
            pPVar7 = *ppPVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar7,(MethodInfo *)0x0);
        }
        else {
LAB_03665bd4:
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pCVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pCVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pCVar2,pGVar6);
        }
      }
      else if (uVar4 == 0x20) {
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PLIIOMEEPLO = bVar3;
      }
      else {
        if (uVar4 != 0x28) goto LAB_03665bd4;
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).BLGKCOLNMCK = iVar5;
      }
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}

