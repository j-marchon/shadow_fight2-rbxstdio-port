// NJPBBPOABKP$$RandomizeObscuredVars @ RVA 0x338DC88

void NJPBBPOABKP__RandomizeObscuredVars(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  System_Action_NKPJLEMPIKD__o **ppSVar1;
  System_Action_ILGLOCBJFEG__o **ppSVar2;
  System_Action_HJNEOLCKEMD__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_00;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_01;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_02;
  System_Action_HJNEOLCKEMD__o *action;
  System_Action_NKPJLEMPIKD__o *action_00;
  System_Action_ILGLOCBJFEG__o *action_01;
  
  if ((DAT_04567bfb & 1) == 0) {
    FUN_01bab630(&System_Action<ILGLOCBJFEG>_TypeInfo);
    FUN_01bab630(&System_Action<NKPJLEMPIKD>_TypeInfo);
    FUN_01bab630(&System_Action<HJNEOLCKEMD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_ForEach__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_ALLDFCIBHMN__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_HFCDEALOHBP__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_JGNKOLEBFDL__);
    FUN_01bab630(&NJPBBPOABKP_<>c_TypeInfo);
    DAT_04567bfb = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields)._NAGALBFLGCA_k__BackingField;
  if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NJPBBPOABKP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_0;
  if (action_00 == (System_Action_NKPJLEMPIKD__o *)0x0) {
    if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NJPBBPOABKP_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_NKPJLEMPIKD__o *)
                thunk_FUN_01bda818(System_Action<NKPJLEMPIKD>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_ForEach__);
    __this_02 = (__this->fields)._FMMIIPHCHOH_k__BackingField;
    if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_1;
    if (action_01 == (System_Action_ILGLOCBJFEG__o *)0x0) {
      if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_01 = (System_Action_ILGLOCBJFEG__o *)
                  thunk_FUN_01bda818(System_Action<ILGLOCBJFEG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_1;
      *ppSVar2 = action_01;
      thunk_FUN_01c20e04(ppSVar2,action_01);
    }
    if (__this_02 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_01,
                 Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
      __this_00 = (__this->fields)._DEKNAHBMHGA_k__BackingField;
      if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_2;
      if (action == (System_Action_HJNEOLCKEMD__o *)0x0) {
        if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_HJNEOLCKEMD__o *)
                 thunk_FUN_01bda818(System_Action<HJNEOLCKEMD>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_2;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (__this_00 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<HJNEOLCKEMD>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

