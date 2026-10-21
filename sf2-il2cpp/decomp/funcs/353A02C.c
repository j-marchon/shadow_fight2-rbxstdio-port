// Nekki.SF2.GUI.LockScreen$$get_Instance @ RVA 0x353A02C

Nekki_SF2_GUI_LockScreen_o * Nekki_SF2_GUI_LockScreen__get_Instance(MethodInfo *method)

{
  if ((DAT_04568abd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568abd = 1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
}

