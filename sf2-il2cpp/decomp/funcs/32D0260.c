// Nekki.SF2.GUI.Profile.PerksController$$HNJLAMEEFAD @ RVA 0x32D0260

int32_t Nekki_SF2_GUI_Profile_PerksController__HNJLAMEEFAD
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,System_String_o *AFKICLAFDKC,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Il2CppObject *pIVar3;
  System_String_o *a;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033d0264 to 034d0267 has its CatchHandler @ 033d02b0 */
                    /* try { // try from 033d0268 to 034d026b has its CatchHandler @ 033d0290 */
                    /* try { // try from 033d026c to 034d026f has its CatchHandler @ 033d028c */
                    /* try { // try from 033d0270 to 034d0273 has its CatchHandler @ 033cfdf4 */
                    /* try { // try from 033d0274 to 034d0277 has its CatchHandler @ 033d0280 */
                    /* try { // try from 033d0278 to 034d02df has its CatchHandler @ 033cfdf4 */
                    /* catch() { ... } // from try @ 033d0274 with catch @ 033d0280 */
                    /* catch() { ... } // from try @ 033d0154 with catch @ 033d0284 */
                    /* catch() { ... } // from try @ 033d0170 with catch @ 033d0288 */
                    /* catch() { ... } // from try @ 033d026c with catch @ 033d028c */
  if ((DAT_04567548 & 1) == 0) {
                    /* catch() { ... } // from try @ 033d0268 with catch @ 033d0290 */
                    /* catch() { ... } // from try @ 033d0138 with catch @ 033d0294 */
                    /* catch() { ... } // from try @ 033d0120 with catch @ 033d0298 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
                    /* catch() { ... } // from try @ 033d0130 with catch @ 033d029c */
                    /* catch() { ... } // from try @ 033d0184 with catch @ 033d02a0 */
                    /* catch() { ... } // from try @ 033d01a4 with catch @ 033d02a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
                    /* catch() { ... } // from try @ 033d0190 with catch @ 033d02a8 */
                    /* catch() { ... } // from try @ 033d0108 with catch @ 033d02ac */
                    /* catch() { ... } // from try @ 033d0264 with catch @ 033d02b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* catch() { ... } // from try @ 033d00fc with catch @ 033d02b4 */
                    /* catch() { ... } // from try @ 033d0094 with catch @ 033d02b8 */
                    /* catch() { ... } // from try @ 033d0038 with catch @ 033d02bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033d025c with catch @ 033d02c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    DAT_04567548 = 1;
  }
                    /* try { // try from 033d02e0 to 034d02e3 has its CatchHandler @ 033d02f0 */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GPFJGCCIHLB;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* catch() { ... } // from try @ 033d02e0 with catch @ 033d02f0 */
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
                    /* try { // try from 033d0300 to 034d036f has its CatchHandler @ 033d0384 */
    index = 0;
    do {
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
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                               ), bVar2) {
        if ((JLGNBOILFLN_o *)local_80.fields._current == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033d0370 to 034d037b has its CatchHandler @ 033cfdf4 */
        a = JLGNBOILFLN__GKMAFGODLLG((JLGNBOILFLN_o *)local_80.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 033d037c to 034d0383 has its CatchHandler @ 033d0384 */
        bVar2 = System_String__op_Equality(a,AFKICLAFDKC,(MethodInfo *)0x0);
        if (bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
          return index;
        }
      }
                    /* try { // try from 033d0388 to 034d04e3 has its CatchHandler @ 033d0388
                       catch() { ... } // from try @ 033d0388 with catch @ 033d0388
                       catch() { ... } // from try @ 033d05e0 with catch @ 033d0388
                       catch() { ... } // from try @ 033d062c with catch @ 033d0388
                       catch() { ... } // from try @ 033d067c with catch @ 033d0388
                       catch() { ... } // from try @ 033d06bc with catch @ 033d0388 */
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
  FUN_01bab8c8();
}

