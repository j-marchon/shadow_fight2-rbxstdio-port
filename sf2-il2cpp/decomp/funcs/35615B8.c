// Nekki.SF2.Core.Fights.ModelContainer$$OLIFIINLMLJ @ RVA 0x35615B8

void Nekki_SF2_Core_Fights_ModelContainer__OLIFIINLMLJ
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  int32_t CJNHFNHJHPE_00;
  
  if ((DAT_04568bd6 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568bd6 = 1;
  }
  if ((__this->fields).ALBNJDPLOKJ != false) {
    if (CJNHFNHJHPE) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE_00 = MGNPHCAAEIO_TypeInfo->static_fields->PBJPEIOLHPG;
    }
    else {
      CJNHFNHJHPE_00 = 1;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    MGNPHCAAEIO__EBMJDCJOLDM(CJNHFNHJHPE_00,(MethodInfo *)0x0);
    return;
  }
  return;
}

