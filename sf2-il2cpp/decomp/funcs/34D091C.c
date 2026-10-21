// InControl.InControlManager$$OnDisable @ RVA 0x34D091C

void InControl_InControlManager__OnDisable(InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686a9 & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686a9 = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__ResetInternal((MethodInfo *)0x0);
  return;
}

