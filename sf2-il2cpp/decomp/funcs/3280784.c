// FMIEFKAKOMG$$MergeFrom @ RVA 0x3280784

void FMIEFKAKOMG__MergeFrom(FMIEFKAKOMG_o *__this,FMIEFKAKOMG_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  FMIEFKAKOMG_Fields *pFVar4;
  BECIPDJBAOG_o **ppBVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_0456728b & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_0456728b = 1;
  }
  if (IBKIPBJJCPG == (FMIEFKAKOMG_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    ppBVar5 = &(__this->fields).MJIIHOLHNCK;
    pBVar1 = *ppBVar5;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
      BECIPDJBAOG___ctor(pBVar1,(MethodInfo *)0x0);
      *ppBVar5 = pBVar1;
      thunk_FUN_01c20e04(ppBVar5,pBVar1);
      pBVar1 = *ppBVar5;
      if (pBVar1 == (BECIPDJBAOG_o *)0x0) goto LAB_033808ac;
    }
    BECIPDJBAOG__MergeFrom(pBVar1,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = *ppKVar6;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar2,(MethodInfo *)0x0);
      *ppKVar6 = pKVar2;
      thunk_FUN_01c20e04(ppKVar6,pKVar2);
      pKVar2 = *ppKVar6;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
LAB_033808ac:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pFVar4 = &__this->fields;
                    /* try { // try from 03380878 to 03480aff has its CatchHandler @ 03380878
                       catch() { ... } // from try @ 03380878 with catch @ 03380878
                       catch() { ... } // from try @ 03380bb8 with catch @ 03380878
                       catch() { ... } // from try @ 03380e30 with catch @ 03380878
                       catch() { ... } // from try @ 03380eec with catch @ 03380878
                       catch() { ... } // from try @ 03380f00 with catch @ 03380878
                       catch() { ... } // from try @ 03380fb8 with catch @ 03380878
                       catch() { ... } // from try @ 0338103c with catch @ 03380878 */
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pFVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pFVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pFVar4,pGVar3);
  return;
}

