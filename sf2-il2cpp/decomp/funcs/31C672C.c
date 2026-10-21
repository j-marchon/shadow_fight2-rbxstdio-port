// FPLCEOJCPOD$$RandomizeObscuredVars @ RVA 0x31C672C

void FPLCEOJCPOD__RandomizeObscuredVars(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  Il2CppObject *local_60;
  undefined8 uStack_58;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  undefined8 uStack_28;
  
  if ((DAT_04566c33 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_ObscuredInt>_get_Value__);
    DAT_04566c33 = 1;
    method = extraout_x1;
  }
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  uStack_28 = 0;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60 = (Il2CppObject *)0x0;
  uStack_58._0_4_ = 0;
  uStack_58._4_4_ = 0;
  __this_00 = (__this->fields).BJJAPALEEBD;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)0x0) {
                    /* try { // try from 032c67a4 to 033c67a7 has its CatchHandler @ 032c67ec */
                    /* try { // try from 032c67a8 to 033c680f has its CatchHandler @ 032c5f4c */
                    /* catch() { ... } // from try @ 032c631c with catch @ 032c67b8 */
                    /* catch() { ... } // from try @ 032c62e0 with catch @ 032c67bc */
                    /* catch() { ... } // from try @ 032c6354 with catch @ 032c67c0 */
                    /* catch() { ... } // from try @ 032c633c with catch @ 032c67c4 */
    System_Collections_Generic_Dictionary<object,_ObscuredInt>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>_GetEnumerator__);
                    /* catch() { ... } // from try @ 032c6378 with catch @ 032c67c8 */
                    /* catch() { ... } // from try @ 032c62f8 with catch @ 032c67cc */
                    /* catch() { ... } // from try @ 032c6360 with catch @ 032c67d0 */
                    /* catch() { ... } // from try @ 032c6304 with catch @ 032c67d4 */
    while (bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_MoveNext__
                             ), bVar1) {
      uStack_58._0_4_ = local_50.fields._getEnumeratorRetType;
      uStack_58._4_4_ = local_50.fields._36_4_;
                    /* catch() { ... } // from try @ 032c6380 with catch @ 032c67d8 */
                    /* catch() { ... } // from try @ 032c6324 with catch @ 032c67dc */
      local_60 = local_50.fields._current.fields.value;
      __this_01.fields.fakeValue = 0;
      __this_01.fields.fakeValueActive = false;
      __this_01.fields.inited = false;
      __this_01.fields._14_2_ = 0;
      __this_01.fields._0_8_ = &local_60;
                    /* catch() { ... } // from try @ 032c6394 with catch @ 032c67e0 */
                    /* catch() { ... } // from try @ 032c62bc with catch @ 032c67e4 */
                    /* catch() { ... } // from try @ 032c62c0 with catch @ 032c67e8 */
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
                    /* catch() { ... } // from try @ 032c67a4 with catch @ 032c67ec */
    }
                    /* catch() { ... } // from try @ 032c6284 with catch @ 032c67f4 */
                    /* catch() { ... } // from try @ 032c6228 with catch @ 032c67f8 */
    System_Collections_Generic_Dictionary_Enumerator<object,_ObscuredInt>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ObscuredInt>_Dispose__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

