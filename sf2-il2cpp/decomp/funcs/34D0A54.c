// InControl.InControlManager$$FixedUpdate @ RVA 0x34D0A54

void InControl_InControlManager__FixedUpdate
               (InControl_InControlManager_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ab & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686ab = 1;
    method = extraout_x1;
  }
  if ((__this->fields).useFixedUpdate != false) {
    if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(InControl_InputManager_TypeInfo,method);
    }
    InControl_InputManager__UpdateInternal((MethodInfo *)0x0);
    return;
  }
  return;
}

