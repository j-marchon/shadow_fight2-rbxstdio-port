// HBLHCCMEEEC$$.ctor @ RVA 0x3153D70

void HBLHCCMEEEC___ctor(HBLHCCMEEEC_o *__this,HBLHCCMEEEC_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HBLHCCMEEEC_o *)0x0) {
    (__this->fields).IAAJODFMEIC = (IBKIPBJJCPG->fields).IAAJODFMEIC;
    (__this->fields).HEOOKBCLBGN = (IBKIPBJJCPG->fields).HEOOKBCLBGN;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

