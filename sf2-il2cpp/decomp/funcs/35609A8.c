// Nekki.SF2.Core.Fights.ModelContainer$$EDIHPONOJPH @ RVA 0x35609A8

void Nekki_SF2_Core_Fights_ModelContainer__EDIHPONOJPH
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               System_String_o *NCNNIIJIELC,MethodInfo *method)

{
  LKHOKLCLKNH_o *__this_00;
  LFHAMPFFNHB_o *pLVar1;
  DOPEEDABNEK_o *__this_01;
  HOOAAGABMBL_o *pHVar2;
  PJKHAJKEHEL_o *extraout_x1;
  PJKHAJKEHEL_o *pPVar3;
  
  if ((DAT_04568bd8 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568bd8 = 1;
    OKBIKHHKOEN = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,OKBIKHHKOEN);
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->DPKGHMMEOMP;
  if (__this_00 != (LKHOKLCLKNH_o *)0x0) {
    pLVar1 = LKHOKLCLKNH__OCJPOBFGHEI(__this_00,NCNNIIJIELC,(MethodInfo *)0x0);
    if (pLVar1 == (LFHAMPFFNHB_o *)0x0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (__this_01 != (DOPEEDABNEK_o *)0x0) {
      pHVar2 = DOPEEDABNEK__CKKIPBAIEMN(__this_01,(pLVar1->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
      pPVar3 = (__this->fields).MFLNIMCFPDK;
      if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
        (*(pPVar3->klass->vtable)._9_CGNPHPDFKJG.methodPtr)
                  (pPVar3,(pLVar1->fields).BGHFADDGPAD,pHVar2,
                   (pPVar3->klass->vtable)._9_CGNPHPDFKJG.method);
        pPVar3 = (__this->fields).MFLNIMCFPDK;
        if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
          PJKHAJKEHEL__OBDMCJAPKPJ(pPVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

