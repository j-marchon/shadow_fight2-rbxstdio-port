// OGFBENMAGJJ$$NPAKAMCDCNG @ RVA 0x348E0E0

/* WARNING: Removing unreachable block (ram,0x0358e284) */

void OGFBENMAGJJ__NPAKAMCDCNG
               (OGFBENMAGJJ_o *__this,System_Collections_Generic_List_FPPKHNNABAD__o *OIEGJOKFIHI,
               System_Text_StringBuilder_o *KHHGPLOMHBB,OGFBENMAGJJ_NLOBPGHHIEF_o *MEMJLGHJDCN,
               MethodInfo *method)

{
  Il2CppObject *NDBPOFMECGL;
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  LCKCDEKNLOA_o *pLVar3;
  System_Collections_Generic_List_BOFEMGGNODC__o *__this_00;
  MethodInfo *in_x6;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045683f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
    DAT_045683f9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
                    /* try { // try from 0358e190 to 0368e21f has its CatchHandler @ 0358e190
                       catch() { ... } // from try @ 0358e190 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e244 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e268 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e290 with catch @ 0358e190
                       catch() { ... } // from try @ 0358e2d0 with catch @ 0358e190 */
  local_a0.fields._current = (Il2CppObject *)0x0;
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) ||
     (OIEGJOKFIHI == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AAJBIMFNMBB = (pNVar2->fields).QuestParameters;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
             Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    NDBPOFMECGL = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__)
      ;
                    /* catch() { ... } // from try @ 0358e28c with catch @ 0358e2b8 */
                    /* try { // try from 0358e2c8 to 0368e2cf has its CatchHandler @ 0358e2e4 */
      return;
    }
    if ((FPPKHNNABAD_o *)local_80.fields._current == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar3 = FPPKHNNABAD__HELIKPINEIM((FPPKHNNABAD_o *)local_80.fields._current,(MethodInfo *)0x0);
    if (pLVar3 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pLVar3->fields).NEIJJHEFLHP;
                    /* try { // try from 0358e220 to 0368e227 has its CatchHandler @ 0358e274 */
    if (__this_00 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
                    /* try { // try from 0358e23c to 0368e243 has its CatchHandler @ 0358e270 */
    local_a0.fields._current = local_b8.fields._current;
                    /* try { // try from 0358e244 to 0368e263 has its CatchHandler @ 0358e190 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__
                             ), bVar1) {
                    /* try { // try from 0358e264 to 0368e267 has its CatchHandler @ 0358e26c */
                    /* try { // try from 0358e268 to 0368e28b has its CatchHandler @ 0358e190 */
      OGFBENMAGJJ__JJLBOMEDNIJ
                (__this,AAJBIMFNMBB,(FPPKHNNABAD_o *)NDBPOFMECGL,
                 (BOFEMGGNODC_o *)local_a0.fields._current,MEMJLGHJDCN,KHHGPLOMHBB,in_x6);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e264 with catch @ 0358e26c
                        */
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e23c with catch @ 0358e270
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0358e220 with catch @ 0358e274
                        */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

