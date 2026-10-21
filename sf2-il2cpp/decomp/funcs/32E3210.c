// DOPEEDABNEK$$KCGCLNKJLPM @ RVA 0x32E3210

BPDOKJBGHAG_o *
DOPEEDABNEK__KCGCLNKJLPM(DOPEEDABNEK_o *__this,HOOAAGABMBL_o *DKMMBMBMJBO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_BPDOKJBGHAG__o *__this_00;
  System_String_o *pSVar2;
  System_String_array *values;
  BPDOKJBGHAG_o *pBVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675f8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BPDOKJBGHAG>_GetEnumerator__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_567);
    FUN_01bab630(&StringLiteral_8103);
    FUN_01bab630(&StringLiteral_384);
    DAT_045675f8 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).AJDOBNIKJCK;
  if (__this_00 == (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BPDOKJBGHAG>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_MoveNext__);
    pBVar3 = (BPDOKJBGHAG_o *)local_50.fields._current;
    if (!bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3360 with catch @ 033e3448
                        */
      pBVar3 = (BPDOKJBGHAG_o *)0x0;
      goto LAB_033e344c;
    }
    if ((BPDOKJBGHAG_o *)local_50.fields._current == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3304 to 034e332b has its CatchHandler @ 033e344c */
    if (DKMMBMBMJBO == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = ((BPDOKJBGHAG_Fields *)((long)local_50.fields._current + 0x10))->BGHFADDGPAD;
    if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033e345c with catch @ 033e3470 */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals
                      (pSVar2,(DKMMBMBMJBO->fields)._GALJEOPBPCE_k__BackingField,(MethodInfo *)0x0);
  } while (!bVar1);
  pSVar2 = ((BPDOKJBGHAG_Fields *)((long)pBVar3 + 0x10))->HNNFBCMNGIA;
  if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__Equals
                    (pSVar2,(DKMMBMBMJBO->fields)._GMPAEDFIIHF_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033e3360 to 034e3387 has its CatchHandler @ 033e3448 */
    values->m_Items[0] = StringLiteral_8103;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[1] = (DKMMBMBMJBO->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 033e33a0 to 034e33a3 has its CatchHandler @ 033e3444 */
                    /* try { // try from 033e33a4 to 034e341f has its CatchHandler @ 033e3160 */
    values->m_Items[2] = StringLiteral_567;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[3] = (DKMMBMBMJBO->fields)._GMPAEDFIIHF_k__BackingField;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[4] = StringLiteral_384;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[5] = ((BPDOKJBGHAG_Fields *)((long)pBVar3 + 0x10))->HNNFBCMNGIA;
    thunk_FUN_01c20e04();
    pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
                    /* try { // try from 033e3420 to 034e3423 has its CatchHandler @ 033e3440 */
                    /* try { // try from 033e3424 to 034e3427 has its CatchHandler @ 033e343c */
                    /* try { // try from 033e3428 to 034e342b has its CatchHandler @ 033e3160 */
                    /* try { // try from 033e342c to 034e342f has its CatchHandler @ 033e3438 */
                    /* try { // try from 033e3430 to 034e345b has its CatchHandler @ 033e3160 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e342c with catch @ 033e3438
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3424 with catch @ 033e343c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3420 with catch @ 033e3440
                        */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e33a0 with catch @ 033e3444
                        */
  }
LAB_033e344c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033e3304 with catch @ 033e344c
                        */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<BPDOKJBGHAG>_Dispose__);
                    /* try { // try from 033e345c to 034e345f has its CatchHandler @ 033e3470 */
  return pBVar3;
}

