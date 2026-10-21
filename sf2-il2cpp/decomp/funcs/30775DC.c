// KKCBGIBKOCP$$INHBAMFOLNC @ RVA 0x30775DC

bool KKCBGIBKOCP__INHBAMFOLNC(System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 031775e4 to 0327760b has its CatchHandler @ 031771b8 */
  if ((DAT_04565fb1 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_16205);
                    /* try { // try from 0317760c to 0327761b has its CatchHandler @ 03177da8 */
    DAT_04565fb1 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
                    /* try { // try from 03177638 to 0327763b has its CatchHandler @ 03177d44 */
                    /* try { // try from 0317763c to 0327764b has its CatchHandler @ 03177d74 */
  method_00 = extraout_x1;
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
                    /* try { // try from 0317764c to 03277673 has its CatchHandler @ 031771b8 */
  __this = KKCBGIBKOCP__KMCFMENCOAH(HCAAAAMDCNO,method_00);
  if (__this != (System_String_o *)0x0) {
                    /* try { // try from 03177674 to 03277683 has its CatchHandler @ 03177da4 */
    bVar1 = System_String__EndsWith(__this,StringLiteral_16205,5,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

