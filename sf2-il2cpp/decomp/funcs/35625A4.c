// Nekki.SF2.Core.Fights.ModelContainer$$MDPKLJJENLO @ RVA 0x35625A4

void Nekki_SF2_Core_Fights_ModelContainer__MDPKLJJENLO
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,OLKKAIFGGAK_o *GANEIBPLOIA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568bd7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04568bd7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    if ((OLKKAIFGGAK_o *)local_48.fields._current == GANEIBPLOIA) break;
  } while (bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).NCPKMPACJNP,
             (Il2CppObject *)GANEIBPLOIA,Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
  return;
}

