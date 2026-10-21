// Nekki.SF2.GUI.Map.MapContainer$$MIGOMOPONBN @ RVA 0x323A9EC

/* WARNING: Removing unreachable block (ram,0x0333ac74) */

void Nekki_SF2_GUI_Map_MapContainer__MIGOMOPONBN
               (Nekki_SF2_GUI_Map_MapContainer_o *__this,MEJIKMPNBNL_o *BHHBEIACGPB,
               Nekki_SF2_GUI_Map_ZoneScrollItem_o *GNPAECKAJDE,MethodInfo *method)

{
  Il2CppObject *BANHBMINMMP;
  Il2CppObject *KGLJICLJHEL;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *method_00;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar2;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  method_00 = GNPAECKAJDE;
  if ((DAT_04567057 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapContainer_TypeInfo);
    DAT_04567057 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0333aacc to 0343aaf3 has its CatchHandler @ 0333ace0 */
  pMVar2 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (((pMVar2 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) || (BHHBEIACGPB == (MEJIKMPNBNL_o *)0x0)) ||
     (__this_00 = (pMVar2->fields).IIDBLEBLLEM,
     __this_00 == (System_Collections_Generic_List_string__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (BHHBEIACGPB->fields).BDCBJJGNPMC;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
                    /* try { // try from 0333ab28 to 0343ab4f has its CatchHandler @ 0333acdc */
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    KGLJICLJHEL = local_80.fields._current;
    if (!bVar1) break;
    if (__this_01 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0333ab58 to 0343ab63 has its CatchHandler @ 0333acb4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
                    /* try { // try from 0333ab70 to 0343ab7f has its CatchHandler @ 0333acd4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      BANHBMINMMP = local_a0.fields._current;
      if (!bVar1) {
                    /* try { // try from 0333abc4 to 0343abcf has its CatchHandler @ 0333acd8 */
        uVar3 = 2;
        goto LAB_0333abcc;
      }
                    /* try { // try from 0333ab84 to 0343ab8f has its CatchHandler @ 0333acb0 */
      if ((Nekki_SF2_GUI_Map_MapContainer_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0333ab90 to 0343ab9b has its CatchHandler @ 0333acc8 */
        thunk_FUN_01ba7564();
      }
      bVar1 = Nekki_SF2_GUI_Map_MapContainer__ENIBALHEJFA
                        ((System_String_o *)KGLJICLJHEL,(OOMHDDBCBJP_o *)BANHBMINMMP,
                         (MethodInfo *)method_00);
    } while (!bVar1);
                    /* try { // try from 0333aba4 to 0343abb3 has its CatchHandler @ 0333acb8 */
    if (GNPAECKAJDE == (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333abec to 0343abf7 has its CatchHandler @ 0333acd0 */
      FUN_01bab8c8();
    }
    method_00 = (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0;
    Nekki_SF2_GUI_Map_ZoneScrollItem__SetLastBattle
              (GNPAECKAJDE,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
                    /* try { // try from 0333abb8 to 0343abc3 has its CatchHandler @ 0333acbc */
    uVar3 = 6;
LAB_0333abcc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 0333abd8 to 0343abe7 has its CatchHandler @ 0333accc */
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return;
}

