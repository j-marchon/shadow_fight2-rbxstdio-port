// OOMHDDBCBJP$$GOLLEBBHEHE @ RVA 0x3287310

void OOMHDDBCBJP__GOLLEBBHEHE
               (OOMHDDBCBJP_o *__this,AFFHKININGD_o *FBFPLEFCDOK,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar4;
  NLPJLHOEAOE_o *__this_00;
  System_Func_AFFHKININGD__int__o **ppSVar5;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  AFFHKININGD_array *pAVar6;
  System_Collections_Generic_List_AFFHKININGD__o **ppSVar7;
  System_Func_AFFHKININGD__int__o *keySelector;
  OOMHDDBCBJP_o **ppOVar8;
  
  if ((DAT_045672c6 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<AFFHKININGD,_int>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<AFFHKININGD>__);
    FUN_01bab630(&System_Func<AFFHKININGD,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Add__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_OOMHDDBCBJP_<>c_IEIICJBLILM__);
    FUN_01bab630(&OOMHDDBCBJP_<>c_TypeInfo);
    DAT_045672c6 = 1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    ppOVar8 = &(FBFPLEFCDOK->fields).IFJLLGPGMHM;
    *ppOVar8 = __this;
    thunk_FUN_01c20e04(ppOVar8,__this);
    (FBFPLEFCDOK->fields).HLFBMBHOPMI = DPJIDNBJIBG;
    lVar3 = Method_System_Collections_Generic_List<AFFHKININGD>_Add__;
    ppSVar7 = &(__this->fields).HDDNEKLMLMF;
    pSVar4 = *ppSVar7;
    if (pSVar4 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
      pAVar6 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pAVar6 != (AFFHKININGD_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pAVar6->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pAVar6->m_Items[(int)uVar2] = FBFPLEFCDOK;
          thunk_FUN_01c20e04(pAVar6->m_Items + (int)uVar2,FBFPLEFCDOK);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)FBFPLEFCDOK
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
          NLPJLHOEAOE__GOLLEBBHEHE(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
          uVar1 = (__this->fields).AELJGHFFPPC + 1;
          (__this->fields).AELJGHFFPPC = uVar1;
          if ((__this->fields).KIHDFNGKPGN <= uVar1) {
            (__this->fields).KANKFCNHDPA = true;
          }
          pSVar4 = *ppSVar7;
          if ((OOMHDDBCBJP_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          keySelector = OOMHDDBCBJP_<>c_TypeInfo->static_fields->__9__114_0;
          if (keySelector == (System_Func_AFFHKININGD__int__o *)0x0) {
            if ((OOMHDDBCBJP_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            keySelector = (System_Func_AFFHKININGD__int__o *)
                          thunk_FUN_01bda818(System_Func<AFFHKININGD,_int>_TypeInfo);
            System_Func<object,_int>___ctor();
            ppSVar5 = &OOMHDDBCBJP_<>c_TypeInfo->static_fields->__9__114_0;
            *ppSVar5 = keySelector;
            thunk_FUN_01c20e04(ppSVar5,keySelector);
          }
          source = System_Linq_Enumerable__OrderBy<object,_int>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                              (System_Func_TSource__TKey__o *)keySelector,
                              Method_System_Linq_Enumerable_OrderBy<AFFHKININGD,_int>__);
          pSVar4 = (System_Collections_Generic_List_AFFHKININGD__o *)
                   System_Linq_Enumerable__ToList<object>
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                              Method_System_Linq_Enumerable_ToList<AFFHKININGD>__);
          *ppSVar7 = pSVar4;
          thunk_FUN_01c20e04(ppSVar7,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

