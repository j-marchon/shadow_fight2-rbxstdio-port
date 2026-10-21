// KKLJIDJBFEI$$ICFDKPCNHEM @ RVA 0x31490AC

void KKLJIDJBFEI__ICFDKPCNHEM(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  EEGDOGKBLNG_o *__this_00;
  ELBBEAGGAOH_o *__this_01;
  EKCGNICFDEO_o *JLICGPAEBHN;
  MethodInfo *in_x3;
  int32_t CBFBKNECBMP;
  MethodInfo *in_x5;
  KAMBBJFPLGM_o *HEHMPFLAEGE;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  
  if ((DAT_04566799 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
    FUN_01bab630(&StringLiteral_11572);
    FUN_01bab630(&StringLiteral_11542);
    DAT_04566799 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    JLICGPAEBHN = (EKCGNICFDEO_o *)0x0;
    Nekki_Utils_DetailedLog__Log(StringLiteral_11542,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) ||
       (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), !bVar1)) {
      KKLJIDJBFEI__FNFGGGJGPBB(__this,StringLiteral_11572,-1,in_x3);
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__FACPGEOBOAJ(__this_00,(MethodInfo *)0x0);
      __this_01 = (ELBBEAGGAOH_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<ELBBEAGGAOH>__);
      if (__this_01 != (ELBBEAGGAOH_o *)0x0) {
        HEHMPFLAEGE = (__this_01->fields).CBHDCHDBFGB;
        BFFBKNCLLML = (__this_01->fields).KEIBPDJHHBB;
        bVar1 = ELBBEAGGAOH__OMODJLCIIGD(__this_01,(MethodInfo *)0x0);
        if (bVar1) {
          CBFBKNECBMP = (__this_01->fields).EMNNAEAIMNH;
        }
        else {
          CBFBKNECBMP = -1;
        }
        if (__this != (KKLJIDJBFEI_o *)0x0) {
          KKLJIDJBFEI__BCOMIMBOGIM(__this,HEHMPFLAEGE,JLICGPAEBHN,BFFBKNCLLML,CBFBKNECBMP,in_x5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

