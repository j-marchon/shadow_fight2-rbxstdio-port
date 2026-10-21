// MNLIBPAOCLG$$ICOOOADKLOP @ RVA 0x31E8C84

void MNLIBPAOCLG__ICOOOADKLOP(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  NHBBOEHHEKG_o *pNVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
                    /* try { // try from 032e8c90 to 033e8ce3 has its CatchHandler @ 032e8a38 */
  if ((DAT_04566d7d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    DAT_04566d7d = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pNVar3 = (__this->fields).CNHHLPPHNCO;
                    /* try { // try from 032e8ce4 to 033e8ceb has its CatchHandler @ 032e8e8c */
  if ((pNVar3 != (NHBBOEHHEKG_o *)0x0) &&
     (__this_00 = (pNVar3->fields).JDLKPFCELNF, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_MEHKKHFBNLM__o *)0x0)) {
                    /* try { // try from 032e8d08 to 033e8d0f has its CatchHandler @ 032e8e0c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEHKKHFBNLM>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MEHKKHFBNLM>_Dispose__);
        MNLIBPAOCLG__AKDOBEJDFFH(__this,method_00);
        return;
      }
      if ((MEHKKHFBNLM_o *)local_38.fields._current == (MEHKKHFBNLM_o *)0x0) break;
                    /* try { // try from 032e8d30 to 033e8d37 has its CatchHandler @ 032e8e88 */
      MEHKKHFBNLM__BDHAMOEKNNK((MEHKKHFBNLM_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

