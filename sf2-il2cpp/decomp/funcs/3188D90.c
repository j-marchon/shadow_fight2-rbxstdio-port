// GJAEIBMAFGE$$KOBMFEANBAF @ RVA 0x3188D90

int32_t GJAEIBMAFGE__KOBMFEANBAF(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *LOAHEPDBFAO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03288d78 with catch @ 03288d94
                       catch(type#2 @ 00000000) { ... } // from try @ 03288d8c with catch @ 03288d94
                        */
  if ((DAT_045669f3 & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_045669f3 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    LOAHEPDBFAO = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                            (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo);
      method_00 = extraout_x1_00;
    }
    iVar1 = GJAEIBMAFGE__OFIKNKILDCH(LOAHEPDBFAO,method_00);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

