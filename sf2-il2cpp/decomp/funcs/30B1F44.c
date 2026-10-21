// FEPPOONJCGI$$ABFBENBACFN @ RVA 0x30B1F44

void FEPPOONJCGI__ABFBENBACFN
               (FEPPOONJCGI_o *__this,EKGDLIKHEMA_o *IHEPDIFDBGK,bool COPNBALDNLF,bool BGLBPHDOCGK,
               MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 031b1f60 to 032b1fcf has its CatchHandler @ 031b2820 */
  if ((DAT_045661e3 & 1) == 0) {
    __this = (FEPPOONJCGI_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661e3 = 1;
  }
  if (IHEPDIFDBGK != (EKGDLIKHEMA_o *)0x0) {
    if ((((IHEPDIFDBGK->fields).LDBJGDMBCKM != false) == COPNBALDNLF) ||
       (EKGDLIKHEMA__INOKKGKNDAH(IHEPDIFDBGK,COPNBALDNLF,(MethodInfo *)0x0), !BGLBPHDOCGK)) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (FEPPOONJCGI_o *)0x0;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

