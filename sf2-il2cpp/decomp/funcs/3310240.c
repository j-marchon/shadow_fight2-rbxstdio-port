// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LBNEPJEGAHN @ RVA 0x3310240

HOOAAGABMBL_o *
Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LBNEPJEGAHN
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *pNVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  System_String_o *DKIFPHNBBBG;
  
  if ((DAT_045677a6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
    DAT_045677a6 = 1;
    method = extraout_x1;
  }
  pNVar1 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
    DKIFPHNBBBG = (pNVar1->fields)._FDBOKOGOEEG_k__BackingField;
    method_00 = extraout_x1_00;
    if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_TypeInfo);
      method_00 = extraout_x1_01;
    }
    pHVar2 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__ONFELBEANOD(DKIFPHNBBBG,method_00);
    return pHVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

