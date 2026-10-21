// AJJPCMDCAOB$$BEOEPIJJCKD @ RVA 0x338CD38

HEOCHMFJJLH_o * AJJPCMDCAOB__BEOEPIJJCKD(AJJPCMDCAOB_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  int iVar3;
  HEOCHMFJJLH_o *pHVar4;
  bool bVar5;
  System_Collections_Generic_List_HEOCHMFJJLH__o *__this_00;
  int iVar6;
  HEOCHMFJJLH_o *pHVar7;
  float fVar8;
  float fVar9;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 0348cd3c to 0358cd43 has its CatchHandler @ 0348d0f8 */
                    /* try { // try from 0348cd48 to 0358cd4f has its CatchHandler @ 0348d0f4 */
  if ((DAT_04567bf3 & 1) == 0) {
                    /* try { // try from 0348cd60 to 0358cd67 has its CatchHandler @ 0348d0f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
                    /* try { // try from 0348cd68 to 0358cd7b has its CatchHandler @ 0348d140 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_get_Current__);
                    /* try { // try from 0348cd80 to 0358cd8b has its CatchHandler @ 0348d0ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEOCHMFJJLH>_get_Count__);
                    /* try { // try from 0348cd9c to 0358cda7 has its CatchHandler @ 0348d178 */
    DAT_04567bf3 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJNMDODJJFD;
  if (__this_00 == (System_Collections_Generic_List_HEOCHMFJJLH__o *)0x0) {
LAB_0348ce78:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0348cdb0 to 0358cdb7 has its CatchHandler @ 0348d138 */
  if ((__this_00->fields)._size == 0) {
    pHVar7 = (HEOCHMFJJLH_o *)0x0;
  }
  else {
                    /* try { // try from 0348cdbc to 0358cdc3 has its CatchHandler @ 0348d134 */
                    /* try { // try from 0348cdc8 to 0358cdd7 has its CatchHandler @ 0348d0e8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HEOCHMFJJLH>_GetEnumerator__);
                    /* try { // try from 0348cddc to 0358cde3 has its CatchHandler @ 0348d130 */
                    /* try { // try from 0348cde8 to 0358ce07 has its CatchHandler @ 0348d12c */
    fVar2 = 3.4028235e+38;
    iVar3 = 0x7fffffff;
    pHVar4 = (HEOCHMFJJLH_o *)0x0;
    while (pHVar7 = pHVar4, iVar6 = iVar3, fVar8 = fVar2,
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_MoveNext__
                            ), bVar5) {
      if ((HEOCHMFJJLH_o *)local_48.fields._current == (HEOCHMFJJLH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->MAOCPNLGKLP;
      fVar2 = fVar8;
      iVar3 = iVar6;
      pHVar4 = pHVar7;
                    /* try { // try from 0348ce24 to 0358ce2b has its CatchHandler @ 0348d174 */
      if (((iVar1 <= iVar6) &&
          (fVar9 = ((HEOCHMFJJLH_Fields *)((long)local_48.fields._current + 0x10))->BKCFPHNEONL,
          fVar2 = fVar9, iVar3 = iVar1, pHVar4 = (HEOCHMFJJLH_o *)local_48.fields._current,
          iVar1 < 1)) && (fVar2 = fVar8, iVar3 = iVar6, pHVar4 = pHVar7, fVar9 < fVar8)) {
        fVar2 = fVar9;
        iVar3 = iVar1;
        pHVar4 = (HEOCHMFJJLH_o *)local_48.fields._current;
      }
    }
                    /* try { // try from 0348ce34 to 0358ce3b has its CatchHandler @ 0348d170 */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEOCHMFJJLH>_Dispose__);
                    /* try { // try from 0348ce40 to 0358ce47 has its CatchHandler @ 0348d124 */
    if (pHVar7 == (HEOCHMFJJLH_o *)0x0) goto LAB_0348ce78;
    (pHVar7->fields).MAOCPNLGKLP = (pHVar7->fields).MAOCPNLGKLP + 1;
  }
  return pHVar7;
}

