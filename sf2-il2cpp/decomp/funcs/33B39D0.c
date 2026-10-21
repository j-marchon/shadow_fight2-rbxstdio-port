// AOMIBNJMLEL$$DGCODECJJCC @ RVA 0x33B39D0

bool AOMIBNJMLEL__DGCODECJJCC(AOMIBNJMLEL_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
                    /* try { // try from 034b39e0 to 035b39e7 has its CatchHandler @ 034b482c */
  if ((DAT_04567d65 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<LJJOOIHCCEP_HEJHMMBJODB>__);
                    /* try { // try from 034b39f8 to 035b39ff has its CatchHandler @ 034b4818 */
    DAT_04567d65 = 1;
  }
                    /* try { // try from 034b3a00 to 035b3a0b has its CatchHandler @ 034b47e8 */
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar1) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034b3a20 to 035b3a27 has its CatchHandler @ 034b47e4 */
    iVar2 = KJFPGDFNFCL__AOKIANMEBCH<Int32Enum>
                      ((KDFMDHADHMD->fields).KOANCCDDBDA,0,
                       Method_KJFPGDFNFCL_AOKIANMEBCH<LJJOOIHCCEP_HEJHMMBJODB>__);
                    /* try { // try from 034b3a38 to 035b3a3f has its CatchHandler @ 034b480c */
                    /* try { // try from 034b3a40 to 035b3a5b has its CatchHandler @ 034b4a18 */
    bVar1 = (iVar2 == (__this->fields).JCIKOLNGLBE) != ((__this->fields).super.GBBHFPBFOPI != false)
    ;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

