// PMFNDKKBEKN$$EPLGFIOJNDK @ RVA 0x35AB29C

AFFHKININGD_o *
PMFNDKKBEKN__EPLGFIOJNDK(PMFNDKKBEKN_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568e52 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_04568e52 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  uVar1 = (__this->fields).super.KIHDFNGKPGN;
  do {
    if ((int)(uint)uVar1 <= DPJIDNBJIBG) {
      return (AFFHKININGD_o *)0x0;
    }
    __this_00 = (__this->fields).super.HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                             ), pIVar2 = local_60.fields._current, bVar3) {
      if ((AFFHKININGD_o *)local_60.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((AFFHKININGD_Fields *)((long)local_60.fields._current + 0x10))->HLFBMBHOPMI ==
          DPJIDNBJIBG) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        return (AFFHKININGD_o *)pIVar2;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    (*(__this->klass->vtable)._8_PEOJNPEINED.methodPtr)
              (__this,(__this->klass->vtable)._8_PEOJNPEINED.method);
    uVar1 = (__this->fields).super.KIHDFNGKPGN;
  } while( true );
}

