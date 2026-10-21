// MFIKGMIDDIG$$DEDBAGNCFLE @ RVA 0x3304A3C

void MFIKGMIDDIG__DEDBAGNCFLE(float CJNHFNHJHPE,MethodInfo *method)

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
  
                    /* catch() { ... } // from try @ 03404a34 with catch @ 03404a48 */
                    /* try { // try from 03404a50 to 03504ab7 has its CatchHandler @ 03404acc */
  if ((DAT_0456774a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456774a = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  PNLFHHJGDLI__IMFBLHDOHFL(CJNHFNHJHPE,(MethodInfo *)0x0);
  pMVar3 = extraout_x1;
  if (0.0 <= CJNHFNHJHPE) {
    if (DAT_045602fa == '\0') {
                    /* try { // try from 03404ab8 to 03504ac3 has its CatchHandler @ 03404720 */
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
                    /* try { // try from 03404ac4 to 03504acb has its CatchHandler @ 03404acc */
      DAT_045602fa = '\x01';
      pMVar3 = extraout_x1_00;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03404a50 with catch @ 03404acc
                       catch(type#2 @ 00000000) { ... } // from try @ 03404ac4 with catch @ 03404acc
                        */
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
  if (DAT_045677bd == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045677bd = '\x01';
    pMVar3 = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar3 = extraout_x1_03;
  }
  bVar2 = PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH == false;
  if ((bool)(bVar1 | !bVar2)) {
    if ((bool)(bVar1 ^ 1U | bVar2)) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (__this != (FGKGKDEJCOG_o *)0x0) {
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
  MFIKGMIDDIG__NEKJIEEEPFO(bVar1,pMVar3);
  return;
}

