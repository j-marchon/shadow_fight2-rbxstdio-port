// VideoPlayerController$$MNGKKMCBNCN @ RVA 0x33E25B4

System_String_o *
VideoPlayerController__MNGKKMCBNCN(VideoPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Video_VideoPlayer_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04567eaf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567eaf = 1;
  }
  pUVar2 = (__this->fields)._VideoPlayer;
  if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_Video_VideoPlayer__get_clip(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields)._VideoPlayer;
    if (pUVar2 != (UnityEngine_Video_VideoPlayer_o *)0x0) {
      if (!bVar1) {
        pSVar4 = UnityEngine_Video_VideoPlayer__get_url(pUVar2,(MethodInfo *)0x0);
        return pSVar4;
      }
      pUVar3 = (UnityEngine_Object_o *)
               UnityEngine_Video_VideoPlayer__get_clip(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Object_o *)0x0) {
        pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

