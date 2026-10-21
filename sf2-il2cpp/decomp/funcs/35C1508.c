// IMAPABEJECG$$OLNHKPOOCMA @ RVA 0x35C1508

CNOGBOOJFIP_o * IMAPABEJECG__OLNHKPOOCMA(IMAPABEJECG_ADAMKJAHPLL_o *param_1,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  HIJLPKACNPD_o *__this;
  OCHIFKHFMAC_o *EIHGMMBMDDO;
  NHJCFGACFDF_o *EMIJCAIFDML;
  
  method_00 = (MethodInfo *)param_1;
  if ((DAT_04568f20 & 1) == 0) {
    FUN_01bab630(&CKKPBHJBJGM_TypeInfo);
    FUN_01bab630(&HIJLPKACNPD_TypeInfo);
    method_00 = (MethodInfo *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f20 = 1;
  }
  bVar1 = IMAPABEJECG__EMBIGPDBNKJ(method_00);
  if (bVar1) {
    EIHGMMBMDDO = (param_1->fields).googlePlayDataHolder;
    EMIJCAIFDML = IMAPABEJECG_TypeInfo->static_fields->KAKIHIMNDAE;
    __this = (HIJLPKACNPD_o *)thunk_FUN_01bda818(HIJLPKACNPD_TypeInfo);
    HIJLPKACNPD___ctor(__this,EMIJCAIFDML,EIHGMMBMDDO,(MethodInfo *)0x0);
  }
  else {
    __this = (HIJLPKACNPD_o *)thunk_FUN_01bda818(CKKPBHJBJGM_TypeInfo);
                    /* try { // try from 036c15a8 to 037c1667 has its CatchHandler @ 036c15a8
                       catch() { ... } // from try @ 036c15a8 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c1728 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c177c with catch @ 036c15a8
                       catch() { ... } // from try @ 036c17c0 with catch @ 036c15a8
                       catch() { ... } // from try @ 036c17f0 with catch @ 036c15a8 */
    CKKPBHJBJGM___ctor((CKKPBHJBJGM_o *)__this,(MethodInfo *)0x0);
  }
  return (CNOGBOOJFIP_o *)__this;
}

