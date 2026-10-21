// JJPNLEPEAFM$$FGGGLJNFDLF @ RVA 0x3532604

void JJPNLEPEAFM__FGGGLJNFDLF(int32_t BPCMPECIOLF,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this;
  
  if ((DAT_04568a69 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo);
    DAT_04568a69 = 1;
  }
  __this = (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0x19a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (__this != (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_TypeInfo)) {
      Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__InitData(__this,BPCMPECIOLF,(MethodInfo *)0x0)
      ;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

