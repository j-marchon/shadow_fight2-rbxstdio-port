// LEKPMNDHDNH$$GIENGNEGHPJ @ RVA 0x30E34FC

void LEKPMNDHDNH__GIENGNEGHPJ(LEKPMNDHDNH_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  GBJGJEGPHKD_o *pGVar2;
  IEFEBEDLHNN_o *pIVar3;
  OLKKAIFGGAK_o *pOVar4;
  IEFEBEDLHNN_o **ppIVar5;
  
  EAAHMDAMHNI__GIENGNEGHPJ((EAAHMDAMHNI_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).super.HMMEFNNMBJK;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar1,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    pOVar4 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
      pOVar4 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar4,(__this->fields).NKDEEKELFLN,(MethodInfo *)0x0);
      if (pOVar1 == (OLKKAIFGGAK_o *)0x0) {
        pIVar3 = (IEFEBEDLHNN_o *)0x0;
      }
      else {
        pGVar2 = (pOVar1->fields).HMIAFJALFCJ;
        if (pGVar2 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e35a4;
        pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0);
      }
      (__this->fields).KFEFNEOIOID = pIVar3;
      thunk_FUN_01c20e04();
      if (pOVar4 == (OLKKAIFGGAK_o *)0x0) {
        pIVar3 = (IEFEBEDLHNN_o *)0x0;
      }
      else {
        pGVar2 = (pOVar4->fields).HMIAFJALFCJ;
        if (pGVar2 == (GBJGJEGPHKD_o *)0x0) goto LAB_031e35a4;
        pIVar3 = GBJGJEGPHKD__ILECMJOENMK(pGVar2,(MethodInfo *)0x0);
      }
      ppIVar5 = &(__this->fields).LLCJHOLBCOB;
      *ppIVar5 = pIVar3;
      thunk_FUN_01c20e04(ppIVar5);
      return;
    }
  }
LAB_031e35a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

