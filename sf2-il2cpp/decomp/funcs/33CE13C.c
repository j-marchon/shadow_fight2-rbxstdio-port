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

