// MMDDDDFHOLG$$HMDJFLDLPMN @ RVA 0x33639D4

void MMDDDDFHOLG__HMDJFLDLPMN(MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567a9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Remove__);
    DAT_04567a9f = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).PNGAKAPODKB;
  if (pSVar2 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) goto LAB_03463ab0;
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (local_48.fields._current[1].klass != (Il2CppClass *)BCKBBGCOMJD);
  pSVar2 = (__this->fields).PNGAKAPODKB;
  if (pSVar2 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)pSVar2,local_48.fields._current,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_Remove__);
LAB_03463ab0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
  return;
}

