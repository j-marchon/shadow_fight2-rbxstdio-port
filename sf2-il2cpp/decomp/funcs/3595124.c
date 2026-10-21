// DebugSimpleScroll$$CCIPBALFIOB @ RVA 0x3595124

void DebugSimpleScroll__CCIPBALFIOB(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  System_Action_DebugSimpleScroll_ScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *__this_00;
  System_Action_DebugSimpleScroll_ScrollItem__o *action;
  
  if ((DAT_04568d98 & 1) == 0) {
    FUN_01bab630(&System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    FUN_01bab630(&Method_DebugSimpleScroll_<>c_OJPMOCDNLIH__);
    FUN_01bab630(&DebugSimpleScroll_<>c_TypeInfo);
    DAT_04568d98 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).ScrollItems;
  if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__31_0;
  if (action == (System_Action_DebugSimpleScroll_ScrollItem__o *)0x0) {
    if ((DebugSimpleScroll_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DebugSimpleScroll_<>c_TypeInfo,method);
    }
    action = (System_Action_DebugSimpleScroll_ScrollItem__o *)
             thunk_FUN_01bda818(System_Action<DebugSimpleScroll_ScrollItem>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &DebugSimpleScroll_<>c_TypeInfo->static_fields->__9__31_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_DebugSimpleScroll_ScrollItem__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<DebugSimpleScroll_ScrollItem>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

