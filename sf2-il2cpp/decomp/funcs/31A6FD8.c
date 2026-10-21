// HCKNPMDFGLJ$$.ctor @ RVA 0x31A6FD8

void HCKNPMDFGLJ___ctor(HCKNPMDFGLJ_o *__this,HCKNPMDFGLJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HCKNPMDFGLJ_o *)0x0) {
    ppSVar1 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields)._GMPAEDFIIHF_k__BackingField =
         (IBKIPBJJCPG->fields)._GMPAEDFIIHF_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

