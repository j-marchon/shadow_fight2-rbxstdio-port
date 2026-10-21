// DNELIPCHKLK$$LGOFNFEIKFB @ RVA 0x33CD27C

void DNELIPCHKLK__LGOFNFEIKFB(DNELIPCHKLK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  System_String_array *pSVar2;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  
                    /* try { // try from 034cd280 to 035cd28b has its CatchHandler @ 034ccee8 */
                    /* try { // try from 034cd28c to 035cd293 has its CatchHandler @ 034cd294 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cd218 with catch @ 034cd294
                       catch(type#2 @ 00000000) { ... } // from try @ 034cd28c with catch @ 034cd294
                        */
  if ((DAT_04567e33 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e33 = 1;
  }
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
    return;
  }
  pSVar2 = System_String__Split(CJNHFNHJHPE,0x7c,0,(MethodInfo *)0x0);
  if (pSVar2 == (System_String_array *)0x0) {
LAB_034cd37c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (int)pSVar2->max_length;
  ppSVar3 = pSVar2->m_Items;
  if (iVar1 < 1) {
    ppSVar3 = (System_String_o **)&StringLiteral_1;
  }
  if (__this == (DNELIPCHKLK_o *)0x0) goto LAB_034cd37c;
  (__this->fields).GDPFBDIJNHA = *ppSVar3;
  thunk_FUN_01c20e04();
  if (iVar1 < 2) {
    ppSVar3 = (System_String_o **)&StringLiteral_1;
  }
  else {
    if ((uint)pSVar2->max_length < 2) goto LAB_034cd380;
    ppSVar3 = pSVar2->m_Items + 1;
  }
  (__this->fields).GJFJPLHCBKJ = *ppSVar3;
  thunk_FUN_01c20e04();
  if (iVar1 < 3) {
    ppSVar3 = (System_String_o **)&StringLiteral_1;
  }
  else {
    if ((uint)pSVar2->max_length < 3) {
LAB_034cd380:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    ppSVar3 = pSVar2->m_Items + 2;
  }
  (__this->fields).ANOPJEEGOLJ = *ppSVar3;
  thunk_FUN_01c20e04();
  DNELIPCHKLK__EMIGGAINFCC(__this,method_00);
  return;
}

