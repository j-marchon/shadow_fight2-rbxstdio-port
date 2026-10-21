// PPJGIFEJMHP$$GILDFJMBFIA @ RVA 0x30AC0C0

void PPJGIFEJMHP__GILDFJMBFIA(PPJGIFEJMHP_o *__this,MethodInfo *method)

{
  System_Predicate_MGNDHCBAPEN_long__Action___o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_00;
  System_Predicate_MGNDHCBAPEN_long__Action___o *match;
  
  if ((DAT_045661a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_RemoveAll__);
    FUN_01bab630(&System_Predicate<MGNDHCBAPEN<long,_Action>>_TypeInfo);
    FUN_01bab630(&Method_PPJGIFEJMHP_<>c_EIFMPDNLPND__);
    FUN_01bab630(&PPJGIFEJMHP_<>c_TypeInfo);
    DAT_045661a9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).JMILCMNCCOM != false) {
    return;
  }
  __this_00 = (__this->fields).JGMOJNCMKAG;
  if ((PPJGIFEJMHP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PPJGIFEJMHP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = PPJGIFEJMHP_<>c_TypeInfo->static_fields->__9__6_0;
  if (match == (System_Predicate_MGNDHCBAPEN_long__Action___o *)0x0) {
    if ((PPJGIFEJMHP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PPJGIFEJMHP_<>c_TypeInfo,method);
    }
    match = (System_Predicate_MGNDHCBAPEN_long__Action___o *)
            thunk_FUN_01bda818(System_Predicate<MGNDHCBAPEN<long,_Action>>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &PPJGIFEJMHP_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAll
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Predicate_T__o *)match
               ,Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_RemoveAll__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

