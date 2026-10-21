// NLPJLHOEAOE$$INGCMGEPAKD @ RVA 0x31FB050

bool NLPJLHOEAOE__INGCMGEPAKD
               (int64_t CJNHFNHJHPE,int32_t ACCIHBHMFPN,bool FJDHMCHMBFJ,MethodInfo *method)

{
  ACHLOMELAJE_o *__this;
  
  if ((DAT_04566de1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566de1 = 1;
  }
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    ACHLOMELAJE__OGPHHGFFKHD(__this,CJNHFNHJHPE,ACCIHBHMFPN,FJDHMCHMBFJ,(MethodInfo *)0x0);
  }
  return (bool)((byte)((ulong)CJNHFNHJHPE >> 0x3f) ^ 1);
}

