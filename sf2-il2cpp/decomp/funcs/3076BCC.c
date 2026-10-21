// KKCBGIBKOCP$$LFEHBAMJCMH @ RVA 0x3076BCC

System_String_o * KKCBGIBKOCP__LFEHBAMJCMH(HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  System_String_o *str0;
  bool bVar1;
  int32_t length;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar2;
  
  if ((DAT_04565fad & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_5704);
    DAT_04565fad = 1;
    method = extraout_x1;
  }
  if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
    pSVar2 = (EIKFGOCCOIE->fields).KPDPJONADPJ;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    pSVar2 = KKCBGIBKOCP__FPDKPJMNJII(pSVar2,method);
    if ((pSVar2 != (System_String_o *)0x0) &&
       ((length = System_String__IndexOf(pSVar2,0x5f,(MethodInfo *)0x0), length < 0 ||
        (pSVar2 = System_String__Substring(pSVar2,0,length,(MethodInfo *)0x0),
        pSVar2 != (System_String_o *)0x0)))) {
      str0 = StringLiteral_5704;
      bVar1 = System_String__StartsWith(pSVar2,StringLiteral_5704,(MethodInfo *)0x0);
      if (bVar1) {
        return pSVar2;
      }
      pSVar2 = System_String__Concat(str0,pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

