// MGNPHCAAEIO.ONAGKGIEEGI$$EOHNEGGPIOL @ RVA 0x3410900

LKPNOBFEAKD_o *
MGNPHCAAEIO_ONAGKGIEEGI__EOHNEGGPIOL
          (MGNPHCAAEIO_ONAGKGIEEGI_o *__this,System_String_o *KBPFIOOMDHJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_00;
  KFGGMKHNCGM_o *pKVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar5;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_01;
  int index;
  int iVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04568082 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568082 = 1;
  }
  iVar6 = 0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  do {
    ppSVar5 = &(__this->fields).BLAMCAPFOPD;
    if ((iVar6 != 0) && (ppSVar5 = &(__this->fields).FEGHKKNNNLE, iVar6 != 2)) {
      ppSVar5 = &(__this->fields).MEMCHPHKGHF;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5 ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_Dictionary_object__object__o *)*ppSVar5,
               Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                             ), pIVar1 = local_90.fields._current.fields.value, bVar2) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((LKPNOBFEAKD_o *)pIVar1 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
      if (__this_00 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pKVar3 = MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED
                         (__this_00,((LKPNOBFEAKD_Fields *)((long)pIVar1 + 0x10))->JIJLBFGKNJK,
                          method);
      if (pKVar3 != (KFGGMKHNCGM_o *)0x0) {
        __this_01 = (pKVar3->fields).EHGOHNHDKPP;
        if (__this_01 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (0 < (__this_01->fields)._size) {
          index = 0;
          do {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method = (MethodInfo *)0x0;
            bVar2 = System_String__op_Equality
                              ((System_String_o *)pIVar4[2].klass,KBPFIOOMDHJ,(MethodInfo *)0x0);
            if (bVar2) {
              System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                        );
              return (LKPNOBFEAKD_o *)pIVar1;
            }
            index = index + 1;
          } while (index < (__this_01->fields)._size);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    iVar6 = iVar6 + 1;
    if (iVar6 == 3) {
      return (LKPNOBFEAKD_o *)0x0;
    }
  } while( true );
}

