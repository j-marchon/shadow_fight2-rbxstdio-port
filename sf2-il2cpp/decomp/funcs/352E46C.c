// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$MINHBFCDGEC @ RVA 0x352E46C

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c__MINHBFCDGEC
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_04568a3f & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568a3f = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}

