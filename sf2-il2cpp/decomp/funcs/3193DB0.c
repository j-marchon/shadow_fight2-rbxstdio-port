// ABNLGBHKOCE$$HPGNLPIBDBN @ RVA 0x3193DB0

void ABNLGBHKOCE__HPGNLPIBDBN
               (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               System_Collections_Generic_List_GBKCLIFGIFN__o *PFDNCKLLMBL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar4;
  int32_t iVar5;
  GBKCLIFGIFN_o *item;
  GBKCLIFGIFN_array *pGVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566a52 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_17320);
    DAT_04566a52 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                          );
        PFDEAPMMFAP = local_70.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
          return;
        }
        if ((IENLNOEDCFF_o *)local_70.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = IENLNOEDCFF__NHGGBEACKBD
                          ((IENLNOEDCFF_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar5 != 8) break;
        bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
           ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_17320,(MethodInfo *)0x0);
        }
        else {
          ABNLGBHKOCE__HPGNLPIBDBN
                    (((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor,PFDNCKLLMBL,method);
        }
      }
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      item = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__;
    } while (item == (GBKCLIFGIFN_o *)0x0);
    if (PFDNCKLLMBL == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar6 = (PFDNCKLLMBL->fields)._items;
    (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
    if (pGVar6 == (GBKCLIFGIFN_array *)0x0) break;
    uVar2 = (PFDNCKLLMBL->fields)._size;
    if (uVar2 < (uint)pGVar6->max_length) {
      (PFDNCKLLMBL->fields)._size = uVar2 + 1;
      pGVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,(Il2CppObject *)item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

