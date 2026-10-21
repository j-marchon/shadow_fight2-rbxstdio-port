// GBJGJEGPHKD$$EDJCOAPOMNH @ RVA 0x342E3CC

/* WARNING: Removing unreachable block (ram,0x0352e698) */

void GBJGJEGPHKD__EDJCOAPOMNH
               (GBJGJEGPHKD_o *__this,System_Collections_Generic_List_IEFEBEDLHNN__o *OBDMHHJBLKL,
               System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *KENFFDHLNDA,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t JGGJNLLANAE;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_String_o *a;
  MGNDHCBAPEN_int__int__o *__this_00;
  char **ppcVar8;
  MGNDHCBAPEN_int__int__array *pMVar9;
  Il2CppClass *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456815d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&StringLiteral_15915);
    FUN_01bab630(&StringLiteral_15914);
    DAT_0456815d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (KENFFDHLNDA != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
    iVar1 = (KENFFDHLNDA->fields)._size;
    (KENFFDHLNDA->fields)._size = 0;
    (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(KENFFDHLNDA->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    if (OBDMHHJBLKL != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                 Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      do {
        do {
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__
                            );
          pIVar5 = local_80.fields._current;
          if (!bVar6) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
            return;
          }
          if ((Il2CppClass *)local_80.fields._current == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = ((Il2CppClass_1 *)&(local_80.fields._current)->klass)->castClass;
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar7 = System_String__Substring
                             ((System_String_o *)__this_01,0,
                              ((System_String_Fields *)&(__this_01->_1).name)->_stringLength + -2,
                              (MethodInfo *)0x0);
          a = System_String__Substring
                        ((System_String_o *)__this_01,
                         ((System_String_Fields *)&(__this_01->_1).name)->_stringLength + -2,2,
                         (MethodInfo *)0x0);
          bVar6 = System_String__op_Equality(a,StringLiteral_15914,(MethodInfo *)0x0);
        } while (!bVar6);
        pSVar7 = System_String__Concat(pSVar7,StringLiteral_15915,(MethodInfo *)0x0);
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                   Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__
                            );
          pIVar4 = local_a0.fields._current;
          if (!bVar6) goto LAB_0352e684;
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar6 = System_String__op_Equality
                            (local_a0.fields._current[4].monitor,pSVar7,(MethodInfo *)0x0);
        } while (!bVar6);
        iVar1 = *(int32_t *)((long)&((Il2CppClass_1 *)&pIVar5->klass)->declaringType + 4);
        JGGJNLLANAE = *(int32_t *)((long)&pIVar4[5].klass + 4);
        __this_00 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
        MGNDHCBAPEN<int,_int>___ctor
                  (__this_00,iVar1,JGGJNLLANAE,Method_MGNDHCBAPEN<int,_int>__ctor__);
        lVar3 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
        pMVar9 = (KENFFDHLNDA->fields)._items;
        (KENFFDHLNDA->fields)._version = (KENFFDHLNDA->fields)._version + 1;
        if (pMVar9 == (MGNDHCBAPEN_int__int__array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (KENFFDHLNDA->fields)._size;
        if (uVar2 < (uint)pMVar9->max_length) {
          (KENFFDHLNDA->fields)._size = uVar2 + 1;
          pMVar9->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pMVar9->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        ppcVar8 = &((Il2CppClass_1 *)&pIVar5->klass)->name;
        *ppcVar8 = (char *)pIVar4;
        thunk_FUN_01c20e04(ppcVar8,pIVar4);
        pIVar4[1].klass = (Il2CppClass *)pIVar5;
        thunk_FUN_01c20e04(pIVar4 + 1,pIVar5);
LAB_0352e684:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

