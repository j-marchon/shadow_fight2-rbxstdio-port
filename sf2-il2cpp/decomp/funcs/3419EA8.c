// PCFNBEFFKJM$$RandomizeObscuredVars @ RVA 0x3419EA8

void PCFNBEFFKJM__RandomizeObscuredVars(PCFNBEFFKJM_o *__this,MethodInfo *method)

{
  System_Action_OMNMIEMIMKC__o **ppSVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  System_Action_OMNMIEMIMKC__o *action;
  
  if ((DAT_045680bf & 1) == 0) {
    FUN_01bab630(&System_Action<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    FUN_01bab630(&Method_PCFNBEFFKJM_<>c_CNDFGOHLIKK__);
    FUN_01bab630(&PCFNBEFFKJM_<>c_TypeInfo);
    DAT_045680bf = 1;
  }
  OMNMIEMIMKC__RandomizeObscuredVars((OMNMIEMIMKC_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).INAJMPIJJOG;
  if ((PCFNBEFFKJM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = PCFNBEFFKJM_<>c_TypeInfo->static_fields->__9__7_0;
  if (action == (System_Action_OMNMIEMIMKC__o *)0x0) {
    if ((PCFNBEFFKJM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_OMNMIEMIMKC__o *)thunk_FUN_01bda818(System_Action<OMNMIEMIMKC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PCFNBEFFKJM_<>c_TypeInfo->static_fields->__9__7_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

