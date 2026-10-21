// ONEDJCACCGM$$OAMLIFHBPFO @ RVA 0x31DF424

System_String_o * ONEDJCACCGM__OAMLIFHBPFO(MDNLIFLBFNO_o *BFPCMHPBAGL,MethodInfo *method)

{
  int32_t iVar1;
  SimpleJSON_JSONObject_o *JHMENEKPIBO;
  ACHLOMELAJE_o *pAVar2;
  SimpleJSON_JSONNode_o *pSVar3;
  NFGLEDADCGL_o *pNVar4;
  System_String_o *pSVar5;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d33 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_21888);
    FUN_01bab630(&StringLiteral_19404);
    FUN_01bab630(&StringLiteral_21889);
    FUN_01bab630(&StringLiteral_20548);
    DAT_04566d33 = 1;
    method = extraout_x1;
  }
  JHMENEKPIBO = ONEDJCACCGM__OGNMJNOFPPP(7,method);
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
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
         (pNVar4 = (pAVar2->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) {
        iVar1 = NFGLEDADCGL__PHLAMLIGMHG(pNVar4,(MethodInfo *)0x0);
        pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
        (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                  (JHMENEKPIBO,StringLiteral_20548,pSVar3,
                   (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
           (pNVar4 = (pAVar2->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) {
          iVar1 = NFGLEDADCGL__BKPCFFPHHBJ(pNVar4,(MethodInfo *)0x0);
          pSVar3 = SimpleJSON_JSONNode__op_Implicit(iVar1,(MethodInfo *)0x0);
          (*(JHMENEKPIBO->klass->vtable)._8_set_Item.methodPtr)
                    (JHMENEKPIBO,StringLiteral_19404,pSVar3,
                     (JHMENEKPIBO->klass->vtable)._8_set_Item.method);
          FPMAFHGLPOB__IDLABKHCAFO(JHMENEKPIBO,StringLiteral_21889,(MethodInfo *)0x0);
          FPMAFHGLPOB__DCNODJBLLAD(JHMENEKPIBO,BFPCMHPBAGL,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x032df678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pSVar5 = (System_String_o *)
                   (*(JHMENEKPIBO->klass->vtable)._3_ToString.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._3_ToString.method);
          return pSVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

