// BackKeyManager$$JCKPPNGMDLB @ RVA 0x31AC3B0

bool BackKeyManager__JCKPPNGMDLB(BackKeyManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_KeyboardController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_KeyboardController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_KeyboardController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_KeyboardController__GetKeyDown
                      (__this_00,0x1b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

