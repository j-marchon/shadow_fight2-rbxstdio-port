// IGFGDDANEPE$$PHAGOINEABA @ RVA 0x30A053C

void IGFGDDANEPE__PHAGOINEABA(IGFGDDANEPE_o *__this,MethodInfo *method)

{
  int32_t EBDDELGICGB;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t in_w2;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *pHVar1;
  System_Collections_Generic_List_PKKLIJLIKGF__o *AEFIPJLKAFI;
  
  if ((DAT_0456616b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456616b = 1;
    method = extraout_x1;
  }
  pHVar1 = (__this->fields).PCBECBEFJOI;
  if (pHVar1 != (HOOAAGABMBL_o *)0x0) {
    AEFIPJLKAFI = (pHVar1->fields)._LCJBEIKDDNA_k__BackingField;
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
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
      IGFGDDANEPE__JJPJJDHOFLE(__this,AEFIPJLKAFI,in_w2,EBDDELGICGB,in_x4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

