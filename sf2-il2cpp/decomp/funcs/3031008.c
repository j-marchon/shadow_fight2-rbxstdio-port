// Nekki.SF2.GUI.Shop.ParameterScrollItem$$get_RightLimit @ RVA 0x3031008

float Nekki_SF2_GUI_Shop_ParameterScrollItem__get_RightLimit
                (Nekki_SF2_GUI_Shop_ParameterScrollItem_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_04565cfd & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565cfd = 1;
    method = extraout_x1;
  }
  if (((__this->fields).HJNKDGDBDML < 0.0) || (fVar2 = (__this->fields).GPJAHLLAHEA, fVar2 < 0.0)) {
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).DNIGDKAHPIG * (float)iVar1 + (float)(__this->fields).KENACCCGOJE;
  }
  return fVar2;
}

