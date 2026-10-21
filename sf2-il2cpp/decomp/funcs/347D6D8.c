// IAGKPNAGKLA$$.ctor @ RVA 0x347D6D8

void IAGKPNAGKLA___ctor(IAGKPNAGKLA_o *__this,IAGKPNAGKLA_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* try { // try from 0357d6e4 to 0367d6eb has its CatchHandler @ 0357db10 */
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 0357d6f0 to 0367d6f7 has its CatchHandler @ 0357db20 */
  if (IBKIPBJJCPG != (IAGKPNAGKLA_o *)0x0) {
    (__this->fields)._MMNODECCMJK_k__BackingField =
         (IBKIPBJJCPG->fields)._MMNODECCMJK_k__BackingField;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d708 to 0367d70f has its CatchHandler @ 0357db28 */
    *ppSVar1 = (IBKIPBJJCPG->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d710 to 0367d723 has its CatchHandler @ 0357db08 */
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

