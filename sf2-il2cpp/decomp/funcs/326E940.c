// MMDPHPGAGAP$$CJEEDJHKDBE @ RVA 0x326E940

void MMDPHPGAGAP__CJEEDJHKDBE(MMDPHPGAGAP_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (CDEABOAKDEJ != (HEFOANCOHDC_o *)0x0) {
                    /* try { // try from 0336e958 to 0346e963 has its CatchHandler @ 0336ec68 */
    (__this->fields).IKIINEOIIAK = (CDEABOAKDEJ->fields).JMGIACHBIKG;
    thunk_FUN_01c20e04();
    pSVar1 = HEFOANCOHDC__EMGLGFMDMKD(CDEABOAKDEJ,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields).BPCADJLKKGA;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

