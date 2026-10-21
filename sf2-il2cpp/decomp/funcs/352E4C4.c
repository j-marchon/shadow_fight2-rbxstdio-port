// Nekki.SF2.GUI.Dialogs.Raids.MessageItem.<>c$$FJFIMOHEBBM @ RVA 0x352E4C4

void Nekki_SF2_GUI_Dialogs_Raids_MessageItem_<>c__FJFIMOHEBBM
               (Nekki_SF2_GUI_Dialogs_Raids_MessageItem___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_04568a40 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_04568a40 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0362e504 to 0372e50b has its CatchHandler @ 0362e794 */
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}

