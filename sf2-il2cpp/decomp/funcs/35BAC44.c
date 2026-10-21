// OLCBPIHLPEC$$MergeFrom @ RVA 0x35BAC44

void OLCBPIHLPEC__MergeFrom
               (OLCBPIHLPEC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  OLCBPIHLPEC_Fields *pOVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int64_t iVar7;
  PGICCMFLDPI_o *pPVar8;
  
  if ((DAT_04568ecb & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04568ecb = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar3 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pOVar2 = &__this->fields;
    do {
      if (uVar3 < 0x13) {
        if (uVar3 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).NGODFBDEMLE = iVar7;
        }
        else if (uVar3 == 0x12) {
          pSVar5 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          OLCBPIHLPEC__EEMGLBFKELA(__this,pSVar5,method);
        }
        else {
LAB_036bad2c:
          method = (MethodInfo *)0x0;
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pOVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pOVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pOVar2,pGVar6);
        }
      }
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).EMDNDLOODLG = iVar4;
      }
      else if (uVar3 == 0x22) {
        pSVar5 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        OLCBPIHLPEC__IPNMMELEIJE(__this,pSVar5,method);
      }
      else {
        if (uVar3 != 0x2a) goto LAB_036bad2c;
        pPVar8 = *ppPVar1;
        if (pPVar8 == (PGICCMFLDPI_o *)0x0) {
          pPVar8 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar8,(MethodInfo *)0x0);
          *ppPVar1 = pPVar8;
          thunk_FUN_01c20e04(ppPVar1,pPVar8);
          pPVar8 = *ppPVar1;
        }
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar8,(MethodInfo *)0x0);
      }
      uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar3 != 0);
  }
  return;
}

