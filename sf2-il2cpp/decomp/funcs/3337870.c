// OHDDKGHEEPA$$EPLDDILOPAJ @ RVA 0x3337870

/* WARNING: Removing unreachable block (ram,0x03437adc) */
/* WARNING: Removing unreachable block (ram,0x03437a30) */

bool OHDDKGHEEPA__EPLDDILOPAJ(OHDDKGHEEPA_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_object__o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567951 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
    __this = (OHDDKGHEEPA_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    DAT_04567951 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                          (FBFPLEFCDOK,(FBFPLEFCDOK->klass->vtable)._4_NIKCNPMKAFK.method);
    __this = (OHDDKGHEEPA_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this_00->fields)._size == 0) {
        bVar2 = true;
      }
      else {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a8,__this_00,
                   Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
        local_70.fields._index = local_a8.fields._index;
        local_70.fields._version = local_a8.fields._version;
        local_70.fields._list = local_a8.fields._list;
        local_70.fields._current = local_a8.fields._current;
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_70,
                               Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                              );
            if (!bVar2) {
              iVar4 = 9;
              goto LAB_03437a80;
            }
            if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            CJNHFNHJHPE = local_70.fields._current[5].monitor;
            bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (bVar2);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          if (__this_01 == (EEGDOGKBLNG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = EEGDOGKBLNG__APFFEAJBAEK(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_a8,__this_00,
                     Method_System_Collections_Generic_List<NIAFDKHDBMA>_GetEnumerator__);
          iVar4 = 0;
          local_90.fields._index = local_a8.fields._index;
          local_90.fields._version = local_a8.fields._version;
          local_90.fields._list = local_a8.fields._list;
          local_90.fields._current = local_a8.fields._current;
          while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_90,
                                    Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_MoveNext__
                                   ), pIVar1 = local_90.fields._current, bVar2) {
            if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = System_String__op_Equality
                              (local_90.fields._current[5].monitor,CJNHFNHJHPE,(MethodInfo *)0x0);
            if (bVar2) {
              iVar4 = *(int *)&pIVar1[6].klass + iVar4;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        } while (iVar4 <= iVar3);
        iVar4 = 8;
LAB_03437a80:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<NIAFDKHDBMA>_Dispose__);
        bVar2 = iVar4 != 8;
      }
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

