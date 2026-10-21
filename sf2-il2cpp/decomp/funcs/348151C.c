// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$BFAFJLCDLGC @ RVA 0x348151C

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__BFAFJLCDLGC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  CNIFAIKGHKO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o *__this_01;
  AJOGJBFNELI_o *pAVar4;
  Il2CppObject *__this_02;
  Il2CppObject *pIVar5;
  CNLGMNIEGFG_o *pCVar6;
  System_Collections_Generic_Dictionary_int__object__o *pSVar7;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *CJNHFNHJHPE;
  Il2CppClass *pIVar8;
  PJKHAJKEHEL_o *pPVar9;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar10;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *pNVar11;
  int index;
  System_Collections_Generic_List_PJKHAJKEHEL__o *OKBIKHHKOEN;
  
  if ((DAT_04568385 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Keys__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<int>__);
    FUN_01bab630(&System_Func<int,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_NJFPJLEMILA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568385 = 1;
  }
  __this_00 = (__this->fields).JECONAHEKIN;
  if (__this_00 != (CNIFAIKGHKO_o *)0x0) {
    __this_01 = CNIFAIKGHKO__ACBMLHJIFMD(__this_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
    if ((pAVar4 != (AJOGJBFNELI_o *)0x0) &&
       (AJOGJBFNELI__EPFNGHLFCDC(pAVar4,-1,(MethodInfo *)0x0),
       __this_01 != (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0)) {
      if (0 < (__this_01->fields)._size) {
        index = 0;
        do {
          __this_02 = (Il2CppObject *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_JMBPJPDAHED_TypeInfo
                                        );
          System_Object___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 == (Il2CppObject *)0x0) goto LAB_035818b4;
          iVar1 = index + 1;
          *(int *)&__this_02[1].klass = iVar1;
          pIVar5 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_01,index,
                              Method_System_Collections_Generic_List<IFFFKKMMKFO>_get_Item__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_035818b4;
          if (*(char *)&pIVar5[1].klass != '\0') {
            (__this->fields).NBNHIBIPJMG = *(int32_t *)&__this_02[1].klass;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar4 = NLPJLHOEAOE__KDNCEEKJHMB((MethodInfo *)0x0);
            if (pAVar4 == (AJOGJBFNELI_o *)0x0) goto LAB_035818b4;
            AJOGJBFNELI__EPFNGHLFCDC(pAVar4,*(int32_t *)&__this_02[1].klass,(MethodInfo *)0x0);
          }
          *(undefined4 *)&pIVar5[3].monitor = *(undefined4 *)&__this_02[1].klass;
          iVar3 = (__this->fields)._KDGCDFEGEHL_k__BackingField;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pCVar6 = MGNPHCAAEIO__MJDCGINJMOP(iVar3,false,(MethodInfo *)0x0);
          if ((pCVar6 == (CNLGMNIEGFG_o *)0x0) ||
             (pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL,
             pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
          goto LAB_035818b4;
          bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                            (pSVar7,*(int32_t *)&__this_02[1].klass,
                             Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__
                            );
          if (bVar2) {
            if (0.0 < *(float *)&pIVar5[1].monitor) {
              pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL;
              if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
              goto LAB_035818b4;
              iVar3 = *(int32_t *)&__this_02[1].klass;
LAB_03581804:
              pIVar8 = (Il2CppClass *)
                       System_Collections_Generic_Dictionary<int,_object>__get_Item
                                 (pSVar7,iVar3,
                                  Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Item__
                                 );
              if (pIVar8 != (Il2CppClass *)0x0) {
                pIVar5[3].klass = pIVar8;
                thunk_FUN_01c20e04();
              }
            }
          }
          else {
            pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (pCVar6->fields).MOGNLMJONAL;
            if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
            goto LAB_035818b4;
            source = System_Collections_Generic_Dictionary<int,_object>__get_Keys
                               (pSVar7,
                                Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Keys__
                               );
            predicate = (System_Func_TSource__bool__o *)
                        thunk_FUN_01bda818(System_Func<int,_bool>_TypeInfo);
            System_Func<int,_bool>___ctor();
            source_00 = System_Linq_Enumerable__Where<int>
                                  ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                   predicate,Method_System_Linq_Enumerable_Where<int>__);
            CJNHFNHJHPE = System_Linq_Enumerable__ToList<int>
                                    (source_00,Method_System_Linq_Enumerable_ToList<int>__);
            bVar2 = DJNBJHPDKDP__OBECCOPBADO<int>
                              ((System_Collections_Generic_List_T__o *)CJNHFNHJHPE,
                               Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
            if (((!bVar2) &&
                (iVar3 = System_Linq_Enumerable__Max
                                   ((System_Collections_Generic_IEnumerable_int__o *)CJNHFNHJHPE,
                                    (MethodInfo *)0x0), iVar3 != 0)) &&
               (0.0 < *(float *)&pIVar5[1].monitor)) {
              pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar6->fields).MOGNLMJONAL;
              if (pSVar7 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
              goto LAB_03581804;
              goto LAB_035818b4;
            }
          }
          OKBIKHHKOEN = (pCVar6->fields).super.MECHOBPGHFJ;
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar9 = MGNPHCAAEIO__DDHNCKDHKAC(OKBIKHHKOEN,(MethodInfo *)0x0);
          if (pPVar9 == (PJKHAJKEHEL_o *)0x0) goto LAB_035818b4;
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pPVar9->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
          pCVar10 = (pCVar6->fields).BOOKHNOMHGM;
          if (pCVar10 == (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) goto LAB_035818b4;
          *(float *)((long)&pIVar5[1].klass + 4) = (pCVar10->fields).LMBCNLBOPAF * (float)iVar3;
          index = iVar1;
        } while (iVar1 < (__this_01->fields)._size);
      }
      pNVar11 = (__this->fields).OMFKAKGPCCM;
      if (pNVar11 != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)0x0) {
        (pNVar11->fields).PDFPPFKDPOD = true;
        return;
      }
    }
  }
LAB_035818b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

