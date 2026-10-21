// Nekki.SF2.Core.Fights.ModelContainer$$ECCABGPPFBD @ RVA 0x355FDD8

void Nekki_SF2_Core_Fights_ModelContainer__ECCABGPPFBD
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,OLKKAIFGGAK_o *DBECHEGNDDN,
               MethodInfo *method)

{
  bool GEOFKIAOKDG;
  bool bVar1;
  MethodInfo *in_x6;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  GBJGJEGPHKD_o *KPHJPLCBKJB;
  System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL;
  OLKKAIFGGAK_o *pOVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568bd0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04568bd0 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (DBECHEGNDDN != (OLKKAIFGGAK_o *)0x0) {
    KPHJPLCBKJB = (DBECHEGNDDN->fields).HMIAFJALFCJ;
    GEOFKIAOKDG = OLKKAIFGGAK__HODPOCMNNIN(DBECHEGNDDN,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).EHJHKEEDKBE;
    if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pOVar3 = (DBECHEGNDDN->fields).NFMBPIPEKGF;
      OGDIBLNHLNL = (DBECHEGNDDN->fields).OOBBJEDHHKM;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                          );
        if (!bVar1) break;
        Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
                  ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1,
                   (OLKKAIFGGAK_o *)local_80.fields._current,OGDIBLNHLNL,KPHJPLCBKJB,GEOFKIAOKDG,
                   pOVar3 != (OLKKAIFGGAK_o *)0x0,in_x6);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__)
      ;
      pSVar2 = (__this->fields).AGOBPAPPBEM;
      if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar2,
                   Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                            );
          if (!bVar1) break;
          Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
                    ((Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1,
                     (OLKKAIFGGAK_o *)local_80.fields._current,OGDIBLNHLNL,KPHJPLCBKJB,GEOFKIAOKDG,
                     pOVar3 != (OLKKAIFGGAK_o *)0x0,in_x6);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

