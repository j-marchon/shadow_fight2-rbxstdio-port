// NLPJLHOEAOE$$DGEEFPOJFKL @ RVA 0x31F6A14

void NLPJLHOEAOE__DGEEFPOJFKL(NLPJLHOEAOE_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  System_String_o *BHHBEIACGPB;
  System_String_o *BANHBMINMMP;
  ACHLOMELAJE_o *__this_00;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  MEJIKMPNBNL_o *pMVar1;
  DNELIPCHKLK_o *__this_01;
  OOMHDDBCBJP_o *pOVar2;
  
  if ((DAT_04566dcc & 1) == 0) {
    __this = (NLPJLHOEAOE_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566dcc = 1;
  }
  if (((FBFPLEFCDOK != (AFFHKININGD_o *)0x0) &&
      (pOVar2 = (FBFPLEFCDOK->fields).IFJLLGPGMHM, pOVar2 != (OOMHDDBCBJP_o *)0x0)) &&
     (pMVar1 = (pOVar2->fields).IAJPHAAMKPC, pMVar1 != (MEJIKMPNBNL_o *)0x0)) {
    __this_01 = (FBFPLEFCDOK->fields).KOILJHHCIEE;
    BHHBEIACGPB = System_String__Copy((pMVar1->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    BANHBMINMMP = System_String__Copy((pOVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    __this = (NLPJLHOEAOE_o *)
             System_String__Copy((FBFPLEFCDOK->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    if (__this_01 != (DNELIPCHKLK_o *)0x0) {
      DNELIPCHKLK__FABCBOLKOCC
                (__this_01,BHHBEIACGPB,BANHBMINMMP,(System_String_o *)__this,(MethodInfo *)0x0);
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
      __this = (NLPJLHOEAOE_o *)0x0;
      if (__this_00 != (ACHLOMELAJE_o *)0x0) {
        CJNHFNHJHPE = ACHLOMELAJE__EKOLJIPEEHA
                                (__this_00,(FBFPLEFCDOK->fields).KOILJHHCIEE,(MethodInfo *)0x0);
        if (CJNHFNHJHPE != (PAMEPBLOLPB_o *)0x0) {
          AFFHKININGD__HKBKHKMMBFG(FBFPLEFCDOK,CJNHFNHJHPE,(MethodInfo *)0x0);
          AFFHKININGD__DBLLCDJCJIJ(FBFPLEFCDOK,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

