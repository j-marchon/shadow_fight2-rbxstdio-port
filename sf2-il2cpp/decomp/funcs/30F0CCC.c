// HOOAAGABMBL$$PIGMAMNLCMH @ RVA 0x30F0CCC

HOOAAGABMBL_o *
HOOAAGABMBL__PIGMAMNLCMH(HOOAAGABMBL_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  Il2CppObject *JGANIDFNOAF;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  HOOAAGABMBL_o *pHVar3;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  PONNKDFAMFM_IBOIJJKIIAJ_o *pPVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 031f0cd0 to 032f0d6f has its CatchHandler @ 031f07a4 */
  if ((DAT_04566422 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
    DAT_04566422 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = HOOAAGABMBL__DBONHFEAOEG(__this,false,0x7fffffff,in_x3);
  if (__this_00 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f0ab4 with catch @ 031f0de0 */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PONNKDFAMFM>_GetEnumerator__);
  do {
                    /* try { // try from 031f0d70 to 032f0d77 has its CatchHandler @ 031f0de4 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_MoveNext__);
    JGANIDFNOAF = local_48.fields._current;
    if (!bVar1) {
                    /* catch() { ... } // from try @ 031f0c08 with catch @ 031f0db0 */
      pHVar3 = (HOOAAGABMBL_o *)0x0;
      goto LAB_031f0db4;
    }
                    /* try { // try from 031f0d78 to 032f0d7b has its CatchHandler @ 031f0dd0 */
                    /* try { // try from 031f0d7c to 032f0d7f has its CatchHandler @ 031f0dcc */
    if ((PONNKDFAMFM_o *)local_48.fields._current == (PONNKDFAMFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f0b78 with catch @ 031f0dd8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 031f0d80 to 032f0d83 has its CatchHandler @ 031f07a4 */
    pPVar4 = ((PONNKDFAMFM_Fields *)((long)local_48.fields._current + 0x10))->JDHAHDALAOA;
                    /* try { // try from 031f0d84 to 032f0d87 has its CatchHandler @ 031f0da8 */
    if (pPVar4 == (PONNKDFAMFM_IBOIJJKIIAJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f0b10 with catch @ 031f0ddc */
      FUN_01bab8c8();
    }
                    /* try { // try from 031f0d88 to 032f0d8f has its CatchHandler @ 031f0db4 */
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 031f0d90 to 032f0d93 has its CatchHandler @ 031f0d9c */
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar4->fields).AEIJFFBOBCP.fields,(MethodInfo *)0x0);
                    /* try { // try from 031f0d94 to 032f0e03 has its CatchHandler @ 031f07a4 */
  } while (iVar2 != JLAFGLDIFOC);
                    /* catch() { ... } // from try @ 031f0d90 with catch @ 031f0d9c */
                    /* catch() { ... } // from try @ 031f0be8 with catch @ 031f0da0 */
                    /* catch() { ... } // from try @ 031f0c30 with catch @ 031f0da4 */
  pHVar3 = HOOAAGABMBL__KGJLMGPGJEI(__this,(PONNKDFAMFM_o *)JGANIDFNOAF,method_00);
                    /* catch() { ... } // from try @ 031f0d84 with catch @ 031f0da8 */
                    /* catch() { ... } // from try @ 031f0c18 with catch @ 031f0dac */
LAB_031f0db4:
                    /* catch() { ... } // from try @ 031f0d88 with catch @ 031f0db4 */
                    /* catch() { ... } // from try @ 031f0c50 with catch @ 031f0db8 */
                    /* catch() { ... } // from try @ 031f0bc8 with catch @ 031f0dbc */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PONNKDFAMFM>_Dispose__);
                    /* catch() { ... } // from try @ 031f0bbc with catch @ 031f0dc0 */
                    /* catch() { ... } // from try @ 031f0ba8 with catch @ 031f0dc4 */
                    /* catch() { ... } // from try @ 031f0b9c with catch @ 031f0dc8 */
                    /* catch() { ... } // from try @ 031f0d7c with catch @ 031f0dcc */
                    /* catch() { ... } // from try @ 031f0d78 with catch @ 031f0dd0 */
                    /* catch() { ... } // from try @ 031f0b88 with catch @ 031f0dd4 */
  return pHVar3;
}

