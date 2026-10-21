// BCKMMEIIKPH$$IPFIKFNNGAJ @ RVA 0x34B75CC

Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesData_o *
BCKMMEIIKPH__IPFIKFNNGAJ
          (BCKMMEIIKPH_o *__this,int32_t IEEIOLINLFO,
          Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_o *HHFCNNNLLKM,MethodInfo *method)

{
  Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_Fields *pNVar1;
  
  if (IEEIOLINLFO == 1) {
    if (HHFCNNNLLKM == (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_o *)0x0)
    goto LAB_035b7604;
    pNVar1 = (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_Fields *)
             &(HHFCNNNLLKM->fields).Loader;
  }
  else {
    if (IEEIOLINLFO != 0) {
      return (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesData_o *)0x0;
    }
    if (HHFCNNNLLKM == (Nekki_SF2_Core_Utils_LoaderScreen_Config_SpritesPreset_o *)0x0) {
LAB_035b7604:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar1 = &HHFCNNNLLKM->fields;
  }
  return pNVar1->Preloader;
}

