// DEKKGJNMFEB$$RandomizeObscuredVars @ RVA 0x322E404

void DEKKGJNMFEB__RandomizeObscuredVars(DEKKGJNMFEB_o *__this,MethodInfo *method)

{
  System_Action_GGCMECLCOMJ__o **ppSVar1;
  System_Action_GGLKHCAIGDI__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  System_Collections_Generic_List_GGCMECLCOMJ__o *__this_01;
  System_Action_GGLKHCAIGDI__o *action;
  System_Action_GGCMECLCOMJ__o *action_00;
  
  if ((DAT_04566fbe & 1) == 0) {
    FUN_01bab630(&System_Action<GGCMECLCOMJ>_TypeInfo);
    FUN_01bab630(&System_Action<GGLKHCAIGDI>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGCMECLCOMJ>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_ForEach__);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_CEOPGMFFAAE__);
    FUN_01bab630(&Method_DEKKGJNMFEB_<>c_MILKNFHIGIM__);
    FUN_01bab630(&DEKKGJNMFEB_<>c_TypeInfo);
    DAT_04566fbe = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).CGDCBPHBFDE;
  if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DEKKGJNMFEB_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_0;
  if (action_00 == (System_Action_GGCMECLCOMJ__o *)0x0) {
    if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DEKKGJNMFEB_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_GGCMECLCOMJ__o *)
                thunk_FUN_01bda818(System_Action<GGCMECLCOMJ>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_GGCMECLCOMJ__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<GGCMECLCOMJ>_ForEach__);
    __this_00 = (__this->fields).OKIANCELJJF;
    if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_1;
    if (action == (System_Action_GGLKHCAIGDI__o *)0x0) {
      if ((DEKKGJNMFEB_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_GGLKHCAIGDI__o *)
               thunk_FUN_01bda818(System_Action<GGLKHCAIGDI>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &DEKKGJNMFEB_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_00 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<GGLKHCAIGDI>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

