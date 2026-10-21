// GGHCLMEFIGO$$IAHEDEMPGPE @ RVA 0x33B5D90

System_Collections_Generic_List_IGFGDDANEPE__o *
GGHCLMEFIGO__IAHEDEMPGPE
          (GGHCLMEFIGO_o *__this,System_String_o *ACCIHBHMFPN,System_String_o *NEADDGBNOKK,
          bool OPNIEBGMEPI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_String_o *pSVar5;
  IGFGDDANEPE_array *pIVar6;
  HOOAAGABMBL_o *pHVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567d7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04567d7e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  __this_01 = (__this->fields).DPOPJKJLDEE;
  if (__this_01 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      item = local_80.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
        return __this_00;
      }
      if ((IGFGDDANEPE_o *)local_80.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = ((IGFGDDANEPE_Fields *)((long)local_80.fields._current + 0x10))->PCBECBEFJOI;
    } while (pHVar7 == (HOOAAGABMBL_o *)0x0);
    pSVar5 = (pHVar7->fields)._GMPAEDFIIHF_k__BackingField;
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__Equals(pSVar5,ACCIHBHMFPN,(MethodInfo *)0x0);
    pSVar5 = (pHVar7->fields)._DKODBGOHKGH_k__BackingField;
    if (pSVar5 == (System_String_o *)0x0) break;
    bVar4 = System_String__Equals(pSVar5,NEADDGBNOKK,(MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = true;
    }
    else {
      if (NEADDGBNOKK == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar4 = System_String__Equals
                        (NEADDGBNOKK,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    }
    lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
    if ((byte)(((pHVar7->fields)._ILHGDFFOGHP_k__BackingField != false | OPNIEBGMEPI ^ 0xffU) &
              bVar4 & bVar3) != 0) {
      if (__this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar6 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pIVar6 == (IGFGDDANEPE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pIVar6->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pIVar6->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)item;
        thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

