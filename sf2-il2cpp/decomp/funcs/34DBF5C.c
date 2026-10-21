// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$DIGPCFKCCBK @ RVA 0x34DBF5C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__DIGPCFKCCBK
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,MethodInfo *method)

{
  int32_t CEOLOKFCKIG;
  CPNHNIKFGFB_o *__this_00;
  System_Action_object__o *CPECAEHDDDB;
  
  if ((DAT_0456871c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OnClose__);
    DAT_0456871c = 1;
  }
  __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
  CEOLOKFCKIG = (__this->fields).FOCJNAFIFDF;
  CPECAEHDDDB = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
    CPNHNIKFGFB__DIGPCFKCCBK(__this_00,CEOLOKFCKIG,CPECAEHDDDB,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

