// AJAMDCEKAFE$$NFNFHEFOLDI @ RVA 0x31B4C3C

int32_t AJAMDCEKAFE__NFNFHEFOLDI(System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t local_14;
  
  local_14 = 0;
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = 1000000;
  if (OPAEPDIIOEB->max_length != 0) {
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar1 = System_Int32__TryParse(OPAEPDIIOEB->m_Items[0],&local_14,(MethodInfo *)0x0);
    iVar2 = local_14;
    if (!bVar1) {
      iVar2 = 1000000;
    }
  }
  return iVar2;
}

