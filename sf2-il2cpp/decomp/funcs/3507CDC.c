// KEIAEKNFNNA$$ONDFOFCHBKF @ RVA 0x3507CDC

void KEIAEKNFNNA__ONDFOFCHBKF(KEIAEKNFNNA_o *__this,OPHDIHJPHDE_o *KDODLJFNAAC,MethodInfo *method)

{
  int64_t CJNHFNHJHPE;
  ACHLOMELAJE_o *__this_00;
  PCEDNFLCPPF_o *__this_01;
  Core_Configs_Models_LocalDailyQuestInfo_o *GJDCFLEEBLM;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045688a6 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a6 = 1;
  }
  if ((KDODLJFNAAC != (OPHDIHJPHDE_o *)0x0) &&
     ((KDODLJFNAAC->fields)._DJAIGGFHPMK_k__BackingField == false)) {
    GJDCFLEEBLM = (KDODLJFNAAC->fields)._DMCIAIBPJGN_k__BackingField;
    if (GJDCFLEEBLM != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
      if ((KDODLJFNAAC->fields)._PKGCKALOMOF_k__BackingField <
          (GJDCFLEEBLM->fields)._AdsTargetCount_k__BackingField) {
        return;
      }
      CJNHFNHJHPE = KEIAEKNFNNA__JEAINNIBMLG(__this,GJDCFLEEBLM,method);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__KKDCNDLEGPP(__this_00,CJNHFNHJHPE,false,(MethodInfo *)0x0);
        OPHDIHJPHDE__ADEFCOEJBNO(KDODLJFNAAC,(MethodInfo *)0x0);
        KEIAEKNFNNA__OPIPNIPKEKA(__this,method_00);
        __this_01 = PCEDNFLCPPF__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_01 != (PCEDNFLCPPF_o *)0x0) {
          PCEDNFLCPPF__EHANNHIKALE
                    (__this_01,(KDODLJFNAAC->fields)._MDAJFAPLLOH_k__BackingField,CJNHFNHJHPE,
                     (MethodInfo *)0x0);
          KEIAEKNFNNA__MGNAAFCFIEH(__this,method_01);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

