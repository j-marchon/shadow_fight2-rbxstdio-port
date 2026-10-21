// Nekki.SF2.GUI.Shop.ShopScene$$GNOBOBBEEAH @ RVA 0x3432CD0

void Nekki_SF2_GUI_Shop_ShopScene__GNOBOBBEEAH
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045681a3 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045681a3 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  MGNPHCAAEIO__EBMJDCJOLDM(1,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__ResetSlowFramesAcquire(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

