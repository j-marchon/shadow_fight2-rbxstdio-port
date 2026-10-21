// NCNJEIBHGBH$$CIIADCLDDAD @ RVA 0x32F5B00

System_Collections_Generic_List_FKNCNNOOOIO__o *
NCNJEIBHGBH__CIIADCLDDAD(NCNJEIBHGBH_o *__this,MethodInfo *method)

{
  System_Predicate_FKNCNNOOOIO__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar2;
  System_Predicate_FKNCNNOOOIO__o *match;
  
  if ((DAT_04567689 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_<>c_GBOKLPBABJO__);
    FUN_01bab630(&NCNJEIBHGBH_<>c_TypeInfo);
    DAT_04567689 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).JODEDMLAIEG;
  if ((NCNJEIBHGBH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NCNJEIBHGBH_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = NCNJEIBHGBH_<>c_TypeInfo->static_fields->__9__28_0;
  if (match == (System_Predicate_FKNCNNOOOIO__o *)0x0) {
    if ((NCNJEIBHGBH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NCNJEIBHGBH_<>c_TypeInfo,method);
    }
    match = (System_Predicate_FKNCNNOOOIO__o *)
            thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &NCNJEIBHGBH_<>c_TypeInfo->static_fields->__9__28_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (pSVar2 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    pSVar2 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
             System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

