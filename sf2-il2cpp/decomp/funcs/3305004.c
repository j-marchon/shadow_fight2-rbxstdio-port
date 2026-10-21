// MFIKGMIDDIG$$FDOGCCOEHPL @ RVA 0x3305004

void MFIKGMIDDIG__FDOGCCOEHPL(bool CJNHFNHJHPE,MethodInfo *method)

{
  NLPJLHOEAOE_c *pNVar1;
  FGKGKDEJCOG_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 0340500c to 0350500f has its CatchHandler @ 034053a8 */
                    /* try { // try from 03405010 to 0350501b has its CatchHandler @ 034053a0 */
  if ((DAT_0456774d & 1) == 0) {
                    /* try { // try from 0340502c to 03505033 has its CatchHandler @ 0340538c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03405038 to 03505043 has its CatchHandler @ 03405390 */
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456774d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03405050 to 03505057 has its CatchHandler @ 03405388 */
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* try { // try from 0340505c to 0350506b has its CatchHandler @ 03405398 */
  if (DAT_04565f32 == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04565f32 = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 03405078 to 0350507f has its CatchHandler @ 03405394 */
                    /* try { // try from 03405080 to 03505343 has its CatchHandler @ 03404dd0 */
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK != false) != CJNHFNHJHPE) {
    if (!CJNHFNHJHPE) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
      }
      if (DAT_045677bf == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_045677bf = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar5 = PNLFHHJGDLI_TypeInfo->static_fields->AGBNCFPOLOE;
      if (DAT_045602fa == '\0') {
        FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
        DAT_045602fa = '\x01';
      }
      fVar3 = ABS(fVar5);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
      fVar2 = fVar3 * 1e-06;
      if (fVar3 * 1e-06 <= fVar4) {
        fVar2 = fVar4;
      }
      if (ABS(0.0 - fVar5) < fVar2) {
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        PNLFHHJGDLI__GJBPODCHLNP(1.0,(MethodInfo *)0x0);
      }
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__FDOGCCOEHPL(CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = NLPJLHOEAOE_TypeInfo;
    NLPJLHOEAOE_TypeInfo->static_fields->OFCMOHAEENG = CJNHFNHJHPE;
    if (DAT_04565e59 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565e59 = '\x01';
      pNVar1 = NLPJLHOEAOE_TypeInfo;
    }
    if ((pNVar1->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pNVar1 = NLPJLHOEAOE_TypeInfo;
    }
    __this = pNVar1->static_fields->EIHHKABBIMJ;
    if (__this != (FGKGKDEJCOG_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

