// CDAAECGFKON$$MergeFrom @ RVA 0x3211CB8

void CDAAECGFKON__MergeFrom(CDAAECGFKON_o *__this,CDAAECGFKON_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  CDAAECGFKON_Fields *pCVar4;
  AADKBCFCLKK_o **ppAVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_04566e98 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04566e98 = 1;
  }
  if (IBKIPBJJCPG == (CDAAECGFKON_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PMFAFJFPHGO != (AADKBCFCLKK_o *)0x0) {
    ppAVar5 = &(__this->fields).PMFAFJFPHGO;
    pAVar1 = *ppAVar5;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5,pAVar1);
      pAVar1 = *ppAVar5;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_03311de0;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PMFAFJFPHGO,(MethodInfo *)0x0);
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
LAB_03311de0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pCVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pCVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pCVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pCVar4,pGVar3);
  return;
}

