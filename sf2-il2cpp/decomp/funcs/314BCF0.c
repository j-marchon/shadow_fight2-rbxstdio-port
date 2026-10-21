// HCFOFHGNBKP$$MergeFrom @ RVA 0x314BCF0

void HCFOFHGNBKP__MergeFrom(HCFOFHGNBKP_o *__this,HCFOFHGNBKP_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HCFOFHGNBKP_Fields *pHVar3;
  BECIPDJBAOG_o **ppBVar4;
  
  if ((DAT_045667c6 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045667c6 = 1;
  }
  if (IBKIPBJJCPG != (HCFOFHGNBKP_o *)0x0) {
    if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
      ppBVar4 = &(__this->fields).MJIIHOLHNCK;
      pBVar1 = *ppBVar4;
      if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
        pBVar1 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(pBVar1,(MethodInfo *)0x0);
        *ppBVar4 = pBVar1;
        thunk_FUN_01c20e04(ppBVar4,pBVar1);
        pBVar1 = *ppBVar4;
        if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      BECIPDJBAOG__MergeFrom(pBVar1,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    }
    if ((IBKIPBJJCPG->fields).MKEPFPAHEFK != false) {
      (__this->fields).MKEPFPAHEFK = true;
    }
    pHVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar3,pGVar2);
    return;
  }
  return;
}

