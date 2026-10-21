// AGILEPNENOH$$RandomizeObscuredVars @ RVA 0x30FF474

void AGILEPNENOH__RandomizeObscuredVars(AGILEPNENOH_o *__this,MethodInfo *method)

{
  if ((DAT_045664b6 & 1) == 0) {
    FUN_01bab630(&AGILEPNENOH_TypeInfo);
    DAT_045664b6 = 1;
  }
  OOMHDDBCBJP__RandomizeObscuredVars((OOMHDDBCBJP_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 031ff4b8 to 032ff4df has its CatchHandler @ 031ffba0 */
  if ((AGILEPNENOH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&AGILEPNENOH_TypeInfo->static_fields->GKGHELAOIBG,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&AGILEPNENOH_TypeInfo->static_fields->MKMJJANAAFD,(MethodInfo *)0x0);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__GPJJDLBJOAL
            (&AGILEPNENOH_TypeInfo->static_fields->DKMPMFFECBK,(MethodInfo *)0x0);
  return;
}

