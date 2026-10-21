// KDDFEFJOIJP$$RandomizeObscuredVars @ RVA 0x32E566C

void KDDFEFJOIJP__RandomizeObscuredVars(KDDFEFJOIJP_o *__this,MethodInfo *method)

{
  System_Action_MBALPICJBHF__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_MBALPICJBHF__o *__this_00;
  System_Action_MBALPICJBHF__o *action;
  
  if ((DAT_04567607 & 1) == 0) {
    FUN_01bab630(&System_Action<MBALPICJBHF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBALPICJBHF>_ForEach__);
    FUN_01bab630(&Method_KDDFEFJOIJP_<>c_EOPCNNIGHFB__);
    FUN_01bab630(&KDDFEFJOIJP_<>c_TypeInfo);
    DAT_04567607 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).HBDMPPHKBMP;
  if ((KDDFEFJOIJP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KDDFEFJOIJP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = KDDFEFJOIJP_<>c_TypeInfo->static_fields->__9__3_0;
  if (action == (System_Action_MBALPICJBHF__o *)0x0) {
    if ((KDDFEFJOIJP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KDDFEFJOIJP_<>c_TypeInfo,method);
    }
    action = (System_Action_MBALPICJBHF__o *)thunk_FUN_01bda818(System_Action<MBALPICJBHF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &KDDFEFJOIJP_<>c_TypeInfo->static_fields->__9__3_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_MBALPICJBHF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<MBALPICJBHF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

