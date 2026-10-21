// KAFMFFDFDBL$$NIHJAGFBOKF @ RVA 0x34B3D90

bool KAFMFFDFDBL__NIHJAGFBOKF
               (KAFMFFDFDBL_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,OLKKAIFGGAK_o *BCKBBGCOMJD,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_IENLNOEDCFF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568572 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04568572 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  do {
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
        bVar3 = (__this->fields).HHHHNPIKMMJ == 0;
        goto LAB_035b3e8c;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,AHEFOIOKDOK,
                         (local_48.fields._current)->klass->vtable[4].method);
      iVar1 = (__this->fields).HHHHNPIKMMJ;
      if ((bVar3 & 1) != 0) break;
      if (iVar1 == 0) goto LAB_035b3e64;
    }
  } while (iVar1 != 1);
LAB_035b3e64:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
LAB_035b3e8c:
  return (bool)(bVar3 & 1);
}

