// GJAEIBMAFGE$$NINDIJCAEHO @ RVA 0x3187994

System_String_o * GJAEIBMAFGE__NINDIJCAEHO(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *pSVar1;
  
                    /* try { // try from 03287994 to 033879ab has its CatchHandler @ 03287c40 */
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    pSVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                       (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

