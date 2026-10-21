// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$FillSpritesCache @ RVA 0x31754B4

/* WARNING: Removing unreachable block (ram,0x0327575c) */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__FillSpritesCache(MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *BANHBMINMMP;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this;
  MEJIKMPNBNL_o *__this_00;
  System_String_o *OOKEKJMFKPE;
  AFFHKININGD_o *FBFPLEFCDOK;
  System_String_o *HCAAAAMDCNO;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566950 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_04566950 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
        return;
      }
      if ((OOMHDDBCBJP_o *)local_80.fields._current == (OOMHDDBCBJP_o *)0x0) break;
      __this_00 = ((OOMHDDBCBJP_Fields *)((long)local_80.fields._current + 0x10))->IAJPHAAMKPC;
      if (__this_00 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), BANHBMINMMP = local_a0.fields._current, bVar2) {
        if ((OOMHDDBCBJP_o *)local_a0.fields._current != (OOMHDDBCBJP_o *)0x0) {
          bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
          if ((((bVar1 <= (((OOMHDDBCBJP_c *)(local_a0.fields._current)->klass)->_2).naturalAligment
                ) && ((((OOMHDDBCBJP_c *)(local_a0.fields._current)->klass)->_2).typeHierarchy
                      [(ulong)bVar1 - 1] == (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) &&
              (((OOMHDDBCBJP_Fields *)((long)local_a0.fields._current + 0x10))->CILMHNDFBPH == false
              )) && (((((OOMHDDBCBJP_Fields *)((long)local_a0.fields._current + 0x10))->HHDBIGKBMEC
                       != false &&
                      (bVar2 = OOMHDDBCBJP__KFMAFEPOEIB
                                         ((OOMHDDBCBJP_o *)local_a0.fields._current,
                                          (MethodInfo *)0x0), !bVar2)) &&
                     (iVar3 = (*(((OOMHDDBCBJP_c *)BANHBMINMMP->klass)->vtable)._15_AAHLCCCONKI.
                                methodPtr)(BANHBMINMMP,
                                           (((OOMHDDBCBJP_c *)BANHBMINMMP->klass)->vtable).
                                           _15_AAHLCCCONKI.method), iVar3 == 2)))) {
            if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OOKEKJMFKPE = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            FBFPLEFCDOK = MGNPHCAAEIO__PHFFPADFANK((OOMHDDBCBJP_o *)BANHBMINMMP,(MethodInfo *)0x0);
            HCAAAAMDCNO = KFCFGKEHPNK__GHLDEKNCIEG(FBFPLEFCDOK,(MethodInfo *)0x0);
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            KKCBGIBKOCP__NECCNHODCAE(OOKEKJMFKPE,HCAAAAMDCNO,true,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

