// IPPEHAJADOO$$CLADJKBJHCD @ RVA 0x313F990

void IPPEHAJADOO__CLADJKBJHCD(IPPEHAJADOO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_ECAIEGNAOAL__o *pSVar3;
  OPNFCOGALLI_o *__this_00;
  System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o **ppSVar4;
  System_Collections_Generic_List_ECAIEGNAOAL__o *__this_01;
  MethodInfo *in_x3;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar5;
  System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *__this_02;
  System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *match;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566752 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECAIEGNAOAL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&System_Predicate<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
    FUN_01bab630(&Method_IPPEHAJADOO_<>c_BGPBDFCDLIF__);
    FUN_01bab630(&IPPEHAJADOO_<>c_TypeInfo);
    DAT_04566752 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields).DNCDKLGJGBN;
  if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar1) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    IPPEHAJADOO__LBBNPGLGKNO(__this,(__this->fields).MBPELMMKGMB,(__this->fields).EOAFFOBIBGO,in_x3)
    ;
    pSVar3 = (__this->fields).KBOMJBFAKKA;
    if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__
                               ), bVar2) {
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_70.fields._current[1].klass != (Il2CppClass *)0x0) {
          __this_00 = (OPNFCOGALLI_o *)(local_70.fields._current[1].klass)->vtable[0x15].method;
          if (__this_00 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OPNFCOGALLI__JEBLJHPJMBA
                    (__this_00,*(int32_t *)((long)&local_70.fields._current[2].monitor + 4),
                     (MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__)
      ;
      pSVar3 = (__this->fields).KBOMJBFAKKA;
      if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_88,(System_Collections_Generic_List_object__o *)pSVar3,
                   Method_System_Collections_Generic_List<ECAIEGNAOAL>_GetEnumerator__);
        local_70.fields._index = local_88.fields._index;
        local_70.fields._version = local_88.fields._version;
        local_70.fields._list = local_88.fields._list;
        local_70.fields._current = local_88.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_70,
                             Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_MoveNext__
                            );
        } while (bVar2);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<ECAIEGNAOAL>_Dispose__);
        pSVar3 = (__this->fields).KBOMJBFAKKA;
        if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
          iVar1 = (pSVar3->fields)._size;
          (pSVar3->fields)._size = 0;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (0 < iVar1) {
            in_x3 = (MethodInfo *)0x0;
            System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
          }
          __this_02 = (__this->fields).DPHKLKNAOAB;
          if ((IPPEHAJADOO_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          match = IPPEHAJADOO_<>c_TypeInfo->static_fields->__9__31_0;
          if (match == (System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *)0x0) {
            if ((IPPEHAJADOO_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            match = (System_Predicate_IPPEHAJADOO_GHFEMFCMBEJ__o *)
                    thunk_FUN_01bda818(System_Predicate<IPPEHAJADOO_GHFEMFCMBEJ>_TypeInfo);
            in_x3 = (MethodInfo *)0x0;
            System_Predicate<object>___ctor();
            ppSVar4 = &IPPEHAJADOO_<>c_TypeInfo->static_fields->__9__31_0;
            *ppSVar4 = match;
            thunk_FUN_01c20e04(ppSVar4,match);
          }
          if (__this_02 != (System_Collections_Generic_List_IPPEHAJADOO_GHFEMFCMBEJ__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAll
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (System_Predicate_T__o *)match,
                       Method_System_Collections_Generic_List<IPPEHAJADOO_GHFEMFCMBEJ>_RemoveAll__);
            pSVar5 = (__this->fields).DNCDKLGJGBN;
            if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
              if (0 < (pSVar5->fields)._size) {
                IPPEHAJADOO__LBBNPGLGKNO(__this,pSVar5,(__this->fields).AMCAKDINLFL,in_x3);
              }
              IPPEHAJADOO__OAKJPPFCMAD
                        (__this,(__this->fields).MBPELMMKGMB,(__this->fields).EOAFFOBIBGO,in_x3);
              pSVar5 = (__this->fields).DNCDKLGJGBN;
              if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                if (0 < (pSVar5->fields)._size) {
                  IPPEHAJADOO__OAKJPPFCMAD(__this,pSVar5,(__this->fields).AMCAKDINLFL,in_x3);
                }
                pSVar3 = (__this->fields).FNMHCOJPGMJ;
                if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                  if ((pSVar3->fields)._size < 1) {
                    return;
                  }
                  __this_01 = (__this->fields).KBOMJBFAKKA;
                  if (__this_01 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                    System_Collections_Generic_List<object>__AddRange
                              ((System_Collections_Generic_List_object__o *)__this_01,
                               (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
                               Method_System_Collections_Generic_List<ECAIEGNAOAL>_AddRange__);
                    pSVar3 = (__this->fields).FNMHCOJPGMJ;
                    if (pSVar3 != (System_Collections_Generic_List_ECAIEGNAOAL__o *)0x0) {
                      iVar1 = (pSVar3->fields)._size;
                      (pSVar3->fields)._size = 0;
                      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
                      if (iVar1 < 1) {
                        return;
                      }
                      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,
                                          (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

