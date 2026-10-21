// IENLNOEDCFF$$GAMLPHKAAHF @ RVA 0x30F23B8

int32_t IENLNOEDCFF__GAMLPHKAAHF
                  (System_Collections_Generic_List_IENLNOEDCFF__o *JGHIJMJNJLE,int32_t NBNICCEEBHK,
                  System_Collections_Generic_List_IENLNOEDCFF__o *PFDNCKLLMBL,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  Il2CppObject *item;
  bool bVar5;
  int32_t iVar6;
  IENLNOEDCFF_array *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 031f23cc to 032f23cf has its CatchHandler @ 031f23f8 */
                    /* try { // try from 031f23d0 to 032f2407 has its CatchHandler @ 031f22d8 */
  if ((DAT_04566433 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* catch() { ... } // from try @ 031f23cc with catch @ 031f23f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
                    /* try { // try from 031f2408 to 032f240f has its CatchHandler @ 031f2424 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
                    /* try { // try from 031f2410 to 032f241b has its CatchHandler @ 031f22d8 */
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 031f241c to 032f2423 has its CatchHandler @ 031f2424 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f2408 with catch @ 031f2424
                       catch(type#2 @ 00000000) { ... } // from try @ 031f241c with catch @ 031f2424
                        */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_get_Count__);
    DAT_04566433 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((PFDNCKLLMBL != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     (JGHIJMJNJLE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)) {
    iVar1 = (PFDNCKLLMBL->fields)._size;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)JGHIJMJNJLE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      item = local_70.fields._current;
      if (!bVar5) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
        return (PFDNCKLLMBL->fields)._size - iVar1;
      }
      if ((IENLNOEDCFF_o *)local_70.fields._current == (IENLNOEDCFF_o *)0x0) break;
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((IENLNOEDCFF_Fields *)((long)local_70.fields._current + 0x10))->
                         JDNKKGPNHPB).fields,(MethodInfo *)0x0);
      lVar4 = Method_System_Collections_Generic_List<IENLNOEDCFF>_Add__;
      if (iVar6 == NBNICCEEBHK) {
        pIVar7 = (PFDNCKLLMBL->fields)._items;
        (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
        if (pIVar7 == (IENLNOEDCFF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (PFDNCKLLMBL->fields)._size;
        if (uVar3 < (uint)pIVar7->max_length) {
          (PFDNCKLLMBL->fields)._size = uVar3 + 1;
          pIVar7->m_Items[(int)uVar3] = (IENLNOEDCFF_o *)item;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (((IENLNOEDCFF_Fields *)((long)item + 0x10))->JDNKKGPNHPB).fields,
                         (MethodInfo *)0x0);
      if (iVar6 == 8) {
        bVar2 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if ((bVar2 <= (((IENLNOEDCFF_c *)item->klass)->_2).naturalAligment) &&
           ((((IENLNOEDCFF_c *)item->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          IENLNOEDCFF__GAMLPHKAAHF
                    (((IENLNOEDCFF_o *)((long)item + 0x28))->monitor,NBNICCEEBHK,PFDNCKLLMBL,method)
          ;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

