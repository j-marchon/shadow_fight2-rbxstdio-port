// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$CGEIBMDFLEL @ RVA 0x31BEC24

Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *
Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__CGEIBMDFLEL
          (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_RaidFinalFightRatingContent_o *__this_00;
  Nekki_SF2_GUI_Fight_RaidFightTimeoutContent_o *__this_01;
  CHDGOFBHAFI_o *__this_02;
  System_String_o *pSVar3;
  long lVar4;
  undefined8 *puVar5;
  GALHNMPIEHA_o *__this_03;
  Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *__this_04;
  JMDPBFOCHHP_o *pJVar6;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *__this_05;
  Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this_06;
  Nekki_SF2_GUI_Fight_RaidFinalFightCurrencyContent_o *__this_07;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_String_o *LGHOMHOPNEP;
  ICBMOMGINFH_o *pIVar7;
  BECIPDJBAOG_o *pBVar8;
  JMDPBFOCHHP_EMDEPOFJFEF_o *pJVar9;
  ulong uVar10;
  int *piVar11;
  Nekki_SF2_GUI_Fight_RaidFightTextContent_o *__this_08;
  long *plVar12;
  JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO;
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
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ>_get_Current__
                );
    FUN_01bab630(&Method_GOCLIOIANDK<GGLDGAAPKCF,_ODEIOKOJGDM>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ>_GetEnumerator__);
    FUN_01bab630(&ODEIOKOJGDM_TypeInfo);
    FUN_01bab630(&StringLiteral_17792);
    FUN_01bab630(&StringLiteral_17787);
    FUN_01bab630(&StringLiteral_6432);
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
      if (((pJVar6 == (JMDPBFOCHHP_o *)0x0) ||
          (pJVar9 = (pJVar6->fields)._GJCMAADAOHD_k__BackingField,
          pJVar9 == (JMDPBFOCHHP_EMDEPOFJFEF_o *)0x0)) ||
         (__this_05 = (pJVar9->fields).BAPMMGFEIDM,
         __this_05 == (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ__o *)0x0))
      goto LAB_032bf13c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_05,
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ>_GetEnumerator__);
      local_40.fields._index = local_58.fields._index;
      local_40.fields._version = local_58.fields._version;
      local_40.fields._list = local_58.fields._list;
      local_40.fields._current = local_58.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_40,
                           Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ>_MoveNext__
                          );
        GDGBNEPJEOO = (JMDPBFOCHHP_FNILDHLJBBJ_o *)local_40.fields._current;
        if (!bVar2) {
          GDGBNEPJEOO = (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0;
          pSVar3 = (System_String_o *)0x0;
          goto LAB_032bf070;
        }
        if ((JMDPBFOCHHP_FNILDHLJBBJ_o *)local_40.fields._current ==
            (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
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
                          (((JMDPBFOCHHP_FNILDHLJBBJ_Fields *)
                           ((long)local_40.fields._current + 0x10))->JFDGLPNMELO,
                           (pBVar8->fields).JPHFGCIDDHE,(MethodInfo *)0x0);
      } while (!bVar2);
      pSVar3 = ((JMDPBFOCHHP_FNILDHLJBBJ_Fields *)((long)GDGBNEPJEOO + 0x10))->HILNENCJHMI;
LAB_032bf070:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_40,
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ>_Dispose__
                );
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
      if ((GDGBNEPJEOO != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) && (!bVar2)) {
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
    if (__this_03 == (GALHNMPIEHA_o *)0x0) goto LAB_032bf13c;
    bVar2 = GALHNMPIEHA__EHFPAPHPBIP(__this_03,(MethodInfo *)0x0);
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
    pSVar3 = StringLiteral_6432;
    LGHOMHOPNEP = StringLiteral_17787;
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
    if ((__this_02 != (CHDGOFBHAFI_o *)0x0) &&
       (pSVar3 = CHDGOFBHAFI__BGHMPINAEDC(__this_02,(MethodInfo *)0x0),
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
    pSVar3 = StringLiteral_17792;
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

