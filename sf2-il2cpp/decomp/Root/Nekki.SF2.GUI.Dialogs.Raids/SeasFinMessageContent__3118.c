// TypeDefIndex 3118
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class SeasFinMessageContent : SeasFinBaseContent
// Fields:
//   private LabelAlias _header; // 0x40
//   private LabelAlias _congratulations; // 0x48
//   private LabelAlias _raidFinalists; // 0x50
//   private RaidLeaderboardView _prevSeasonLeaderboard; // 0x58
//   private SimpleScroll _scroll; // 0x60
//   private GameObject _cellPlayerPrefab; // 0x68
//   private LabelAlias _loadMessage; // 0x70
//   private LoadingCircle _loadCircle; // 0x78
//   private BANPLPOPIGI KGCCGHDBPFM; // 0x80

// ===== public void Init(KGBIBHEFBHA HEHMPFLAEGE)  [RVA 0x34CE2EC]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$Init @ RVA 0x34CE2EC

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__Init
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               KGBIBHEFBHA_o *HEHMPFLAEGE,MethodInfo *method)

{
  undefined8 *puVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  EEGDOGKBLNG_o *__this_00;
  JMDPBFOCHHP_o *pJVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *__this_01;
  PLIIGOCLJDL_o *pPVar6;
  System_Action_JCFJFJCKLKG__o *pSVar7;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar8;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar9;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  int32_t iVar11;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568696 & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_KLOCOMEOKIO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_LJLEHMBBENH__);
    FUN_01bab630(&StringLiteral_17822/*"dlgRaidFinalists"*/);
    FUN_01bab630(&StringLiteral_16970/*"characterSensei"*/);
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_11757/*"SeasonEndNoReward"*/);
    FUN_01bab630(&StringLiteral_11814/*"SenseiSeasonEnd"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568696 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,true,1,StringLiteral_9679/*"OK"*/,
             false,1,StringLiteral_3640/*"CANCEL"*/,(MethodInfo *)0x0);
  pNVar10 = (__this->fields)._loadMessage;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar8 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar10->klass->vtable)._23_set_color.methodPtr)
              ((ulong)(uint)(pBVar8->FHIAKPJBBCB).fields.r,(pBVar8->FHIAKPJBBCB).fields.g,
               (pBVar8->FHIAKPJBBCB).fields.b,(pBVar8->FHIAKPJBBCB).fields.a,pNVar10,
               (pNVar10->klass->vtable)._23_set_color.method);
    if (HEHMPFLAEGE == (KGBIBHEFBHA_o *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = (HEHMPFLAEGE->fields).NLLKMEMKBAF;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar4 = EEGDOGKBLNG__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar5 != (JMDPBFOCHHP_o *)0x0) &&
          (pJVar9 = (pJVar5->fields)._JMEOCLFDHMM_k__BackingField,
          pJVar9 != (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0)) &&
         (__this_01 = (pJVar9->fields).NPPJFJBJLLG,
         __this_01 != (System_Collections_Generic_List_JMDPBFOCHHP_CMLEEJPGHNC__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_CMLEEJPGHNC>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_MoveNext__
                            );
          pIVar2 = local_60.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                      );
            (*(__this->klass->vtable)._5_OJGLIBHMOIE.methodPtr)
                      (__this,(__this->klass->vtable)._5_OJGLIBHMOIE.method);
            return;
          }
          if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while (*(int *)&local_60.fields._current[1].klass != iVar4);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_CMLEEJPGHNC>_Dispose__
                  );
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
        pSVar7 = (System_Action_JCFJFJCKLKG__o *)
                 thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
        System_Action<object>___ctor();
        if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
          PLIIGOCLJDL__JODJMGAGEFG(pPVar6,pSVar7,(MethodInfo *)0x0);
          pPVar6 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          pSVar7 = (System_Action_JCFJFJCKLKG__o *)
                   thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
          System_Action<object>___ctor();
          if (pPVar6 != (PLIIGOCLJDL_o *)0x0) {
            PLIIGOCLJDL__AJDFKNGFMMF(pPVar6,pSVar7,(MethodInfo *)0x0);
            pNVar10 = (__this->fields)._header;
            puVar1 = &StringLiteral_11757/*"SeasonEndNoReward"*/;
            if (*(int *)&pIVar2[2].monitor <= iVar11) {
              puVar1 = &StringLiteral_11814/*"SenseiSeasonEnd"*/;
            }
            if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              CJNHFNHJHPE = (System_String_o *)*puVar1;
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_16970/*"characterSensei"*/,(MethodInfo *)0x0);
              pNVar10 = (__this->fields)._congratulations;
              if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,CJNHFNHJHPE,(MethodInfo *)0x0);
                pNVar10 = (__this->fields)._raidFinalists;
                if (pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar10,StringLiteral_17822/*"dlgRaidFinalists"*/,(MethodInfo *)0x0)
                  ;
                  Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LIHMJBBBEPC(__this,method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KLOCOMEOKIO(JCFJFJCKLKG DJFFMPLBCKC)  [RVA 0x34CE85C]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$KLOCOMEOKIO @ RVA 0x34CE85C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__KLOCOMEOKIO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = DJFFMPLBCKC;
  auVar2._0_8_ = __this;
  if ((DAT_04568697 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    auVar2 = FUN_01bab630(&StringLiteral_10982/*"RaidTopHundredDialog::onGetPrevSeasonLeaderboardInfoFail"*/);
    DAT_04568697 = 1;
  }
  pNVar1 = (__this->fields)._prevSeasonLeaderboard;
  if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    (pNVar1->fields).HOKHHIBHFBM = false;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10982/*"RaidTopHundredDialog::onGetPrevSeasonLeaderboardInfoFail"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void .ctor()  [RVA 0x34CE8D8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$.ctor @ RVA 0x34CE8D8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LIHMJBBBEPC()  [RVA 0x34CE6E0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$LIHMJBBBEPC @ RVA 0x34CE6E0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LIHMJBBBEPC
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *pNVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar2;
  PLIIGOCLJDL_o *__this_00;
  JCFJFJCKLKG_o *DJFFMPLBCKC;
  BANPLPOPIGI_o *pBVar3;
  BANPLPOPIGI_o **ppBVar4;
  UnityEngine_GameObject_o *pUVar5;
  
  if ((DAT_04568698 & 1) == 0) {
    FUN_01bab630(&BANPLPOPIGI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568698 = 1;
  }
  pNVar1 = (__this->fields)._scroll;
  if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._scroll;
    if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._scroll;
      if (pNVar1 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar1,true,(MethodInfo *)0x0)
        ;
        pNVar2 = (__this->fields)._prevSeasonLeaderboard;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__Init
                    (pNVar2,(Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *)0x0,
                     (__this->fields)._loadMessage,(__this->fields)._loadCircle,
                     (__this->fields)._scroll,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
          if (__this_00 != (PLIIGOCLJDL_o *)0x0) {
            DJFFMPLBCKC = PLIIGOCLJDL__MACEOHOPNGP(__this_00,1,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._prevSeasonLeaderboard;
            pNVar1 = (__this->fields)._scroll;
            pUVar5 = (__this->fields)._cellPlayerPrefab;
            pBVar3 = (BANPLPOPIGI_o *)thunk_FUN_01bda818(BANPLPOPIGI_TypeInfo);
            BANPLPOPIGI___ctor(pBVar3,pNVar2,pNVar1,pUVar5,false,(MethodInfo *)0x0);
            ppBVar4 = &(__this->fields).KGCCGHDBPFM;
            *ppBVar4 = pBVar3;
            thunk_FUN_01c20e04(ppBVar4,pBVar3);
            pBVar3 = *ppBVar4;
            if (pBVar3 != (BANPLPOPIGI_o *)0x0) {
              (pBVar3->fields).FFLNLBEPNNH = 3;
              BANPLPOPIGI__LPNCEHPFOAF(pBVar3,DJFFMPLBCKC,(System_Action_o *)0x0,(MethodInfo *)0x0);
              pNVar2 = (__this->fields)._prevSeasonLeaderboard;
              if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) &&
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
                if (DJFFMPLBCKC != (JCFJFJCKLKG_o *)0x0) {
                  pNVar2 = (__this->fields)._prevSeasonLeaderboard;
                  if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0)
                  goto LAB_035ce858;
                  (pNVar2->fields).HOKHHIBHFBM = true;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_035ce858:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BKIDPFGEJEO(JCFJFJCKLKG DJFFMPLBCKC)  [RVA 0x34CE8E0]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$BKIDPFGEJEO @ RVA 0x34CE8E0

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__BKIDPFGEJEO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  BANPLPOPIGI_o *__this_00;
  
  __this_00 = (__this->fields).KGCCGHDBPFM;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    BANPLPOPIGI__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,(System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private void LJLEHMBBENH(JCFJFJCKLKG DJFFMPLBCKC)  [RVA 0x34CE8F8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$LJLEHMBBENH @ RVA 0x34CE8F8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__LJLEHMBBENH
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,
               JCFJFJCKLKG_o *DJFFMPLBCKC,MethodInfo *method)

{
  BANPLPOPIGI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar1;
  
  if ((DAT_04568699 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10981/*"RaidTopHundredDialog::onGetPrevSeasonLeaderboardInfo - data is corrupted"*/);
    DAT_04568699 = 1;
  }
  pNVar1 = (__this->fields)._prevSeasonLeaderboard;
  if (pNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (pNVar1->fields).HOKHHIBHFBM = false;
  if (DJFFMPLBCKC == (JCFJFJCKLKG_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10981/*"RaidTopHundredDialog::onGetPrevSeasonLeaderboardInfo - data is corrupted"*/,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (__this->fields).KGCCGHDBPFM;
  if (__this_00 != (BANPLPOPIGI_o *)0x0) {
    BANPLPOPIGI__LPNCEHPFOAF(__this_00,DJFFMPLBCKC,(System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x34CE9A8]
// Nekki.SF2.GUI.Dialogs.Raids.SeasFinMessageContent$$OnDestroy @ RVA 0x34CE9A8

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this,MethodInfo *method)

{
  PLIIGOCLJDL_o *pPVar1;
  System_Action_JCFJFJCKLKG__o *pSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456869a & 1) == 0) {
    FUN_01bab630(&System_Action<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_KLOCOMEOKIO__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_LJLEHMBBENH__);
    DAT_0456869a = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar1 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
  pSVar2 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo);
  System_Action<object>___ctor();
  if (pPVar1 != (PLIIGOCLJDL_o *)0x0) {
    PLIIGOCLJDL__IJMELLFDCDD(pPVar1,pSVar2,(MethodInfo *)0x0);
    pPVar1 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
    pSVar2 = (System_Action_JCFJFJCKLKG__o *)thunk_FUN_01bda818(System_Action<JCFJFJCKLKG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pPVar1 != (PLIIGOCLJDL_o *)0x0) {
      PLIIGOCLJDL__BNNGOJGLDOC(pPVar1,pSVar2,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__OnDestroy
                ((Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

