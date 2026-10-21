// IPPEHAJADOO$$BKAIGLDAJPC @ RVA 0x3140558

IPPEHAJADOO_JEOCIECEGHH_o *
IPPEHAJADOO__BKAIGLDAJPC
          (IPPEHAJADOO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
          System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *BHNKDGKFDIL,MethodInfo *method
          )

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t index;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  NGKBNOEJLPH_o *__this_00;
  IPPEHAJADOO_JEOCIECEGHH_o *pIVar5;
  Il2CppClass *item;
  ECENNHNBAME_array *pEVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566754 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04566754 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (BHNKDGKFDIL != (System_Collections_Generic_List_IPPEHAJADOO_JEOCIECEGHH__o *)0x0) {
    iVar1 = (BHNKDGKFDIL->fields)._size;
    if (iVar1 < 1) {
      pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
    }
    else {
      ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
                 Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)BHNKDGKFDIL,
                 Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_MoveNext__
                          );
        lVar3 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        if (!bVar4) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_70.fields._current[1].klass;
        pEVar6 = (ELAGKBMJCOD->fields)._items;
        (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
        if (pEVar6 == (ECENNHNBAME_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (ELAGKBMJCOD->fields)._size;
        if (uVar2 < (uint)pEVar6->max_length) {
          (ELAGKBMJCOD->fields)._size = uVar2 + 1;
          pEVar6->m_Items[(int)uVar2] = (ECENNHNBAME_o *)item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<IPPEHAJADOO_JEOCIECEGHH>_Dispose__
                );
      if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
         (__this_00 = (BCKBBGCOMJD->fields).ADGFKAPOIFN, __this_00 == (NGKBNOEJLPH_o *)0x0))
      goto LAB_03240774;
      index = NGKBNOEJLPH__BKAIGLDAJPC(__this_00,ELAGKBMJCOD,(MethodInfo *)0x0);
      pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)0x0;
      if ((-1 < index) && (index < iVar1)) {
        pIVar5 = (IPPEHAJADOO_JEOCIECEGHH_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)BHNKDGKFDIL,index,
                            Method_System_Collections_Generic_List<IPPEHAJADOO_JEOCIECEGHH>_get_Item__
                           );
      }
    }
    return pIVar5;
  }
LAB_03240774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

