// OPNMPAJKDMI$$ICDECCBLPDE @ RVA 0x343E6AC

bool OPNMPAJKDMI__ICDECCBLPDE(OPNMPAJKDMI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *KGLJICLJHEL;
  LPEBBHNDFCG_o *pLVar2;
  MethodInfo *extraout_x1;
  ACHLOMELAJE_o *pAVar3;
  long lVar4;
  LAMJOHEKJNJ_o *__this_00;
  
  if ((DAT_04568202 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568202 = 1;
    method = extraout_x1;
  }
  pAVar3 = (__this->fields).FOJBBDCJDFH;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    __this_00 = (pAVar3->fields)._DDGPMHMNKNA_k__BackingField;
    KGLJICLJHEL = OPNMPAJKDMI__KBCKLCBBAJB(__this,method);
    if (__this_00 != (LAMJOHEKJNJ_o *)0x0) {
      pLVar2 = LAMJOHEKJNJ__FENHANFAIND(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      bVar1 = false;
      if (pLVar2 != (LPEBBHNDFCG_o *)0x0) {
        lVar4 = (pLVar2->fields)._PGKPHJLHJCO_k__BackingField;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = 0 < lVar4 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      }
                    /* try { // try from 0353e76c to 0363e773 has its CatchHandler @ 0353e7f8 */
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

