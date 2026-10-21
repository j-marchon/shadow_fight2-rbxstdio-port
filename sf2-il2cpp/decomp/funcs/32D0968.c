// Nekki.SF2.GUI.Profile.PerksController$$AJKEPBOILNA @ RVA 0x32D0968

int32_t Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033d0990 to 034d0997 has its CatchHandler @ 033d0b0c */
  if ((DAT_0456754d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
                    /* try { // try from 033d09a8 to 034d09af has its CatchHandler @ 033d0afc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* try { // try from 033d09c4 to 034d09cb has its CatchHandler @ 033d0a10 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
                    /* try { // try from 033d09e0 to 034d09e3 has its CatchHandler @ 033d0a0c */
    DAT_0456754d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 033d09f0 to 034d09f7 has its CatchHandler @ 033d0b00 */
  __this_00 = (__this->fields).GPFJGCCIHLB;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
                    /* try { // try from 033d0a00 to 034d0a03 has its CatchHandler @ 033d0a08 */
    if (iVar1 < 1) {
                    /* try { // try from 033d0ae4 to 034d0b23 has its CatchHandler @ 033d0878 */
                    /* catch() { ... } // from try @ 033d0a28 with catch @ 033d0ae8 */
                    /* catch() { ... } // from try @ 033d0ae0 with catch @ 033d0af4 */
                    /* catch() { ... } // from try @ 033d0ad8 with catch @ 033d0af8 */
                    /* catch() { ... } // from try @ 033d09a8 with catch @ 033d0afc */
                    /* catch() { ... } // from try @ 033d09f0 with catch @ 033d0b00 */
                    /* catch() { ... } // from try @ 033d0ad4 with catch @ 033d0b04 */
                    /* catch() { ... } // from try @ 033d0a80 with catch @ 033d0b08 */
      return -1;
    }
                    /* try { // try from 033d0a04 to 034d0a27 has its CatchHandler @ 033d0878 */
                    /* catch() { ... } // from try @ 033d0a00 with catch @ 033d0a08 */
                    /* catch() { ... } // from try @ 033d09e0 with catch @ 033d0a0c */
                    /* catch() { ... } // from try @ 033d09c4 with catch @ 033d0a10 */
    index = 0;
    do {
                    /* try { // try from 033d0a28 to 034d0a2b has its CatchHandler @ 033d0ae8 */
                    /* try { // try from 033d0a2c to 034d0a63 has its CatchHandler @ 033d0878 */
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) ||
         (pIVar3[1].monitor == (System_Collections_Generic_List_object__o *)0x0)) break;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,pIVar3[1].monitor,
                 Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
                    /* try { // try from 033d0a64 to 034d0a6b has its CatchHandler @ 033d0b64 */
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                               ), bVar2) {
        if ((JLGNBOILFLN_o *)local_80.fields._current == CDEABOAKDEJ) {
                    /* try { // try from 033d0ad4 to 034d0ad7 has its CatchHandler @ 033d0b04 */
                    /* try { // try from 033d0ad8 to 034d0adf has its CatchHandler @ 033d0af8 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
          return index;
                    /* try { // try from 033d0ae0 to 034d0ae3 has its CatchHandler @ 033d0af4 */
        }
      }
                    /* try { // try from 033d0a80 to 034d0a83 has its CatchHandler @ 033d0b08 */
                    /* try { // try from 033d0a84 to 034d0abb has its CatchHandler @ 033d0878 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__)
      ;
      index = index + 1;
      if (index == iVar1) {
        return -1;
      }
      __this_00 = (__this->fields).GPFJGCCIHLB;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033d0990 with catch @ 033d0b0c */
  FUN_01bab8c8();
}

