// CAAJMGKIPIE$$DAMEJECEIOA @ RVA 0x30034E4

float CAAJMGKIPIE__DAMEJECEIOA
                (CAAJMGKIPIE_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,FHHDFKADHEI_o *MJEOBEDMNHL,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar3;
  OBOBEOMMECI_o *__this_00;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565b2d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_6069);
    DAT_04565b2d = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
    pSVar3 = (__this->fields).EPELDAJNLHI;
    if (pSVar3 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
    goto LAB_03103734;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) goto LAB_031036cc;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__IsNullOrEmpty
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
    } while (!bVar2);
    if (pIVar1[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG
                      (pIVar1[1].monitor,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (__this->fields).EPELDAJNLHI;
    if (pSVar3 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
LAB_03103734:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
LAB_031036cc:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                  );
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogError(StringLiteral_6069,(MethodInfo *)0x0);
        return 1.0;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__IsNullOrEmpty
                        ((System_String_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0);
    } while ((!bVar2) &&
            (bVar2 = ECENNHNBAME__CBJGGDFAACP
                               (NLEBDPHNIDI,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0),
            !bVar2));
    __this_00 = pIVar1[1].monitor;
    if (__this_00 == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    fVar4 = OBOBEOMMECI__PPOKEOHAHFG(__this_00,MJEOBEDMNHL,(System_String_o *)0x0,(MethodInfo *)0x0)
    ;
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
            );
  return fVar4;
}

