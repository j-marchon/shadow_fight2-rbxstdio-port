// MMIIDELPHLP$$RandomizeObscuredVars @ RVA 0x32E65B4

void MMIIDELPHLP__RandomizeObscuredVars(MMIIDELPHLP_o *__this,MethodInfo *method)

{
  System_Action_MMIIDELPHLP_FJDJOEFFGNH__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *__this_00;
  System_Action_MMIIDELPHLP_FJDJOEFFGNH__o *action;
  
  if ((DAT_0456760e & 1) == 0) {
    FUN_01bab630(&System_Action<MMIIDELPHLP_FJDJOEFFGNH>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_ForEach__);
    FUN_01bab630(&Method_MMIIDELPHLP_<>c_CNDFGOHLIKK__);
    FUN_01bab630(&MMIIDELPHLP_<>c_TypeInfo);
    DAT_0456760e = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BAFCLOIPEMA;
  if ((MMIIDELPHLP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MMIIDELPHLP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = MMIIDELPHLP_<>c_TypeInfo->static_fields->__9__7_0;
  if (action == (System_Action_MMIIDELPHLP_FJDJOEFFGNH__o *)0x0) {
    if ((MMIIDELPHLP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MMIIDELPHLP_<>c_TypeInfo,method);
    }
    action = (System_Action_MMIIDELPHLP_FJDJOEFFGNH__o *)
             thunk_FUN_01bda818(System_Action<MMIIDELPHLP_FJDJOEFFGNH>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &MMIIDELPHLP_<>c_TypeInfo->static_fields->__9__7_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_MMIIDELPHLP_FJDJOEFFGNH__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<MMIIDELPHLP_FJDJOEFFGNH>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

