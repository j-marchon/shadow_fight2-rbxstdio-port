// OLKKAIFGGAK$$OJOIFNMHOBI @ RVA 0x34E7340

void OLKKAIFGGAK__OJOIFNMHOBI
               (OLKKAIFGGAK_o *__this,System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL,
               GBJGJEGPHKD_o *KPHJPLCBKJB,bool GEOFKIAOKDG,bool AEMDLGPAIBH,
               System_Collections_Generic_List_ABNLGBHKOCE__o *OLGDADOFIIP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *pOVar3;
  GBJGJEGPHKD_o *NCNGALIAHJL;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456876d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    DAT_0456876d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 035e73f4 to 036e7503 has its CatchHandler @ 035e73f4
                       catch() { ... } // from try @ 035e73f4 with catch @ 035e73f4
                       catch() { ... } // from try @ 035e750c with catch @ 035e73f4
                       catch() { ... } // from try @ 035e7598 with catch @ 035e73f4
                       catch() { ... } // from try @ 035e75bc with catch @ 035e73f4
                       catch() { ... } // from try @ 035e75fc with catch @ 035e73f4 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OOBBJEDHHKM;
  if (__this_00 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
      if (!bVar1) break;
      if ((ECENNHNBAME_o *)local_80.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e75fc to 036e7607 has its CatchHandler @ 035e73f4 */
        FUN_01bab8c8();
      }
      ECENNHNBAME__AKNCABCJLII
                ((ECENNHNBAME_o *)local_80.fields._current,KPHJPLCBKJB,GEOFKIAOKDG,AEMDLGPAIBH,
                 KPHJPLCBKJB,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    __this_01 = (__this->fields).MEECHCPNHMP;
    if (__this_01 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                               ), bVar1) {
        if ((ECENNHNBAME_o *)local_a0.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(code *)((ECENNHNBAME_c *)(local_a0.fields._current)->klass)[1]._1.name)
                  (local_a0.fields._current,KPHJPLCBKJB,GEOFKIAOKDG,AEMDLGPAIBH,KPHJPLCBKJB,
                   ((ECENNHNBAME_c *)(local_a0.fields._current)->klass)[1]._1.namespaze);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      NCNGALIAHJL = (__this->fields).HMIAFJALFCJ;
      bVar1 = OLKKAIFGGAK__HODPOCMNNIN(__this,method_00);
      if (OGDIBLNHLNL != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* try { // try from 035e7504 to 036e750b has its CatchHandler @ 035e75a0 */
        pOVar3 = (__this->fields).NFMBPIPEKGF;
                    /* try { // try from 035e750c to 036e7593 has its CatchHandler @ 035e73f4 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)OGDIBLNHLNL,
                   Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                            );
          if (!bVar2) break;
          if ((ECENNHNBAME_o *)local_80.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ECENNHNBAME__AKNCABCJLII
                    ((ECENNHNBAME_o *)local_80.fields._current,NCNGALIAHJL,bVar1,
                     pOVar3 != (OLKKAIFGGAK_o *)0x0,NCNGALIAHJL,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
        if (OLGDADOFIIP != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_b8,(System_Collections_Generic_List_object__o *)OLGDADOFIIP,
                     Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
          local_a0.fields._index = local_b8.fields._index;
          local_a0.fields._version = local_b8.fields._version;
          local_a0.fields._list = local_b8.fields._list;
          local_a0.fields._current = local_b8.fields._current;
          while( true ) {
                    /* try { // try from 035e7594 to 036e7597 has its CatchHandler @ 035e759c */
                    /* try { // try from 035e7598 to 036e75b7 has its CatchHandler @ 035e73f4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e7594 with catch @ 035e759c
                        */
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                              );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e7504 with catch @ 035e75a0
                        */
            if (!bVar2) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
                    /* catch() { ... } // from try @ 035e75b8 with catch @ 035e75e4 */
                    /* try { // try from 035e75f4 to 036e75fb has its CatchHandler @ 035e7610 */
              return;
            }
            if ((ECENNHNBAME_o *)local_a0.fields._current == (ECENNHNBAME_o *)0x0) break;
                    /* try { // try from 035e75b8 to 036e75bb has its CatchHandler @ 035e75e4 */
                    /* try { // try from 035e75bc to 036e75f3 has its CatchHandler @ 035e73f4 */
            (*(code *)((ECENNHNBAME_c *)(local_a0.fields._current)->klass)[1]._1.name)
                      (local_a0.fields._current,NCNGALIAHJL,bVar1,pOVar3 != (OLKKAIFGGAK_o *)0x0,
                       NCNGALIAHJL,
                       ((ECENNHNBAME_c *)(local_a0.fields._current)->klass)[1]._1.namespaze);
          }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035e7608 to 036e760f has its CatchHandler @ 035e7610 */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

