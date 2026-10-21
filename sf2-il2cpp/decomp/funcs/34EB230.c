// OLKKAIFGGAK$$ALFDOLJEPGA @ RVA 0x34EB230

void OLKKAIFGGAK__ALFDOLJEPGA(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  GBJGJEGPHKD_o *__this_01;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568790 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04568790 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).HMIAFJALFCJ;
  if ((__this_01 != (GBJGJEGPHKD_o *)0x0) &&
     (__this_02 = GBJGJEGPHKD__HMAAHELNECD(__this_01,(MethodInfo *)0x0),
     __this_02 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_02,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      __this_00 = local_38.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if ((IEFEBEDLHNN_o *)local_38.fields._current == (IEFEBEDLHNN_o *)0x0) break;
      bVar1 = IEFEBEDLHNN__MDMJDMOAAJC((IEFEBEDLHNN_o *)local_38.fields._current,(MethodInfo *)0x0);
      if (bVar1) {
        IEFEBEDLHNN__GAMGKJCEMAJ((IEFEBEDLHNN_o *)__this_00,false,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

