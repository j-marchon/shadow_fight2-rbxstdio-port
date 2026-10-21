// InControl.InControlManager$$OnApplicationFocus @ RVA 0x34D0ABC

void InControl_InControlManager__OnApplicationFocus
               (InControl_InControlManager_o *__this,bool focusState,MethodInfo *method)

{
  if ((DAT_045686ac & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ac = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__OnApplicationFocus(focusState,(MethodInfo *)0x0);
  return;
}

