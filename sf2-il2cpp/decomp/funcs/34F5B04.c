// OLKKAIFGGAK$$BCMLHMOGBJH @ RVA 0x34F5B04

void OLKKAIFGGAK__BCMLHMOGBJH
               (OLKKAIFGGAK_o *__this,CNDPAJOLKFN_o *EKEMKOCPHPO,CNDPAJOLKFN_o *PCGIENAHMFK,
               float LFJGFLNMBMC,MethodInfo *method)

{
  OLKKAIFGGAK_JHKGLPOINCO_o *pOVar1;
  CNDPAJOLKFN_o **ppCVar2;
  
  pOVar1 = (__this->fields).KIAPMHMCDMO;
  if (pOVar1 != (OLKKAIFGGAK_JHKGLPOINCO_o *)0x0) {
    (pOVar1->fields).GKLKOCOKMDB = EKEMKOCPHPO;
    thunk_FUN_01c20e04();
    pOVar1 = (__this->fields).KIAPMHMCDMO;
    if (pOVar1 != (OLKKAIFGGAK_JHKGLPOINCO_o *)0x0) {
      ppCVar2 = &(pOVar1->fields).GDPIIGNJCLE;
      *ppCVar2 = PCGIENAHMFK;
      thunk_FUN_01c20e04(ppCVar2,PCGIENAHMFK);
      pOVar1 = (__this->fields).KIAPMHMCDMO;
      if (pOVar1 != (OLKKAIFGGAK_JHKGLPOINCO_o *)0x0) {
        (pOVar1->fields).JAODINPKJLN = LFJGFLNMBMC;
        (pOVar1->fields).BCNIPIPMOIK = true;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

