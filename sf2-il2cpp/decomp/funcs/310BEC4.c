// BDMABHJEEGD$$MergeFrom @ RVA 0x310BEC4

void BDMABHJEEGD__MergeFrom
               (BDMABHJEEGD_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  BECIPDJBAOG_o **ppBVar2;
  PGICCMFLDPI_o **ppPVar3;
  PGICCMFLDPI_o **ppPVar4;
  BDMABHJEEGD_Fields *pBVar5;
  uint uVar6;
  int32_t iVar7;
  PGICCMFLDPI_o *pPVar8;
  Google_Protobuf_UnknownFieldSet_o *pGVar9;
  BECIPDJBAOG_o *pBVar10;
  
  if ((DAT_04566547 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566547 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 != 0) {
    ppPVar1 = &(__this->fields).GMHNOGKNFNB;
    ppBVar2 = &(__this->fields).MJIIHOLHNCK;
    ppPVar3 = &(__this->fields).IMNALGKNMNP;
    ppPVar4 = &(__this->fields).LBKLNIPHGMM;
    pBVar5 = &__this->fields;
    do {
      if (uVar6 < 0x1b) {
        if (uVar6 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OHMDCKEDOGH = iVar7;
        }
        else {
          if (uVar6 == 0x12) {
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar4;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar4 = pPVar8;
              thunk_FUN_01c20e04(ppPVar4,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar4;
            }
          }
          else {
            if (uVar6 != 0x1a) goto LAB_0320c00c;
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar3;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar3 = pPVar8;
              thunk_FUN_01c20e04(ppPVar3,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar3;
            }
          }
LAB_0320c0bc:
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar10,(MethodInfo *)0x0);
        }
      }
      else {
        if (0x28 < uVar6) {
          if (uVar6 == 0x32) {
            pBVar10 = *ppBVar2;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pBVar10 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
              BECIPDJBAOG___ctor(pBVar10,(MethodInfo *)0x0);
              *ppBVar2 = pBVar10;
              thunk_FUN_01c20e04(ppBVar2,pBVar10);
              pBVar10 = *ppBVar2;
            }
          }
          else {
            if (uVar6 != 0x3a) goto LAB_0320c00c;
            pBVar10 = (BECIPDJBAOG_o *)*ppPVar1;
            if (pBVar10 == (BECIPDJBAOG_o *)0x0) {
              pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
              *ppPVar1 = pPVar8;
              thunk_FUN_01c20e04(ppPVar1,pPVar8);
              pBVar10 = (BECIPDJBAOG_o *)*ppPVar1;
            }
          }
          goto LAB_0320c0bc;
        }
        if (uVar6 == 0x20) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OOCPIHHNOBO = iVar7;
        }
        else if (uVar6 == 0x28) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).CLLIINPOPHO = iVar7;
        }
        else {
LAB_0320c00c:
          pGVar9 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pBVar5->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pBVar5->CKFPENBPNML = pGVar9;
          thunk_FUN_01c20e04(pBVar5,pGVar9);
        }
      }
      uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar6 != 0);
  }
  return;
}

