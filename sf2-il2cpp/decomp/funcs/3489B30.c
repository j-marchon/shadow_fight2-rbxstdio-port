// LDAJCBOOHPE$$GIMAJOGGBHM @ RVA 0x3489B30

void LDAJCBOOHPE__GIMAJOGGBHM(LDAJCBOOHPE_o *__this,MethodInfo *method)

{
  DBIINAFCKME_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_ValueTuple_string____Nullable_DateTime___o local_48;
  System_Nullable_DateTime__Fields local_30;
  
  if ((DAT_045683d0 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045683d0 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AHCCELOIBCC((MethodInfo *)0x0);
  if (__this_00 != (DBIINAFCKME_o *)0x0) {
    LDAJCBOOHPE__OCDGHBHPBAK
              (&local_48,(LDAJCBOOHPE_o *)__this_00,(__this_00->fields).MEMLDPNJDBK,in_x2);
    local_30.value.fields._dateData = local_48.fields.Item2.fields.value.fields._dateData;
    local_30.hasValue = local_48.fields.Item2.fields.hasValue;
    local_30._1_7_ = local_48.fields.Item2.fields._1_7_;
    (__this->fields).IDPIHPBEHFC = local_48.fields.Item1;
    thunk_FUN_01c20e04(&__this->fields);
    (__this->fields).OKFHHFMFACN.fields.value.fields._dateData =
         (uint64_t)local_30.value.fields._dateData;
    (__this->fields).OKFHHFMFACN.fields.hasValue = local_30.hasValue;
    *(undefined7 *)&(__this->fields).OKFHHFMFACN.fields.field_0x1 = local_30._1_7_;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

