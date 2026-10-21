// CFJANHACGMG$$KDIJKOPONLI @ RVA 0x3598F50

void CFJANHACGMG__KDIJKOPONLI
               (System_String_o *CIBIKDNNBAM,System_String_o *IGCGOHHCMHD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *MAGJFFBDFLN;
  
                    /* try { // try from 03698f60 to 03798f6b has its CatchHandler @ 03699070 */
                    /* try { // try from 03698f70 to 03798f7b has its CatchHandler @ 03699064 */
  if ((DAT_04568db7 & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&StringLiteral_1473);
                    /* try { // try from 03698f90 to 03799023 has its CatchHandler @ 0369906c */
    DAT_04568db7 = 1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_String__Concat(CIBIKDNNBAM,StringLiteral_1473,(MethodInfo *)0x0);
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = System_String__Concat(CIBIKDNNBAM,StringLiteral_1473,(MethodInfo *)0x0);
      MAGJFFBDFLN = System_String__Concat(IGCGOHHCMHD,StringLiteral_1473,(MethodInfo *)0x0);
      NEHNBJKKABI__KKEJAMPGGGC(pSVar2,MAGJFFBDFLN,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* try { // try from 03699024 to 03799053 has its CatchHandler @ 03698b7c */
  return;
}

