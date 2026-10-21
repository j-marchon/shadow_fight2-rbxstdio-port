// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByHintIDs @ RVA 0x351589C

/* WARNING: Removing unreachable block (ram,0x03615ab8) */

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,
          System_Collections_Generic_List_MIBHAJBEMIK__o *GLIELCCFAGL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this_01;
  uint uVar2;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0361589c to 0371589f has its CatchHandler @ 03615920 */
                    /* try { // try from 036158a0 to 037158e3 has its CatchHandler @ 03615614 */
  if ((DAT_04568923 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
                    /* try { // try from 036158e4 to 037158e7 has its CatchHandler @ 03615948 */
                    /* try { // try from 036158e8 to 037158eb has its CatchHandler @ 03615944 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
                    /* try { // try from 036158ec to 037158fb has its CatchHandler @ 03615614 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
                    /* try { // try from 036158fc to 03715913 has its CatchHandler @ 036159b8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_get_Current__);
                    /* try { // try from 03615914 to 0371591b has its CatchHandler @ 03615938 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
                    /* try { // try from 0361591c to 0371591f has its CatchHandler @ 03615930 */
                    /* catch() { ... } // from try @ 0361589c with catch @ 03615920
                       try { // try from 03615920 to 03715967 has its CatchHandler @ 03615614 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03615850 with catch @ 0361592c */
    DAT_04568923 = 1;
  }
                    /* catch() { ... } // from try @ 0361591c with catch @ 03615930 */
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* catch() { ... } // from try @ 036157f0 with catch @ 03615934 */
  local_70.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 03615914 with catch @ 03615938 */
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
                    /* catch() { ... } // from try @ 036157c0 with catch @ 0361593c */
  local_90.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 036157d8 with catch @ 03615940 */
  __this_00 = (__this->fields).DEDJHBCOMCJ;
                    /* catch() { ... } // from try @ 036158e8 with catch @ 03615944 */
  if (__this_00 == (System_Collections_Generic_List_HintGroup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 036158e4 with catch @ 03615948 */
                    /* catch() { ... } // from try @ 036157c4 with catch @ 0361594c */
                    /* catch() { ... } // from try @ 036157a4 with catch @ 03615950 */
                    /* try { // try from 03615968 to 0371596b has its CatchHandler @ 03615994 */
                    /* try { // try from 0361596c to 0371599b has its CatchHandler @ 03615614 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
                    /* catch() { ... } // from try @ 03615968 with catch @ 03615994 */
                    /* try { // try from 0361599c to 037159a3 has its CatchHandler @ 036159b8 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)local_70.fields._current;
    if (!bVar1) {
      __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
      break;
    }
                    /* try { // try from 036159a4 to 037159af has its CatchHandler @ 03615614 */
    if (GLIELCCFAGL == (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 036159b0 to 037159b7 has its CatchHandler @ 036159b8 */
                    /* catch() { ... } // from try @ 036158fc with catch @ 036159b8
                       catch() { ... } // from try @ 0361599c with catch @ 036159b8
                       catch() { ... } // from try @ 036159b0 with catch @ 036159b8 */
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_T__o *)GLIELCCFAGL,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_MoveNext__);
      if (!bVar1) {
        __this_01 = (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0;
        uVar2 = 2;
        goto LAB_03615a0c;
      }
      if (__this_01 == (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsHintID
                        (__this_01,(int32_t)local_90.fields._current,(MethodInfo *)0x0);
    } while (!bVar1);
    uVar2 = 6;
LAB_03615a0c:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<MIBHAJBEMIK>_Dispose__);
  } while ((uVar2 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
  return __this_01;
}

