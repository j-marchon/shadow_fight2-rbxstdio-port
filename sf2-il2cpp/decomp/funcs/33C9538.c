// BANPLPOPIGI$$MALAFKIOFFB @ RVA 0x33C9538

void BANPLPOPIGI__MALAFKIOFFB(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  uint32_t uVar3;
  int32_t iVar4;
  JMDPBFOCHHP_o *pJVar5;
  System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o **ppSVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Il2CppObject *pIVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_int__o *pSVar8;
  JMDPBFOCHHP_AEJBILHMFDB_o *pJVar9;
  System_Int32_array *pSVar10;
  int index;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar11;
  System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *predicate;
  ulong uVar12;
  
  if ((DAT_04567e0b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Keys__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Count<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<uint>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
    FUN_01bab630(&System_Func<RaidLeaguesLeaderboard_OIMJFDFDMMM,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&Method_BANPLPOPIGI_<>c_AEMGNAIKDFG__);
    FUN_01bab630(&BANPLPOPIGI_<>c_TypeInfo);
    DAT_04567e0b = 1;
    method = extraout_x1;
  }
  pSVar8 = (__this->fields).JDHINHCBLNC;
  if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar5 != (JMDPBFOCHHP_o *)0x0) {
      pJVar9 = (pJVar5->fields)._JMEOCLFDHMM_k__BackingField;
      if (pJVar9 == (JMDPBFOCHHP_AEJBILHMFDB_o *)0x0) {
        uVar12 = 0;
      }
      else {
        __this_00 = (pJVar9->fields).BFODFJIGBHE;
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_uint__JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH__o *)
            0x0) goto LAB_034c9770;
        source = System_Collections_Generic_Dictionary<uint,_object>__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                            Method_System_Collections_Generic_Dictionary<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Keys__
                           );
        uVar3 = System_Linq_Enumerable__FirstOrDefault<uint>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           Method_System_Linq_Enumerable_FirstOrDefault<uint>__);
        uVar12 = (ulong)uVar3;
      }
      pSVar11 = (__this->fields).JKBONEFMACI;
      if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__29_0;
      if (predicate == (System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *)0x0) {
        if ((BANPLPOPIGI_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        predicate = (System_Func_RaidLeaguesLeaderboard_OIMJFDFDMMM__bool__o *)
                    thunk_FUN_01bda818(
                                      System_Func<RaidLeaguesLeaderboard_OIMJFDFDMMM,_bool>_TypeInfo
                                      );
        System_Func<object,_bool>___ctor();
        ppSVar6 = &BANPLPOPIGI_<>c_TypeInfo->static_fields->__9__29_0;
        *ppSVar6 = predicate;
        thunk_FUN_01c20e04(ppSVar6,predicate);
      }
      source_00 = System_Linq_Enumerable__Where<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_Where<RaidLeaguesLeaderboard_OIMJFDFDMMM>__
                            );
      iVar4 = System_Linq_Enumerable__Count<object>
                        (source_00,
                         Method_System_Linq_Enumerable_Count<RaidLeaguesLeaderboard_OIMJFDFDMMM>__);
      pSVar11 = (__this->fields).JKBONEFMACI;
      if (pSVar11 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
        index = 0;
        do {
          if ((pSVar11->fields)._size + -1 < index) {
            return;
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar11,index,
                              Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                             );
          lVar2 = Method_System_Collections_Generic_List<int>_Add__;
          if (((pIVar7 != (Il2CppObject *)0x0) && (1 < iVar4)) &&
             ((long)uVar12 <= (long)*(int *)&pIVar7[2].monitor)) {
            pSVar8 = (__this->fields).JDHINHCBLNC;
            if (pSVar8 != (System_Collections_Generic_List_int__o *)0x0) {
              pSVar10 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pSVar10 != (System_Int32_array *)0x0) {
                uVar1 = (pSVar8->fields)._size;
                if (uVar1 < (uint)pSVar10->max_length) {
                  (pSVar8->fields)._size = uVar1 + 1;
                  pSVar10->m_Items[(int)uVar1] = index;
                  return;
                }
                System_Collections_Generic_List<int>__AddWithResize
                          (pSVar8,index,
                           *(MethodInfo_26C766C **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
            break;
          }
          pSVar11 = (__this->fields).JKBONEFMACI;
          index = index + 1;
        } while (pSVar11 !=
                 (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0);
      }
    }
  }
LAB_034c9770:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

