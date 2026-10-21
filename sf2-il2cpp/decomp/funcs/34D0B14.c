// InControl.InControlManager$$OnApplicationPause @ RVA 0x34D0B14

void InControl_InControlManager__OnApplicationPause
               (InControl_InControlManager_o *__this,bool pauseState,MethodInfo *method)

{
  if ((DAT_045686ad & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ad = 1;
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__OnApplicationPause(pauseState,(MethodInfo *)0x0);
  return;
}

