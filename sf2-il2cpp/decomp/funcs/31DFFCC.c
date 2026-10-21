// ONEDJCACCGM$$GGJKLBCHFNH @ RVA 0x31DFFCC

System_String_o * ONEDJCACCGM__GGJKLBCHFNH(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t n;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *__this;
  SimpleJSON_JSONNode_o *pSVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d3a & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888);
    DAT_04566d3a = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(6,method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    n = ACHLOMELAJE__EOEAKGGDBFH(__this,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar1 = SimpleJSON_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888,pSVar1,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      FPMAFHGLPOB__MKLGBANKNHL(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
      FPMAFHGLPOB__CCHGPNLCKFI(JHMENEKPIBO,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032e0108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar2 = (System_String_o *)
               (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

