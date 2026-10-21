// EEGDOGKBLNG$$IANDFKCDLKP @ RVA 0x3070E50

void EEGDOGKBLNG__IANDFKCDLKP(EEGDOGKBLNG_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  EEGDOGKBLNG_o *__this_00;
  CHDGOFBHAFI_o *pCVar3;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04565f69 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    __this = (EEGDOGKBLNG_o *)FUN_01bab630(&StringLiteral_10313);
    DAT_04565f69 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10313,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    __this = (EEGDOGKBLNG_o *)0x0;
    if (pIVar2 != (Il2CppObject *)0x0) {
      LLJHKLPGMGC = pIVar2[2].klass;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      __this = (EEGDOGKBLNG_o *)0x0;
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)LLJHKLPGMGC,method);
        IIPPMAOIKHB = pIVar2[1].monitor;
        pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        __this = (EEGDOGKBLNG_o *)0x0;
        if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
          CHDGOFBHAFI__BNPLDAHKIED(pCVar3,IIPPMAOIKHB,(PGICCMFLDPI_o *)0x0,(MethodInfo *)0x0);
          pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          __this = (EEGDOGKBLNG_o *)0x0;
          if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
            (pCVar3->fields).GBGHPLFONHD = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

