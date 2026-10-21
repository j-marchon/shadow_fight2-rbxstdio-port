// OMFJHNMDIBF$$MergeFrom @ RVA 0x343FBA4

void OMFJHNMDIBF__MergeFrom(OMFJHNMDIBF_o *__this,OMFJHNMDIBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  PIADCKMDDAK_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_Nullable_int__Fields SVar3;
  OMFJHNMDIBF_Fields *pOVar4;
  PIADCKMDDAK_o **ppPVar5;
  
  if ((DAT_04568211 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_04568211 = 1;
  }
  if (IBKIPBJJCPG == (OMFJHNMDIBF_o *)0x0) {
    return;
  }
  if (((IBKIPBJJCPG->fields).EMOLIBOCKJK.fields.hasValue != false) &&
     (((SVar3 = (IBKIPBJJCPG->fields).EMOLIBOCKJK.fields,
       (__this->fields).EMOLIBOCKJK.fields.hasValue == false || ((ulong)SVar3 >> 0x20 != 0)) ||
      (((ulong)SVar3 & 0xff) == 0)))) {
    (__this->fields).EMOLIBOCKJK.fields = SVar3;
  }
  if ((IBKIPBJJCPG->fields).JMACIOLHEOF != (PIADCKMDDAK_o *)0x0) {
    ppPVar5 = &(__this->fields).JMACIOLHEOF;
    pPVar1 = *ppPVar5;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar5 = pPVar1;
      thunk_FUN_01c20e04(ppPVar5,pPVar1);
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PIADCKMDDAK_o *)0x0) goto LAB_0353fd28;
    }
    PIADCKMDDAK__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).JMACIOLHEOF,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IEDLACLJJOK != (PIADCKMDDAK_o *)0x0) {
    ppPVar5 = &(__this->fields).IEDLACLJJOK;
    pPVar1 = *ppPVar5;
    if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
      pPVar1 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(pPVar1,(MethodInfo *)0x0);
      *ppPVar5 = pPVar1;
      thunk_FUN_01c20e04(ppPVar5,pPVar1);
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PIADCKMDDAK_o *)0x0) {
LAB_0353fd28:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PIADCKMDDAK__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).IEDLACLJJOK,(MethodInfo *)0x0);
  }
  if (((IBKIPBJJCPG->fields).NLLKMEMKBAF.fields.hasValue != false) &&
     (((SVar3 = (IBKIPBJJCPG->fields).NLLKMEMKBAF.fields,
       (__this->fields).NLLKMEMKBAF.fields.hasValue == false || ((ulong)SVar3 >> 0x20 != 0)) ||
      (((ulong)SVar3 & 0xff) == 0)))) {
    (__this->fields).NLLKMEMKBAF.fields = SVar3;
  }
  pOVar4 = &__this->fields;
  pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar4->CKFPENBPNML = pGVar2;
  thunk_FUN_01c20e04(pOVar4,pGVar2);
  return;
}

