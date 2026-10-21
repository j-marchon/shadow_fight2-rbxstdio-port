// JJPNLEPEAFM$$OHIKPLPOJBK @ RVA 0x35357BC

Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o * JJPNLEPEAFM__OHIKPLPOJBK(MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *pNVar2;
  
  if ((DAT_04568a88 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo);
    DAT_04568a88 = 1;
  }
  JJPNLEPEAFM__DAKAIKCCOKD(method);
  pNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
           GCIFMNHADDF__ACDDKABEBAP(0xbe,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo->_2).naturalAligment;
    if (((pNVar2->klass->_2).naturalAligment < bVar1) ||
       ((pNVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
  }
  return pNVar2;
}

