// OANGEOLKMJG$$RandomizeObscuredVars @ RVA 0x32EDE50

void OANGEOLKMJG__RandomizeObscuredVars(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456765a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_0456765a = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__
                             ), bVar1) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033ede0c with catch @ 033edfdc */
        FUN_01bab8c8();
      }
      (*(local_60.fields._current)->klass->vtable[7].methodPtr)
                (local_60.fields._current,(local_60.fields._current)->klass->vtable[7].method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    __this_02.fields.fakeValue = 0;
    __this_02.fields.fakeValueActive = false;
    __this_02.fields.inited = false;
    __this_02.fields._14_2_ = 0;
    __this_02.fields._0_8_ = &(__this->fields).PJHOEIFNOHM;
                    /* try { // try from 033edf78 to 034edf7f has its CatchHandler @ 033ee01c */
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
                    /* try { // try from 033edf80 to 034edf83 has its CatchHandler @ 033ed47c */
    __this_01 = (__this->fields).FMFKGEJLDGO;
                    /* try { // try from 033edf84 to 034edf87 has its CatchHandler @ 033ee000 */
    if (__this_01 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* try { // try from 033edf88 to 034edf8b has its CatchHandler @ 033edffc */
                    /* try { // try from 033edf8c to 034edf8f has its CatchHandler @ 033edff4 */
                    /* try { // try from 033edf90 to 034edf93 has its CatchHandler @ 033edfe0 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
      while( true ) {
                    /* try { // try from 033edf94 to 034edf97 has its CatchHandler @ 033edfd4 */
                    /* try { // try from 033edf98 to 034edf9b has its CatchHandler @ 033edfc4 */
                    /* try { // try from 033edf9c to 034edfa3 has its CatchHandler @ 033ed47c */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_78,
                           Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                          );
        if (!bVar1) {
                    /* catch() { ... } // from try @ 033edd60 with catch @ 033edfb8 */
                    /* catch() { ... } // from try @ 033edd40 with catch @ 033edfbc */
                    /* catch() { ... } // from try @ 033edd38 with catch @ 033edfc0 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_78,
                     Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
                    /* catch() { ... } // from try @ 033edf98 with catch @ 033edfc4 */
                    /* catch() { ... } // from try @ 033edd04 with catch @ 033edfc8 */
                    /* catch() { ... } // from try @ 033edd28 with catch @ 033edfcc */
                    /* catch() { ... } // from try @ 033edd50 with catch @ 033edfd0 */
                    /* catch() { ... } // from try @ 033edf94 with catch @ 033edfd4 */
                    /* catch() { ... } // from try @ 033eddf4 with catch @ 033edfd8 */
          return;
        }
                    /* try { // try from 033edfa4 to 034edfa7 has its CatchHandler @ 033edfb0 */
                    /* try { // try from 033edfa8 to 034ee03f has its CatchHandler @ 033ed47c */
        if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_78.fields._current ==
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) break;
                    /* catch() { ... } // from try @ 033edfa4 with catch @ 033edfb0 */
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_78.fields._current,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033edd74 with catch @ 033edfb4 */
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033edf90 with catch @ 033edfe0 */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033ede18 with catch @ 033edfe4 */
  FUN_01bab8c8();
}

