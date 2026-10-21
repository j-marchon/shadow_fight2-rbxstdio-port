// KAHMAJKJMBK$$ELANNLDAPMK @ RVA 0x34C1808

void KAHMAJKJMBK__ELANNLDAPMK(KAHMAJKJMBK_o *__this,int32_t HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_00;
  FCJBEKHDLAF_o *__this_01;
  OLKKAIFGGAK_o *__this_02;
  byte bVar3;
  int32_t HEHMPFLAEGE_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456861c & 1) == 0) {
    FUN_01bab630(&DGCPNJOFKON_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    DAT_0456861c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (HEHMPFLAEGE == 3) {
    KAHMAJKJMBK__ELANNLDAPMK(__this,1,method);
    KAHMAJKJMBK__ELANNLDAPMK(__this,2,method);
    return;
  }
  __this_00 = (__this->fields).AJOJJAMODCB;
  if (__this_00 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    bVar1 = true;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__
                             ), bVar2) {
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((*(char *)((long)&local_50.fields._current[3].monitor + 4) != '\0') &&
         (*(int *)&local_50.fields._current[5].monitor == HEHMPFLAEGE)) {
        if (bVar1) {
          bVar3 = (DGCPNJOFKON_TypeInfo->_2).naturalAligment;
          if ((((local_50.fields._current)->klass->_2).naturalAligment < bVar3) ||
             (((local_50.fields._current)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
              (Il2CppClass *)DGCPNJOFKON_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(local_50.fields._current);
          }
          bVar3 = *(byte *)((long)&local_50.fields._current[6].monitor + 2) ^ 1;
        }
        else {
          bVar3 = 0;
        }
        bVar1 = bVar3 != 0;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    __this_01 = (__this->fields).HPKHMGLOLPJ;
    if (__this_01 != (FCJBEKHDLAF_o *)0x0) {
      HEHMPFLAEGE_00 = 1;
      if (HEHMPFLAEGE == 1) {
        HEHMPFLAEGE_00 = 2;
      }
      __this_02 = FCJBEKHDLAF__HJFOLPOINNH(__this_01,HEHMPFLAEGE_00,(MethodInfo *)0x0);
      if (__this_02 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__GGAOJKDEHIN(__this_02,(bool)~bVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

