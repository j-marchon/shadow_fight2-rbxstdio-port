// OMFJHNMDIBF$$.ctor @ RVA 0x343F170

void OMFJHNMDIBF___ctor(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  PIADCKMDDAK_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OMFJHNMDIBF_o *)0x0) {
    (__this->fields).EMOLIBOCKJK.fields = (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields;
    pPVar1 = (IBKIPBJJCPG->fields).JMACIOLHEOF;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)0x0;
    }
    else {
      pPVar1 = PIADCKMDDAK__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).JMACIOLHEOF = pPVar1;
    thunk_FUN_01c20e04();
    pPVar1 = (IBKIPBJJCPG->fields).IEDLACLJJOK;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)0x0;
    }
    else {
      pPVar1 = PIADCKMDDAK__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).IEDLACLJJOK = pPVar1;
    thunk_FUN_01c20e04();
    (__this->fields).NLLKMEMKBAF.fields = (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

