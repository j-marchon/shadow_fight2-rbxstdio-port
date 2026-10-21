// KJFHBENFBBO$$IELLPMCIHBD @ RVA 0x35575BC

void KJFHBENFBBO__IELLPMCIHBD(KJFHBENFBBO_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *__this_00;
  System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MGNDHCBAPEN_T1__T2__o *__this_03;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *JGGJNLLANAE;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568b76 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_get_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<LFBHPHJFCPO[],_string>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<LFBHPHJFCPO[],_string>_TypeInfo);
    DAT_04568b76 = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AMICGDOJEOL;
  if (__this_00 == (System_Collections_Generic_List_KJFHBENFBBO_KBBLCCJJCDK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KJFHBENFBBO_KBBLCCJJCDK>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_MoveNext__
                      );
    pIVar5 = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,
                 Method_System_Collections_Generic_List_Enumerator<KJFHBENFBBO_KBBLCCJJCDK>_Dispose__
                );
      return;
    }
    if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_80.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ECENNHNBAME__JAEKFDOJKGP
                          ((ECENNHNBAME_o *)local_80.fields._current[1].klass,(MethodInfo *)0x0);
    if (__this_01 ==
        (System_Collections_Generic_List_List_MGNDHCBAPEN_LFBHPHJFCPO____string____o *)0x0) break;
    __this_02 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (__this->fields).ENNIKHIELLN,
                           Method_System_Collections_Generic_List<List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>>_get_Item__
                          );
    pIVar5 = pIVar5[1].monitor;
    JGGJNLLANAE = (__this->fields).GEFBEFOLNKO;
    __this_03 = (MGNDHCBAPEN_T1__T2__o *)
                thunk_FUN_01bda818(MGNDHCBAPEN<LFBHPHJFCPO[],_string>_TypeInfo);
    MGNDHCBAPEN<object,_object>___ctor
              (__this_03,pIVar5,(Il2CppObject *)JGGJNLLANAE,
               Method_MGNDHCBAPEN<LFBHPHJFCPO[],_string>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<LFBHPHJFCPO[],_string>>_Add__;
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (__this_02->fields)._items;
    (__this_02->fields)._version = (__this_02->fields)._version + 1;
    if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_02->fields)._size;
    if (uVar1 < (uint)pSVar4->max_length) {
      (__this_02->fields)._size = uVar1 + 1;
      pSVar4->m_Items[(int)uVar1] = (Il2CppObject *)__this_03;
      thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,__this_03);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_02,(Il2CppObject *)__this_03,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

