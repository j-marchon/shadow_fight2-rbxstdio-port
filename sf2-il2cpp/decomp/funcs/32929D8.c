// OJFPEINHCDP$$MergeFrom @ RVA 0x32929D8

void OJFPEINHCDP__MergeFrom(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  NODLJPNGNBG_o *pNVar2;
  KDADMJGPAOM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  OJFPEINHCDP_Fields *pOVar5;
  NODLJPNGNBG_o **ppNVar6;
  KDADMJGPAOM_o **ppKVar7;
  
  if ((DAT_04567336 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_04567336 = 1;
  }
  if (IBKIPBJJCPG == (OJFPEINHCDP_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (NODLJPNGNBG_o *)0x0) {
    ppNVar6 = &(__this->fields).OPHCNELIOLD;
    pNVar2 = *ppNVar6;
    if (pNVar2 == (NODLJPNGNBG_o *)0x0) {
      pNVar2 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
      NODLJPNGNBG___ctor(pNVar2,(MethodInfo *)0x0);
      *ppNVar6 = pNVar2;
      thunk_FUN_01c20e04(ppNVar6,pNVar2);
      pNVar2 = *ppNVar6;
      if (pNVar2 == (NODLJPNGNBG_o *)0x0) goto LAB_03392b0c;
    }
    NODLJPNGNBG__MergeFrom(pNVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    ppKVar7 = &(__this->fields).LHFLMBNKPHF;
    pKVar3 = *ppKVar7;
    if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
      pKVar3 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
      KDADMJGPAOM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar7 = pKVar3;
      thunk_FUN_01c20e04(ppKVar7,pKVar3);
      pKVar3 = *ppKVar7;
      if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
LAB_03392b0c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KDADMJGPAOM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
  }
  iVar1 = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
  if (iVar1 != 0) {
    (__this->fields).KLOGBBKOLFL = iVar1;
  }
  pOVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pOVar5,pGVar4);
  return;
}

