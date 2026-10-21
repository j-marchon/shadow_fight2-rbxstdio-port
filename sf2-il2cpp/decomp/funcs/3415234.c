// RaidInfoBattlePassRewards$$ACHEEICHHHJ @ RVA 0x3415234

System_String_o *
RaidInfoBattlePassRewards__ACHEEICHHHJ
          (RaidInfoBattlePassRewards_o *__this,JKDFEBLBMOF_o *COPNBALDNLF,
          System_String_o *KJODHCEONMG,System_String_o *JLHMEOEFKPJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  System_String_array *values;
  System_String_o *pSVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined4 local_28;
  int iStack_24;
  
  if ((DAT_045680a1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_506);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_525);
    FUN_01bab630(&StringLiteral_251);
    DAT_045680a1 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  local_28 = 0;
  iStack_24 = 0;
  if (COPNBALDNLF != (JKDFEBLBMOF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (__this_00 == (JMDPBFOCHHP_o *)0x0) goto LAB_0351553c;
    pJVar3 = JMDPBFOCHHP__OJOIAONADNG(__this_00,(COPNBALDNLF->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
    ;
    if (pJVar3 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
      __this_01 = (pJVar3->fields).GFBNJPMOEKD;
      if (__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_0351553c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<DDMHMABAHHD>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
        if (!bVar2) break;
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)local_50.fields._current[1].klass,KJODHCEONMG,
                           (MethodInfo *)0x0);
        if (bVar2) {
          iStack_24 = *(int *)&pIVar1[1].monitor + iStack_24;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<DDMHMABAHHD>_Dispose__)
      ;
    }
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2422;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = JLHMEOEFKPJ;
        thunk_FUN_01c20e04(values->m_Items + 1,JLHMEOEFKPJ);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_525;
          fVar5 = (float)thunk_FUN_01c20e04(values->m_Items + 2);
          local_28 = 0x3f333333;
          pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)&stack0xffffffffffffffd8);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar4);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_506;
              fVar5 = (float)thunk_FUN_01c20e04(values->m_Items + 4);
              local_28 = 0x40a00000;
              pSVar4 = System_Single__ToString(fVar5,(MethodInfo *)&stack0xffffffffffffffd8);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar4;
                thunk_FUN_01c20e04(values->m_Items + 5,pSVar4);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = StringLiteral_251;
                  thunk_FUN_01c20e04(values->m_Items + 6);
                  pSVar4 = System_Int32__ToString
                                     ((int32_t)&stack0xffffffffffffffdc,(MethodInfo *)0x0);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = pSVar4;
                    thunk_FUN_01c20e04();
                    pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar4;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0351553c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

