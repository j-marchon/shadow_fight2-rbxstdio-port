// InControl.InControlManager$$Update @ RVA 0x34D096C

void InControl_InControlManager__Update(InControl_InControlManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_045686aa & 1) == 0) {
    FUN_01bab630(&InControl_InputManager_TypeInfo);
    DAT_045686aa = 1;
  }
  if ((__this->fields).useFixedUpdate != false) {
    fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
    if (DAT_045602fa == '\0') {
      FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
      DAT_045602fa = '\x01';
    }
    fVar3 = ABS(fVar1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon * 8.0;
    fVar2 = fVar3 * 1e-06;
    if (fVar3 * 1e-06 <= fVar4) {
      fVar2 = fVar4;
    }
    if (fVar2 <= ABS(0.0 - fVar1)) {
      return;
    }
  }
  if ((InControl_InputManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  InControl_InputManager__UpdateInternal((MethodInfo *)0x0);
  return;
}

