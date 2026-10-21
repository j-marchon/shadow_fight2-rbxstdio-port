// KAHMAJKJMBK$$LLNDEKACMIL @ RVA 0x34BEB14

void KAHMAJKJMBK__LLNDEKACMIL(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  System_Predicate_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  System_Predicate_AJNNHGGLGIF__o *match;
  
  if ((DAT_04568616 & 1) == 0) {
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_KAHMAJKJMBK_NLIEEJMHDKF__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&System_Predicate<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_KAHMAJKJMBK_<>c_GLENJCEFHDP__);
    FUN_01bab630(&KAHMAJKJMBK_<>c_TypeInfo);
    DAT_04568616 = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).LJNCACBBIBD;
  if ((KAHMAJKJMBK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KAHMAJKJMBK_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = KAHMAJKJMBK_<>c_TypeInfo->static_fields->__9__74_0;
  if (match == (System_Predicate_AJNNHGGLGIF__o *)0x0) {
    if ((KAHMAJKJMBK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KAHMAJKJMBK_<>c_TypeInfo,method);
    }
    match = (System_Predicate_AJNNHGGLGIF__o *)
            thunk_FUN_01bda818(System_Predicate<AJNNHGGLGIF>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &KAHMAJKJMBK_<>c_TypeInfo->static_fields->__9__74_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_01 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List<object>__FindAll
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (System_Predicate_T__o *)match,
                           Method_System_Collections_Generic_List<AJNNHGGLGIF>_FindAll__);
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                (__this_00,action,Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

