// PMFNDKKBEKN$$FICPLENMNCF @ RVA 0x35AB8C0

void PMFNDKKBEKN__FICPLENMNCF(PMFNDKKBEKN_o *__this,AFFHKININGD_o *MHOFCOHFCGL,MethodInfo *method)

{
  int32_t index;
  bool bVar1;
  System_Collections_Generic_List_List_PJKHAJKEHEL___o *__this_00;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Collections_Generic_List_List_AJNNHGGLGIF___o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568e54 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<AJNNHGGLGIF>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<PJKHAJKEHEL>>_get_Item__);
    DAT_04568e54 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  if (MHOFCOHFCGL != (AFFHKININGD_o *)0x0) {
    AFFHKININGD__FAHIIKLFAOG(MHOFCOHFCGL,(MethodInfo *)0x0);
    AFFHKININGD__LMLGHFLCHGE(MHOFCOHFCGL,(MethodInfo *)0x0);
    __this_00 = (__this->fields).PLIMKHBGKED;
    if (__this_00 != (System_Collections_Generic_List_List_PJKHAJKEHEL___o *)0x0) {
      index = (MHOFCOHFCGL->fields).HLFBMBHOPMI;
      pSVar2 = (System_Collections_Generic_List_object__o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<List<PJKHAJKEHEL>>_get_Item__);
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_a0,pSVar2,
                   Method_System_Collections_Generic_List<PJKHAJKEHEL>_GetEnumerator__);
        local_70.fields._index = local_a0.fields._index;
        local_70.fields._version = local_a0.fields._version;
        local_70.fields._list = local_a0.fields._list;
        local_70.fields._current = local_a0.fields._current;
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_70,
                                  Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_MoveNext__
                                 ), bVar1) {
          AFFHKININGD__KIOMICIFKGC
                    (MHOFCOHFCGL,(PJKHAJKEHEL_o *)local_70.fields._current,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<PJKHAJKEHEL>_Dispose__);
        __this_01 = (__this->fields).CIDEKAHPIGK;
        if ((__this_01 != (System_Collections_Generic_List_List_AJNNHGGLGIF___o *)0x0) &&
           (pSVar2 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                Method_System_Collections_Generic_List<List<AJNNHGGLGIF>>_get_Item__
                               ), pSVar2 != (System_Collections_Generic_List_object__o *)0x0)) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_88,pSVar2,
                     Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
          while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_88,
                                    Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                                   ), bVar1) {
            AFFHKININGD__AJECCFAENNF
                      (MHOFCOHFCGL,(AJNNHGGLGIF_o *)local_88.fields._current,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_88,
                     Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
          AFFHKININGD__LFCMDLKDGHG(MHOFCOHFCGL,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

