// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$PBDGFBENHDK @ RVA 0x33FA4C0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__PBDGFBENHDK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_SFButton__o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  EEGDOGKBLNG_o *pEVar10;
  EEOMEMBBGNA_o *pEVar11;
  CJFBGEEIPBA_o *__this_00;
  CHDGOFBHAFI_o *pCVar12;
  MGDJPGGPDJI_o *pMVar13;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *pNVar14;
  LabelButton_o *pLVar15;
  SFButton_array *pSVar16;
  OJEHKJHEBID_o *pOVar17;
  Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *pGVar18;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567fb1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<SFButton>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_get_Count__);
    FUN_01bab630(&StringLiteral_8373);
    FUN_01bab630(&StringLiteral_5406);
    FUN_01bab630(&StringLiteral_8271);
    FUN_01bab630(&StringLiteral_4258);
    FUN_01bab630(&StringLiteral_4855);
    DAT_04567fb1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar8 = (__this->fields).EHOJEDDANJH;
  if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
             Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__),
        bVar4) {
    if ((UnityEngine_Component_o *)local_80.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar9 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)local_80.fields._current,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive(pUVar9,false,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
  pSVar8 = (__this->fields).EHOJEDDANJH;
  if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  iVar7 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (0 < iVar7) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar7,(MethodInfo *)0x0);
    pSVar8 = (__this->fields).EHOJEDDANJH;
    if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
  }
  lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
  pLVar15 = (__this->fields)._backButton;
  pSVar16 = (pSVar8->fields)._items;
  (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
  if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
  uVar2 = (pSVar8->fields)._size;
  if (uVar2 < (uint)pSVar16->max_length) {
    (pSVar8->fields)._size = uVar2 + 1;
    pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
    thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar10 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar10 == (EEGDOGKBLNG_o *)0x0) goto LAB_034faad4;
  bVar4 = EEGDOGKBLNG__CLJIMCDAEKO(pEVar10,(MethodInfo *)0x0);
  if (bVar4) {
    bVar4 = KFCFGKEHPNK__KAFBLLCOIFP((__this->fields).FBILHKCKHEJ,(MethodInfo *)0x0);
    if (bVar4) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar11 == (EEOMEMBBGNA_o *)0x0) ||
         (__this_00 = (pEVar11->fields).GMNJEBCECDA, __this_00 == (CJFBGEEIPBA_o *)0x0))
      goto LAB_034faad4;
      bVar4 = CJFBGEEIPBA__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
      pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if ((pEVar11 == (EEOMEMBBGNA_o *)0x0) ||
         ((pOVar17 = (pEVar11->fields).MICFEIBNOLM, pOVar17 == (OJEHKJHEBID_o *)0x0 ||
          (pGVar18 = (pOVar17->fields).MABPCBMOECE,
          pGVar18 == (Google_Protobuf_Collections_RepeatedField_MGDJPGGPDJI__o *)0x0))))
      goto LAB_034faad4;
      iVar1 = (pGVar18->fields).count;
      bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                        ((__this->fields).FBILHKCKHEJ,StringLiteral_5406,
                         (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
      if ((iVar1 == 1) && (bVar5)) {
        pSVar8 = (__this->fields).EHOJEDDANJH;
        if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
        pLVar15 = (__this->fields)._disbandButton;
        pSVar16 = (pSVar8->fields)._items;
        (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
        if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
        uVar2 = (pSVar8->fields)._size;
        if (uVar2 < (uint)pSVar16->max_length) {
          (pSVar8->fields)._size = uVar2 + 1;
          pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
          thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      else {
        bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                          ((__this->fields).FBILHKCKHEJ,StringLiteral_8373,
                           (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
        lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
        if (bVar5) {
          pSVar8 = (__this->fields).EHOJEDDANJH;
          if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
          pLVar15 = (__this->fields)._leaveButton;
          pSVar16 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pSVar16->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
            thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          iVar7 = 2;
          if (!bVar4) {
            iVar7 = 0;
          }
          LJLLAKHOFFF__JAEOMHIAHJB
                    ((UnityEngine_UI_Button_o *)(__this->fields)._leaveButton,iVar7,true,
                     (MethodInfo *)0x0);
        }
      }
      bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                        ((__this->fields).FBILHKCKHEJ,StringLiteral_4855,
                         (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      if (bVar5) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar10 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (pEVar10 == (EEGDOGKBLNG_o *)0x0) goto LAB_034faad4;
        iVar7 = EEGDOGKBLNG__NJNJAECEPCP(pEVar10,(MethodInfo *)0x0);
        if (iVar7 != 3) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar12 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
          if (pCVar12 == (CHDGOFBHAFI_o *)0x0) goto LAB_034faad4;
          if (!bVar4 && (pCVar12->fields).CMDMECMFCIK == 0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pCVar12 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
            if (pCVar12 == (CHDGOFBHAFI_o *)0x0) goto LAB_034faad4;
            bVar4 = CHDGOFBHAFI__BHHNJDDGDHF(pCVar12,(MethodInfo *)0x0);
            if (!bVar4) {
              pSVar8 = (__this->fields).EHOJEDDANJH;
              if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
              pLVar15 = (__this->fields)._raidButton;
              goto LAB_034fa7c8;
            }
          }
        }
      }
    }
  }
  else {
    pSVar8 = (__this->fields).EHOJEDDANJH;
    if (pSVar8 == (System_Collections_Generic_List_SFButton__o *)0x0) goto LAB_034faad4;
    pLVar15 = (__this->fields)._joinButton;
LAB_034fa7c8:
    lVar3 = Method_System_Collections_Generic_List<SFButton>_Add__;
    pSVar16 = (pSVar8->fields)._items;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (pSVar16 == (SFButton_array *)0x0) goto LAB_034faad4;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pSVar16->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pSVar16->m_Items[(int)uVar2] = (SFButton_o *)pLVar15;
      thunk_FUN_01c20e04(pSVar16->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pLVar15,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  bVar4 = DOCPIHOLNOA__BJBGLBAEIJB
                    ((__this->fields).FBILHKCKHEJ,StringLiteral_8271,(__this->fields).AMEAGHFFDFI,
                     (MethodInfo *)0x0);
  bVar5 = DOCPIHOLNOA__BJBGLBAEIJB
                    ((__this->fields).FBILHKCKHEJ,StringLiteral_4258,(__this->fields).AMEAGHFFDFI,
                     (MethodInfo *)0x0);
                    /* try { // try from 034fa998 to 035faa8f has its CatchHandler @ 034fa998
                       catch() { ... } // from try @ 034fa998 with catch @ 034fa998
                       catch() { ... } // from try @ 034fab34 with catch @ 034fa998
                       catch() { ... } // from try @ 034fabc4 with catch @ 034fa998
                       catch() { ... } // from try @ 034fabcc with catch @ 034fa998
                       catch() { ... } // from try @ 034fac78 with catch @ 034fa998 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pEVar11 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar11 != (EEOMEMBBGNA_o *)0x0) {
    pMVar13 = EEOMEMBBGNA__MPCGKMBAHHO(pEVar11,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
    pOVar17 = (__this->fields).FBILHKCKHEJ;
    if (pOVar17 != (OJEHKJHEBID_o *)0x0) {
      bVar6 = OJEHKJHEBID__GIKFBFLFOCH(pOVar17,(__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
      iVar7 = 4;
      if ((pMVar13 != (MGDJPGGPDJI_o *)0x0) && (bVar6)) {
        iVar7 = (pMVar13->fields).BDPMJNBHKIJ;
      }
      pNVar14 = (__this->fields)._tableMembers;
      if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetChangableRole
                  (pNVar14,bVar5,iVar7,(MethodInfo *)0x0);
        pNVar14 = (__this->fields)._tableMembers;
        if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetKickable
                    (pNVar14,bVar4,iVar7,(MethodInfo *)0x0);
          pNVar14 = (__this->fields)._tableMembers;
          if (pNVar14 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__UpdateTable
                      (pNVar14,(MethodInfo *)0x0);
            pSVar8 = (__this->fields).EHOJEDDANJH;
            if (pSVar8 != (System_Collections_Generic_List_SFButton__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
                         Method_System_Collections_Generic_List<SFButton>_GetEnumerator__);
              local_80.fields._index = local_98.fields._index;
              local_80.fields._version = local_98.fields._version;
              local_80.fields._list = local_98.fields._list;
              local_80.fields._current = local_98.fields._current;
              while( true ) {
                bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_80,
                                   Method_System_Collections_Generic_List_Enumerator<SFButton>_MoveNext__
                                  );
                if (!bVar4) {
                    /* try { // try from 034faa90 to 035faab7 has its CatchHandler @ 034fabec */
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<SFButton>_Dispose__);
                  return;
                }
                if ((UnityEngine_Component_o *)local_80.fields._current ==
                    (UnityEngine_Component_o *)0x0) break;
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)local_80.fields._current,
                                    (MethodInfo *)0x0);
                if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UnityEngine_GameObject__SetActive(pUVar9,true,(MethodInfo *)0x0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
LAB_034faad4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

