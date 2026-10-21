// VideoPlayerController$$CJOHDGBNFBO @ RVA 0x33E1958

bool VideoPlayerController__CJOHDGBNFBO(VideoPlayerController_o *__this,MethodInfo *method)

{
  UnityEngine_Video_VideoPlayer_o *pUVar1;
  int64_t iVar2;
  uint64_t uVar3;
  
  pUVar1 = (__this->fields)._VideoPlayer;
  if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    iVar2 = UnityEngine_Video_VideoPlayer__get_frame(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._VideoPlayer;
    if (pUVar1 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      uVar3 = UnityEngine_Video_VideoPlayer__get_frameCount(pUVar1,(MethodInfo *)0x0);
      return (long)(uVar3 - 5) <= iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

