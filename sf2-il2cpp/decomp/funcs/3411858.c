// MGNPHCAAEIO.FGHBAEIKNBF$$MDAFMGBHOGB @ RVA 0x3411858

/* WARNING: Removing unreachable block (ram,0x03511a7c) */

KMJDCOABCCG_o *
MGNPHCAAEIO_FGHBAEIKNBF__MDAFMGBHOGB
          (MGNPHCAAEIO_FGHBAEIKNBF_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  KMJDCOABCCG_o *pKVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568089 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    DAT_04568089 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BJGBOCFLEGO;
  if (__this_00 == (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KFGGMKHNCGM>_GetEnumerator__);
  local_70.fields._index = local_a8.fields._index;
  local_70.fields._version = local_a8.fields._version;
  local_70.fields._list = local_a8.fields._list;
  local_70.fields._current = local_a8.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_MoveNext__);
    if (!bVar1) {
      pKVar2 = (KMJDCOABCCG_o *)0x0;
      break;
    }
    if ((KMJDCOABCCG_o *)local_70.fields._current == (KMJDCOABCCG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)
                 &((KMJDCOABCCG_Fields *)((long)local_70.fields._current + 0x10))->ICOLJMCHFEC;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,__this_01,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_MoveNext__);
      pKVar2 = (KMJDCOABCCG_o *)local_90.fields._current;
      if (!bVar1) {
        pKVar2 = (KMJDCOABCCG_o *)0x0;
        uVar3 = 2;
        goto LAB_035119d0;
      }
      if ((KMJDCOABCCG_o *)local_90.fields._current == (KMJDCOABCCG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__op_Equality
                        (((KMJDCOABCCG_Fields *)((long)local_90.fields._current + 0x10))->
                         JIJLBFGKNJK,KGLJICLJHEL,(MethodInfo *)0x0);
    } while (!bVar1);
    uVar3 = 6;
LAB_035119d0:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<KMJDCOABCCG>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<KFGGMKHNCGM>_Dispose__);
  return pKVar2;
}

