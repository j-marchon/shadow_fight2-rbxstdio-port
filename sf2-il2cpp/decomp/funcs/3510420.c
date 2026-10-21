// AMIINPEKKFB$$DNGFJEFIACC @ RVA 0x3510420

void AMIINPEKKFB__DNGFJEFIACC
               (HOOAAGABMBL_o *IKKAMAMLIKA,IGFGDDANEPE_o *ENHJPOHLMCL,bool OFKBEIFPFMN,
               MethodInfo *method)

{
  GGHCLMEFIGO_o *__this;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  ACHLOMELAJE_o *pAVar2;
  
  if ((DAT_045688f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688f9 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b87 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03610494 to 037104bb has its CatchHandler @ 03610694 */
    DAT_04565b87 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) && (ENHJPOHLMCL != (IGFGDDANEPE_o *)0x0)) {
    IGFGDDANEPE__DOOKHLFKCAI
              (ENHJPOHLMCL,
               NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM +
               (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField,(MethodInfo *)0x0);
    IGFGDDANEPE__FDAILKOHIKF
              (ENHJPOHLMCL,(IKKAMAMLIKA->fields)._HCHGENFJLHA_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 036104f0 to 0371051b has its CatchHandler @ 03610690 */
    IGFGDDANEPE__JIIEJGCOACC(ENHJPOHLMCL,true,(MethodInfo *)0x0);
    pSVar1 = (ENHJPOHLMCL->fields).PAPANCDPPIF;
    if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      if ((pSVar1->fields)._size == 0) {
        IGFGDDANEPE__PHAGOINEABA(ENHJPOHLMCL,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 03610524 to 0371056b has its CatchHandler @ 0361069c */
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (__this = (pAVar2->fields).OIDPLCLELEN, __this != (GGHCLMEFIGO_o *)0x0)) {
        GGHCLMEFIGO__FIFBDNADAAL(__this,ENHJPOHLMCL,true,(MethodInfo *)0x0);
        if (OFKBEIFPFMN) {
          EDFDANKEBGF__ENELBCPGGJN((MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

