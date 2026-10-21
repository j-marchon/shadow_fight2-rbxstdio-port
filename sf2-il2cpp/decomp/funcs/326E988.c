// MMDPHPGAGAP$$CJEEDJHKDBE @ RVA 0x326E988

void MMDPHPGAGAP__CJEEDJHKDBE
               (MMDPHPGAGAP_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,IGFGDDANEPE_o *ANMFBABEMFD,
               MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
                    /* try { // try from 0336e994 to 0346e99f has its CatchHandler @ 0336ec58 */
  if ((DAT_0456720e & 1) == 0) {
    FUN_01bab630(&StringLiteral_18786);
    DAT_0456720e = 1;
  }
                    /* try { // try from 0336e9d0 to 0346e9db has its CatchHandler @ 0336ec90 */
  (__this->fields).IKIINEOIIAK = StringLiteral_18786;
  thunk_FUN_01c20e04();
  if (((ANMFBABEMFD != (IGFGDDANEPE_o *)0x0) &&
      (pHVar1 = IGFGDDANEPE__JPNNODJPOCL(ANMFBABEMFD,false,(MethodInfo *)0x0),
      pHVar1 != (HOOAAGABMBL_o *)0x0)) && (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0)) {
                    /* try { // try from 0336ea04 to 0346ea0f has its CatchHandler @ 0336ec84 */
    pSVar2 = GGLKHCAIGDI__OHGBPDNOLNH
                       (NDLOGJOGFCA,ANMFBABEMFD,(pHVar1->fields)._JDEHPJEIOCI_k__BackingField,
                        (MethodInfo *)0x0);
    ppSVar3 = &(__this->fields).BPCADJLKKGA;
    *ppSVar3 = pSVar2;
                    /* try { // try from 0336ea20 to 0346ea27 has its CatchHandler @ 0336ec8c */
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

