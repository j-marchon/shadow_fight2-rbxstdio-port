// EAJJPPPJENA$$.ctor @ RVA 0x32D5B2C

void EAJJPPPJENA___ctor(EAJJPPPJENA_o *__this,EAJJPPPJENA_o *IBKIPBJJCPG,MethodInfo *method)

{
  JMCDPBKILIN_o *pJVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (EAJJPPPJENA_o *)0x0) {
    (__this->fields).EMOLIBOCKJK = (IBKIPBJJCPG->fields).EMOLIBOCKJK;
    pJVar1 = (IBKIPBJJCPG->fields).NCFPAHCCDBB;
    if (pJVar1 == (JMCDPBKILIN_o *)0x0) {
      pJVar1 = (JMCDPBKILIN_o *)0x0;
    }
    else {
      pJVar1 = JMCDPBKILIN__Clone(pJVar1,(MethodInfo *)0x0);
    }
    (__this->fields).NCFPAHCCDBB = pJVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

