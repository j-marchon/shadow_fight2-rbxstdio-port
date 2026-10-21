// BFLFFPLIIFM$$.ctor @ RVA 0x3232E3C

void BFLFFPLIIFM___ctor(BFLFFPLIIFM_o *__this,BFLFFPLIIFM_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BFLFFPLIIFM_o *)0x0) {
    (__this->fields).POLEIDMHDNP = (IBKIPBJJCPG->fields).POLEIDMHDNP;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

