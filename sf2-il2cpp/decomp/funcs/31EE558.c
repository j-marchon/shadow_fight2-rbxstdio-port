// NLPJLHOEAOE$$BPONOOAAGHN @ RVA 0x31EE558

NLPJLHOEAOE_NNODIMKLNFM_o *
NLPJLHOEAOE__BPONOOAAGHN(NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  NLPJLHOEAOE_NNODIMKLNFM_o *item_00;
  NLPJLHOEAOE_NNODIMKLNFM_array *pNVar4;
  System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566db4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_Remove__);
    DAT_04566db4 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  item_00 = NLPJLHOEAOE__BDAKNLMEKCN(__this,AHDGNOJPPIB,method);
  pSVar5 = (__this->fields).KBGICKAOBAI;
  if (pSVar5 != (System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_MoveNext__
                        );
      item = local_60.fields._current;
      if (!bVar3) goto LAB_032ee67c;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (item_00 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        (local_60.fields._current[2].monitor,(item_00->fields).KGLJICLJHEL,
                         (MethodInfo *)0x0);
    } while (!bVar3);
    pSVar5 = (__this->fields).KBGICKAOBAI;
    if (pSVar5 == (System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar5,item,
               Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_Remove__);
LAB_032ee67c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_List_Enumerator<NLPJLHOEAOE_NNODIMKLNFM>_Dispose__)
    ;
    lVar2 = Method_System_Collections_Generic_List<NLPJLHOEAOE_NNODIMKLNFM>_Add__;
    pSVar5 = (__this->fields).KBGICKAOBAI;
    if (pSVar5 != (System_Collections_Generic_List_NLPJLHOEAOE_NNODIMKLNFM__o *)0x0) {
      pNVar4 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pNVar4 != (NLPJLHOEAOE_NNODIMKLNFM_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pNVar4->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pNVar4->m_Items[(int)uVar1] = item_00;
          thunk_FUN_01c20e04(pNVar4->m_Items + (int)uVar1,item_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        return item_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

