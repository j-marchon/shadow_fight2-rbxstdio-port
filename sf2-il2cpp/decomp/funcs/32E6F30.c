// CPNGAIGLKNJ$$DHFOHJPHKOL @ RVA 0x32E6F30

void CPNGAIGLKNJ__DHFOHJPHKOL(CPNGAIGLKNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  OLKPEJMEBPJ_o *__this_00;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  undefined4 uVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567617 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04567617 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).super.super.KANKFCNHDPA == false) {
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
  }
  __this_00 = (__this->fields).super.super.LFJPDELEIHG;
  if (__this_00 == (OLKPEJMEBPJ_o *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar2 = OLKPEJMEBPJ__MMDJGCICIFP(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).super.super.HDDNEKLMLMF;
  if (__this_01 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    iVar4 = 1;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return;
      }
      if (iVar4 < iVar2) {
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = 1;
      }
      else {
        if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = 2;
      }
      *(undefined4 *)((long)&local_48.fields._current[6].klass + 4) = uVar3;
      iVar4 = iVar4 + 1;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

