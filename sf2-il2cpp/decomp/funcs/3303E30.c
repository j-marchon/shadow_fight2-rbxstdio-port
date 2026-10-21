// KGBIBHEFBHA$$.ctor @ RVA 0x3303E30

void KGBIBHEFBHA___ctor(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
                    /* try { // try from 03403e38 to 03503e57 has its CatchHandler @ 03404224 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
                    /* try { // try from 03403e58 to 03503edb has its CatchHandler @ 03403ba8 */
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    (__this->fields).HCBJCMDLODI = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    (__this->fields).NLLKMEMKBAF = iVar1;
    (__this->fields).NCDPJGNAKPN = (IBKIPBJJCPG->fields).NCDPJGNAKPN;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

