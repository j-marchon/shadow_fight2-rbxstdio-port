// KAHMAJKJMBK$$AIGBLKJEMNA @ RVA 0x34C2D44

void KAHMAJKJMBK__AIGBLKJEMNA(KAHMAJKJMBK_o *__this,PNEKMHMACLG_o *GOAHBPBJCKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568611 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_04568611 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((GOAHBPBJCKC != (PNEKMHMACLG_o *)0x0) &&
     (__this_00 = (GOAHBPBJCKC->fields).LJNCACBBIBD,
     __this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                             ), bVar1) {
      KAHMAJKJMBK__ANCGCCEOBAA(__this,(AJNNHGGLGIF_o *)local_48.fields._current,false,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    DJNBJHPDKDP__OFNFOGHFDML<object>
              ((System_Collections_Generic_List_T__o *)(__this->fields).LJNCACBBIBD,
               (Il2CppObject *)GOAHBPBJCKC,Method_DJNBJHPDKDP_OFNFOGHFDML<AJNNHGGLGIF>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

