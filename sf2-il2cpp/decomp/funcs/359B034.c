// GPJJNJJBPBG$$DGCODECJJCC @ RVA 0x359B034

bool GPJJNJJBPBG__DGCODECJJCC(GPJJNJJBPBG_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  GPJJNJJBPBG_o *__this_00;
  MethodInfo *in_x3;
  
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar2 = System_String__IsNullOrEmpty((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
     !bVar2)) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (GPJJNJJBPBG_o *)
                KJFPGDFNFCL__ONCFEIGIBGB
                          ((KDFMDHADHMD->fields).KPFGHBEKJIM,(__this->fields).super.BEMCNJHEADJ,
                           (MethodInfo *)0x0);
    bVar1 = GPJJNJJBPBG__PKPGEKHEIBE
                      (__this_00,(System_Collections_Generic_List_string__o *)__this_00,
                       (__this->fields).super.DHKOGAHJNMK,in_x3);
    bVar1 = bVar1 != ((__this->fields).super.GBBHFPBFOPI != false);
  }
  return bVar1;
}

