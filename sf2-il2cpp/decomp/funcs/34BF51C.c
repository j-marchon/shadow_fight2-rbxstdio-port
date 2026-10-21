// KAHMAJKJMBK$$NBFBDCDCFPP @ RVA 0x34BF51C

void KAHMAJKJMBK__NBFBDCDCFPP(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568605 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    DAT_04568605 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).EOFEIIFFHCN;
  if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar3 = (__this->fields).PFFILFBOODM;
    if (pSVar3 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      __this_00 = (__this->fields).OIJDFMHDHHK;
      if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
        while( true ) {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__
                            );
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
            return;
          }
          if (local_38.fields._current == (Il2CppObject *)0x0) break;
          (*(local_38.fields._current)->klass->vtable[0x12].methodPtr)
                    (local_38.fields._current,(local_38.fields._current)->klass->vtable[0x12].method
                    );
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

