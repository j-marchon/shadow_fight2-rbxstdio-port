// KAHMAJKJMBK$$PIFKCAHHGIO @ RVA 0x34C07C4

void KAHMAJKJMBK__PIFKCAHHGIO(KAHMAJKJMBK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_CNIGOFCKBGI__o *__this_01;
  FCJBEKHDLAF_o *__this_02;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568601 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    DAT_04568601 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).OIJDFMHDHHK;
  if (__this_01 != (System_Collections_Generic_List_CNIGOFCKBGI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<CNIGOFCKBGI>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_MoveNext__);
      __this_00 = local_50.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<CNIGOFCKBGI>_Dispose__);
        return;
      }
      if ((AJNNHGGLGIF_o *)local_50.fields._current == (AJNNHGGLGIF_o *)0x0) break;
      if (((AJNNHGGLGIF_Fields *)((long)local_50.fields._current + 0x10))->
          _BDDBFNHFMBC_k__BackingField != false) {
        (*((AJNNHGGLGIF_c *)(local_50.fields._current)->klass)[1]._1.generic_class)
                  (local_50.fields._current,
                   ((AJNNHGGLGIF_c *)(local_50.fields._current)->klass)[1]._1.typeMetadataHandle);
        iVar2 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar2 == 6) {
          __this_02 = (__this->fields).HPKHMGLOLPJ;
          if (__this_02 == (FCJBEKHDLAF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          FCJBEKHDLAF__GHCGOFHFBGO(__this_02,0.0,(MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

