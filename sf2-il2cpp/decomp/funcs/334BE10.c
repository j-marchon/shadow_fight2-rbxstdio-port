// Nekki.SF2.GUI.Common.PaymentUI$$RestorePurchases @ RVA 0x334BE10

void Nekki_SF2_GUI_Common_PaymentUI__RestorePurchases
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,MethodInfo *method)

{
  DGGBFKNKEAH_o *pDVar1;
  
  Nekki_SF2_GUI_Common_PaymentUI__BBFPCBEFOLN(__this,method);
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  pDVar1 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar1 != (DGGBFKNKEAH_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0344be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pDVar1->klass->vtable)._23_unknown.methodPtr)
              (pDVar1,(pDVar1->klass->vtable)._23_unknown.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

