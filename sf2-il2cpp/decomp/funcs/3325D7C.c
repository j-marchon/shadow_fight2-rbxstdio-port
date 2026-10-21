// PNLFHHJGDLI$$IMFBLHDOHFL @ RVA 0x3325D7C

/* WARNING: Removing unreachable block (ram,0x03425dbc) */

void PNLFHHJGDLI__IMFBLHDOHFL(float CJNHFNHJHPE,MethodInfo *method)

{
  PNLFHHJGDLI_c *method_00;
  
  if ((DAT_04567876 & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567876 = 1;
  }
  if (CJNHFNHJHPE < 0.0) {
    CJNHFNHJHPE = 0.0;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  PNLFHHJGDLI_TypeInfo->static_fields->EHPFFCGFFOO = CJNHFNHJHPE;
  PNLFHHJGDLI__GIEMFDDIIFF(CJNHFNHJHPE,(MethodInfo *)method_00);
  return;
}

