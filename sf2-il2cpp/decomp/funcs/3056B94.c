// NHBBOEHHEKG$$NKJDKKCJIEM @ RVA 0x3056B94

System_String_o *
NHBBOEHHEKG__NKJDKKCJIEM(NHBBOEHHEKG_o *__this,System_String_o *COMFLKNJFLN,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565e6b & 1) == 0) {
    FUN_01bab630(&StringLiteral_12941);
    DAT_04565e6b = 1;
  }
  pSVar1 = System_String__Format(StringLiteral_12941,(Il2CppObject *)COMFLKNJFLN,(MethodInfo *)0x0);
                    /* try { // try from 03156bd8 to 03256be7 has its CatchHandler @ 03156be8 */
  if (pSVar1 != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 03156a90 with catch @ 03156be8
                       catch() { ... } // from try @ 03156bd8 with catch @ 03156be8 */
                    /* try { // try from 03156bec to 03256bef has its CatchHandler @ 03156bf8 */
                    /* try { // try from 03156bf0 to 03256bfb has its CatchHandler @ 03156894 */
    pSVar1 = System_String__Remove(pSVar1,(pSVar1->fields)._stringLength + -1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

