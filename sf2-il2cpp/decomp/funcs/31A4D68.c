// AJAMDCEKAFE$$LFCNNAGLPHO @ RVA 0x31A4D68

System_String_o *
AJAMDCEKAFE__LFCNNAGLPHO(int32_t DPJIDNBJIBG,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)OPAEPDIIOEB->max_length;
  if (DPJIDNBJIBG < (int)uVar1) {
    if (uVar1 <= (uint)DPJIDNBJIBG) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar2 = OPAEPDIIOEB->m_Items[DPJIDNBJIBG];
  }
  else {
    pSVar2 = (System_String_o *)0x0;
  }
  return pSVar2;
}

