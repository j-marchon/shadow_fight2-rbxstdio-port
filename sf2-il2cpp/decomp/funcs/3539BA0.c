// Nekki.SF2.GUI.LockScreen$$.cctor @ RVA 0x3539BA0

void Nekki_SF2_GUI_LockScreen___cctor(MethodInfo *method)

{
  if (DAT_04568b3e == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568b3e = '\x01';
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField =
       (Nekki_SF2_GUI_LockScreen_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,0);
  return;
}

