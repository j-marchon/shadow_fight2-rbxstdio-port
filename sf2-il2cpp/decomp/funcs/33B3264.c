// FKNCNNOOOIO$$LFHPFJOAJIO @ RVA 0x33B3264

bool FKNCNNOOOIO__LFHPFJOAJIO(FKNCNNOOOIO_o *__this,FKNCNNOOOIO_o *NPMJCCEGOKB,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034b3270 to 035b327b has its CatchHandler @ 034b472c */
  if (__this == NPMJCCEGOKB) {
    bVar1 = true;
  }
  else {
    if (NPMJCCEGOKB == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034b32e8 to 035b3413 has its CatchHandler @ 034b26b0 */
      FUN_01bab8c8();
    }
                    /* try { // try from 034b328c to 035b3293 has its CatchHandler @ 034b4944 */
    bVar1 = System_String__op_Equality
                      ((__this->fields).JIJLBFGKNJK,(NPMJCCEGOKB->fields).JIJLBFGKNJK,
                       (MethodInfo *)0x0);
                    /* try { // try from 034b32a4 to 035b32c3 has its CatchHandler @ 034b472c */
    if (((bVar1) &&
        (bVar1 = System_String__op_Equality
                           ((__this->fields).KPDPJONADPJ,(NPMJCCEGOKB->fields).KPDPJONADPJ,
                            (MethodInfo *)0x0), bVar1)) &&
       (bVar1 = System_String__op_Equality
                          ((__this->fields).MEONABNPAPF,(NPMJCCEGOKB->fields).MEONABNPAPF,
                           (MethodInfo *)0x0), bVar1)) {
      bVar1 = (__this->fields).BGHFADDGPAD == (NPMJCCEGOKB->fields).BGHFADDGPAD;
    }
    else {
      bVar1 = false;
    }
  }
                    /* try { // try from 034b32dc to 035b32e7 has its CatchHandler @ 034b4704 */
  return bVar1;
}

