// Nekki.SF2.GUI.Shop.ParametersPanelContent$$FJHEDBMBEFI @ RVA 0x30F8CC4

void Nekki_SF2_GUI_Shop_ParametersPanelContent__FJHEDBMBEFI
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  HOOAAGABMBL_o *pHVar2;
  ACHLOMELAJE_o *pAVar3;
  PJKHAJKEHEL_o *pPVar4;
  
  if ((DAT_04566484 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566484 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (pPVar4 = (pAVar3->fields).MFLNIMCFPDK, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
    (*(pPVar4->klass->vtable)._8_KMKKECDCBEF.methodPtr)
              (pPVar4,(__this->fields).MLHJCGAAFFG,(pPVar4->klass->vtable)._8_KMKKECDCBEF.method);
    pPVar1 = (__this->fields).GFGOPEKNBPF;
    if (pPVar1 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar1->klass->vtable)._6_BCEGONIKBAK.methodPtr)
                (pPVar1,(__this->fields).MLHJCGAAFFG,(pPVar1->klass->vtable)._6_BCEGONIKBAK.method);
      pHVar2 = (__this->fields).PCBECBEFJOI;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        pPVar1 = (__this->fields).GFGOPEKNBPF;
        if (pPVar1 == (PJKHAJKEHEL_o *)0x0) goto LAB_031f8dc8;
        (*(pPVar1->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                  (pPVar1,(pHVar2->fields)._GMPAEDFIIHF_k__BackingField,pHVar2,
                   (pPVar1->klass->vtable)._9_CGNPHPDFKJG.method);
      }
      (*(pPVar4->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                (pPVar4,(pPVar4->klass->vtable)._7_LBNKPLKIIOP.method);
      pPVar4 = (__this->fields).GFGOPEKNBPF;
      if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031f8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pPVar4->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                  (pPVar4,(pPVar4->klass->vtable)._7_LBNKPLKIIOP.method);
        return;
      }
    }
  }
LAB_031f8dc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

