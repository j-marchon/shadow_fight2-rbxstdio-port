// CHDGOFBHAFI$$BFBKJDGKCAJ @ RVA 0x32464F4

void CHDGOFBHAFI__BFBKJDGKCAJ(CHDGOFBHAFI_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int *piVar1;
  
  if ((DAT_045670bb & 1) == 0) {
                    /* try { // try from 03346510 to 0344651b has its CatchHandler @ 033460d4 */
    FUN_01bab630(&int_TypeInfo);
                    /* try { // try from 0334651c to 03446523 has its CatchHandler @ 03346524 */
    DAT_045670bb = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 033464e8 with catch @ 03346524
                       catch() { ... } // from try @ 0334651c with catch @ 03346524 */
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (*piVar1 == 1) {
      JJPNLEPEAFM__OCJEIOMBDKP((MethodInfo *)0x0);
      return;
    }
  }
  return;
}

