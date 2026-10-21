// VideoPlayerController$$IEOMFENOCGE @ RVA 0x33E27BC

bool VideoPlayerController__IEOMFENOCGE(VideoPlayerController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
                      (__this_00,0x1b,(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar1)) {
      bVar1 = true;
    }
    else {
      iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
      bVar1 = 0 < iVar2;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

