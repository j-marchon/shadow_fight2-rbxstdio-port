// OCABNNJIENC.KMODKLKCHNL$$JPONFNMFHGE @ RVA 0x339B63C

float OCABNNJIENC_KMODKLKCHNL__JPONFNMFHGE
                (OCABNNJIENC_KMODKLKCHNL_o *__this,int32_t PIDMGHLCFAJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_FCGINHCODAI__o *__this_00;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567c7f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>_GetEnumerator__);
    DAT_04567c7f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).JBCBCLOPOPI;
  if (__this_00 == (System_Collections_Generic_List_FCGINHCODAI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0349b738 to 0359b74f has its CatchHandler @ 0349b82c */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FCGINHCODAI>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_MoveNext__);
    if (!bVar1) {
      fVar2 = 0.0;
      goto LAB_0349b710;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((long)PIDMGHLCFAJ < (long)(ulong)*(uint *)&local_48.fields._current[1].klass) ||
          ((long)(ulong)*(uint *)((long)&local_48.fields._current[1].klass + 4) < (long)PIDMGHLCFAJ)
          );
  fVar2 = (float)(long)local_48.fields._current[1].monitor;
LAB_0349b710:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FCGINHCODAI>_Dispose__);
                    /* try { // try from 0349b728 to 0359b72f has its CatchHandler @ 0349b830 */
  return fVar2;
}

