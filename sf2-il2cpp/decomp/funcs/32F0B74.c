// GKHBKFABJKA$$.ctor @ RVA 0x32F0B74

void GKHBKFABJKA___ctor(GKHBKFABJKA_o *__this,GKHBKFABJKA_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 033f0b8c to 034f0b93 has its CatchHandler @ 033f1f54 */
  if (IBKIPBJJCPG != (GKHBKFABJKA_o *)0x0) {
    ppNVar1 = &(__this->fields)._CKHLOIHFIAC_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._CKHLOIHFIAC_k__BackingField;
                    /* try { // try from 033f0b9c to 034f0ba3 has its CatchHandler @ 033f1f58 */
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

