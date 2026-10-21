// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.JJFDHHNGKAL$$JHIHBFFCHHP @ RVA 0x348E9A0

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL__JHIHBFFCHHP
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_o *__this,
                System_Collections_Generic_List_DDMHMABAHHD__o *items,int32_t cType,
                MethodInfo *method)

{
  bool bVar1;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppObject *pIVar2;
  IGFGDDANEPE_o *pIVar3;
  Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this_01;
  ACHLOMELAJE_o *pAVar4;
  int index;
  GGHCLMEFIGO_o *__this_02;
  float fVar5;
  float fVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04568403 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<DDMHMABAHHD>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<DDMHMABAHHD>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&System_Func<DDMHMABAHHD,_bool>_TypeInfo);
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<DDMHMABAHHD>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_JJFDHHNGKAL_MLBNMCKCLDH__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568403 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<DDMHMABAHHD,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  source = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)items,predicate,
                      Method_System_Linq_Enumerable_Where<DDMHMABAHHD>__);
  __this_00 = System_Linq_Enumerable__ToList<object>
                        (source,Method_System_Linq_Enumerable_ToList<DDMHMABAHHD>__);
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)__this_00,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<DDMHMABAHHD>__);
  fVar5 = 0.0;
  if (!bVar1) {
    if (cType == 1) {
      if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) {
LAB_0358ed7c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
      fVar5 = 0.0;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
          return fVar5;
        }
        if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this->fields).__4__this;
        if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        fVar6 = Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                          (__this_01,items,
                           *(float *)((long)&local_90.fields._current[1].monitor + 4),
                           (MethodInfo *)0x0);
        fVar5 = fVar5 + fVar6;
      } while (fVar5 != 1.0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__)
      ;
LAB_0358ec50:
      fVar5 = 1.0;
    }
    else {
      fVar6 = 0.0;
      if (cType == 2) {
        if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0358ed7c;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
        local_90.fields._index = local_a8.fields._index;
        local_90.fields._version = local_a8.fields._version;
        local_90.fields._list = local_a8.fields._list;
        local_90.fields._current = local_a8.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_90,
                                  Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                                 ), bVar1) {
          if (fVar6 == 0.0) {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar6 = 1.0 - *(float *)&local_90.fields._current[2].klass;
          }
          else {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar6 = fVar6 * (1.0 - *(float *)&local_90.fields._current[2].klass);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_90,
                   Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
        fVar5 = 1.0 - fVar6;
        if (fVar6 == 0.0) {
          fVar5 = fVar6;
        }
      }
      else {
        if (cType == 3) {
          if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_0358ed7c;
          if (0 < (__this_00->fields)._size) {
            index = 0;
            do {
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
              pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar4 == (ACHLOMELAJE_o *)0x0) goto LAB_0358ed7c;
              __this_02 = (pAVar4->fields).OIDPLCLELEN;
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_00,index,
                                  Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
              if ((pIVar2 == (Il2CppObject *)0x0) || (__this_02 == (GGHCLMEFIGO_o *)0x0))
              goto LAB_0358ed7c;
              pIVar3 = GGHCLMEFIGO__JNFIBDBHNOA
                                 (__this_02,(System_String_o *)pIVar2[1].klass,(MethodInfo *)0x0);
              if (pIVar3 == (IGFGDDANEPE_o *)0x0) goto LAB_0358ec50;
              index = index + 1;
            } while (index < (__this_00->fields)._size);
          }
        }
        fVar5 = 0.0;
      }
    }
  }
  return fVar5;
}

