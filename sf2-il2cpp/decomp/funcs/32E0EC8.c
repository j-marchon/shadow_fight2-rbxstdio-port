// DOPEEDABNEK$$GHLLHJDMMNF @ RVA 0x32E0EC8

int64_t DOPEEDABNEK__GHLLHJDMMNF(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  long lVar3;
  MethodInfo *extraout_x1;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045675ec & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675ec = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FDLFEJAEDGA;
  if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  lVar1 = -1;
  while( true ) {
    lVar4 = lVar1;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return lVar4;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) break;
    lVar3 = (*(local_38.fields._current)->klass->vtable[6].methodPtr)
                      (local_38.fields._current,0,
                       (local_38.fields._current)->klass->vtable[6].method);
    lVar1 = lVar4;
    if ((lVar3 != 0) && (lVar1 = *(long *)(lVar3 + 0x70), *(long *)(lVar3 + 0x70) <= lVar4)) {
      lVar1 = lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

