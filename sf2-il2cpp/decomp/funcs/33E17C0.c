// VideoPlayerController$$OnDestroy @ RVA 0x33E17C0

void VideoPlayerController__OnDestroy(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *value;
  UnityEngine_Video_VideoPlayer_EventHandler_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  
  if ((DAT_04567ea5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
    FUN_01bab630(&UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    FUN_01bab630(&Method_VideoPlayerController_JLDEKOIIPDE__);
    FUN_01bab630(&Method_VideoPlayerController_KNKHDOFPBOG__);
    FUN_01bab630(&Method_VideoPlayerController_MMFFJEFEPEH__);
    DAT_04567ea5 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._LFALNJINAPO_k__BackingField != false) {
    VideoPlayerController__JLDEKOIIPDE(__this,(UnityEngine_Video_VideoPlayer_o *)method,in_x2);
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  value = (UnityEngine_Video_VideoPlayer_ErrorEventHandler_o *)
          thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_ErrorEventHandler_TypeInfo);
  UnityEngine_Video_VideoPlayer_ErrorEventHandler___ctor();
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__remove_errorReceived(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
             thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
    UnityEngine_Video_VideoPlayer_EventHandler___ctor();
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      UnityEngine_Video_VideoPlayer__remove_prepareCompleted(pUVar2,pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._VideoPlayer;
      pUVar1 = (UnityEngine_Video_VideoPlayer_EventHandler_o *)
               thunk_FUN_01bda818(UnityEngine_Video_VideoPlayer_EventHandler_TypeInfo);
      UnityEngine_Video_VideoPlayer_EventHandler___ctor();
      if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
        UnityEngine_Video_VideoPlayer__remove_loopPointReached(pUVar2,pUVar1,(MethodInfo *)0x0);
        if (DAT_045663a6 == '\0') {
          FUN_01bab630(&VideoPlayerController_TypeInfo);
          DAT_045663a6 = '\x01';
        }
        VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
             (VideoPlayerController_o *)0x0;
                    /* try { // try from 034e1934 to 035e1aef has its CatchHandler @ 034e1934
                       catch() { ... } // from try @ 034e1934 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2240 with catch @ 034e1934
                       catch() { ... } // from try @ 034e23d0 with catch @ 034e1934
                       catch() { ... } // from try @ 034e23d8 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2434 with catch @ 034e1934
                       catch() { ... } // from try @ 034e2590 with catch @ 034e1934 */
        thunk_FUN_01c20e04(VideoPlayerController_TypeInfo->static_fields,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

