// LDHBHPILNMA$$HCJKEAKOFEP @ RVA 0x31A0F68

/* WARNING: Removing unreachable block (ram,0x032a11e8) */
/* WARNING: Type propagation algorithm not settling */

void LDHBHPILNMA__HCJKEAKOFEP
               (System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN,
               System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,bool JKOABLAJGMF,
               System_Collections_Generic_List_string__o *GMFNKJMHPKC,
               System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,int32_t NCNNIIJIELC,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this;
  KCLPNDAPADO_array *pKVar4;
  MethodInfo *in_stack_ffffffffffffff40;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566ade & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04566ade = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  LDHBHPILNMA__DABMJCDGKOE
            (ELAGKBMJCOD,GHAAKPDHIJJ,JKOABLAJGMF,GMFNKJMHPKC,NCNNIIJIELC,GJBLBEALOBO,
             (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0,0,in_stack_ffffffffffffff40);
  __this = LDHBHPILNMA_TypeInfo->static_fields->GLNEIGKMPDC;
  if (__this == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__)
      ;
      return;
    }
    if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
               Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                             ), lVar2 = Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__,
          bVar3) {
      if ((ECENNHNBAME_o *)item == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(ECENNHNBAME_o **)
           &(((ECENNHNBAME_Fields *)((long)item + 0x10))->EAFPDFHFBOM).fields.hiddenValue ==
          (ECENNHNBAME_o *)local_a0.fields._current) {
        if (LKHHJJJFHGN == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar4 = (LKHHJJJFHGN->fields)._items;
        (LKHHJJJFHGN->fields)._version = (LKHHJJJFHGN->fields)._version + 1;
        if (pKVar4 == (KCLPNDAPADO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (LKHHJJJFHGN->fields)._size;
        if (uVar1 < (uint)pKVar4->max_length) {
          (LKHHJJJFHGN->fields)._size = uVar1 + 1;
          pKVar4->m_Items[(int)uVar1] = (KCLPNDAPADO_o *)item;
          thunk_FUN_01c20e04(pKVar4->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)LKHHJJJFHGN,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
  } while( true );
}

