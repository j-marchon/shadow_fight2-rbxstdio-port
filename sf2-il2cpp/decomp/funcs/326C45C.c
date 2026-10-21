// KDGKPFMAMKK$$HNIHOIAMDPC @ RVA 0x326C45C

bool KDGKPFMAMKK__HNIHOIAMDPC
               (KDGKPFMAMKK_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,
               System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  LHOMEBJDFLD_o *__this_00;
  JMDPBFOCHHP_NOPCEDPNNKO_o *CJNHFNHJHPE;
  DOPEEDABNEK_o *__this_01;
  
  if ((DAT_045671ef & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045671ef = 1;
  }
  NEFKBLNBOAB__HNIHOIAMDPC((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,LKILNGEECIJ,(MethodInfo *)0x0);
  __this_00 = KKLJIDJBFEI__HCJABMIHNNA((MethodInfo *)0x0);
  if (__this_00 != (LHOMEBJDFLD_o *)0x0) {
    LHOMEBJDFLD__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    CJNHFNHJHPE = FCNNPBIIEOK__FEGPANCOLOL(LKILNGEECIJ,(MethodInfo *)0x0);
    if (CJNHFNHJHPE == (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
LAB_0336c544:
      return CJNHFNHJHPE != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0;
    }
    if (GALCGHPGAIB != (JMDPBFOCHHP_o *)0x0) {
      JMDPBFOCHHP__OKPNEHLBHFK(GALCGHPGAIB,CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (__this_01 != (DOPEEDABNEK_o *)0x0) {
        DOPEEDABNEK__GOPAGALDKPE(__this_01,(MethodInfo *)0x0);
        goto LAB_0336c544;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

