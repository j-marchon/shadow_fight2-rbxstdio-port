// KKCBGIBKOCP$$FPDKPJMNJII @ RVA 0x3076CAC

System_String_o * KKCBGIBKOCP__FPDKPJMNJII(System_String_o *HEEJOJAGIKC,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04565fb0 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    DAT_04565fb0 = 1;
    method = extraout_x1;
  }
  if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  pSVar2 = KKCBGIBKOCP__KMCFMENCOAH(HEEJOJAGIKC,method);
  if (pSVar2 != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(pSVar2,0x2e,(MethodInfo *)0x0);
    if (-1 < iVar1) {
      pSVar2 = System_String__Substring(pSVar2,iVar1 + 1,(MethodInfo *)0x0);
      return pSVar2;
    }
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

