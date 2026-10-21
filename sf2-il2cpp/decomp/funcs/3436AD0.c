// Nekki.SF2.GUI.Shop.ShopScene$$GBEFFGHDIFF @ RVA 0x3436AD0

bool Nekki_SF2_GUI_Shop_ShopScene__GBEFFGHDIFF
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  DGGBFKNKEAH_o *pDVar3;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((__this->fields).AIAODGKGPEI != 5) {
    return false;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
    method = extraout_x1;
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
    iVar2 = (*(pDVar3->klass->vtable)._19_OEPALCOIONF.methodPtr)
                      (pDVar3,(pDVar3->klass->vtable)._19_OEPALCOIONF.method);
    if (iVar2 != 2) {
      return false;
    }
    __this_00 = (__this->fields).AGKBOPBINNE;
    method = extraout_x1_00;
    if (__this_00 != (Nekki_SF2_GUI_Common_PaymentUI_o *)0x0) {
      bVar1 = Nekki_SF2_GUI_Common_PaymentUI__get_IsRestorePurchasesAvailable
                        (__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

