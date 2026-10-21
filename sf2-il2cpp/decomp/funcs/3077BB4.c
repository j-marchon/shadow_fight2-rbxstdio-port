// KKCBGIBKOCP$$PFJIHMIKHNL @ RVA 0x3077BB4

void KKCBGIBKOCP__PFJIHMIKHNL
               (Nekki_SF2_GUI_ResolutionImage_o *IEPECMCLKJB,System_String_o *JPPLEGNJFMJ,
               System_String_o *GKNNFJNBCNB,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *CJNHFNHJHPE;
  
                    /* try { // try from 03177bc4 to 03277bc7 has its CatchHandler @ 03178080 */
                    /* try { // try from 03177bc8 to 03277bcb has its CatchHandler @ 03177fbc */
                    /* try { // try from 03177bcc to 03277c0b has its CatchHandler @ 031771b8 */
  if ((DAT_04565fb7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1377);
    DAT_04565fb7 = 1;
  }
  if (GKNNFJNBCNB != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(GKNNFJNBCNB,StringLiteral_1377,(MethodInfo *)0x0);
    if (-1 < iVar1) {
                    /* try { // try from 03177c0c to 03277c0f has its CatchHandler @ 03177e5c */
                    /* try { // try from 03177c10 to 03277c13 has its CatchHandler @ 03177e58 */
                    /* try { // try from 03177c14 to 03277c17 has its CatchHandler @ 03177db0 */
                    /* try { // try from 03177c18 to 03277dc7 has its CatchHandler @ 031771b8 */
      GKNNFJNBCNB = System_String__Substring(GKNNFJNBCNB,iVar1 + 1,(MethodInfo *)0x0);
    }
    CJNHFNHJHPE = System_String__Concat(JPPLEGNJFMJ,GKNNFJNBCNB,(MethodInfo *)0x0);
    if (IEPECMCLKJB != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(IEPECMCLKJB,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

