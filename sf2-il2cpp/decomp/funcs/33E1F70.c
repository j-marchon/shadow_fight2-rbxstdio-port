// VideoPlayerController$$Play @ RVA 0x33E1F70

void VideoPlayerController__Play
               (VideoPlayerController_o *__this,System_String_o *CJFAPGEEPLM,
               System_Action_o *EBIHGBKNHMF,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *__this_00;
  
  VideoPlayerController__JADIEOCNJBH(__this,EBIHGBKNHMF,(MethodInfo *)EBIHGBKNHMF);
  VideoPlayerController__GMAPIHHCJAO(__this,(__this->fields)._VideoPlayer,CJFAPGEEPLM,method);
  __this_00 = (__this->fields)._VideoPlayer;
  if (__this_00 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
                    /* try { // try from 034e1fac to 035e1fb7 has its CatchHandler @ 034e2464 */
    UnityEngine_Video_VideoPlayer__Prepare(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

