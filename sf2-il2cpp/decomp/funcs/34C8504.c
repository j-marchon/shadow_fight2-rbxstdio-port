// EINKKMIHCHI.EDKNECAGMNM$$IEBHMFJJMHK @ RVA 0x34C8504

void EINKKMIHCHI_EDKNECAGMNM__IEBHMFJJMHK
               (EINKKMIHCHI_EDKNECAGMNM_o *__this,bool success,MethodInfo *method)

{
  int32_t *piVar1;
  EINKKMIHCHI_o *__this_00;
  System_String_o *str3;
  System_String_o *pSVar2;
  
                    /* try { // try from 035c850c to 036c8513 has its CatchHandler @ 035c869c */
  if ((DAT_04568650 & 1) == 0) {
                    /* try { // try from 035c8524 to 036c852b has its CatchHandler @ 035c8698 */
    FUN_01bab630(&StringLiteral_5844);
    FUN_01bab630(&StringLiteral_307);
                    /* try { // try from 035c8540 to 036c8547 has its CatchHandler @ 035c8590 */
    DAT_04568650 = 1;
  }
  __this_00 = (__this->fields).__4__this;
  pSVar2 = (__this->fields).p_id;
  piVar1 = &(__this->fields).p_currentStep;
  if (success) {
                    /* try { // try from 035c8550 to 036c8557 has its CatchHandler @ 035c858c */
    if (__this_00 != (EINKKMIHCHI_o *)0x0) {
                    /* try { // try from 035c8568 to 036c856f has its CatchHandler @ 035c8694 */
                    /* try { // try from 035c8570 to 036c85ab has its CatchHandler @ 035c7cb4 */
      EINKKMIHCHI__BGFEFMHKJLO(__this_00,pSVar2,(double)*piVar1,method);
      return;
    }
  }
  else {
    str3 = System_Int32__ToString((int32_t)piVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c8550 with catch @ 035c858c */
                    /* catch() { ... } // from try @ 035c8540 with catch @ 035c8590 */
    pSVar2 = System_String__Concat
                       (StringLiteral_5844,pSVar2,StringLiteral_307,str3,(MethodInfo *)0x0);
    if (__this_00 != (EINKKMIHCHI_o *)0x0) {
                    /* try { // try from 035c85ac to 036c85af has its CatchHandler @ 035c8674 */
                    /* try { // try from 035c85b0 to 036c861f has its CatchHandler @ 035c7cb4 */
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this_00,pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

