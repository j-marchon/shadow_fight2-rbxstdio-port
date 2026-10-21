// FKGDENPCMPH$$EBGIANGIHFF @ RVA 0x32CAD1C

bool FKGDENPCMPH__EBGIANGIHFF
               (FKGDENPCMPH_o *__this,System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567519 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_IBLAPCINJBO_BDLEIEHBFAD<HEFOANCOHDC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04567519 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar1 = IBLAPCINJBO__BDLEIEHBFAD<object>
                    ((System_Collections_Generic_List_T__o *)GJBLBEALOBO,
                     Method_IBLAPCINJBO_BDLEIEHBFAD<HEFOANCOHDC>__);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    if (GJBLBEALOBO == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)GJBLBEALOBO,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
      if (!bVar1) {
        iVar3 = 6;
        goto LAB_033cae0c;
      }
    } while ((local_48.fields._current == (Il2CppObject *)0x0) ||
            (bVar2 = System_String__op_Equality
                               ((__this->fields).NPFMOEOIEKM,
                                (System_String_o *)local_48.fields._current[4].klass,
                                (MethodInfo *)0x0), !bVar2));
    iVar3 = 5;
LAB_033cae0c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    bVar1 = bVar1 && iVar3 == 5;
  }
  return bVar1;
}

