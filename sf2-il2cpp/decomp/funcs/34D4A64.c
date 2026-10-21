// TabView$$.ctor @ RVA 0x34D4A64

void TabView___ctor(TabView_o *__this,MethodInfo *method)

{
  System_Action_object__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_object__o *pSVar2;
  
  if ((DAT_045686ce & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_TabView_<>c_HDAOPCEMBJO__);
    FUN_01bab630(&TabView_<>c_TypeInfo);
    DAT_045686ce = 1;
    method = extraout_x1;
  }
  if ((TabView_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(TabView_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = TabView_<>c_TypeInfo->static_fields->__9__8_0;
  if (pSVar2 == (System_Action_object__o *)0x0) {
    if ((TabView_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(TabView_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &TabView_<>c_TypeInfo->static_fields->__9__8_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (TabView_o *)0x0) {
    ppSVar1 = &(__this->fields).OnCloseClickAction;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    UnityEngine_EventSystems_UIBehaviour___ctor
              ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

