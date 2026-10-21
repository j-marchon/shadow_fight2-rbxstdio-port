// ACHLOMELAJE$$OGGMOAFJDIL @ RVA 0x3058BC4

/* WARNING: Removing unreachable block (ram,0x03158e44) */

System_String_o * ACHLOMELAJE__OGGMOAFJDIL(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  bool bVar3;
  int32_t index;
  ACHLOMELAJE_MDHCBOFHAEL_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *__this_01;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_02;
  System_String_o *pSVar4;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  AFFHKININGD_o *pAVar7;
  long lVar8;
  void **ppvVar9;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04565e74 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_15236);
    DAT_04565e74 = 1;
    method = extraout_x1;
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentValue = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KBCAIBPDIKB;
  if ((__this_00 == (ACHLOMELAJE_MDHCBOFHAEL_o *)0x0) ||
     (__this_01 = ACHLOMELAJE_MDHCBOFHAEL__JDHAHDALAOA(__this_00,method),
     __this_01 ==
     (System_Collections_Generic_Dictionary_ValueCollection_string__OLKPEJMEBPJ__o *)0x0)) {
LAB_03158f6c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_b8,
             (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_OLKPEJMEBPJ>_GetEnumerator__
            );
  index = -1;
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._dictionary = local_b8.fields._dictionary;
  local_80.fields._currentValue = local_b8.fields._currentValue;
  while (bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                           (&local_80,
                            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_MoveNext__
                           ), pIVar6 = local_80.fields._currentValue, bVar2) {
    if (((((PAMEPBLOLPB_o *)local_80.fields._currentValue != (PAMEPBLOLPB_o *)0x0) &&
         (pAVar7 = ((PAMEPBLOLPB_Fields *)((long)local_80.fields._currentValue + 0x10))->JFFPIOMOOPF
         , pAVar7 != (AFFHKININGD_o *)0x0)) &&
        ((pAVar7->fields).BJMHBMDFFPA != (System_String_o *)0x0)) &&
       ((char)((PAMEPBLOLPB_Fields *)((long)local_80.fields._currentValue + 0x10))->KHIBOGMCNJA ==
        '\0')) {
      __this_02 = (__this->fields).HDDNEKLMLMF;
      if (__this_02 == (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<PAMEPBLOLPB>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
      local_a0.fields._current = local_b8.fields._currentValue;
      bVar2 = false;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_MoveNext__
                               ), bVar3) {
        if ((PAMEPBLOLPB_o *)local_a0.fields._current == (PAMEPBLOLPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = PAMEPBLOLPB__FIPBJBNLJLB
                           ((PAMEPBLOLPB_o *)local_a0.fields._current,(MethodInfo *)0x0);
        lVar8 = ((PAMEPBLOLPB_Fields *)((long)pIVar6 + 0x10))->DKMPMFFECBK;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__op_Equality
                          (pSVar4,*(System_String_o **)(lVar8 + 0x18),(MethodInfo *)0x0);
        if (bVar3) {
          pAVar7 = ((PAMEPBLOLPB_Fields *)((long)pIVar6 + 0x10))->JFFPIOMOOPF;
          if (pAVar7 == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar4 = (pAVar7->fields).BJMHBMDFFPA;
          if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar1 = *(int32_t *)&pSVar4[1].fields._firstChar;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          index = System_Math__Max(index,iVar1,(MethodInfo *)0x0);
          bVar2 = bVar3;
        }
        else if (bVar2 == false) {
          pAVar7 = ((PAMEPBLOLPB_Fields *)((long)pIVar6 + 0x10))->JFFPIOMOOPF;
          if (pAVar7 == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((short)(pAVar7->fields).LGLKMANDGPD.fields.hiddenValue != 0) {
            pSVar4 = (pAVar7->fields).BJMHBMDFFPA;
            if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar1 = *(int32_t *)&pSVar4[1].fields._firstChar;
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            index = System_Math__Max(index,iVar1,(MethodInfo *)0x0);
            bVar2 = bVar3;
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<PAMEPBLOLPB>_Dispose__)
      ;
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
            (&local_80,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_OLKPEJMEBPJ>_Dispose__
            );
  if (-1 < index) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03158f6c;
    if (index < (pSVar5->fields)._size) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
      if (pSVar5 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) goto LAB_03158f6c;
      pIVar6 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar5,index,
                          Method_System_Collections_Generic_List<MEJIKMPNBNL>_get_Item__);
      if (pIVar6 != (Il2CppObject *)0x0) {
        ppvVar9 = &pIVar6[1].monitor;
        goto LAB_03158f48;
      }
    }
  }
  ppvVar9 = (void **)&StringLiteral_15236;
LAB_03158f48:
  return *ppvVar9;
}

