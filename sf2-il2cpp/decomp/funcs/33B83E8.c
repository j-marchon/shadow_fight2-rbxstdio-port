// NBCALFOIEAA$$DFBPBPPNIBC @ RVA 0x33B83E8

bool NBCALFOIEAA__DFBPBPPNIBC(NBCALFOIEAA_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  JMIFGHKOLCL_o *extraout_x1;
  IEFEBEDLHNN_o *pIVar1;
  CNDPAJOLKFN_o *pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_04567d89 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04567d89 = 1;
    LDOOMGABFME = extraout_x1;
  }
  pIVar1 = (__this->fields).HJKLIDCAEOE;
  if (pIVar1 != (IEFEBEDLHNN_o *)0x0) {
    pCVar2 = (pIVar1->fields).CNMHHKAMGPI;
    if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
      fVar4 = (pCVar2->fields).super.OHHDBINAJCB;
      fVar5 = (pCVar2->fields).super.JOLEIODMLFL;
      fVar6 = *(float *)&(__this->fields).super.field_0x5c;
      fVar7 = (__this->fields).EAMLBCJEKDF;
      fVar3 = (pCVar2->fields).PPOPAMHBMGG;
                    /* try { // try from 034b8444 to 035b844b has its CatchHandler @ 034b852c */
      pCVar2 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo,LDOOMGABFME);
                    /* try { // try from 034b8454 to 035b845f has its CatchHandler @ 034b8524 */
      CNDPAJOLKFN___ctor(pCVar2,fVar4 + fVar6,fVar7 - fVar5,fVar3,(MethodInfo *)0x0);
      if (pCVar2 != (CNDPAJOLKFN_o *)0x0) {
        fVar3 = (pCVar2->fields).super.OHHDBINAJCB;
                    /* try { // try from 034b8470 to 035b8473 has its CatchHandler @ 034b8518 */
                    /* try { // try from 034b8474 to 035b8483 has its CatchHandler @ 034b8528 */
        if ((((fVar3 <= (__this->fields).GJPJBEBEFDA) && ((__this->fields).HNJEMFFEBBH <= fVar3)) &&
            (fVar3 = (pCVar2->fields).super.JOLEIODMLFL, fVar3 <= (__this->fields).EMCONLBCHAB)) &&
           ((__this->fields).ODJMFPBPLNH <= fVar3)) {
          return false;
        }
        (*(__this->klass->vtable)._9_AFBEEALKOPE.methodPtr)
                  (__this,0,(__this->klass->vtable)._9_AFBEEALKOPE.method);
        return true;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034b84c0 to 035b84e3 has its CatchHandler @ 034b8520 */
  return false;
}

