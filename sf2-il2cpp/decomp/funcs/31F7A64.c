// NLPJLHOEAOE$$FAEKHJHILGP @ RVA 0x31F7A64

void NLPJLHOEAOE__FAEKHJHILGP
               (NLPJLHOEAOE_o *__this,AFFHKININGD_o *MHOFCOHFCGL,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *KENFFDHLNDA;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566dd0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    DAT_04566dd0 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    KENFFDHLNDA = (System_Collections_Generic_List_AJNNHGGLGIF__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<AJNNHGGLGIF>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>__ctor__);
    FCFEFEBAILK__FAEKHJHILGP(AHDGNOJPPIB,KENFFDHLNDA,(MethodInfo *)0x0);
    if (KENFFDHLNDA == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)KENFFDHLNDA,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      if (!bVar1) break;
      if ((AJNNHGGLGIF_o *)local_48.fields._current != (AJNNHGGLGIF_o *)0x0) {
        if (MHOFCOHFCGL == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        AFFHKININGD__ANCGCCEOBAA
                  (MHOFCOHFCGL,(AJNNHGGLGIF_o *)local_48.fields._current,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
  }
  return;
}

