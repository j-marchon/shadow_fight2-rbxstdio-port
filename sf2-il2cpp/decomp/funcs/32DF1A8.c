// DOPEEDABNEK$$MDBOKHFIOIJ @ RVA 0x32DF1A8

void DOPEEDABNEK__MDBOKHFIOIJ
               (DOPEEDABNEK_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool PFCACBBAOAJ,
               int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_045675e4 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675e4 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    uVar2 = (*(IKKAMAMLIKA->klass->vtable)._5_EFLKILFFJKH.methodPtr)
                      (IKKAMAMLIKA,(IKKAMAMLIKA->klass->vtable)._5_EFLKILFFJKH.method);
    if ((uVar2 & 1) == 0) {
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
      if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = ACHLOMELAJE__MHLDNEBLNJG
                        (__this_00,(IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField,
                         (MethodInfo *)0x0);
      if ((bVar1) && ((IKKAMAMLIKA->fields)._JDEHPJEIOCI_k__BackingField == PIDMGHLCFAJ)) {
        HOOAAGABMBL__GEBIJFANLGH(IKKAMAMLIKA,PFCACBBAOAJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}

