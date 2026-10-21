// GBJGJEGPHKD$$HDEBEPGIFCJ @ RVA 0x342EB44

int32_t GBJGJEGPHKD__HDEBEPGIFCJ(GBJGJEGPHKD_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  GBJGJEGPHKD_FHHNJPLBKEP_o *pGVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456815a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
    DAT_0456815a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).DGPKPHAHOJP;
  if ((pGVar3 == (GBJGJEGPHKD_FHHNJPLBKEP_o *)0x0) ||
     (__this_00 = (pGVar3->fields).MAKMHFGIKHL,
     __this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_GetEnumerator__);
  while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_48,
                            Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_MoveNext__
                           ), bVar2) {
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = *(int *)((long)&local_48.fields._current[1].klass + 4);
    iVar4 = iVar1;
    if ((*(int *)&local_48.fields._current[1].klass == DPJIDNBJIBG) ||
       (iVar4 = *(int *)&local_48.fields._current[1].klass, iVar1 == DPJIDNBJIBG))
    goto LAB_0352ec14;
  }
  iVar4 = -1;
LAB_0352ec14:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<int,_int>>_Dispose__);
  return iVar4;
}

