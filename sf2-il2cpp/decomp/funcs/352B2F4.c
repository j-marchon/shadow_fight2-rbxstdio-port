// ALJBCELIEHC$$ILDMHAKLLJC @ RVA 0x352B2F4

NFEOGKEAFHL_o * ALJBCELIEHC__ILDMHAKLLJC(ALJBCELIEHC_o *__this,MethodInfo *method)

{
  System_Predicate_NFEOGKEAFHL__o **ppSVar1;
  NFEOGKEAFHL_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_NFEOGKEAFHL__o *__this_00;
  System_Predicate_NFEOGKEAFHL__o *match;
  
  if ((DAT_04568a23 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NFEOGKEAFHL>_Find__);
    FUN_01bab630(&System_Predicate<NFEOGKEAFHL>_TypeInfo);
    FUN_01bab630(&Method_ALJBCELIEHC_<>c_BBLKIDNBHOA__);
    FUN_01bab630(&ALJBCELIEHC_<>c_TypeInfo);
    DAT_04568a23 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).PBGALMEHDBP;
  if ((ALJBCELIEHC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ALJBCELIEHC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = ALJBCELIEHC_<>c_TypeInfo->static_fields->__9__9_0;
  if (match == (System_Predicate_NFEOGKEAFHL__o *)0x0) {
    if ((ALJBCELIEHC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(ALJBCELIEHC_<>c_TypeInfo,method);
    }
    match = (System_Predicate_NFEOGKEAFHL__o *)
            thunk_FUN_01bda818(System_Predicate<NFEOGKEAFHL>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &ALJBCELIEHC_<>c_TypeInfo->static_fields->__9__9_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_NFEOGKEAFHL__o *)0x0) {
    pNVar2 = (NFEOGKEAFHL_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<NFEOGKEAFHL>_Find__);
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

