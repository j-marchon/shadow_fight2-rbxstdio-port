// LEDDFINCJND$$.ctor @ RVA 0x31B7A8C

void LEDDFINCJND___ctor(LEDDFINCJND_o *__this,System_String_o *FEPLAGOGJNL,MethodInfo *method)

{
  if ((DAT_04566bc2 & 1) == 0) {
    FUN_01bab630(&System_Exception_TypeInfo);
    DAT_04566bc2 = 1;
  }
                    /* try { // try from 032b7ac8 to 033b7acf has its CatchHandler @ 032b7b98 */
  if ((System_Exception_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032b7ad8 to 033b7adf has its CatchHandler @ 032b7b94 */
                    /* try { // try from 032b7ae0 to 033b7baf has its CatchHandler @ 032b7a30 */
  System_Exception___ctor((System_Exception_o *)__this,FEPLAGOGJNL,(MethodInfo *)0x0);
  return;
}

