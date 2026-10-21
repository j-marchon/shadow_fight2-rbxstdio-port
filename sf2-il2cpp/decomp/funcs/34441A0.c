// CGALNIOABHK$$.cctor @ RVA 0x34441A0

void CGALNIOABHK___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if ((DAT_04568239 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    DAT_04568239 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = 0x7c;
      CGALNIOABHK_TypeInfo->static_fields->CHGAPDHMOHM = pSVar1;
      thunk_FUN_01c20e04(CGALNIOABHK_TypeInfo->static_fields);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

