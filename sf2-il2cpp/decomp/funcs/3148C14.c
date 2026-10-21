// KKLJIDJBFEI$$IHDGMKMILJM @ RVA 0x3148C14

void KKLJIDJBFEI__IHDGMKMILJM(KKLJIDJBFEI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  CHDGOFBHAFI_o *pCVar3;
  EEGDOGKBLNG_o *__this_00;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  
  if ((DAT_04566794 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    FUN_01bab630(&StringLiteral_17778);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17777);
    FUN_01bab630(&StringLiteral_19999);
    __this = (KKLJIDJBFEI_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04566794 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_19999,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<FIMAAAOEIGM>__);
    __this = (KKLJIDJBFEI_o *)0x0;
    if (pIVar2 != (Il2CppObject *)0x0) {
      IIPPMAOIKHB = pIVar2[1].monitor;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      __this = (KKLJIDJBFEI_o *)0x0;
      if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__BNPLDAHKIED(pCVar3,IIPPMAOIKHB,pIVar2[2].monitor,(MethodInfo *)0x0);
        pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        __this = (KKLJIDJBFEI_o *)0x0;
        if (pCVar3 != (CHDGOFBHAFI_o *)0x0) {
          (pCVar3->fields).GBGHPLFONHD = true;
          if (*(char *)&pIVar2[2].klass == '\0') {
            JJPNLEPEAFM__JNDPLPKDPCP
                      (StringLiteral_17778,StringLiteral_17777,StringLiteral_9679,StringLiteral_1,
                       (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true
                       ,true,(MethodInfo *)0x0);
          }
          if (pIVar2[3].klass == (Il2CppClass *)0x0) {
            return;
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          __this = (KKLJIDJBFEI_o *)0x0;
          if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
            EEGDOGKBLNG__JOMFHMDCMNG(__this_00,(KAMBBJFPLGM_o *)pIVar2[3].klass,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

