// SwitchCameraControl$$OnPreRender @ RVA 0x34C5EF0

void SwitchCameraControl__OnPreRender(SwitchCameraControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  SwitchVideoPlayerController_o *pSVar2;
  
  if ((DAT_04568636 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568636 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields)._controller;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields)._controller;
    if (pSVar2 == (SwitchVideoPlayerController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar2->fields).super._LFALNJINAPO_k__BackingField != false) {
      SwitchVideoPlayerController__PreRender(pSVar2,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

