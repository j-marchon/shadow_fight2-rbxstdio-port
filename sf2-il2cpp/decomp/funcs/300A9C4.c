// Nekki.SF2.GUI.Shop.InfoPanelContent$$HKFCEOLDACN @ RVA 0x300A9C4

void Nekki_SF2_GUI_Shop_InfoPanelContent__HKFCEOLDACN
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04565b5e & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b5e = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if ((0 < *piVar2) &&
       (IKKAMAMLIKA = (__this->fields).KJBDDCNKNNE, IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0)) {
      bVar1 = AMIINPEKKFB__JJFBBLPMPAE(IKKAMAMLIKA,(MethodInfo *)0x0);
      method_00 = extraout_x1;
      if (bVar1) {
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
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar3 == (ACHLOMELAJE_o *)0x0) ||
           (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GGHCLMEFIGO__BOEFGIBCIIL(__this_00,(__this->fields).KJBDDCNKNNE,true,(MethodInfo *)0x0);
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
      return;
    }
  }
  return;
}

