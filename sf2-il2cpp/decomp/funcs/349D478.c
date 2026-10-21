// NGKBNOEJLPH$$MEADICGEFPN @ RVA 0x349D478

float NGKBNOEJLPH__MEADICGEFPN
                (NGKBNOEJLPH_o *__this,System_String_o *BCPAFBNLBDE,
                System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *AAOABCOPPPF,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456846a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
                    /* try { // try from 0359d4ac to 0369d4d7 has its CatchHandler @ 0359d618 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    __this = (NGKBNOEJLPH_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                         );
    DAT_0456846a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AAOABCOPPPF == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
                    /* try { // try from 0359d508 to 0369d567 has its CatchHandler @ 0359d624 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)AAOABCOPPPF,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                      );
    pIVar1 = local_48.fields._current;
    if (!bVar2) {
      fVar3 = 3.4028235e+38;
      goto LAB_0359d548;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[1].klass,BCPAFBNLBDE,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  fVar3 = *(float *)&pIVar1[1].monitor;
LAB_0359d548:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
            );
                    /* try { // try from 0359d568 to 0369d5f3 has its CatchHandler @ 0359d374 */
  return fVar3;
}

