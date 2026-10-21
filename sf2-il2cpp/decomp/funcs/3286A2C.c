// OOMHDDBCBJP$$EPLGFIOJNDK @ RVA 0x3286A2C

AFFHKININGD_o *
OOMHDDBCBJP__EPLGFIOJNDK(OOMHDDBCBJP_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_00;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045672bf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_045672bf = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pAVar2 = (AFFHKININGD_o *)0x0;
  if (DPJIDNBJIBG < (int)(uint)(__this->fields).KIHDFNGKPGN) {
    __this_00 = (__this->fields).HDDNEKLMLMF;
    if (__this_00 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
      pAVar2 = (AFFHKININGD_o *)local_48.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
        pAVar2 = (AFFHKININGD_o *)
                 (*(__this->klass->vtable)._6_IOJIEDAEOBN.methodPtr)
                           (__this,(ulong)(uint)DPJIDNBJIBG,
                            (__this->klass->vtable)._6_IOJIEDAEOBN.method);
        return pAVar2;
      }
      if ((AFFHKININGD_o *)local_48.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (((AFFHKININGD_Fields *)((long)local_48.fields._current + 0x10))->HLFBMBHOPMI !=
             DPJIDNBJIBG);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
  }
  return pAVar2;
}

