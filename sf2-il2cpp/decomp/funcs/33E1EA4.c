// VideoPlayerController$$MMFFJEFEPEH @ RVA 0x33E1EA4

void VideoPlayerController__MMFFJEFEPEH
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *NMGJDFJDKBF,
               MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  UnityEngine_AudioSource_o *__this_01;
  
  __this_00 = (__this->fields)._VideoPlayer;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Play(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._AudioSource;
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

