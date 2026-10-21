// CHDGOFBHAFI$$NMCMPPIKBJP @ RVA 0x3245454

void CHDGOFBHAFI__NMCMPPIKBJP(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  KCPFIELGGLA_o *GMCEHJAIFBJ;
  EEGDOGKBLNG_o *__this_00;
  
  if ((DAT_045670b4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<KCPFIELGGLA>__);
    __this = (CHDGOFBHAFI_o *)FUN_01bab630(&StringLiteral_20404);
    DAT_045670b4 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_20404,(MethodInfo *)0x0);
      return;
    }
    GMCEHJAIFBJ = (KCPFIELGGLA_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<KCPFIELGGLA>__);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    __this = (CHDGOFBHAFI_o *)0x0;
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__BALIJLHGKFM(__this_00,GMCEHJAIFBJ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

