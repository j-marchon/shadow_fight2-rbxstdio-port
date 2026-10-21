// PCFNBEFFKJM$$EGCPMNMCGDI @ RVA 0x3419D28

bool PCFNBEFFKJM__EGCPMNMCGDI
               (PCFNBEFFKJM_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OMNMIEMIMKC__o *__this_00;
  ulong uVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045680be & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__,
                 NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
    DAT_045680be = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).INAJMPIJJOG;
  if (__this_00 == (System_Collections_Generic_List_OMNMIEMIMKC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OMNMIEMIMKC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03519dfc;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                      (local_48.fields._current,NKCMBEFHFII,(ulong)(uint)DPCEFBCDHPA,
                       (local_48.fields._current)->klass->vtable[4].method);
  } while ((uVar2 & 1) == 0);
  iVar3 = 4;
LAB_03519dfc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<OMNMIEMIMKC>_Dispose__);
  return bVar1 && iVar3 == 4;
}

