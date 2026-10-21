// ACHLOMELAJE$$CJLEHKJCCBE @ RVA 0x305E0B8

BNKBGIIJNLF_o *
ACHLOMELAJE__CJLEHKJCCBE(ACHLOMELAJE_o *__this,HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  BNKBGIIJNLF_o *pBVar1;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_01;
  
  if ((DAT_04565ea6 & 1) == 0) {
    FUN_01bab630(&Method_ACHLOMELAJE_FIODBGFCLBF_MAFBGIIDJHB__);
    FUN_01bab630(&ACHLOMELAJE_FIODBGFCLBF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_Find__);
    FUN_01bab630(&System_Predicate<BNKBGIIJNLF>_TypeInfo);
    DAT_04565ea6 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_FIODBGFCLBF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)OAOLCGAIILM;
    thunk_FUN_01c20e04(__this_00 + 1,OAOLCGAIILM);
    __this_01 = (__this->fields).DIELINNGEBJ;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BNKBGIIJNLF>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
      pBVar1 = (BNKBGIIJNLF_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<BNKBGIIJNLF>_Find__);
      return pBVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

