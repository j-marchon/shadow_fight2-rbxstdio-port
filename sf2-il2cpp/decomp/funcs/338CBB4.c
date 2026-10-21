// AJJPCMDCAOB$$GIIJOKKDCOP @ RVA 0x338CBB4

HEOCHMFJJLH_o * AJJPCMDCAOB__GIIJOKKDCOP(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_00;
  MethodInfo *extraout_x1;
  HEOCHMFJJLH_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 0348cbb8 to 0358cbbf has its CatchHandler @ 0348d10c */
                    /* try { // try from 0348cbc8 to 0358cbcf has its CatchHandler @ 0348d0c8 */
  if ((DAT_04567bf1 & 1) == 0) {
                    /* try { // try from 0348cbdc to 0358cc0b has its CatchHandler @ 0348d0c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
                    /* try { // try from 0348cc0c to 0358cc2f has its CatchHandler @ 0348d160 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
    DAT_04567bf1 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJNMDODJJFD;
  if (__this_00 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((__this_00->fields)._size == 0) {
    pHVar3 = (HEOCHMFJJLH_o *)0x0;
  }
  else {
                    /* try { // try from 0348cc40 to 0358cc47 has its CatchHandler @ 0348d154 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
      if (!bVar2) {
        pHVar3 = (HEOCHMFJJLH_o *)0x0;
        goto LAB_0348cca4;
      }
      if ((HEOCHMFJJLH_o *)local_48.fields._current == (HEOCHMFJJLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP;
    } while ((3.4028235e+38 <=
              ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->BKCFPHNEONL) &&
            (iVar1 < 1
                    /* try { // try from 0348cc88 to 0358cc93 has its CatchHandler @ 0348d178 */));
    ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP = iVar1 + 1;
    pHVar3 = (HEOCHMFJJLH_o *)local_48.fields._current;
LAB_0348cca4:
                    /* try { // try from 0348cca4 to 0358ccab has its CatchHandler @ 0348d148 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
  }
  return pHVar3;
}

