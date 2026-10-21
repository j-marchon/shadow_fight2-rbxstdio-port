// RaidInfoBattlePassRewards$$CheckBattlePassRewards @ RVA 0x3415614

/* WARNING: Removing unreachable block (ram,0x03515914) */

bool RaidInfoBattlePassRewards__CheckBattlePassRewards
               (RaidInfoBattlePassRewards_o *__this,OHDDKGHEEPA_o *BANHBMINMMP,
               System_String_o *KJODHCEONMG,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  long *plVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  JMDPBFOCHHP_o *__this_01;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar4;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_02;
  int iVar5;
  byte bVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045680a0 & 1) == 0) {
    FUN_01bab630(&CNLGMNIEGFG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    __this = (RaidInfoBattlePassRewards_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_GetEnumerator__
                         );
    DAT_045680a0 = 1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (BANHBMINMMP != (OHDDKGHEEPA_o *)0x0) {
    plVar3 = (long *)(*(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.methodPtr)
                               (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._12_FKALJBOIAHP.method);
    if (plVar3 == (long *)0x0) {
      return false;
    }
    bVar6 = (CNLGMNIEGFG_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar3 + 0x130) < bVar6) ||
       (*(CNLGMNIEGFG_c **)(*(long *)(*plVar3 + 200) + (ulong)bVar6 * 8 + -8) !=
        CNLGMNIEGFG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this = (RaidInfoBattlePassRewards_o *)0x0;
    if ((System_Collections_Generic_Dictionary_int__object__o *)plVar3[0x32] !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_int__object__o *)plVar3[0x32],
                             Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_get_Values__
                            );
      __this = (RaidInfoBattlePassRewards_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
      {
        System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                  (&local_b8,__this_00,
                   Method_System_Collections_Generic_Dictionary_ValueCollection<int,_JKDFEBLBMOF>_GetEnumerator__
                  );
        bVar6 = 0;
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._dictionary = local_b8.fields._dictionary;
        local_80.fields._currentValue = local_b8.fields._currentValue;
        do {
          do {
            bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                              (&local_80,
                               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_MoveNext__
                              );
            pIVar1 = local_80.fields._currentValue;
            if (!bVar2) {
              iVar5 = 8;
              goto LAB_035158ac;
            }
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_01 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (__this_01 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pJVar4 = JMDPBFOCHHP__OJOIAONADNG(__this_01,pIVar1[1].monitor,(MethodInfo *)0x0);
          } while (pJVar4 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0);
          __this_02 = (pJVar4->fields).GFBNJPMOEKD;
          if (__this_02 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                     (System_Collections_Generic_List_object__o *)__this_02,
                     Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list =
               (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
          local_a0.fields._current = local_b8.fields._currentValue;
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                              );
            if (!bVar2) {
              iVar5 = 3;
              goto LAB_0351584c;
            }
            if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = System_String__op_Equality
                              ((System_String_o *)local_a0.fields._current[1].klass,KJODHCEONMG,
                               (MethodInfo *)0x0);
          } while (!bVar2);
          bVar6 = 1;
          iVar5 = 7;
LAB_0351584c:
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_a0,
                     Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
        } while ((iVar5 == 3) || (iVar5 == 0));
LAB_035158ac:
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_JKDFEBLBMOF>_Dispose__
                  );
        return (bool)(bVar6 & iVar5 == 7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

