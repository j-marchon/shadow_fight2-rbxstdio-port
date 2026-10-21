// Nekki.SF2.GUI.Map.ZoneScrollItem$$SelectFirstBattle @ RVA 0x3347550

void Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  OOMHDDBCBJP_o *pOVar2;
  MEJIKMPNBNL_o *pMVar3;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045679d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
    DAT_045679d5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pMVar3 = (__this->fields).IAJBEJGMIMM;
  if ((pMVar3 != (MEJIKMPNBNL_o *)0x0) &&
     (__this_00 = (pMVar3->fields).BDCBJJGNPMC,
     __this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      do {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                          );
        pOVar2 = (OOMHDDBCBJP_o *)local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
          pOVar2 = (OOMHDDBCBJP_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<OOMHDDBCBJP>_get_Item__);
          goto LAB_0344766c;
        }
        if ((OOMHDDBCBJP_o *)local_48.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((OOMHDDBCBJP_Fields *)((long)local_48.fields._current + 0x10))->HHDBIGKBMEC == false
              );
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
LAB_0344766c:
      if (__this == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) goto LAB_03447698;
      (__this->fields).KOGBPIPIKFA = pOVar2;
      thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,pOVar2);
    }
    return;
  }
LAB_03447698:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

