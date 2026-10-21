// TypeDefIndex 1633
// Namespace: Nekki.SF2.GUI.Fight
// public class EndRaidFinalFightScreen : EndRaidFightScreenBase
// Fields:
//   private RaidFinalFightRatingContent _RaidFinalFightRatingContentPrefab; // 0x88
//   private RaidFinalFightChestContent _RaidFinalFightChestContentPrefab; // 0x90
//   private RaidFinalFightCurrencyContent _RaidFinalFightCurrencyContentPrefab; // 0x98
//   private RaidQuestsRewardsContent _RaidQuestsRewardsContentPrefab; // 0xA0
//   private RaidFightTextContent _RaidFightTextContentPrefab; // 0xA8
//   private RaidFightTimeoutContent _RaidFightTimeoutContentPrefab; // 0xB0
//   private EndRaidFinalFightScreen.OGDBDJMOIKM CNBJDAMBJAB; // 0xB8
//   private AADKBCFCLKK MCPOGJLFCON; // 0xC0
//   private ICBMOMGINFH JFJHLLFJKBM; // 0xC8
//   private int DMJKLJMLIMA; // 0xD0

// ===== protected override RaidEndFightBaseContent CGEIBMDFLEL()  [RVA 0x31BEC24]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$CGEIBMDFLEL @ RVA 0x31BEC24

Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *
Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__CGEIBMDFLEL
          (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *__this_00;
  Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_o *__this_01;
  RaidManager_o *__this_02;
  System_String_o *pSVar3;
  long lVar4;
  undefined8 *puVar5;
  RaidQuestsManager_o *__this_03;
  Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *__this_04;
  RaidConfig_o *pJVar6;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *__this_05;
  Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this_06;
  Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this_07;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_String_o *LGHOMHOPNEP;
  ICBMOMGINFH_o *pIVar7;
  BECIPDJBAOG_o *pBVar8;
  RaidConfig_EMDEPOFJFEF_o *pJVar9;
  ulong uVar10;
  int *piVar11;
  Nekki_SF2_GUI_Fight_RaidFightTextContent_o *__this_08;
  long *plVar12;
  RaidConfig_FNILDHLJBBJ_o *GDGBNEPJEOO;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04566c08 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFightTextContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFightTimeoutContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightChestContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightCurrencyContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightRatingContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ>_get_Current__
                );
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ>_GetEnumerator__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&StringLiteral_17792/*"dlgFinalFightError"*/);
    FUN_01bab630(&StringLiteral_17787/*"dlgExitButton"*/);
    FUN_01bab630(&StringLiteral_6432/*"FinalFightTryAgain"*/);
    DAT_04566c08 = 1;
    method = extraout_x1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).CNBJDAMBJAB;
  __this_08 = (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)0x0;
  (__this->fields).CNBJDAMBJAB = iVar1 + 1;
  switch(iVar1) {
  case 1:
    if ((__this->fields).JFJHLLFJKBM != (ICBMOMGINFH_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *)
                  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                             (Il2CppObject *)(__this->fields)._RaidFinalFightRatingContentPrefab,
                             Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightRatingContent>__
                            );
      if (__this_00 != (Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent__Init
                  (__this_00,(__this->fields).JFJHLLFJKBM,(__this->fields).DMJKLJMLIMA,
                   (MethodInfo *)0x0);
        return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_00;
      }
      goto LAB_032bf13c;
    }
    break;
  case 2:
    pIVar7 = (__this->fields).JFJHLLFJKBM;
    if (((pIVar7 == (ICBMOMGINFH_o *)0x0) ||
        (pBVar8 = (pIVar7->fields).MJIIHOLHNCK, pBVar8 == (BECIPDJBAOG_o *)0x0)) ||
       (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((pBVar8->fields).JPHFGCIDDHE,(MethodInfo *)0x0), bVar2)) {
      PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)0x0,(MethodInfo *)0x0);
    }
    else {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar6 == (RaidConfig_o *)0x0) ||
          (pJVar9 = (pJVar6->fields)._GJCMAADAOHD_k__BackingField,
          pJVar9 == (RaidConfig_EMDEPOFJFEF_o *)0x0)) ||
         (__this_05 = (pJVar9->fields).BAPMMGFEIDM,
         __this_05 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *)0x0))
      goto LAB_032bf13c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_05,
                 Method_System_Collections_Generic_List<RaidConfig_FNILDHLJBBJ>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_40,
                           Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ>_MoveNext__
                          );
        GDGBNEPJEOO = (RaidConfig_FNILDHLJBBJ_o *)local_40.fields._current;
        if (!bVar2) {
          GDGBNEPJEOO = (RaidConfig_FNILDHLJBBJ_o *)0x0;
          pSVar3 = (System_String_o *)0x0;
          goto LAB_032bf070;
        }
        if ((RaidConfig_FNILDHLJBBJ_o *)local_40.fields._current ==
            (RaidConfig_FNILDHLJBBJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = (__this->fields).JFJHLLFJKBM;
        if (pIVar7 == (ICBMOMGINFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pBVar8 = (pIVar7->fields).MJIIHOLHNCK;
        if (pBVar8 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          (((RaidConfig_FNILDHLJBBJ_Fields *)
                           ((long)local_40.fields._current + 0x10))->JFDGLPNMELO,
                           (pBVar8->fields).JPHFGCIDDHE,(MethodInfo *)0x0);
      } while (!bVar2);
      pSVar3 = ((RaidConfig_FNILDHLJBBJ_Fields *)((long)GDGBNEPJEOO + 0x10))->HILNENCJHMI;
LAB_032bf070:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_40,
                 Method_System_Collections_Generic_List_Enumerator<RaidConfig_FNILDHLJBBJ>_Dispose__
                );
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
      if ((GDGBNEPJEOO != (RaidConfig_FNILDHLJBBJ_o *)0x0) && (!bVar2)) {
        __this_06 = (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *)
                    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                              ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                               (Il2CppObject *)(__this->fields)._RaidFinalFightChestContentPrefab,
                               Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightChestContent>__
                              );
        if (__this_06 != (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *)0x0) {
          Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__Init
                    (__this_06,GDGBNEPJEOO,(MethodInfo *)0x0);
          return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_06;
        }
        goto LAB_032bf13c;
      }
    }
    break;
  case 3:
    pIVar7 = (__this->fields).JFJHLLFJKBM;
    if ((pIVar7 != (ICBMOMGINFH_o *)0x0) &&
       (pBVar8 = (pIVar7->fields).MJIIHOLHNCK, pBVar8 != (BECIPDJBAOG_o *)0x0)) {
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_IList_T__o *)(pBVar8->fields).LEJBLHJFJHP,
                         Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
      if (bVar2) {
        pIVar7 = (__this->fields).JFJHLLFJKBM;
        if ((pIVar7 == (ICBMOMGINFH_o *)0x0) ||
           (pBVar8 = (pIVar7->fields).MJIIHOLHNCK, pBVar8 == (BECIPDJBAOG_o *)0x0))
        goto LAB_032bf13c;
        bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_IList_T__o *)(pBVar8->fields).AKFPFIHIHOC,
                           Method_DJNBJHPDKDP_OBECCOPBADO<PIADCKMDDAK>__);
        if (bVar2) break;
      }
      lVar4 = *(long *)(Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__ + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      plVar12 = (long *)**(undefined8 **)(lVar4 + 0xb8);
      if (plVar12 != (long *)0x0) {
        lVar4 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(ODEIOKOJGDM_c **)(piVar11 + -2) == ODEIOKOJGDM_TypeInfo) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_032bf0fc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar12,ODEIOKOJGDM_TypeInfo,0);
LAB_032bf0fc:
        (*(code *)*puVar5)(plVar12,0,puVar5[1]);
        __this_07 = (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *)
                    Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                              ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                               (Il2CppObject *)(__this->fields)._RaidFinalFightCurrencyContentPrefab
                               ,
                               Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFinalFightCurrencyContent>__
                              );
        if (__this_07 != (Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *)0x0) {
          Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent__Init
                    (__this_07,(__this->fields).JFJHLLFJKBM,(MethodInfo *)0x0);
          return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_07;
        }
      }
LAB_032bf13c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    break;
  case 4:
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_03 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_03 == (RaidQuestsManager_o *)0x0) goto LAB_032bf13c;
    bVar2 = RaidQuestsManager__EHFPAPHPBIP(__this_03,(MethodInfo *)0x0);
    if (bVar2) {
      __this_04 = (Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *)
                  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                             (Il2CppObject *)(__this->fields)._RaidQuestsRewardsContentPrefab,
                             Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                            );
      if (__this_04 != (Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *)0x0) {
        Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__Init(__this_04,method_00);
        return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_04;
      }
      goto LAB_032bf13c;
    }
    break;
  default:
    goto switchD_032bed4c_caseD_5;
  case 7:
    __this_08 = (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)
                Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                          ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                           (Il2CppObject *)(__this->fields)._RaidFightTextContentPrefab,
                           Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFightTextContent>__
                          );
    if (__this_08 == (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)0x0) goto LAB_032bf13c;
    bVar2 = true;
    pSVar3 = StringLiteral_6432/*"FinalFightTryAgain"*/;
    LGHOMHOPNEP = StringLiteral_17787/*"dlgExitButton"*/;
    goto LAB_032befb8;
  case 10:
    __this_01 = (Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_o *)
                Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                          ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                           (Il2CppObject *)(__this->fields)._RaidFightTimeoutContentPrefab,
                           Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFightTimeoutContent>__
                          );
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
    }
    __this_02 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((__this_02 != (RaidManager_o *)0x0) &&
       (pSVar3 = RaidManager__BGHMPINAEDC(__this_02,(MethodInfo *)0x0),
       __this_01 != (Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_o *)0x0)) {
      Nekki_SF2_GUI_Fight_RaidFightTimeoutContent__Init(__this_01,pSVar3,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_01;
    }
    goto LAB_032bf13c;
  case 0xd:
    __this_08 = (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)
                Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                          ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                           (Il2CppObject *)(__this->fields)._RaidFightTextContentPrefab,
                           Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidFightTextContent>__
                          );
    if (__this_08 == (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)0x0) goto LAB_032bf13c;
    bVar2 = false;
    pSVar3 = StringLiteral_17792/*"dlgFinalFightError"*/;
    LGHOMHOPNEP = (System_String_o *)0x0;
LAB_032befb8:
    Nekki_SF2_GUI_Fight_RaidFightTextContent__Init
              (__this_08,pSVar3,LGHOMHOPNEP,bVar2,(MethodInfo *)0x0);
    goto switchD_032bed4c_caseD_5;
  }
  __this_08 = (Nekki_SF2_GUI_Fight_RaidFightTextContent_o *)
              (*(__this->klass->vtable)._5_CGEIBMDFLEL.methodPtr)
                        (__this,(__this->klass->vtable)._5_CGEIBMDFLEL.method);
switchD_032bed4c_caseD_5:
  return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)__this_08;
}


// ===== public void .ctor()  [RVA 0x31BF1D0]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$.ctor @ RVA 0x31BF1D0

void Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen___ctor
               (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase___ctor
            ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void EBIMOCGLMPK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31BF1D8]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$EBIMOCGLMPK @ RVA 0x31BF1D8

void Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__EBIMOCGLMPK
               (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  IGPDCHBJAPD_o *__this_00;
  PlayerData_o *pEVar3;
  Il2CppObject *pIVar4;
  AADKBCFCLKK_o *pAVar5;
  RaidManager_o *pCVar6;
  NODLJPNGNBG_o *pNVar7;
  ICBMOMGINFH_o *pIVar8;
  ICBMOMGINFH_o **ppIVar9;
  AADKBCFCLKK_o **ppAVar10;
  Il2CppClass *LLJHKLPGMGC;
  
  if ((DAT_04566c09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<CDAAECGFKON>__);
    FUN_01bab630(&StringLiteral_5882/*"Error no reward inside player"*/);
    DAT_04566c09 = 1;
  }
  __this_00 = (__this->fields).super.KNEAEEIMDGH;
  if (__this_00 != (IGPDCHBJAPD_o *)0x0) {
    if ((__this_00->fields).BLKENLJGDIE == 2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar3 != (PlayerData_o *)0x0) {
        PlayerData__IANDFKCDLKP(pEVar3,IDCGLBOIAFJ,(MethodInfo *)0x0);
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
          if (pEVar3 != (PlayerData_o *)0x0) {
            PlayerData__JOMFHMDCMNG(pEVar3,(KAMBBJFPLGM_o *)LLJHKLPGMGC,(MethodInfo *)0x0);
            if (pIVar4[1].monitor != (AADKBCFCLKK_o *)0x0) {
              pAVar5 = AADKBCFCLKK__Clone(pIVar4[1].monitor,(MethodInfo *)0x0);
              ppAVar10 = &(__this->fields).MCPOGJLFCON;
              *ppAVar10 = pAVar5;
              thunk_FUN_01c20e04(ppAVar10,pAVar5);
              pCVar6 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
              if (pCVar6 != (RaidManager_o *)0x0) {
                RaidManager__BNPLDAHKIED(pCVar6,*ppAVar10,(PGICCMFLDPI_o *)0x0,(MethodInfo *)0x0);
                if (*ppAVar10 != (AADKBCFCLKK_o *)0x0) {
                  pNVar7 = RaidManager__AFHLHFMLNEO
                                     ((System_Collections_Generic_IList_NODLJPNGNBG__o *)
                                      ((*ppAVar10)->fields).MPAIPMANDEO,(MethodInfo *)0x0);
                  pCVar6 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                  if (((*ppAVar10 != (AADKBCFCLKK_o *)0x0) && (pNVar7 != (NODLJPNGNBG_o *)0x0)) &&
                     (pCVar6 != (RaidManager_o *)0x0)) {
                    iVar2 = RaidManager__IFKJIIINHIO
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
                    UnityEngine_Debug__LogError(StringLiteral_5882/*"Error no reward inside player"*/,(MethodInfo *)0x0);
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
        if (pEVar3 != (PlayerData_o *)0x0) {
          PlayerData__IANDFKCDLKP(pEVar3,IDCGLBOIAFJ,(MethodInfo *)0x0);
          iVar2 = 7;
          goto LAB_032bf3b0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string LLBHHOGNCOL()  [RVA 0x31BF400]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$LLBHHOGNCOL @ RVA 0x31BF400

System_String_o *
Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__LLBHHOGNCOL
          (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  if ((DAT_04566c0a & 1) == 0) {
    FUN_01bab630(&StringLiteral_20402/*"raid_battle_player_finish"*/);
    DAT_04566c0a = 1;
  }
  return StringLiteral_20402/*"raid_battle_player_finish"*/;
}


// ===== protected override IMessage FMNNEOGINIP()  [RVA 0x31BF440]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$FMNNEOGINIP @ RVA 0x31BF440

Google_Protobuf_IMessage_o *
Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__FMNNEOGINIP
          (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  JGELBDHDHAO_o *__this_00;
  IGPDCHBJAPD_o *__this_01;
  PIADCKMDDAK_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_03;
  MethodInfo *extraout_x1;
  GameUtils_ABAALAENAKC_o *pMVar2;
  
  if ((DAT_04566c0b & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04566c0b = 1;
    method = extraout_x1;
  }
  __this_00 = (JGELBDHDHAO_o *)thunk_FUN_01bda818(JGELBDHDHAO_TypeInfo,method);
  JGELBDHDHAO___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).super.KNEAEEIMDGH;
  if ((__this_01 != (IGPDCHBJAPD_o *)0x0) &&
     (bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_01,(MethodInfo *)0x0),
     __this_00 != (JGELBDHDHAO_o *)0x0)) {
    (__this_00->fields).IFBHDAMCHNM = bVar1;
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = GameUtils_TypeInfo->static_fields->FDIJMKPILBI;
    if (pMVar2 != (GameUtils_ABAALAENAKC_o *)0x0) {
      if ((pMVar2->fields).IDHCEJLJIGI < 1) {
        return (Google_Protobuf_IMessage_o *)__this_00;
      }
      __this_02 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(__this_02,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar2 = GameUtils_TypeInfo->static_fields->FDIJMKPILBI;
      if ((pMVar2 != (GameUtils_ABAALAENAKC_o *)0x0) && (__this_02 != (PIADCKMDDAK_o *)0x0)) {
        PIADCKMDDAK__HCOCAAIGNNL(__this_02,(pMVar2->fields).GJFGFNAGPEO,(MethodInfo *)0x0);
        pMVar2 = GameUtils_TypeInfo->static_fields->FDIJMKPILBI;
        if (pMVar2 != (GameUtils_ABAALAENAKC_o *)0x0) {
          (__this_02->fields).GDKPGIBMFPA = (pMVar2->fields).IDHCEJLJIGI;
          __this_03 = (__this_00->fields).DDEAFMPDPBJ;
          if (__this_03 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
            Google_Protobuf_Collections_RepeatedField<object>__Add
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                       (Il2CppObject *)__this_02,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
            return (Google_Protobuf_IMessage_o *)__this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override int IMEAGKDHPMM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x31BF594]
// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$IMEAGKDHPMM @ RVA 0x31BF594

int32_t Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__IMEAGKDHPMM
                  (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
                  MethodInfo *method)

{
  return 0x29c7;
}

