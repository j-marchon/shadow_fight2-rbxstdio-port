// JJPKEILDJCP$$DGCODECJJCC @ RVA 0x33B36C8

bool JJPKEILDJCP__DGCODECJJCC(JJPKEILDJCP_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  JJPKEILDJCP_o *__this_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 034b36d8 to 035b36df has its CatchHandler @ 034b4898 */
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
                    /* try { // try from 034b36e0 to 035b36eb has its CatchHandler @ 034b492c */
  if ((bVar1) &&
     (bVar2 = System_String__IsNullOrEmpty((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
     !bVar2)) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (JJPKEILDJCP_o *)
                KJFPGDFNFCL__ONCFEIGIBGB
                          ((KDFMDHADHMD->fields).KPFGHBEKJIM,(__this->fields).super.BEMCNJHEADJ,
                           (MethodInfo *)0x0);
                    /* try { // try from 034b3714 to 035b371b has its CatchHandler @ 034b48f0 */
                    /* try { // try from 034b371c to 035b3727 has its CatchHandler @ 034b4918 */
    bVar1 = JJPKEILDJCP__PKPGEKHEIBE
                      (__this_00,(System_Collections_Generic_List_string__o *)__this_00,
                       (__this->fields).super.DHKOGAHJNMK,in_x3);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* try { // try from 034b3738 to 035b373f has its CatchHandler @ 034b48f4 */
  return bVar1;
}

