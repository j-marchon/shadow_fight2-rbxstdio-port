// MEGGKMKGNCP$$DGCODECJJCC @ RVA 0x31C6BE8

bool MEGGKMKGNCP__DGCODECJJCC(MEGGKMKGNCP_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MEGGKMKGNCP_o *__this_00;
  MethodInfo *in_x3;
  
                    /* try { // try from 032c6bf8 to 033c6bfb has its CatchHandler @ 032c727c */
                    /* try { // try from 032c6bfc to 033c6c07 has its CatchHandler @ 032c72c4 */
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
                    /* try { // try from 032c6c0c to 033c6c17 has its CatchHandler @ 032c72c8 */
  if ((bVar1) &&
     (bVar2 = System_String__IsNullOrEmpty((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
     !bVar2)) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (MEGGKMKGNCP_o *)
                KJFPGDFNFCL__ONCFEIGIBGB
                          ((KDFMDHADHMD->fields).KPFGHBEKJIM,(__this->fields).super.BEMCNJHEADJ,
                           (MethodInfo *)0x0);
    bVar1 = MEGGKMKGNCP__PKPGEKHEIBE
                      (__this_00,(System_Collections_Generic_List_string__o *)__this_00,
                       (__this->fields).super.DHKOGAHJNMK,in_x3);
                    /* try { // try from 032c6c4c to 033c6c53 has its CatchHandler @ 032c72b4 */
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
                    /* try { // try from 032c6c58 to 033c6c5f has its CatchHandler @ 032c729c */
  return bVar1;
}

