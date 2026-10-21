// GGLKHCAIGDI$$EJJDCEMBFPK @ RVA 0x33A5404

bool GGLKHCAIGDI__EJJDCEMBFPK(GGLKHCAIGDI_o *__this,HEFOANCOHDC_o *DDEPKHECINC,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this_00;
  System_String_o *a;
  KBCOFHAJOCK_o *__this_01;
  PLCCJCFAFKA_o *__this_02;
  DOPEEDABNEK_o *pDVar2;
  
  if ((DAT_04567cea & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15240);
    FUN_01bab630(&StringLiteral_5548);
    DAT_04567cea = 1;
  }
  if (DDEPKHECINC != (HEFOANCOHDC_o *)0x0) {
    if ((DDEPKHECINC->fields).OCABLLPNEGL == 0) {
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
      pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((pDVar2 != (DOPEEDABNEK_o *)0x0) &&
         (__this_01 = (pDVar2->fields)._GMODBKFPHPN_k__BackingField,
         __this_01 != (KBCOFHAJOCK_o *)0x0)) {
        __this_02 = KBCOFHAJOCK__JHDDCDEENAK
                              (__this_01,(DDEPKHECINC->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
        if (__this_02 == (PLCCJCFAFKA_o *)0x0) {
          return false;
        }
        bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_02,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_034a5580:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((DDEPKHECINC->fields).JMGIACHBIKG,StringLiteral_5548,(MethodInfo *)0x0);
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_034a5580;
      a = ACHLOMELAJE__KCKPAFCFAMP(__this_00,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,StringLiteral_15240,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
    }
  }
  return true;
}

