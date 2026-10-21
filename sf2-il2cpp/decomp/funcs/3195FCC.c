// CMEBCBKGFFL$$BPMILMCCBEI @ RVA 0x3195FCC

System_String_o * CMEBCBKGFFL__BPMILMCCBEI(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  int iVar1;
  System_Char_array *trimChars;
  System_String_o *pSVar2;
  
  if ((DAT_04566a72 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    DAT_04566a72 = 1;
  }
  trimChars = (System_Char_array *)FUN_01bab718(char___TypeInfo,2);
  if (trimChars != (System_Char_array *)0x0) {
    iVar1 = (int)trimChars->max_length;
    if ((iVar1 == 0) || (trimChars->m_Items[0] = 0x5c, iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    trimChars->m_Items[1] = 0x2f;
    if (EIJDDKJONFO != (System_String_o *)0x0) {
      pSVar2 = System_String__TrimStart(EIJDDKJONFO,trimChars,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

