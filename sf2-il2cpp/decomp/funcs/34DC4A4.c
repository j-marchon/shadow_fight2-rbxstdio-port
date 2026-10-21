// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$NJOFMEIDDAH @ RVA 0x34DC4A4

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__NJOFMEIDDAH
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  undefined1 auVar1 [16];
  
  if ((DAT_0456871d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    DAT_0456871d = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    auVar1 = thunk_FUN_01bda96c();
    if (*auVar1._0_8_ == 1) {
      Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,auVar1._8_8_);
      return;
    }
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__FHIODBIPGBG(__this_00,(MethodInfo *)0x0);
    (__this->fields).IAAABJBDEMK = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

