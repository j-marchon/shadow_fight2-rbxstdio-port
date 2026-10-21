// HFNLANEMDFI$$OKHNKAEHOHG @ RVA 0x334A3C8

int64_t HFNLANEMDFI__OKHNKAEHOHG(HFNLANEMDFI_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  MethodInfo *extraout_x1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_045679ec & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045679ec = 1;
    method = extraout_x1;
  }
  HFNLANEMDFI__KIGEDFECCFP(__this,method);
  fVar5 = (__this->fields).AICMABLCDED;
  fVar6 = (__this->fields).EGCPFDNGNHP;
  fVar2 = fVar5;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0344a420 to 0354a42b has its CatchHandler @ 03449fa4 */
    thunk_FUN_01ba7564();
    fVar2 = (__this->fields).AICMABLCDED;
  }
                    /* try { // try from 0344a42c to 0354a433 has its CatchHandler @ 0344a434 */
                    /* catch() { ... } // from try @ 0344a3b0 with catch @ 0344a434
                       catch() { ... } // from try @ 0344a42c with catch @ 0344a434 */
  dVar3 = (double)fVar2 - (double)(long)(fVar5 * fVar6 + 0.5);
  dVar4 = (double)(long)dVar3;
  iVar1 = -0x8000000000000000;
  if (dVar4 != INFINITY) {
    iVar1 = (long)dVar3;
  }
  if (dVar4 < 0.0) {
    iVar1 = 0;
  }
  return iVar1;
}

