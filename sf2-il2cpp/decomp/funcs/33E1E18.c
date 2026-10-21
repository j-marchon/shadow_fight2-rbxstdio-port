// VideoPlayerController$$GMAPIHHCJAO @ RVA 0x33E1E18

void VideoPlayerController__GMAPIHHCJAO
               (VideoPlayerController_o *__this,UnityEngine_Video_VideoPlayer_o *OKLICNJAJLO,
               System_String_o *CKBGIKEFOMH,MethodInfo *method)

{
                    /* try { // try from 034e1e18 to 035e1e23 has its CatchHandler @ 034e2480 */
  if (OKLICNJAJLO != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__set_source(OKLICNJAJLO,1,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__set_url(OKLICNJAJLO,CKBGIKEFOMH,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__set_audioOutputMode(OKLICNJAJLO,1,(MethodInfo *)0x0);
                    /* try { // try from 034e1e68 to 035e1e73 has its CatchHandler @ 034e2450 */
    UnityEngine_Video_VideoPlayer__set_controlledAudioTrackCount(OKLICNJAJLO,1,(MethodInfo *)0x0);
    UnityEngine_Video_VideoPlayer__EnableAudioTrack(OKLICNJAJLO,0,true,(MethodInfo *)0x0);
                    /* try { // try from 034e1e84 to 035e1e8f has its CatchHandler @ 034e2498 */
    UnityEngine_Video_VideoPlayer__SetTargetAudioSource
              (OKLICNJAJLO,0,(__this->fields)._AudioSource,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

