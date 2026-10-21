// VideoPlayerController$$Awake @ RVA 0x33E1520

void VideoPlayerController__Awake(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *value;
  UnityEngine_Video_VideoPlayer_EventHandler_o *pUVar1;
  UnityEngine_Camera_o *value_00;
  MethodInfo *extraout_x1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  
  if ((DAT_04567ea3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    FUN_01bab630(&Method_VideoPlayerController_JLDEKOIIPDE__);
    FUN_01bab630(&Method_VideoPlayerController_KNKHDOFPBOG__);
    FUN_01bab630(&Method_VideoPlayerController_MMFFJEFEPEH__);
    DAT_04567ea3 = 1;
    method = extraout_x1;
  }
  if (DAT_045663a6 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo,method);
    DAT_045663a6 = '\x01';
  }
  VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField = __this;
  thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._VideoPlayer;
  value = (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)
          thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
  UnityEngine_Video_VideoPlayer_ErrorEventHandler___ctor();
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__add_errorReceived(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
             thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    UnityEngine_Video_VideoPlayer_EventHandler___ctor();
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__add_prepareCompleted(pUVar2,pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._VideoPlayer;
      pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
               thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
      UnityEngine_Video_VideoPlayer_EventHandler___ctor();
      if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
        UnityEngine_Video_VideoPlayer__add_loopPointReached(pUVar2,pUVar1,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._VideoPlayer;
        if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
          UnityEngine_Video_VideoPlayer__set_isLooping(pUVar2,false,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._VideoPlayer;
          if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
            UnityEngine_Video_VideoPlayer__set_audioOutputMode(pUVar2,1,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._VideoPlayer;
            if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
              UnityEngine_Video_VideoPlayer__set_controlledAudioTrackCount
                        (pUVar2,1,(MethodInfo *)0x0);
              pUVar2 = (__this->fields)._VideoPlayer;
              if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                UnityEngine_Video_VideoPlayer__EnableAudioTrack(pUVar2,0,true,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._VideoPlayer;
                if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                  UnityEngine_Video_VideoPlayer__SetTargetAudioSource
                            (pUVar2,0,(__this->fields)._AudioSource,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._VideoPlayer;
                  value_00 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                    UnityEngine_Video_VideoPlayer__set_targetCamera
                              (pUVar2,value_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

