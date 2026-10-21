// Nekki.SF2.Core.Fights.ModelContainer$$PKCCGFBBOFM @ RVA 0x35619F4

/* WARNING: Removing unreachable block (ram,0x03661bc4) */
/* WARNING: Removing unreachable block (ram,0x03661b48) */
/* WARNING: Removing unreachable block (ram,0x03661b9c) */

void Nekki_SF2_Core_Fights_ModelContainer__PKCCGFBBOFM
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *GANEIBPLOIA;
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  MethodInfo *in_x3;
  int DPJIDNBJIBG;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568bd4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04568bd4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).NCPKMPACJNP;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                             ), GANEIBPLOIA = local_70.fields._current, bVar1) {
      pSVar2 = (__this->fields).EHJHKEEDKBE;
      if (pSVar2 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
      DPJIDNBJIBG = 0;
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      while ((bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_90,
                                 Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                                ), local_90.fields._current != GANEIBPLOIA && (bVar1))) {
        DPJIDNBJIBG = DPJIDNBJIBG + 1;
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__)
      ;
      Nekki_SF2_Core_Fights_ModelContainer__OGCMOEOKOJP
                (__this,DPJIDNBJIBG,(OLKKAIFGGAK_o *)GANEIBPLOIA,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    pSVar2 = (__this->fields).NCPKMPACJNP;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

