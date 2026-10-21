// HHLPEJCDCBH$$ELFKPOFCCHF @ RVA 0x32FD980

void HHLPEJCDCBH__ELFKPOFCCHF
               (HHLPEJCDCBH_o *__this,IEFEBEDLHNN_o *NFMPMCLABAC,IEFEBEDLHNN_o *IFPALBKEPFA,
               IEFEBEDLHNN_o *LILFDDNKIAD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t item;
  int32_t item_00;
  int32_t item_01;
  IEFEBEDLHNN_o *method_00;
  System_Collections_Generic_List_int__o *__this_00;
  System_Int32_array *pSVar3;
  
                    /* catch() { ... } // from try @ 033fd928 with catch @ 033fd980 */
                    /* try { // try from 033fd998 to 034fd99b has its CatchHandler @ 033fd9a8 */
  method_00 = IFPALBKEPFA;
  if ((DAT_04567701 & 1) == 0) {
                    /* catch() { ... } // from try @ 033fd998 with catch @ 033fd9a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
                    /* try { // try from 033fd9b8 to 034fda1f has its CatchHandler @ 033fda34 */
    DAT_04567701 = 1;
  }
  item = HHLPEJCDCBH__CAAKLONNIGD(__this,NFMPMCLABAC,(MethodInfo *)method_00);
  item_00 = HHLPEJCDCBH__CAAKLONNIGD(__this,IFPALBKEPFA,(MethodInfo *)method_00);
  item_01 = HHLPEJCDCBH__CAAKLONNIGD(__this,LILFDDNKIAD,(MethodInfo *)method_00);
  lVar2 = Method_System_Collections_Generic_List<int>_Add__;
  __this_00 = (__this->fields).ECCEGMJMOBJ;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Int32_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
                    /* try { // try from 033fda20 to 034fda2b has its CatchHandler @ 033fd3c0 */
      if (uVar1 < (uint)pSVar3->max_length) {
                    /* try { // try from 033fda2c to 034fda33 has its CatchHandler @ 033fda34 */
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = item;
                    /* catch() { ... } // from try @ 033fd9b8 with catch @ 033fda34
                       catch() { ... } // from try @ 033fda2c with catch @ 033fda34 */
      }
      else {
        System_Collections_Generic_List<int>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        __this_00 = (__this->fields).ECCEGMJMOBJ;
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_033fdb20;
      }
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      pSVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar3 != (System_Int32_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar3->m_Items[(int)uVar1] = item_00;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item_00,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          __this_00 = (__this->fields).ECCEGMJMOBJ;
          if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_033fdb20;
        }
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        pSVar3 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar3 != (System_Int32_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar3->m_Items[(int)uVar1] = item_01;
            return;
          }
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item_01,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_033fdb20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

