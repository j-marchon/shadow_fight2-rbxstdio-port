// StepBar$$SetValue @ RVA 0x352E6FC

void StepBar__SetValue(StepBar_o *__this,float CJNHFNHJHPE,float PNEIGGOFIOA,
                      System_Action_o *DLPCMOHKKMH,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  float NBHHBBOJJME;
  
                    /* try { // try from 0362e714 to 0372e717 has its CatchHandler @ 0362e788 */
                    /* try { // try from 0362e718 to 0372e71b has its CatchHandler @ 0362e784 */
  CJNHFNHJHPE_00 = -0x80000000;
  if (CJNHFNHJHPE != INFINITY) {
    CJNHFNHJHPE_00 = (int)CJNHFNHJHPE;
  }
  NBHHBBOJJME = StepBar__AJKDJMLMJKA(__this,CJNHFNHJHPE_00,method);
                    /* try { // try from 0362e730 to 0372e74f has its CatchHandler @ 0362e7fc */
  ProgressBarBase__SetValue
            ((ProgressBarBase_o *)__this,NBHHBBOJJME,PNEIGGOFIOA,DLPCMOHKKMH,(MethodInfo *)0x0);
  return;
}

