// Nekki.SF2.GUI.LockScreen$$FKOAMAIPLOL @ RVA 0x3539EA0

void Nekki_SF2_GUI_LockScreen__FKOAMAIPLOL
               (Nekki_SF2_GUI_LockScreen_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568aba & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    DAT_04568aba = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_LockScreen_TypeInfo,method);
  }
  Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields,CJNHFNHJHPE);
  return;
}

