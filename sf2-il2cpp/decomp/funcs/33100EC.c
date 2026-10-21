// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LMENCAFJBLF @ RVA 0x33100EC

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LMENCAFJBLF
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  LabelButton_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this_01;
  EEGDOGKBLNG_o *pEVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass *pIVar2;
  undefined1 auStack_40 [4];
  int local_3c;
  
  if ((DAT_045677b1 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<BaseDialog_DCGLMJMGGDC>_GetValueOrDefault__);
    FUN_01bab630(&System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo);
    FUN_01bab630(&StringLiteral_17849);
    DAT_045677b1 = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (pIVar2 = (System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo->_1).element_class,
     IMMNELPBGIF->klass != pIVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF,pIVar2);
  }
  thunk_FUN_01bda974(IMMNELPBGIF,System_Nullable<BaseDialog_DCGLMJMGGDC>_TypeInfo,auStack_40);
  if (local_3c != 1) {
    return;
  }
  __this_00 = (__this->fields)._consumableButton;
  if (__this_00 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(__this_00,StringLiteral_17849,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x1;
    LJLLAKHOFFF__JAEOMHIAHJB
              ((UnityEngine_UI_Button_o *)(__this->fields)._consumableButton,2,true,
               (MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DLGBDBPEIDN(__this,method_00);
    Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__DMJHAJBLHFH(__this,false,method_01);
    if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
                (__this_01,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar1 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar1 != (EEGDOGKBLNG_o *)0x0) {
        (pEVar1->fields).PDHCLFKCAAE = (__this_01->fields)._FDBOKOGOEEG_k__BackingField;
        thunk_FUN_01c20e04();
        EDFDANKEBGF__CHCFEINJOFO((MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

