// LGFLCMBIFCN$$BKBONMDJJBE @ RVA 0x32E7668

BFBONKPKBNL_o *
LGFLCMBIFCN__BKBONMDJJBE(LGFLCMBIFCN_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BFBONKPKBNL__o *__this_00;
  BFBONKPKBNL_o *pBVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 033e7668 to 034e766f has its CatchHandler @ 033e7684 */
                    /* try { // try from 033e7670 to 034e767b has its CatchHandler @ 033e70e4 */
                    /* try { // try from 033e767c to 034e7683 has its CatchHandler @ 033e7684 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033e7668 with catch @ 033e7684
                       catch(type#2 @ 00000000) { ... } // from try @ 033e767c with catch @ 033e7684
                        */
  if ((DAT_0456761a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BFBONKPKBNL>_GetEnumerator__);
    DAT_0456761a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PJGPKMDGOIE;
  if (__this_00 == (System_Collections_Generic_List_BFBONKPKBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BFBONKPKBNL>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_MoveNext__);
    pBVar2 = (BFBONKPKBNL_o *)local_48.fields._current;
    if (!bVar1) {
      pBVar2 = (BFBONKPKBNL_o *)0x0;
      break;
    }
    if ((BFBONKPKBNL_o *)local_48.fields._current == (BFBONKPKBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = BFBONKPKBNL__HDHADDGFBDM
                      ((BFBONKPKBNL_o *)local_48.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<BFBONKPKBNL>_Dispose__);
  return pBVar2;
}

