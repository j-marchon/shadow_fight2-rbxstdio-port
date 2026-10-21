// GGLKHCAIGDI$$RandomizeObscuredVars @ RVA 0x33A5CFC

void GGLKHCAIGDI__RandomizeObscuredVars(GGLKHCAIGDI_o *__this,MethodInfo *method)

{
  System_Action_MDLDFLDGLND__o **ppSVar1;
  System_Action_LGFLCMBIFCN__o **ppSVar2;
  System_Action_PFECHOJADFA__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_00;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_01;
  System_Collections_Generic_List_LGFLCMBIFCN__o *__this_02;
  System_Action_PFECHOJADFA__o *action;
  System_Action_MDLDFLDGLND__o *action_00;
  System_Action_LGFLCMBIFCN__o *action_01;
  
  if ((DAT_04567cee & 1) == 0) {
    FUN_01bab630(&System_Action<MDLDFLDGLND>_TypeInfo);
    FUN_01bab630(&System_Action<LGFLCMBIFCN>_TypeInfo);
    FUN_01bab630(&System_Action<PFECHOJADFA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_ForEach__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_HHBKPEKOOJK__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_JKAPHJFALNF__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_PNEFCJMKMID__);
    FUN_01bab630(&GGLKHCAIGDI_<>c_TypeInfo);
    DAT_04567cee = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).HEHMAPDMHIG;
  if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGLKHCAIGDI_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_0;
  if (action_00 == (System_Action_MDLDFLDGLND__o *)0x0) {
    if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GGLKHCAIGDI_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_MDLDFLDGLND__o *)
                thunk_FUN_01bda818(System_Action<MDLDFLDGLND>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<MDLDFLDGLND>_ForEach__);
    __this_02 = (__this->fields).PJGPKMDGOIE;
    if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_1;
    if (action_01 == (System_Action_LGFLCMBIFCN__o *)0x0) {
      if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_01 = (System_Action_LGFLCMBIFCN__o *)
                  thunk_FUN_01bda818(System_Action<LGFLCMBIFCN>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_1;
      *ppSVar2 = action_01;
      thunk_FUN_01c20e04(ppSVar2,action_01);
    }
    if (__this_02 != (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_01,
                 Method_System_Collections_Generic_List<LGFLCMBIFCN>_ForEach__);
      __this_00 = (__this->fields).NICGLFEBNFM;
      if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_2;
      if (action == (System_Action_PFECHOJADFA__o *)0x0) {
        if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_PFECHOJADFA__o *)
                 thunk_FUN_01bda818(System_Action<PFECHOJADFA>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_2;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (__this_00 != (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<PFECHOJADFA>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

