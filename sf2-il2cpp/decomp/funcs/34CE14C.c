// PFECHOJADFA$$RandomizeObscuredVars @ RVA 0x34CE14C

void PFECHOJADFA__RandomizeObscuredVars(PFECHOJADFA_o *__this,MethodInfo *method)

{
  System_Action_OMNMIEMIMKC__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  System_Action_OMNMIEMIMKC__o *action;
  
  if ((DAT_04568694 & 1) == 0) {
    FUN_01bab630(&System_Action<OMNMIEMIMKC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_ForEach__);
    FUN_01bab630(&Method_PFECHOJADFA_<>c_EKMLLOCFPGP__);
    FUN_01bab630(&PFECHOJADFA_<>c_TypeInfo);
    DAT_04568694 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).INAJMPIJJOG;
  if ((PFECHOJADFA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PFECHOJADFA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = PFECHOJADFA_<>c_TypeInfo->static_fields->__9__8_0;
  if (action == (System_Action_OMNMIEMIMKC__o *)0x0) {
    if ((PFECHOJADFA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PFECHOJADFA_<>c_TypeInfo,method);
    }
    action = (System_Action_OMNMIEMIMKC__o *)thunk_FUN_01bda818(System_Action<OMNMIEMIMKC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PFECHOJADFA_<>c_TypeInfo->static_fields->__9__8_0;
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

