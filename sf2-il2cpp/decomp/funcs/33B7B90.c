// GGHCLMEFIGO$$DOIFEOAFLDI @ RVA 0x33B7B90

IGFGDDANEPE_o *
GGHCLMEFIGO__DOIFEOAFLDI(GGHCLMEFIGO_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  IGFGDDANEPE_o *pIVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567d80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_04567d80 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar3) break;
      if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_70.fields._current[1].monitor != (void *)0x0) {
        bVar3 = System_String__op_Equality
                          (*(System_String_o **)((long)local_70.fields._current[1].monitor + 0x30),
                           ACCIHBHMFPN,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar4 = (__this_00->fields)._size;
      if (iVar4 < 1) {
        pIVar5 = (IGFGDDANEPE_o *)0x0;
      }
      else {
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar4 = LIIFLGALGNK__HLMBDJOGONJ(iVar4,(MethodInfo *)0x0);
        pIVar5 = (IGFGDDANEPE_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,iVar4,
                            Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
      }
      return pIVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

