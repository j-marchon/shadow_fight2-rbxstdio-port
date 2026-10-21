// GGHCLMEFIGO$$RandomizeObscuredVars @ RVA 0x33B617C

void GGHCLMEFIGO__RandomizeObscuredVars(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Action_IGFGDDANEPE__o *action;
  
  if ((DAT_04567d72 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_DAHGFFNOEMO__);
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
    DAT_04567d72 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DPOPJKJLDEE;
  if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__45_0;
  if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
    if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    }
    action = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__45_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

