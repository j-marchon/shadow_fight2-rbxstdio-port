// GJAEIBMAFGE$$ABOLJGNNGMC @ RVA 0x31877E4

MGNDHCBAPEN_string__ODLJFAIHELG__o *
GJAEIBMAFGE__ABOLJGNNGMC(int32_t BMPJIDHGCBN,MethodInfo *method)

{
  int32_t JGGJNLLANAE;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  System_String_o *LOAHEPDBFAO;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_045669f0 & 1) == 0) {
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_ODLJFAIHELG>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_ODLJFAIHELG>_TypeInfo);
    DAT_045669f0 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* try { // try from 03287850 to 03387877 has its CatchHandler @ 03287c54 */
    LOAHEPDBFAO = Nekki_SF2_Core_InputControllers_GamePadController__GetDeviceName
                            (__this,BMPJIDHGCBN,(MethodInfo *)0x0);
    method_00 = extraout_x1;
    if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo);
      method_00 = extraout_x1_00;
    }
    JGGJNLLANAE = GJAEIBMAFGE__OFIKNKILDCH(LOAHEPDBFAO,method_00);
    __this_00 = (MGNDHCBAPEN_string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<string,_ODLJFAIHELG>_TypeInfo);
    MGNDHCBAPEN<object,_Int32Enum>___ctor
              ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)LOAHEPDBFAO,JGGJNLLANAE,
               Method_MGNDHCBAPEN<string,_ODLJFAIHELG>__ctor__);
                    /* try { // try from 032878ac to 033878d7 has its CatchHandler @ 03287c50 */
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

