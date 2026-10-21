// KMDOLFBIGNC$$MergeFrom @ RVA 0x31230D8

void KMDOLFBIGNC__MergeFrom
               (KMDOLFBIGNC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  KMDOLFBIGNC_Fields *pKVar2;
  uint32_t uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *pPVar6;
  
  if ((DAT_04566638 & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566638 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).PNGGPPDKHPH;
  pKVar2 = &__this->fields;
  do {
    while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar3) {
      if (uVar3 == 0x12) {
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
      else if (uVar3 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).HCBJCMDLODI = iVar4;
      }
      else {
LAB_032231bc:
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pKVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pKVar2->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pKVar2,pGVar5);
      }
    }
    if (uVar3 != 8) {
      if (uVar3 == 0) {
        return;
      }
      goto LAB_032231bc;
    }
    iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
    (__this->fields).PDOMCPONBNB = iVar4;
  } while( true );
}

