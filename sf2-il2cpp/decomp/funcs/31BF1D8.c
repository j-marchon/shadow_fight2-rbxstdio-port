// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$EBIMOCGLMPK @ RVA 0x31BF1D8

void Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__EBIMOCGLMPK
               (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IGPDCHBJAPD_o *__this_00;
  EEGDOGKBLNG_o *pEVar3;
  Il2CppObject *pIVar4;
  AADKBCFCLKK_o *pAVar5;
  CHDGOFBHAFI_o *pCVar6;
  NODLJPNGNBG_o *pNVar7;
  ICBMOMGINFH_o *pIVar8;
  ICBMOMGINFH_o **ppIVar9;
  AADKBCFCLKK_o **ppAVar10;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04566c09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    FUN_01bab630(&StringLiteral_5882);
    DAT_04566c09 = 1;
  }
  __this_00 = (__this->fields).super.KNEAEEIMDGH;
  if (__this_00 != (IGPDCHBJAPD_o *)0x0) {
    if ((__this_00->fields).BLKENLJGDIE == 2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__IANDFKCDLKP(pEVar3,IDCGLBOIAFJ,(MethodInfo *)0x0);
        iVar2 = 10;
LAB_032bf3b0:
        (__this->fields).CNBJDAMBJAB = iVar2;
        return;
      }
    }
    else {
      bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_00,(MethodInfo *)0x0);
      if (bVar1) {
        if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
           (pIVar4 = KEFHDOHHHML__PFNEPJAFEDF<object>
                               (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__),
           pIVar4 != (Il2CppObject *)0x0)) {
          LLJHKLPGMGC = pIVar4[2].klass;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
            EEGDOGKBLNG__JOMFHMDCMNG(pEVar3,(KAMBBJFPLGM_o *)LLJHKLPGMGC,(MethodInfo *)0x0);
            if (pIVar4[1].monitor != (AADKBCFCLKK_o *)0x0) {
              pAVar5 = AADKBCFCLKK__Clone(pIVar4[1].monitor,(MethodInfo *)0x0);
              ppAVar10 = &(__this->fields).MCPOGJLFCON;
              *ppAVar10 = pAVar5;
              thunk_FUN_01c20e04(ppAVar10,pAVar5);
              pCVar6 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
              if (pCVar6 != (CHDGOFBHAFI_o *)0x0) {
                CHDGOFBHAFI__BNPLDAHKIED(pCVar6,*ppAVar10,(PGICCMFLDPI_o *)0x0,(MethodInfo *)0x0);
                if (*ppAVar10 != (AADKBCFCLKK_o *)0x0) {
                  pNVar7 = CHDGOFBHAFI__AFHLHFMLNEO
                                     ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                                      ((*ppAVar10)->fields).MPAIPMANDEO,(MethodInfo *)0x0);
                  pCVar6 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                  if (((*ppAVar10 != (AADKBCFCLKK_o *)0x0) && (pNVar7 != (NODLJPNGNBG_o *)0x0)) &&
                     (pCVar6 != (CHDGOFBHAFI_o *)0x0)) {
                    iVar2 = CHDGOFBHAFI__IFKJIIINHIO
                                      (pCVar6,(System_Collections_Generic_IList_NODLJPNGNBG__o *)
                                              ((*ppAVar10)->fields).MPAIPMANDEO,
                                       (pNVar7->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
                    (__this->fields).DMJKLJMLIMA = iVar2;
                    pIVar8 = (pNVar7->fields).PMMFPJJOPKE;
                    if (pIVar8 != (ICBMOMGINFH_o *)0x0) {
                      ppIVar9 = &(__this->fields).JFJHLLFJKBM;
                      *ppIVar9 = pIVar8;
                      thunk_FUN_01c20e04(ppIVar9);
                      (__this->fields).CNBJDAMBJAB = 1;
                      return;
                    }
                    (__this->fields).CNBJDAMBJAB = 0xd;
                    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    UnityEngine_Debug__LogError(StringLiteral_5882,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
          EEGDOGKBLNG__IANDFKCDLKP(pEVar3,IDCGLBOIAFJ,(MethodInfo *)0x0);
          iVar2 = 7;
          goto LAB_032bf3b0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

