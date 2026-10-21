// Nekki.SF2.GUI.Common.PaymentUI$$get_IsRestorePurchasesAvailable @ RVA 0x334B304

bool Nekki_SF2_GUI_Common_PaymentUI__get_IsRestorePurchasesAvailable
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  bool bVar1;
  DGGBFKNKEAH_o *__this_00;
  
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  __this_00 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (__this_00 != (DGGBFKNKEAH_o *)0x0) {
    bVar1 = DGGBFKNKEAH__JMECPHKNEEG(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

