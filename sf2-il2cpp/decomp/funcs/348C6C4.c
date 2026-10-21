// KICJDJCJLKJ$$.ctor @ RVA 0x348C6C4

void KICJDJCJLKJ___ctor(KICJDJCJLKJ_o *__this,IMPJOEHKNBA_o *JDDEJOEBCAE,GCPFDLNAFDF_o *NMMFNFPCNHC,
                       MethodInfo *method)

{
  UniRx_CompositeDisposable_o *pUVar1;
  UniRx_CompositeDisposable_o **ppUVar2;
  KICJDJCJLKJ_AIKDHBPGCGN_o *pKVar3;
  KICJDJCJLKJ_AIKDHBPGCGN_o **ppKVar4;
  IMPJOEHKNBA_o **ppIVar5;
  GCPFDLNAFDF_o **ppGVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_045683e8 & 1) == 0) {
    FUN_01bab630(&KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&StringLiteral_11375);
    FUN_01bab630(&StringLiteral_7627);
    DAT_045683e8 = 1;
  }
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).IHADHPMEOFI = pUVar1;
  thunk_FUN_01c20e04(&__this->fields,pUVar1);
  pUVar1 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(pUVar1,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).GEBDPADMKJP;
  *ppUVar2 = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  auVar7 = thunk_FUN_01bda818(KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
  pKVar3 = auVar7._0_8_;
  KICJDJCJLKJ_AIKDHBPGCGN___ctor(pKVar3,auVar7._8_8_);
  if (pKVar3 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
    (pKVar3->fields).KLHHABGHKHA = StringLiteral_11375;
    thunk_FUN_01c20e04();
    ppKVar4 = &(__this->fields).CFMBLNBAEJN;
    *ppKVar4 = pKVar3;
    thunk_FUN_01c20e04(ppKVar4,pKVar3);
    auVar7 = thunk_FUN_01bda818(KICJDJCJLKJ_AIKDHBPGCGN_TypeInfo);
    pKVar3 = auVar7._0_8_;
    KICJDJCJLKJ_AIKDHBPGCGN___ctor(pKVar3,auVar7._8_8_);
    if (pKVar3 != (KICJDJCJLKJ_AIKDHBPGCGN_o *)0x0) {
      (pKVar3->fields).KLHHABGHKHA = StringLiteral_7627;
      thunk_FUN_01c20e04();
      ppKVar4 = &(__this->fields).ONCJMLPDAKO;
      *ppKVar4 = pKVar3;
      thunk_FUN_01c20e04(ppKVar4,pKVar3);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      ppIVar5 = &(__this->fields).EMCHBEGFHBC;
      *ppIVar5 = JDDEJOEBCAE;
      thunk_FUN_01c20e04(ppIVar5,JDDEJOEBCAE);
      ppGVar6 = &(__this->fields).BDALHPIDKOK;
      *ppGVar6 = NMMFNFPCNHC;
      thunk_FUN_01c20e04(ppGVar6,NMMFNFPCNHC);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

