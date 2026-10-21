// ABKJCHPCFDA$$.ctor @ RVA 0x31B50C4

void ABKJCHPCFDA___ctor(ABKJCHPCFDA_o *__this,System_String_o *FEPLAGOGJNL,MethodInfo *method)

{
  if ((DAT_04566bab & 1) == 0) {
                    /* try { // try from 032b50ec to 033b50f3 has its CatchHandler @ 032b51f0 */
    FUN_01bab630(&System_Exception_TypeInfo);
    DAT_04566bab = 1;
  }
  if ((System_Exception_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032b5120 to 033b512b has its CatchHandler @ 032b51e4 */
  System_Exception___ctor((System_Exception_o *)__this,FEPLAGOGJNL,(MethodInfo *)0x0);
  return;
}

