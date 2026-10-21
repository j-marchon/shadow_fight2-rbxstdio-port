// PNEKMHMACLG$$RandomizeObscuredVars @ RVA 0x3503930

void PNEKMHMACLG__RandomizeObscuredVars(PNEKMHMACLG_o *__this,MethodInfo *method)

{
  System_Action_AJNNHGGLGIF__o **ppSVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Action_AJNNHGGLGIF__o *action;
  
  if ((DAT_04568879 & 1) == 0) {
    FUN_01bab630(&System_Action<AJNNHGGLGIF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    FUN_01bab630(&Method_PNEKMHMACLG_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&PNEKMHMACLG_<>c_TypeInfo);
    DAT_04568879 = 1;
  }
  AJNNHGGLGIF__RandomizeObscuredVars((AJNNHGGLGIF_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).LJNCACBBIBD;
  if ((PNEKMHMACLG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = PNEKMHMACLG_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_AJNNHGGLGIF__o *)0x0) {
    if ((PNEKMHMACLG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_AJNNHGGLGIF__o *)thunk_FUN_01bda818(System_Action<AJNNHGGLGIF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &PNEKMHMACLG_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
                    /* try { // try from 03603a14 to 03703a1b has its CatchHandler @ 03603b08 */
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* try { // try from 03603a2c to 03703a3b has its CatchHandler @ 03603b00 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

