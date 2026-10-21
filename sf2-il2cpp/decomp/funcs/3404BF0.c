// MGNPHCAAEIO$$GPAPDPGGGJB @ RVA 0x3404BF0

void MGNPHCAAEIO__GPAPDPGGGJB(MethodInfo *method)

{
  System_Predicate_KAJIALENBGD__o **ppSVar1;
  int32_t PCNEDMAJMOJ;
  uint uVar2;
  long lVar3;
  bool bVar4;
  MGNPHCAAEIO_HCLHDFADEEG_o *__this;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar5;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar6;
  System_Collections_Generic_List_NFKLEEPNELA__o *CIADJOAENAM;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar7;
  KMJDCOABCCG_o *pKVar8;
  NFKLEEPNELA_o *__this_01;
  ACHLOMELAJE_o *pAVar9;
  NFKLEEPNELA_array *pNVar10;
  System_Object_array *pSVar11;
  int iVar12;
  FEPPOONJCGI_o *pFVar13;
  System_Collections_Generic_List_KAJIALENBGD__o *__this_02;
  System_Predicate_KAJIALENBGD__o *match;
  System_String_o *pSVar14;
  
  if ((DAT_0456800e & 1) == 0) {
    FUN_01bab630(&Method_MGNPHCAAEIO_HCLHDFADEEG_KACAAFBIHLO__);
    FUN_01bab630(&MGNPHCAAEIO_HCLHDFADEEG_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KAJIALENBGD>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NFKLEEPNELA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NFKLEEPNELA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NFKLEEPNELA_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<KAJIALENBGD>_TypeInfo);
    DAT_0456800e = 1;
  }
  __this = (MGNPHCAAEIO_HCLHDFADEEG_o *)thunk_FUN_01bda818(MGNPHCAAEIO_HCLHDFADEEG_TypeInfo);
  MGNPHCAAEIO_HCLHDFADEEG___ctor(__this,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar5 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
  if ((pMVar5 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) &&
     (pSVar6 = MGNPHCAAEIO_FGHBAEIKNBF__EGAMDFPKABL(pMVar5,(MethodInfo *)0x0),
     __this != (MGNPHCAAEIO_HCLHDFADEEG_o *)0x0)) {
    (__this->fields).completedAchievements = pSVar6;
    thunk_FUN_01c20e04();
    CIADJOAENAM = (System_Collections_Generic_List_NFKLEEPNELA__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<NFKLEEPNELA>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)CIADJOAENAM,
               Method_System_Collections_Generic_List<NFKLEEPNELA>__ctor__);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
       (pFVar13 = (pAVar9->fields).IMJJJJJMMHL, pFVar13 != (FEPPOONJCGI_o *)0x0)) {
      pSVar6 = (__this->fields).completedAchievements;
      __this_02 = (pFVar13->fields).GNGLHGOGCBO;
      (__this->fields).i = 0;
      if (pSVar6 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
        iVar12 = 0;
        ppSVar1 = &(__this->fields).__9__0;
        do {
          if ((pSVar6->fields)._size <= iVar12) {
            if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pIVar7 = IFAMAAGNCBJ__GPBMELHDADN<object>
                               (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
            if (pIVar7 != (Il2CppObject *)0x0) {
              bVar4 = Core_Configs_Models_BuildSettingsExtension__GetPostAchievements
                                (pIVar7[9].monitor,(MethodInfo *)0x0);
              if (((bVar4) && (bVar4 = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0), bVar4)) &&
                 (bVar4 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0), bVar4)) {
                IMAPABEJECG__MHKLAIFGNCN(CIADJOAENAM,false,(MethodInfo *)0x0);
                return;
              }
              return;
            }
            break;
          }
          match = *ppSVar1;
          if (match == (System_Predicate_KAJIALENBGD__o *)0x0) {
            match = (System_Predicate_KAJIALENBGD__o *)
                    thunk_FUN_01bda818(System_Predicate<KAJIALENBGD>_TypeInfo);
            System_Predicate<object>___ctor();
            (__this->fields).__9__0 = match;
            thunk_FUN_01c20e04(ppSVar1,match);
          }
          if (__this_02 == (System_Collections_Generic_List_KAJIALENBGD__o *)0x0) break;
          pIVar7 = System_Collections_Generic_List<object>__Find
                             ((System_Collections_Generic_List_object__o *)__this_02,
                              (System_Predicate_T__o *)match,
                              Method_System_Collections_Generic_List<KAJIALENBGD>_Find__);
          if (pIVar7 == (Il2CppObject *)0x0) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar6 = (__this->fields).completedAchievements;
            if (pSVar6 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) break;
            pMVar5 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,
                                (__this->fields).i,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if ((pIVar7 == (Il2CppObject *)0x0) || (pMVar5 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0))
            break;
            pKVar8 = MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB
                               (pMVar5,(System_String_o *)pIVar7[2].klass,(MethodInfo *)0x0);
            if (pKVar8 != (KMJDCOABCCG_o *)0x0) {
              pSVar14 = (pKVar8->fields).FNJHCHIDALO;
              PCNEDMAJMOJ = (pKVar8->fields).ADHFHEJFJPK;
              __this_01 = (NFKLEEPNELA_o *)thunk_FUN_01bda818(NFKLEEPNELA_TypeInfo);
              NFKLEEPNELA___ctor(__this_01,pSVar14,PCNEDMAJMOJ,PCNEDMAJMOJ,(MethodInfo *)0x0);
              lVar3 = Method_System_Collections_Generic_List<NFKLEEPNELA>_Add__;
              if (CIADJOAENAM == (System_Collections_Generic_List_NFKLEEPNELA__o *)0x0) break;
              pNVar10 = (CIADJOAENAM->fields)._items;
              (CIADJOAENAM->fields)._version = (CIADJOAENAM->fields)._version + 1;
              if (pNVar10 == (NFKLEEPNELA_array *)0x0) break;
              uVar2 = (CIADJOAENAM->fields)._size;
              if (uVar2 < (uint)pNVar10->max_length) {
                (CIADJOAENAM->fields)._size = uVar2 + 1;
                pNVar10->m_Items[(int)uVar2] = __this_01;
                thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar2,__this_01);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)CIADJOAENAM,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = Method_System_Collections_Generic_List<string>_Add__;
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
              pSVar14 = (pKVar8->fields).JIJLBFGKNJK;
              pSVar11 = (__this_00->fields)._items;
              (__this_00->fields)._version = (__this_00->fields)._version + 1;
              if (pSVar11 == (System_Object_array *)0x0) break;
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar11->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar11->m_Items[(int)uVar2] = (Il2CppObject *)pSVar14;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,(Il2CppObject *)pSVar14,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          pSVar6 = (__this->fields).completedAchievements;
          iVar12 = (__this->fields).i + 1;
          (__this->fields).i = iVar12;
        } while (pSVar6 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

