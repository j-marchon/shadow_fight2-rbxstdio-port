// FMENGBCBMLK$$.ctor @ RVA 0x352E52C

void FMENGBCBMLK___ctor(FMENGBCBMLK_o *__this,FMENGBCBMLK_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 0362e544 to 0372e553 has its CatchHandler @ 0362e77c */
  if (IBKIPBJJCPG != (FMENGBCBMLK_o *)0x0) {
    ppNVar1 = &(__this->fields)._CCLIPLACBLO_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._CCLIPLACBLO_k__BackingField;
                    /* try { // try from 0362e558 to 0372e55f has its CatchHandler @ 0362e780 */
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

