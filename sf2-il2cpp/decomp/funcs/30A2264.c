// HDKIINEJFCF$$BIFBNDJMDJA @ RVA 0x30A2264

void HDKIINEJFCF__BIFBNDJMDJA
               (System_String_o *ACCIHBHMFPN,System_String_o *KGLJICLJHEL,int64_t IDPMJOKDHNP,
               MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  ACHLOMELAJE_o *__this;
  
  if ((DAT_0456614d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_4921);
    FUN_01bab630(&StringLiteral_6868);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456614d = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6868,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this != (ACHLOMELAJE_o *)0x0) {
      iVar2 = ACHLOMELAJE__IMLCNMCBEEN(__this,(MethodInfo *)0x0);
      ACHLOMELAJE__CEICBEHCCDA(__this,iVar2 - IDPMJOKDHNP,false,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3535,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this != (ACHLOMELAJE_o *)0x0) {
        iVar2 = ACHLOMELAJE__HEHFNBKGJLP(__this,(MethodInfo *)0x0);
        ACHLOMELAJE__OGPHHGFFKHD(__this,iVar2 - IDPMJOKDHNP,6,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4921,(MethodInfo *)0x0);
      if ((!bVar1) &&
         (bVar1 = System_String__op_Inequality(ACCIHBHMFPN,StringLiteral_1,(MethodInfo *)0x0),
         KGLJICLJHEL = ACCIHBHMFPN, !bVar1)) {
        return;
      }
      if (__this != (ACHLOMELAJE_o *)0x0) {
        ACHLOMELAJE__GHLNGBDFENI(__this,KGLJICLJHEL,-(int)IDPMJOKDHNP,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

