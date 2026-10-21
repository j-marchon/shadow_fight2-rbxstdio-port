// ONEDJCACCGM$$DOPKFNDPMBC @ RVA 0x31DEF30

System_String_o * ONEDJCACCGM__DOPKFNDPMBC(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *pAVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d2e & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888);
    DAT_04566d2e = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(5,method);
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
    if (JHMENEKPIBO != (SimpleJSON_JSONObject_o *)0x0) {
      (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                (JHMENEKPIBO,StringLiteral_21888,pSVar3,
                 (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
      if (DAT_04566d6c == '\0') {
        FUN_01bab630(&PBNDDBCDELD_TypeInfo);
        DAT_04566d6c = '\x01';
      }
      if (PBNDDBCDELD_TypeInfo->static_fields->FKLHDJFKDBB != false) {
        FPMAFHGLPOB__EGKNJFGNMIK(JHMENEKPIBO,(MethodInfo *)0x0);
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
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        iVar1 = ACHLOMELAJE__EOEAKGGDBFH(pAVar2,(MethodInfo *)0x0);
        FPMAFHGLPOB__IMHAICBKNEM(JHMENEKPIBO,iVar1 + -1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032df0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar4 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

