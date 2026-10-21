// MFIKGMIDDIG$$NEKJIEEEPFO @ RVA 0x3304C10

void MFIKGMIDDIG__NEKJIEEEPFO(bool CJNHFNHJHPE,MethodInfo *method)

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
  
  if ((DAT_0456774b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456774b = 1;
    method = extraout_x1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045677bd == '\0') {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045677bd = '\x01';
    method = extraout_x1_01;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
    method = extraout_x1_02;
  }
  if ((PNLFHHJGDLI_TypeInfo->static_fields->GBBBAEHFPLH != false) != CJNHFNHJHPE) {
    if (!CJNHFNHJHPE) {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo,method);
      }
      if (DAT_045677be == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_045677be = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar5 = PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO;
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
        PNLFHHJGDLI__IMFBLHDOHFL(1.0,(MethodInfo *)0x0);
      }
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PNLFHHJGDLI__NEKJIEEEPFO(CJNHFNHJHPE,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = NLPJLHOEAOE_TypeInfo;
    NLPJLHOEAOE_TypeInfo->static_fields->OFCMOHAEENG = CJNHFNHJHPE;
                    /* try { // try from 03404dd0 to 03504ecb has its CatchHandler @ 03404dd0
                       catch() { ... } // from try @ 03404dd0 with catch @ 03404dd0
                       catch() { ... } // from try @ 03405080 with catch @ 03404dd0
                       catch() { ... } // from try @ 0340536c with catch @ 03404dd0
                       catch() { ... } // from try @ 03405374 with catch @ 03404dd0
                       catch() { ... } // from try @ 03405470 with catch @ 03404dd0 */
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

