// JJPNLEPEAFM$$IPLAAIJEPOM @ RVA 0x353335C

Nekki_SF2_GUI_Dialogs_LotteryDialog_o *
JJPNLEPEAFM__IPLAAIJEPOM(LPGLKMNHELJ_o *DKMMBMBMJBO,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *pNVar2;
  
  if ((DAT_04568a6f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo);
    DAT_04568a6f = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0x5a,(Il2CppObject *)DKMMBMBMJBO,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo->_2).naturalAligment;
    if ((pNVar2->klass->_2).naturalAligment < bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0;
    }
    else if ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_Dialogs_LotteryDialog_TypeInfo) {
      pNVar2 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0;
    }
  }
  return pNVar2;
}

