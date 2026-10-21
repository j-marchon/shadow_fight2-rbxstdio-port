// HIJGJNFACPG$$RandomizeObscuredVars @ RVA 0x3291C90

void HIJGJNFACPG__RandomizeObscuredVars(HIJGJNFACPG_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Action_AJNNHGGLGIF__o *action;
  
  if ((DAT_0456732b & 1) == 0) {
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&Method_HIJGJNFACPG_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&HIJGJNFACPG_<>c_TypeInfo);
    DAT_0456732b = 1;
  }
  PNEKMHMACLG__RandomizeObscuredVars((PNEKMHMACLG_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.LJNCACBBIBD;
  if ((HIJGJNFACPG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = HIJGJNFACPG_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((HIJGJNFACPG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_AJNNHGGLGIF__o *)thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &HIJGJNFACPG_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

