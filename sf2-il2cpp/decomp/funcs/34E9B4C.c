// OLKKAIFGGAK$$FLNALLPGHBD @ RVA 0x34E9B4C

void OLKKAIFGGAK__FLNALLPGHBD(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IIMNGGHGKOD__o *DLOFGOGAGAA;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456877e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_0456877e = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OOBBJEDHHKM;
  if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      if (local_48.fields._current[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      DLOFGOGAGAA = *(System_Collections_Generic_List_IIMNGGHGKOD__o **)
                     ((long)local_48.fields._current[7].monitor + 0x40);
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      LDHBHPILNMA__HEIKABHBFDI(DLOFGOGAGAA,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

