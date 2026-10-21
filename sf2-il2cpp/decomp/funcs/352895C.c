// OBOBEOMMECI$$MJFKBFIBNDD @ RVA 0x352895C

float OBOBEOMMECI__MJFKBFIBNDD
                (OBOBEOMMECI_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,
                System_Collections_Generic_List_MGNDHCBAPEN_ECENNHNBAME__float___o *GLPCNODDKOJ,
                MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568a08 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<ECENNHNBAME,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<ECENNHNBAME,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<ECENNHNBAME,_float>>_get_Current__
                );
    __this = (OBOBEOMMECI_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<ECENNHNBAME,_float>>_GetEnumerator__
                         );
    DAT_04568a08 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (GLPCNODDKOJ == (System_Collections_Generic_List_MGNDHCBAPEN_ECENNHNBAME__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)GLPCNODDKOJ,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<ECENNHNBAME,_float>>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<ECENNHNBAME,_float>>_MoveNext__
                      );
    if (!bVar1) {
      fVar2 = 0.0;
      goto LAB_03628a20;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while ((Il2CppClass *)NLEBDPHNIDI != local_48.fields._current[1].klass);
  fVar2 = *(float *)&local_48.fields._current[1].monitor;
LAB_03628a20:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<ECENNHNBAME,_float>>_Dispose__
            );
  return fVar2;
}

