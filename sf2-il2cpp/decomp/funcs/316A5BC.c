// FAIJGJCCKJC$$EFLKILFFJKH @ RVA 0x316A5BC

bool FAIJGJCCKJC__EFLKILFFJKH(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar3;
  
  if ((DAT_045668ed & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045668ed = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    pJVar3 = (__this->fields).FBBBEHLGDJK;
    if (pJVar3 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      if (((pJVar3->fields).MLBCPAGCKAH <= iVar2) && (iVar2 <= (pJVar3->fields).FKHFKAJHLOG)) {
        bVar1 = HOOAAGABMBL__EFLKILFFJKH((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
        return bVar1;
      }
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

