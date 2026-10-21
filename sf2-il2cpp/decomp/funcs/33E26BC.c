// VideoPlayerController$$Play @ RVA 0x33E26BC

void VideoPlayerController__Play
               (VideoPlayerController_o *__this,System_String_o *CKBGIKEFOMH,
               UnityEngine_Video_VideoClip_o *NCALFHMFKLE,System_Action_o *EBIHGBKNHMF,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  MethodInfo *method_00;
  System_Action_o *method_01;
  
  method_00 = (MethodInfo *)NCALFHMFKLE;
  method_01 = EBIHGBKNHMF;
  if ((DAT_04567eb1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eb1 = 1;
  }
  VideoPlayerController__JADIEOCNJBH(__this,EBIHGBKNHMF,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)NCALFHMFKLE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pUVar2 = (__this->fields)._VideoPlayer;
  if (bVar1) {
    if (pUVar2 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e2790;
    UnityEngine_Video_VideoPlayer__set_source(pUVar2,0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    if (pUVar2 == (UnityEngine_Video_VideoPlayer_o *)0x0) goto LAB_034e2790;
    UnityEngine_Video_VideoPlayer__set_clip(pUVar2,NCALFHMFKLE,(MethodInfo *)0x0);
  }
  else {
    VideoPlayerController__GMAPIHHCJAO(__this,pUVar2,CKBGIKEFOMH,(MethodInfo *)method_01);
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    UnityEngine_Video_VideoPlayer__Prepare(pUVar2,(MethodInfo *)0x0);
    return;
  }
LAB_034e2790:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

