// AJAMDCEKAFE$$KBAMBAFJLFD @ RVA 0x31B4DB4

int32_t AJAMDCEKAFE__KBAMBAFJLFD(System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  int32_t local_4;
  
  local_4 = 3;
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if ((int)OPAEPDIIOEB->max_length < 2) {
      local_4 = 3;
    }
    else {
      System_Int32__TryParse(OPAEPDIIOEB->m_Items[1],&local_4,(MethodInfo *)0x0);
    }
    return local_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

