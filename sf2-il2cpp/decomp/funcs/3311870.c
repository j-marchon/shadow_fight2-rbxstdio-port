// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$LABFNGKBHKE @ RVA 0x3311870

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__LABFNGKBHKE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool ADGOHBFJIKC;
  int *piVar1;
  ACHLOMELAJE_o *pAVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  
  if ((DAT_045677b5 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045677b5 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int *)thunk_FUN_01bda96c();
    if (0 < *piVar1) {
      IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE;
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
      if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (ACHLOMELAJE_o *)0x0)
      {
        ADGOHBFJIKC = true;
      }
      else {
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
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar2 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ADGOHBFJIKC = (pAVar2->fields).AGHLCMMNEFI != false;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      MGNPHCAAEIO__IAGKBFCKFKB
                (IKKAMAMLIKA,2,1,(System_Action_BKKPAKHJDKB__o *)0x0,ADGOHBFJIKC,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

