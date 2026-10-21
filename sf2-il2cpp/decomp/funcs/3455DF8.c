// CLFCKIFNGHA$$ILFKGOLHMBA @ RVA 0x3455DF8

/* WARNING: Removing unreachable block (ram,0x03555f64) */
/* WARNING: Removing unreachable block (ram,0x03555f70) */

void CLFCKIFNGHA__ILFKGOLHMBA(bool BFEGNLEDOFE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IAGNPGHOAIC__o *obj;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  bool local_34 [4];
  
  if ((DAT_045682ca & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    DAT_045682ca = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo,method);
  }
  obj = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  local_34[0] = false;
  System_Threading_Monitor__Enter((Il2CppObject *)obj,local_34,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB;
  if (__this != (System_Collections_Generic_List_IAGNPGHOAIC__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<IAGNPGHOAIC>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<IAGNPGHOAIC>_Dispose__);
        if (local_34[0] != false) {
          System_Threading_Monitor__Exit((Il2CppObject *)obj,(MethodInfo *)0x0);
        }
        return;
      }
      if ((IAGNPGHOAIC_o *)local_50.fields._current == (IAGNPGHOAIC_o *)0x0) break;
      IAGNPGHOAIC__BMMOAFKFHNN
                ((IAGNPGHOAIC_o *)local_50.fields._current,BFEGNLEDOFE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

