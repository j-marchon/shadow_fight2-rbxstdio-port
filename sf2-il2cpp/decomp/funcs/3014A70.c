// ECENNHNBAME$$HPGNLPIBDBN @ RVA 0x3014A70

void ECENNHNBAME__HPGNLPIBDBN
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
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  GBKCLIFGIFN_array *pGVar6;
  System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK_00;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 03114a8c to 03214b8f has its CatchHandler @ 03114a8c
                       catch() { ... } // from try @ 03114a8c with catch @ 03114a8c
                       catch() { ... } // from try @ 03114d28 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114d98 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114e78 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114ea8 with catch @ 03114a8c
                       catch() { ... } // from try @ 03114ef4 with catch @ 03114a8c */
  if ((DAT_04565bcb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_17320);
    DAT_04565bcb = 1;
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
                    /* try { // try from 03114ca4 to 03214ca7 has its CatchHandler @ 03114d98 */
                    /* try { // try from 03114ca8 to 03214cb7 has its CatchHandler @ 03114da4 */
          return;
        }
                    /* try { // try from 03114b90 to 03214ba3 has its CatchHandler @ 03114dbc */
        if ((IENLNOEDCFF_o *)local_70.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = IENLNOEDCFF__NHGGBEACKBD
                          ((IENLNOEDCFF_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar5 != 8) break;
                    /* try { // try from 03114bb4 to 03214bbb has its CatchHandler @ 03114de0 */
        bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03114bc0 to 03214bc7 has its CatchHandler @ 03114ddc */
                    /* try { // try from 03114bd0 to 03214bdf has its CatchHandler @ 03114dd4 */
        if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
           ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03114bec to 03214bff has its CatchHandler @ 03114dd0 */
          UnityEngine_Debug__LogError(StringLiteral_17320,(MethodInfo *)0x0);
        }
        else {
          AHEFOIOKDOK_00 = ((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor;
          if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03114c88 to 03214c93 has its CatchHandler @ 03114d9c */
          ECENNHNBAME__HPGNLPIBDBN(AHEFOIOKDOK_00,PFDNCKLLMBL,method);
        }
      }
      method_00 = extraout_x1;
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03114c00 to 03214c0b has its CatchHandler @ 03114dcc */
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      item = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,method_00);
      lVar3 = Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__;
    } while (item == (GBKCLIFGIFN_o *)0x0);
                    /* try { // try from 03114c14 to 03214c1f has its CatchHandler @ 03114db4 */
    if (PFDNCKLLMBL == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar6 = (PFDNCKLLMBL->fields)._items;
                    /* try { // try from 03114c24 to 03214c2f has its CatchHandler @ 03114db0 */
    (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
    if (pGVar6 == (GBKCLIFGIFN_array *)0x0) break;
    uVar2 = (PFDNCKLLMBL->fields)._size;
    if (uVar2 < (uint)pGVar6->max_length) {
                    /* try { // try from 03114c44 to 03214c4f has its CatchHandler @ 03114da8 */
      (PFDNCKLLMBL->fields)._size = uVar2 + 1;
      pGVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
                    /* try { // try from 03114c54 to 03214c63 has its CatchHandler @ 03114da0 */
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

