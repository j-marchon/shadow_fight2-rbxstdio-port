// NLPJLHOEAOE$$KNHMOFPKOAM @ RVA 0x31F8564

PAMEPBLOLPB_o *
NLPJLHOEAOE__KNHMOFPKOAM(AFFHKININGD_o *FBFPLEFCDOK,bool IPGNPJLADGH,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  ACHLOMELAJE_o *pAVar1;
  PAMEPBLOLPB_o *__this;
  NLPJLHOEAOE_c *method_00;
  NLPJLHOEAOE_o *__this_00;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_04566dd7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dd7 = 1;
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
  if ((FBFPLEFCDOK != (AFFHKININGD_o *)0x0) &&
     (pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
     pAVar1 != (ACHLOMELAJE_o *)0x0)) {
    DBIAAJNKHLH = (FBFPLEFCDOK->fields).KOILJHHCIEE;
    if (IPGNPJLADGH) {
      __this = ACHLOMELAJE__JJOANHLIOLM(pAVar1,DBIAAJNKHLH,(MethodInfo *)0x0);
    }
    else {
      __this = ACHLOMELAJE__JBGHFIGDLIJ(pAVar1,DBIAAJNKHLH,(MethodInfo *)0x0);
    }
    if (__this != (PAMEPBLOLPB_o *)0x0) {
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
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_032f86c4;
      CJNHFNHJHPE = ACHLOMELAJE__EOEAKGGDBFH(pAVar1,(MethodInfo *)0x0);
      PAMEPBLOLPB__AKJBHHAHMPG(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
      AFFHKININGD__HKBKHKMMBFG(FBFPLEFCDOK,__this,(MethodInfo *)0x0);
    }
    method_00 = NLPJLHOEAOE_TypeInfo;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)method_00);
    if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
      NLPJLHOEAOE__KKBIJDHJAFE(__this_00,method_01);
      NLPJLHOEAOE__CCAEFPKPPIO(__this_00,method_02);
                    /* try { // try from 032f86b8 to 033f8793 has its CatchHandler @ 032f86b8
                       catch() { ... } // from try @ 032f86b8 with catch @ 032f86b8
                       catch() { ... } // from try @ 032f87dc with catch @ 032f86b8
                       catch() { ... } // from try @ 032f8854 with catch @ 032f86b8
                       catch() { ... } // from try @ 032f8884 with catch @ 032f86b8
                       catch() { ... } // from try @ 032f88c4 with catch @ 032f86b8 */
      return __this;
    }
  }
LAB_032f86c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

