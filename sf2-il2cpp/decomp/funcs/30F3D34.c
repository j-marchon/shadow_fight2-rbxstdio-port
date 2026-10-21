// Nekki.SF2.GUI.Dialogs.TradeDialog$$OnClose @ RVA 0x30F3D34

void Nekki_SF2_GUI_Dialogs_TradeDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_TradeDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  int *piVar2;
  ACHLOMELAJE_o *__this_00;
  Nekki_SF2_GUI_Scripts_CheckBox_o *pNVar3;
  
  if ((DAT_0456643f & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456643f = 1;
  }
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) && ((__this->fields).KGEDEAGBKGB != false)) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c(IMMNELPBGIF);
    if (0 < *piVar2) {
      pNVar3 = (__this->fields)._checkbox;
      if (pNVar3 == (Nekki_SF2_GUI_Scripts_CheckBox_o *)0x0) {
LAB_031f3e94:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pNVar3->fields).OIKLOAGFFGO;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0)
      {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_031f3e94;
        ACHLOMELAJE__BNAPCHJBJEA(__this_00,iVar1 != 0,(MethodInfo *)0x0);
      }
    }
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,IMMNELPBGIF,(MethodInfo *)0x0);
  return;
}

