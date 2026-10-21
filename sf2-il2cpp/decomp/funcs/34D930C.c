// OJHLANCHFPC$$MergeFrom @ RVA 0x34D930C

void OJHLANCHFPC__MergeFrom
               (OJHLANCHFPC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  AADKBCFCLKK_o **ppAVar2;
  OJHLANCHFPC_Fields *pOVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *__this_00;
  AADKBCFCLKK_o *pAVar6;
  
  if ((DAT_045686fa & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045686fa = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).OBKCJGGIEMF;
  ppAVar2 = &(__this->fields).PKIDDHNAOAC;
  pOVar3 = &__this->fields;
LAB_035d9370:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pAVar6 = *ppAVar2;
      if (pAVar6 == (AADKBCFCLKK_o *)0x0) {
        pAVar6 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
        AADKBCFCLKK___ctor(pAVar6,(MethodInfo *)0x0);
        *ppAVar2 = pAVar6;
        thunk_FUN_01c20e04(ppAVar2,pAVar6);
        pAVar6 = *ppAVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pOVar3->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pOVar3,pGVar5);
        goto LAB_035d9370;
      }
      pAVar6 = (AADKBCFCLKK_o *)*ppPVar1;
      if (pAVar6 == (AADKBCFCLKK_o *)0x0) {
        __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
        *ppPVar1 = __this_00;
        thunk_FUN_01c20e04(ppPVar1,__this_00);
        pAVar6 = (AADKBCFCLKK_o *)*ppPVar1;
      }
    }
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pAVar6,(MethodInfo *)0x0);
  } while( true );
}

