// KAFCPHCBLPL$$RandomizeObscuredVars @ RVA 0x339C5C4

void KAFCPHCBLPL__RandomizeObscuredVars(KAFCPHCBLPL_o *__this,MethodInfo *method)

{
  System_Action_IENLNOEDCFF__o **ppSVar1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Action_IENLNOEDCFF__o *action;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
  if ((DAT_04567c85 & 1) == 0) {
    FUN_01bab630(&System_Action<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    FUN_01bab630(&Method_KAFCPHCBLPL_<>c_OCLFJIFMNMO__);
    FUN_01bab630(&KAFCPHCBLPL_<>c_TypeInfo);
    DAT_04567c85 = 1;
  }
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).JAHFGPMFLGN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if ((KAFCPHCBLPL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = KAFCPHCBLPL_<>c_TypeInfo->static_fields->__9__5_0;
  if (action == (System_Action_IENLNOEDCFF__o *)0x0) {
    if ((KAFCPHCBLPL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_IENLNOEDCFF__o *)thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &KAFCPHCBLPL_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

