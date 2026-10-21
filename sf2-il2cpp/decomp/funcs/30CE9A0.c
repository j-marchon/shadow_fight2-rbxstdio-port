// JHMFOIIPEHB$$MergeFrom @ RVA 0x30CE9A0

void JHMFOIIPEHB__MergeFrom
               (JHMFOIIPEHB_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  JHMFOIIPEHB_Fields *pJVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  PGICCMFLDPI_o *pPVar6;
  
                    /* try { // try from 031ce9b4 to 032ce9cb has its CatchHandler @ 031ceacc */
  if ((DAT_045662e9 & 1) == 0) {
                    /* try { // try from 031ce9cc to 032ceabb has its CatchHandler @ 031cde74 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045662e9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pJVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LMHBPLAAEIE = iVar5;
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
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pJVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pJVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pJVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

