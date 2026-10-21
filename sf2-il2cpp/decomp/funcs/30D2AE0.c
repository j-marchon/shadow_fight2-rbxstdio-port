// MKIBNAAANPO$$BHNHPKAALOC @ RVA 0x30D2AE0

bool MKIBNAAANPO__BHNHPKAALOC(MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *__this;
  PAMEPBLOLPB_o *pPVar2;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_0456631f & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15251);
    DAT_0456631f = 1;
  }
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
  __this = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this,StringLiteral_15251,(MethodInfo *)0x0);
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    pPVar2 = ACHLOMELAJE__EKOLJIPEEHA(__this_00,__this,(MethodInfo *)0x0);
    bVar1 = false;
    if (pPVar2 != (PAMEPBLOLPB_o *)0x0) {
      bVar1 = 0 < (pPVar2->fields).AAECGBAMDEL;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

