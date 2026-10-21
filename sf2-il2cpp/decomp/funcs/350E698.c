// AMIINPEKKFB$$GLIKCOKNHDM @ RVA 0x350E698

void AMIINPEKKFB__GLIKCOKNHDM
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  int32_t PIDMGHLCFAJ;
  ACHLOMELAJE_o *__this;
  
                    /* try { // try from 0360e698 to 0370e69f has its CatchHandler @ 0360e6b4 */
                    /* try { // try from 0360e6a0 to 0370e6ab has its CatchHandler @ 0360e1b8 */
                    /* try { // try from 0360e6ac to 0370e6b3 has its CatchHandler @ 0360e6b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360e698 with catch @ 0360e6b4
                       catch(type#2 @ 00000000) { ... } // from try @ 0360e6ac with catch @ 0360e6b4
                        */
  if ((DAT_045688ed & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688ed = 1;
  }
  if ((ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0) &&
     (IGFGDDANEPE__JIIEJGCOACC(ENHJPOHLMCL,true,(MethodInfo *)0x0),
     IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
    IGFGDDANEPE__DJJHOOKLHHL
              (ENHJPOHLMCL,(IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this != (ACHLOMELAJE_o *)0x0) {
      PIDMGHLCFAJ = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
      IGFGDDANEPE__GIIJHCLHFDK(ENHJPOHLMCL,PIDMGHLCFAJ,(MethodInfo *)0x0);
      if (OFKBEIFPFMN) {
        EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

