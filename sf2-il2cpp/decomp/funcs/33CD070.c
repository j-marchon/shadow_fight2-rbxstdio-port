// DNELIPCHKLK$$FABCBOLKOCC @ RVA 0x33CD070

void DNELIPCHKLK__FABCBOLKOCC
               (DNELIPCHKLK_o *__this,System_String_o *BHHBEIACGPB,System_String_o *BANHBMINMMP,
               System_String_o *MHOFCOHFCGL,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
                    /* try { // try from 034cd08c to 035cd093 has its CatchHandler @ 034cd1dc */
                    /* try { // try from 034cd09c to 035cd0bb has its CatchHandler @ 034cd1e8 */
  if ((DAT_04567e30 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e30 = 1;
  }
                    /* try { // try from 034cd0bc to 035cd1af has its CatchHandler @ 034ccee8 */
  pSVar1 = StringLiteral_1;
  if (BHHBEIACGPB != (System_String_o *)0x0) {
    pSVar1 = BHHBEIACGPB;
  }
  if (__this != (DNELIPCHKLK_o *)0x0) {
    (__this->fields).GDPFBDIJNHA = pSVar1;
    thunk_FUN_01c20e04();
    pSVar1 = StringLiteral_1;
    if (BANHBMINMMP != (System_String_o *)0x0) {
      pSVar1 = BANHBMINMMP;
    }
    (__this->fields).GJFJPLHCBKJ = pSVar1;
    thunk_FUN_01c20e04();
    pSVar1 = StringLiteral_1;
    if (MHOFCOHFCGL != (System_String_o *)0x0) {
      pSVar1 = MHOFCOHFCGL;
    }
    (__this->fields).ANOPJEEGOLJ = pSVar1;
    thunk_FUN_01c20e04();
    DNELIPCHKLK__EMIGGAINFCC(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

