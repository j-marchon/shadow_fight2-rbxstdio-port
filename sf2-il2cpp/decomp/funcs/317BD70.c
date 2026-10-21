// Nekki.SF2.GUI.Dialogs.StrangerDialog.<>c$$PNHGONJELKG @ RVA 0x317BD70

void Nekki_SF2_GUI_Dialogs_StrangerDialog_<>c__PNHGONJELKG
               (Nekki_SF2_GUI_Dialogs_StrangerDialog___c_o *__this,System_Action_o *h,
               MethodInfo *method)

{
  if ((DAT_0456698b & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_0456698b = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(h,(MethodInfo *)0x0);
  return;
}

