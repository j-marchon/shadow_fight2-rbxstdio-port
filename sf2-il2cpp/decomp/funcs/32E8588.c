// MEJIKMPNBNL$$RandomizeObscuredVars @ RVA 0x32E8588

void MEJIKMPNBNL__RandomizeObscuredVars(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Action_OOMHDDBCBJP__o *action;
  
  if ((DAT_04567623 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_ForEach__);
    FUN_01bab630(&Method_MEJIKMPNBNL_<>c_KIECENPIMPB__);
    FUN_01bab630(&MEJIKMPNBNL_<>c_TypeInfo);
    DAT_04567623 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__27_0;
  if (action == (System_Action_OOMHDDBCBJP__o *)0x0) {
    if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    }
    action = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

