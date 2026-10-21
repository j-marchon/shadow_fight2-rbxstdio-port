// HOOAAGABMBL$$MJGMEEKMAOE @ RVA 0x30EA6E0

void HOOAAGABMBL__MJGMEEKMAOE
               (HOOAAGABMBL_o *__this,int32_t PIDMGHLCFAJ,int32_t EPINGPGECOM,
               HOOAAGABMBL_o **PBNOJCMNDDN,HOOAAGABMBL_o **DOGHDPHAEON,MethodInfo *method)

{
  PONNKDFAMFM_o *pPVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  APDNEHFCNNE_o *__this_01;
  HOOAAGABMBL_o *pHVar6;
  MethodInfo *pMVar7;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar8;
  PONNKDFAMFM_o *JGANIDFNOAF;
  PONNKDFAMFM_o *pPVar9;
  PONNKDFAMFM_o *JGANIDFNOAF_00;
  float fVar10;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  pMVar7 = (MethodInfo *)PBNOJCMNDDN;
  if ((DAT_0456640a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456640a = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this,false,0x7fffffff,pMVar7);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->BLNBAFGCAOK;
  if (__this_01 != (APDNEHFCNNE_o *)0x0) {
    pMVar7 = (MethodInfo *)0x0;
    fVar10 = APDNEHFCNNE__PPOKEOHAHFG
                       (__this_01,(__this->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
      JGANIDFNOAF = (PONNKDFAMFM_o *)0x0;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      JGANIDFNOAF_00 = (PONNKDFAMFM_o *)0x0;
      pPVar1 = (PONNKDFAMFM_o *)0x0;
      do {
        do {
          pPVar9 = pPVar1;
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_90,
                             Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__
                            );
          pIVar2 = local_90.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_90,
                       Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
            if (JGANIDFNOAF_00 == (PONNKDFAMFM_o *)0x0) {
              pHVar6 = (HOOAAGABMBL_o *)0x0;
              *PBNOJCMNDDN = (HOOAAGABMBL_o *)0x0;
            }
            else {
              pHVar6 = HOOAAGABMBL__KGJLMGPGJEI(__this,JGANIDFNOAF_00,pMVar7);
              *PBNOJCMNDDN = pHVar6;
            }
            thunk_FUN_01c20e04(PBNOJCMNDDN,pHVar6);
            if ((JGANIDFNOAF == (PONNKDFAMFM_o *)0x0) &&
               (JGANIDFNOAF = pPVar9, pPVar9 == (PONNKDFAMFM_o *)0x0)) {
              pHVar6 = (HOOAAGABMBL_o *)0x0;
              *DOGHDPHAEON = (HOOAAGABMBL_o *)0x0;
            }
            else {
              pHVar6 = HOOAAGABMBL__KGJLMGPGJEI(__this,JGANIDFNOAF,pMVar7);
              *DOGHDPHAEON = pHVar6;
            }
            thunk_FUN_01c20e04(DOGHDPHAEON,pHVar6);
            return;
          }
          if ((PONNKDFAMFM_o *)local_90.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar8 = ((PONNKDFAMFM_Fields *)((long)local_90.fields._current + 0x10))->JDHAHDALAOA;
          if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar8->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
          pPVar8 = ((PONNKDFAMFM_Fields *)((long)pIVar2 + 0x10))->JDHAHDALAOA;
          pPVar1 = (PONNKDFAMFM_o *)pIVar2;
          if (iVar4 != EPINGPGECOM) {
            pPVar1 = JGANIDFNOAF_00;
          }
          if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar7 = (MethodInfo *)0x0;
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar8->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
          JGANIDFNOAF_00 = pPVar1;
          pPVar1 = pPVar9;
        } while ((iVar4 <= EPINGPGECOM) || (PIDMGHLCFAJ < iVar5));
        pPVar8 = ((PONNKDFAMFM_Fields *)((long)pIVar2 + 0x10))->JDHAHDALAOA;
        if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar8->fields).BIKFMGALAEC.fields,(MethodInfo *)0x0);
        if (0 < iVar5) {
          pPVar8 = ((PONNKDFAMFM_Fields *)((long)pIVar2 + 0x10))->JDHAHDALAOA;
          if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar8->fields).NOPGBJNLFHM.fields,(MethodInfo *)0x0);
          if (fVar10 + (float)(EPINGPGECOM / 100) <= (float)iVar5) {
            if (JGANIDFNOAF != (PONNKDFAMFM_o *)0x0) {
              pPVar8 = (JGANIDFNOAF->fields).JDHAHDALAOA;
              if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                 (pPVar8->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
              if (iVar4 <= iVar5) goto LAB_031ea8dc;
            }
            JGANIDFNOAF = (PONNKDFAMFM_o *)pIVar2;
          }
        }
LAB_031ea8dc:
        pPVar8 = ((PONNKDFAMFM_Fields *)((long)pIVar2 + 0x10))->JDHAHDALAOA;
        if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar7 = (MethodInfo *)0x0;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar8->fields).BIKFMGALAEC.fields,(MethodInfo *)0x0);
        if ((iVar5 < 1) && (pPVar1 = (PONNKDFAMFM_o *)pIVar2, pPVar9 != (PONNKDFAMFM_o *)0x0)) {
          pPVar8 = (pPVar9->fields).JDHAHDALAOA;
          if (pPVar8 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar7 = (MethodInfo *)0x0;
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar8->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
          pPVar1 = pPVar9;
          if (iVar4 < iVar5) {
            pPVar1 = (PONNKDFAMFM_o *)pIVar2;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

