// Nekki.SF2.Core.Fights.ModelContainer$$OJOIFNMHOBI @ RVA 0x3561D24

void Nekki_SF2_Core_Fights_ModelContainer__OJOIFNMHOBI
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL,
               GBJGJEGPHKD_o *KPHJPLCBKJB,bool GEOFKIAOKDG,bool AEMDLGPAIBH,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  OLKKAIFGGAK_o *pOVar3;
  GBJGJEGPHKD_o *NCNGALIAHJL;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    DAT_04568bcc = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (__this_00 = (BCKBBGCOMJD->fields).OOBBJEDHHKM,
     __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0,
     __this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                             ), bVar1) {
      if ((ECENNHNBAME_o *)local_70.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ECENNHNBAME__AKNCABCJLII
                ((ECENNHNBAME_o *)local_70.fields._current,KPHJPLCBKJB,GEOFKIAOKDG,AEMDLGPAIBH,
                 KPHJPLCBKJB,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    NCNGALIAHJL = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    bVar1 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    __this = (Nekki_SF2_Core_Fights_ModelContainer_o *)(ulong)bVar1;
    if (OGDIBLNHLNL != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      pOVar3 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)OGDIBLNHLNL,
                 Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                          );
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          return;
        }
        if ((ECENNHNBAME_o *)local_70.fields._current == (ECENNHNBAME_o *)0x0) break;
        ECENNHNBAME__AKNCABCJLII
                  ((ECENNHNBAME_o *)local_70.fields._current,NCNGALIAHJL,bVar1,
                   pOVar3 != (OLKKAIFGGAK_o *)0x0,NCNGALIAHJL,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

