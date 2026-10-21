// DEKKGJNMFEB$$NFKLPHNDMNO @ RVA 0x322CFD4

System_Collections_Generic_List_GGLKHCAIGDI__o *
DEKKGJNMFEB__NFKLPHNDMNO(DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  GGLKHCAIGDI_array *pGVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566fc0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
    DAT_04566fc0 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_GGLKHCAIGDI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GGLKHCAIGDI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>__ctor__);
  __this_01 = (__this->fields).OKIANCELJJF;
  if (__this_01 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
      item = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
        return __this_00;
      }
      if ((GGLKHCAIGDI_o *)local_60.fields._current == (GGLKHCAIGDI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = GGLKHCAIGDI__ODLAALGANOO
                        ((GGLKHCAIGDI_o *)local_60.fields._current,NKCMBEFHFII,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<GGLKHCAIGDI>_Add__;
    } while (!bVar3);
    if (__this_00 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pGVar4 == (GGLKHCAIGDI_array *)0x0) break;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pGVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pGVar4->m_Items[(int)uVar1] = (GGLKHCAIGDI_o *)item;
      thunk_FUN_01c20e04(pGVar4->m_Items + (int)uVar1,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

