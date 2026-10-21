// BHEDGAKGKPO$$LDGEKDAPFGB @ RVA 0x31CAEA8

System_String_o * BHEDGAKGKPO__LDGEKDAPFGB(MethodInfo *method)

{
  BHEDGAKGKPO_c *method_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566c67 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04566c67 = 1;
  }
  method_00 = BHEDGAKGKPO_TypeInfo;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BHEDGAKGKPO_c *)thunk_FUN_01ba7564();
  }
  pSVar1 = BHEDGAKGKPO__KDHHPEEBDMN((MethodInfo *)method_00);
  return pSVar1;
}

