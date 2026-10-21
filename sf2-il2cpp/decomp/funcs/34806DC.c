// CNLGMNIEGFG$$NIKCNPMKAFK @ RVA 0x34806DC

System_Collections_Generic_List_NIAFDKHDBMA__o *
CNLGMNIEGFG__NIKCNPMKAFK(CNLGMNIEGFG_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_NIAFDKHDBMA__o *__this_00;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_01;
  MethodInfo *extraout_x1;
  NIAFDKHDBMA_o *item;
  NIAFDKHDBMA_array *pNVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456837b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NIAFDKHDBMA>_TypeInfo);
    FUN_01bab630(&NIAFDKHDBMA_TypeInfo);
    DAT_0456837b = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_NIAFDKHDBMA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NIAFDKHDBMA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NIAFDKHDBMA>__ctor__);
  __this_01 = AFFHKININGD__HKNMJCKPHHC((AFFHKININGD_o *)__this,(MethodInfo *)0x0);
  if (__this_01 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    item = (NIAFDKHDBMA_o *)local_60.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      return __this_00;
    }
    if ((NIAFDKHDBMA_o *)local_60.fields._current == (NIAFDKHDBMA_o *)0x0) break;
    iVar5 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)local_60.fields._current,(MethodInfo *)0x0);
    lVar3 = Method_System_Collections_Generic_List<NIAFDKHDBMA>_Add__;
    if (iVar5 == 0x25) {
      bVar1 = (NIAFDKHDBMA_TypeInfo->_2).naturalAligment;
      if ((((NIAFDKHDBMA_c *)((Il2CppObject *)item)->klass)->_2).naturalAligment < bVar1) {
        item = (NIAFDKHDBMA_o *)0x0;
      }
      else if ((((NIAFDKHDBMA_c *)((Il2CppObject *)item)->klass)->_2).typeHierarchy
               [(ulong)bVar1 - 1] != (Il2CppClass *)NIAFDKHDBMA_TypeInfo) {
        item = (NIAFDKHDBMA_o *)0x0;
      }
      if (__this_00 == (System_Collections_Generic_List_NIAFDKHDBMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pNVar6 == (NIAFDKHDBMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pNVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pNVar6->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

