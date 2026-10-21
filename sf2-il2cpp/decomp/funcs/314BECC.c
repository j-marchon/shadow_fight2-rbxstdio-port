// HCFOFHGNBKP$$MergeFrom @ RVA 0x314BECC

void HCFOFHGNBKP__MergeFrom
               (HCFOFHGNBKP_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_o **ppBVar1;
  HCFOFHGNBKP_Fields *pHVar2;
  bool bVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *pBVar6;
  
  if ((DAT_045667c9 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045667c9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppBVar1 = &(__this->fields).MJIIHOLHNCK;
    pHVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar4 == 10) {
          pBVar6 = *ppBVar1;
          if (pBVar6 == (BECIPDJBAOG_o *)0x0) {
            pBVar6 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
            BECIPDJBAOG___ctor(pBVar6,(MethodInfo *)0x0);
            *ppBVar1 = pBVar6;
            thunk_FUN_01c20e04(ppBVar1,pBVar6);
            pBVar6 = *ppBVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar6,(MethodInfo *)0x0);
        }
        if (uVar4 != 0x10) break;
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).MKEPFPAHEFK = bVar3;
      }
      if (uVar4 == 0) break;
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar2->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pHVar2,pGVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

