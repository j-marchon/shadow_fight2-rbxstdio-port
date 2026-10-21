// MFIKGMIDDIG$$ICHPKMALDCH @ RVA 0x3304E30

void MFIKGMIDDIG__ICHPKMALDCH(float CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  FGKGKDEJCOG_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_0456774c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456774c = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__GJBPODCHLNP(CJNHFNHJHPE,(MethodInfo *)0x0);
  pMVar3 = extraout_x1;
  if (0.0 <= CJNHFNHJHPE) {
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
      pMVar3 = extraout_x1_00;
    }
                    /* try { // try from 03404ecc to 03504ef3 has its CatchHandler @ 034053d4 */
    fVar5 = ABS(CJNHFNHJHPE);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar6 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar4 = fVar5 * 1e-06;
    if (fVar5 * 1e-06 <= fVar6) {
      fVar4 = fVar6;
    }
    bVar1 = fVar4 <= ABS(0.0 - CJNHFNHJHPE);
  }
  else {
    bVar1 = false;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_01;
  }
  if (DAT_04565f32 == '\0') {
                    /* try { // try from 03404f28 to 03504f53 has its CatchHandler @ 034053d0 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    pMVar3 = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_03;
  }
  bVar2 = PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK == false;
  if ((bool)(bVar1 | !bVar2)) {
    if ((bool)(bVar1 ^ 1U | bVar2)) {
                    /* try { // try from 03404f90 to 03504f97 has its CatchHandler @ 034053cc */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03404fa4 to 03504fab has its CatchHandler @ 034053bc */
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03404fc0 to 03504fc7 has its CatchHandler @ 034053c8 */
        DAT_04565e59 = '\x01';
      }
                    /* try { // try from 03404fcc to 03504fd7 has its CatchHandler @ 034053c4 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (__this != (FGKGKDEJCOG_o *)0x0) {
                    /* try { // try from 03404fe8 to 03504fef has its CatchHandler @ 034053a4 */
                    /* try { // try from 03404ff4 to 03504fff has its CatchHandler @ 034053b4 */
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  MFIKGMIDDIG__FDOGCCOEHPL(bVar1,pMVar3);
  return;
}

