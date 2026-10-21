// OCMLPCKBHPN$$JNIEJFJBJNJ @ RVA 0x3280034

/* WARNING: Removing unreachable block (ram,0x0338029c) */

System_String_o * OCMLPCKBHPN__JNIEJFJBJNJ(System_String_o *JOBJGBKBAIB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__List_string____o *__this;
  System_String_c *__this_00;
  MethodInfo *extraout_x1;
  System_String_Fields SVar3;
  uint uVar4;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567284 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_List<string>>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567284 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCMLPCKBHPN_TypeInfo,method);
  }
  __this = OCMLPCKBHPN_TypeInfo->static_fields->JHHNGHHCIBD;
  if (__this == (System_Collections_Generic_List_MGNDHCBAPEN_string__List_string____o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_List<string>>>_GetEnumerator__
            );
  SVar3._stringLength = 0;
  SVar3._firstChar = 0;
  SVar3._6_2_ = 0;
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_MoveNext__
                      );
    pIVar1 = local_70.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_Dispose__
                );
      return JOBJGBKBAIB;
    }
    if ((System_String_o *)local_70.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)
                       *(System_String_Fields *)((long)local_70.fields._current + 0x10),JOBJGBKBAIB,
                       (MethodInfo *)0x0);
    if (bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_Dispose__
                );
      return JOBJGBKBAIB;
    }
    __this_00 = ((System_String_o *)((long)pIVar1 + 0x18))->klass;
    if (__this_00 == (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar2) {
        bVar2 = false;
        uVar4 = 2;
        goto LAB_033801e4;
      }
      bVar2 = System_String__op_Equality
                        ((System_String_o *)local_90.fields._current,JOBJGBKBAIB,(MethodInfo *)0x0);
    } while (!bVar2);
    SVar3 = *(System_String_Fields *)((long)pIVar1 + 0x10);
    uVar4 = 5;
    bVar2 = true;
LAB_033801e4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    if ((uVar4 | 2) != 2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_List<string>>>_Dispose__
                );
      if (!bVar2) {
        SVar3 = (System_String_Fields)JOBJGBKBAIB;
      }
      return (System_String_o *)SVar3;
    }
  } while( true );
}

