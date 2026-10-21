// FIMAAAOEIGM$$.ctor @ RVA 0x3425CF4

void FIMAAAOEIGM___ctor(FIMAAAOEIGM_o *__this,FIMAAAOEIGM_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  AADKBCFCLKK_o **ppAVar5;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (FIMAAAOEIGM_o *)0x0) {
    pAVar1 = (IBKIPBJJCPG->fields).PMFAFJFPHGO;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)0x0;
    }
    else {
      pAVar1 = AADKBCFCLKK__Clone(pAVar1,(MethodInfo *)0x0);
    }
    if (__this != (FIMAAAOEIGM_o *)0x0) {
      ppAVar5 = &(__this->fields).PMFAFJFPHGO;
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5);
      (__this->fields).AFIPKDNMBKJ = (IBKIPBJJCPG->fields).AFIPKDNMBKJ;
      pPVar2 = (IBKIPBJJCPG->fields).OBKCJGGIEMF;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OBKCJGGIEMF = pPVar2;
      thunk_FUN_01c20e04();
      pKVar3 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
        pKVar3 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar3 = KAMBBJFPLGM__Clone(pKVar3,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar3;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

