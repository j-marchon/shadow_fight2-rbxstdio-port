// PJKHAJKEHEL$$LMEKCLJHGNH @ RVA 0x303E150

/* WARNING: Removing unreachable block (ram,0x0313e3b8) */
/* WARNING: Removing unreachable block (ram,0x0313e3f8) */

int32_t PJKHAJKEHEL__LMEKCLJHGNH
                  (PJKHAJKEHEL_o *__this,System_String_o *KGLJICLJHEL,
                  System_Collections_Generic_List_string__o *KENFFDHLNDA,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_LDHGBBPECKF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04565db6 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LDHGBBPECKF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CJMPPFAJNBH>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CJMPPFAJNBH>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LDHGBBPECKF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LDHGBBPECKF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CJMPPFAJNBH>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CJMPPFAJNBH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LDHGBBPECKF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    __this = (PJKHAJKEHEL_o *)FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04565db6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  if (KENFFDHLNDA != (System_Collections_Generic_List_string__o *)0x0) {
    iVar1 = (KENFFDHLNDA->fields)._size;
    if ((PJKHAJKEHEL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = PJKHAJKEHEL_TypeInfo->static_fields->KCAOHMFJGIC;
    __this = (PJKHAJKEHEL_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_LDHGBBPECKF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_d8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<LDHGBBPECKF>_GetEnumerator__);
      local_80.fields._index = local_d8.fields._index;
      local_80.fields._version = local_d8.fields._version;
      local_80.fields._list = local_d8.fields._list;
      local_80.fields._current = local_d8.fields._current;
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<LDHGBBPECKF>_MoveNext__
                            );
          pIVar2 = local_80.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<LDHGBBPECKF>_Dispose__);
            return (KENFFDHLNDA->fields)._size - iVar1;
          }
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = System_String__op_Equality
                            ((System_String_o *)local_80.fields._current[1].klass,KGLJICLJHEL,
                             (MethodInfo *)0x0);
        } while (!bVar3);
        if (pIVar2[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_d8,(System_Collections_Generic_List_object__o *)pIVar2[4].klass,
                   Method_System_Collections_Generic_List<CJMPPFAJNBH>_GetEnumerator__);
        local_a0.fields._index = local_d8.fields._index;
        local_a0.fields._version = local_d8.fields._version;
        local_a0.fields._list = local_d8.fields._list;
        local_a0.fields._current = local_d8.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<CJMPPFAJNBH>_MoveNext__
                                 ), bVar3) {
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (local_a0.fields._current[2].monitor ==
              (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_d8,local_a0.fields._current[2].monitor,
                     Method_System_Collections_Generic_List<LPACFIDMJOM>_GetEnumerator__);
          local_c0.fields._index = local_d8.fields._index;
          local_c0.fields._version = local_d8.fields._version;
          local_c0.fields._list = local_d8.fields._list;
          local_c0.fields._current = local_d8.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_c0,
                                    Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_MoveNext__
                                   ), bVar3) {
            if (local_c0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            DJNBJHPDKDP__OFNFOGHFDML<object>
                      ((System_Collections_Generic_List_T__o *)KENFFDHLNDA,
                       (Il2CppObject *)local_c0.fields._current[1].klass,
                       Method_DJNBJHPDKDP_OFNFOGHFDML<string>__);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_c0,
                     Method_System_Collections_Generic_List_Enumerator<LPACFIDMJOM>_Dispose__);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<CJMPPFAJNBH>_Dispose__);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

