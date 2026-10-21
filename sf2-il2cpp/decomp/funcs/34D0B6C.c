// InControl.InControlManager$$OnApplicationQuit @ RVA 0x34D0B6C

void InControl_InControlManager__OnApplicationQuit
               (InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ae & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ae = 1;
    method = extraout_x1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
  }
  InControl_InputManager__OnApplicationQuit((MethodInfo *)0x0);
  return;
}

