// FIKENOMMMBH$$HGCLCDJJNGA @ RVA 0x34E4288

void FIKENOMMMBH__HGCLCDJJNGA(OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint length;
  Il2CppObject *LNIGANCLDGE;
  Il2CppObject *collection;
  bool bVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_string__o *NICHJKGBOHB;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  JMDPBFOCHHP_o *pJVar3;
  POLAJNLKPAK_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_0456874d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_get_Current__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_List<string>>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&StringLiteral_3287);
    FUN_01bab630(&StringLiteral_2630);
    DAT_0456874d = 1;
    method = extraout_x1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return;
  }
  NICHJKGBOHB = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,
             Method_System_Collections_Generic_List<string>__ctor__);
  pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
  if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) &&
     (FIKENOMMMBH__CMNODHIFJAH((pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,in_x2),
     NICHJKGBOHB != (System_Collections_Generic_List_string__o *)0x0)) {
    if (0 < (NICHJKGBOHB->fields)._size) {
      pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_035e4560;
      PJKHAJKEHEL__PBNHNHLEPEJ(pPVar4,(pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,(MethodInfo *)0x0);
      length = (NICHJKGBOHB->fields)._size;
      in_x2 = (MethodInfo *)(ulong)length;
      (NICHJKGBOHB->fields)._size = 0;
      (NICHJKGBOHB->fields)._version = (NICHJKGBOHB->fields)._version + 1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(NICHJKGBOHB->fields)._items,0,length,
                            (MethodInfo *)0x0);
      }
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<string>>_TypeInfo
                               );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this,Method_System_Collections_Generic_Dictionary<string,_List<string>>__ctor__);
    pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
    if ((pPVar4 != (PJKHAJKEHEL_o *)0x0) &&
       (FIKENOMMMBH__CANFFBLJIDC
                  ((pPVar4->fields).INGEFFGPJPB,
                   (System_Collections_Generic_Dictionary_string__List_string___o *)__this,in_x2),
       __this != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_a8,__this,
                 Method_System_Collections_Generic_Dictionary<string,_List<string>>_GetEnumerator__)
      ;
      local_80.fields._version = local_a8.fields._version;
      local_80.fields._index = local_a8.fields._index;
      local_80.fields._dictionary = local_a8.fields._dictionary;
      local_80.fields._current.fields.value = local_a8.fields._current.fields.value;
      local_80.fields._current.fields.key = local_a8.fields._current.fields.key;
      local_80.fields._getEnumeratorRetType = local_a8.fields._getEnumeratorRetType;
      local_80.fields._36_4_ = local_a8.fields._36_4_;
      while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_MoveNext__
                               ), collection = local_80.fields._current.fields.value,
            LNIGANCLDGE = local_80.fields._current.fields.key, bVar1) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar3 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pJVar3->fields).FMPOOGLPALN;
        if (__this_00 == (POLAJNLKPAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = POLAJNLKPAK__PECPNLGPMEO(__this_00,(System_String_o *)LNIGANCLDGE,(MethodInfo *)0x0)
        ;
        if (collection == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((uVar2 != 0) && ((long)(ulong)uVar2 < (long)*(int *)&collection[1].monitor)) {
          System_Collections_Generic_List<object>__AddRange
                    ((System_Collections_Generic_List_object__o *)NICHJKGBOHB,
                     (System_Collections_Generic_IEnumerable_T__o *)collection,
                     Method_System_Collections_Generic_List<string>_AddRange__);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<string>>_Dispose__
                );
      if (0 < (NICHJKGBOHB->fields)._size) {
        pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar4 == (PJKHAJKEHEL_o *)0x0) goto LAB_035e4560;
        PJKHAJKEHEL__PBNHNHLEPEJ(pPVar4,(pPVar4->fields).INGEFFGPJPB,NICHJKGBOHB,(MethodInfo *)0x0);
      }
      return;
    }
  }
LAB_035e4560:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

