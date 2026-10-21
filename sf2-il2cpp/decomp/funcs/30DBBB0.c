// SwitchVideoPlayerController$$Awake @ RVA 0x30DBBB0

void SwitchVideoPlayerController__Awake(SwitchVideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  SwitchCameraControl_o *pSVar2;
  SwitchVideoPlayerController_o **ppSVar3;
  MethodInfo *extraout_x1;
  SwitchCameraControl_o **ppSVar4;
  
  if ((DAT_04566358 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SwitchCameraControl>__);
    DAT_04566358 = 1;
    method = extraout_x1;
  }
  if (DAT_045663a6 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_045663a6 = '\x01';
  }
  VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       (VideoPlayerController_o *)__this;
  thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,__this);
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  (__this->fields).LMGHANCHAEE = pUVar1;
  thunk_FUN_01c20e04();
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_Camera_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    pSVar2 = (SwitchCameraControl_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<SwitchCameraControl>__)
    ;
    ppSVar4 = &(__this->fields).PBNOAOOEIGM;
    *ppSVar4 = pSVar2;
    thunk_FUN_01c20e04(ppSVar4,pSVar2);
    if (*ppSVar4 != (SwitchCameraControl_o *)0x0) {
      ppSVar3 = &((*ppSVar4)->fields)._controller;
      *ppSVar3 = __this;
      thunk_FUN_01c20e04(ppSVar3,__this);
      pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_backgroundColor
                  (pUVar1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

