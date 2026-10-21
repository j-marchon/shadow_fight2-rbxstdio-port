// ICPMLKOEANF$$.ctor @ RVA 0x3250AB8

void ICPMLKOEANF___ctor(ICPMLKOEANF_o *__this,ICPMLKOEANF_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (ICPMLKOEANF_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    (__this->fields).NLLKMEMKBAF = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

