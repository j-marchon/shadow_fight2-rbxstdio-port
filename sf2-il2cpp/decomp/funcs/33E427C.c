// FCJBEKHDLAF$$EPLFGHIGEAH @ RVA 0x33E427C

void FCJBEKHDLAF__EPLFGHIGEAH
               (FCJBEKHDLAF_o *__this,bool CJNHFNHJHPE,bool HNPKKPDEBKJ,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  
                    /* catch() { ... } // from try @ 034e40cc with catch @ 034e4288
                       try { // try from 034e4288 to 035e429b has its CatchHandler @ 034e3e9c */
                    /* catch() { ... } // from try @ 034e4070 with catch @ 034e428c */
                    /* try { // try from 034e429c to 035e429f has its CatchHandler @ 034e42b8 */
  if ((DAT_04567efd & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567efd = 1;
  }
                    /* catch() { ... } // from try @ 034e429c with catch @ 034e42b8 */
  if ((__this->fields).AHNAIKFDANF == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).AHNAIKFDANF = CJNHFNHJHPE;
  if ((HNPKKPDEBKJ) || ((__this->fields).GDAKDNGDIKJ == false)) {
    if (!CJNHFNHJHPE) {
      CJNHFNHJHPE_00 = 1;
                    /* try { // try from 034e4318 to 035e4323 has its CatchHandler @ 034e3e9c */
      goto LAB_034e431c;
    }
  }
  else {
    (__this->fields).AHNAIKFDANF = true;
  }
                    /* try { // try from 034e42f0 to 035e4317 has its CatchHandler @ 034e432c */
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CJNHFNHJHPE_00 = MGNPHCAAEIO_TypeInfo->static_fields->PBJPEIOLHPG;
LAB_034e431c:
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e4324 to 035e432b has its CatchHandler @ 034e432c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 034e4274 with catch @ 034e432c
                       catch() { ... } // from try @ 034e42f0 with catch @ 034e432c
                       catch() { ... } // from try @ 034e4324 with catch @ 034e432c */
  MGNPHCAAEIO__EBMJDCJOLDM(CJNHFNHJHPE_00,(MethodInfo *)0x0);
  if ((__this->fields).AHNAIKFDANF != false) {
    (__this->fields).PLEACDNOHFC = false;
  }
  (__this->fields).NAHKMNMHBAA = 0.0;
  return;
}

