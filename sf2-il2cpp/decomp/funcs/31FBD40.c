// NLPJLHOEAOE$$APPGHLNGPAO @ RVA 0x31FBD40

bool NLPJLHOEAOE__APPGHLNGPAO
               (int64_t JBEOPEACEJE,int32_t ACCIHBHMFPN,bool FJDHMCHMBFJ,MethodInfo *method)

{
  long CJNHFNHJHPE;
  ACHLOMELAJE_o *pAVar1;
  int64_t iVar2;
  
  if ((DAT_04566deb & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566deb = 1;
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
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    iVar2 = ACHLOMELAJE__HEHFNBKGJLP(pAVar1,(MethodInfo *)0x0);
    CJNHFNHJHPE = iVar2 + JBEOPEACEJE;
    if (-1 < CJNHFNHJHPE) {
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
      pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (pAVar1 == (ACHLOMELAJE_o *)0x0) goto LAB_032fbe58;
      ACHLOMELAJE__OGPHHGFFKHD(pAVar1,CJNHFNHJHPE,ACCIHBHMFPN,FJDHMCHMBFJ,(MethodInfo *)0x0);
    }
    return (bool)((byte)((ulong)CJNHFNHJHPE >> 0x3f) ^ 1);
  }
LAB_032fbe58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

