// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesLeaderboard$$OKOAKPACKFO @ RVA 0x34775C4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__OKOAKPACKFO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar3;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *EDEHNHIHDDH;
  JMDPBFOCHHP_HKDMLOKOJPH_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *pSVar4;
  JMDPBFOCHHP_CMLEEJPGHNC_o *pJVar5;
  int index;
  System_Collections_Generic_Dictionary_int__JMDPBFOCHHP_HKDMLOKOJPH__o *source_00;
  System_Collections_Generic_KeyValuePair_int__object__o SVar6;
  
  if ((DAT_04568330 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Clear__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__)
    ;
    FUN_01bab630(&System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_HKDMLOKOJPH_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_EIPOFOIMENL__
                );
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_TypeInfo);
    DAT_04568330 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).OCKAMMNDKCJ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (pSVar2,
               Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Clear__);
    pSVar4 = (__this->fields).JKBONEFMACI;
    if (pSVar4 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0) {
      index = 0;
      do {
        if ((pSVar4->fields)._size <= index) {
          return;
        }
        __this_00 = (Il2CppObject *)
                    thunk_FUN_01bda818(
                                      Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_PPKIELLNGKF_TypeInfo
                                      );
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        pSVar4 = (__this->fields).JKBONEFMACI;
        if (pSVar4 == (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)0x0)
        break;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            Method_System_Collections_Generic_List<RaidLeaguesLeaderboard_OIMJFDFDMMM>_get_Item__
                           );
        if (pIVar3 != (Il2CppObject *)0x0) {
          if (__this_00 == (Il2CppObject *)0x0) break;
          *(undefined4 *)&__this_00[1].klass = *(undefined4 *)&pIVar3[2].monitor;
          if (*(int *)&pIVar3[2].klass < 1) {
            __this_01 = (JMDPBFOCHHP_HKDMLOKOJPH_o *)
                        thunk_FUN_01bda818(JMDPBFOCHHP_HKDMLOKOJPH_TypeInfo);
            JMDPBFOCHHP_HKDMLOKOJPH___ctor(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03577808 to 03677833 has its CatchHandler @ 03577bac */
            pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                     (__this->fields).OCKAMMNDKCJ;
            if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              System_Collections_Generic_Dictionary<int,_object>__Add
                        (pSVar2,index,(Il2CppObject *)__this_01,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__
                        );
              return;
            }
            break;
          }
          pJVar5 = (__this->fields).LLLCBLJMPIH;
          if (pJVar5 == (JMDPBFOCHHP_CMLEEJPGHNC_o *)0x0) break;
          source_00 = (pJVar5->fields).MOJCKKMAKOE;
          predicate = (System_Func_TSource__bool__o *)
                      thunk_FUN_01bda818(
                                        System_Func<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>,_bool>_TypeInfo
                                        );
          System_Func<KeyValuePair<int,_object>,_bool>___ctor();
          method_00 = 
          Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__;
          source = System_Linq_Enumerable__Where<KeyValuePair<int,_object>>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                              predicate,
                              (MethodInfo_1EB0540 *)
                              Method_System_Linq_Enumerable_Where<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                             );
          EDEHNHIHDDH = System_Linq_Enumerable__ToList<KeyValuePair<int,_object>>
                                  (source,
                                   Method_System_Linq_Enumerable_ToList<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                                  );
          if (EDEHNHIHDDH == (System_Collections_Generic_List_TSource__o *)0x0) break;
          if ((EDEHNHIHDDH->fields)._size != 0) {
            SVar6 = DJNBJHPDKDP__PHPELPFMOII<KeyValuePair<int,_object>>
                              ((System_Collections_Generic_List_T__o *)EDEHNHIHDDH,
                               Method_DJNBJHPDKDP_PHPELPFMOII<KeyValuePair<int,_JMDPBFOCHHP_HKDMLOKOJPH>>__
                              );
            bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__LKBALCKCEEJ
                              (__this,(JMDPBFOCHHP_HKDMLOKOJPH_o *)SVar6.fields.value,method_00);
            if (!bVar1) {
              pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (__this->fields).OCKAMMNDKCJ;
              if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
                    /* try { // try from 035777ac to 036777d3 has its CatchHandler @ 03577bb0 */
              System_Collections_Generic_Dictionary<int,_object>__Add
                        (pSVar2,index,SVar6.fields.value,
                         Method_System_Collections_Generic_Dictionary<int,_JMDPBFOCHHP_HKDMLOKOJPH>_Add__
                        );
            }
          }
        }
        pSVar4 = (__this->fields).JKBONEFMACI;
        index = index + 1;
      } while (pSVar4 != (System_Collections_Generic_List_RaidLeaguesLeaderboard_OIMJFDFDMMM__o *)
                         0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

