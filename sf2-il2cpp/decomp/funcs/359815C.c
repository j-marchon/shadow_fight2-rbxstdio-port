// CFJANHACGMG$$LNGABBPIBAL @ RVA 0x359815C

void CFJANHACGMG__LNGABBPIBAL(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03698178 to 0379817f has its CatchHandler @ 036985fc */
  if ((DAT_04568dae & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&StringLiteral_1473);
    DAT_04568dae = 1;
    method = extraout_x1;
  }
  if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ANFOHCGLHID_TypeInfo,method);
  }
  bVar1 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 036981b8 to 037981bf has its CatchHandler @ 03698560 */
    if (EIJDDKJONFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036981e0 with catch @ 0369821c */
      FUN_01bab8c8();
    }
                    /* try { // try from 036981d0 to 037981d3 has its CatchHandler @ 03698228 */
    bVar1 = System_String__EndsWith(EIJDDKJONFO,StringLiteral_1473,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 036981d8 to 037981db has its CatchHandler @ 03698224 */
                    /* try { // try from 036981e0 to 037981e7 has its CatchHandler @ 0369821c */
      EIJDDKJONFO = System_String__Concat(EIJDDKJONFO,StringLiteral_1473,(MethodInfo *)0x0);
    }
                    /* try { // try from 036981ec to 037981f7 has its CatchHandler @ 0369822c */
    bVar1 = NEHNBJKKABI__HALDCNGHJCO(EIJDDKJONFO,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 036981fc to 037981ff has its CatchHandler @ 03698210 */
                    /* try { // try from 03698200 to 03798243 has its CatchHandler @ 03697d90 */
                    /* catch() { ... } // from try @ 03698158 with catch @ 03698204 */
      NEHNBJKKABI__MGLIGNDGBCN(EIJDDKJONFO,(MethodInfo *)0x0);
      return;
    }
  }
                    /* catch() { ... } // from try @ 036981fc with catch @ 03698210 */
                    /* catch() { ... } // from try @ 0369811c with catch @ 03698214 */
                    /* catch() { ... } // from try @ 03698094 with catch @ 03698218 */
  return;
}

