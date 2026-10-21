// OLKKAIFGGAK$$KJJJHPFIDKH @ RVA 0x34F6590

void OLKKAIFGGAK__KJJJHPFIDKH
               (OLKKAIFGGAK_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               int32_t OAFGMHOFEKM,IEFEBEDLHNN_o *IIBPJLKGEBP,MethodInfo *method)

{
  int capacity;
  uint uVar1;
  long lVar2;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_01;
  Il2CppObject *pIVar3;
  CNDPAJOLKFN_o *__this_02;
  CNDPAJOLKFN_array *pCVar4;
  int index;
  float OKMABLDHNLJ;
  float PIBBGDEBBJC;
  float fVar5;
  
                    /* try { // try from 035f6590 to 036f6597 has its CatchHandler @ 035f6764 */
                    /* try { // try from 035f65ac to 036f65b3 has its CatchHandler @ 035f66d4 */
                    /* try { // try from 035f65c0 to 036f65cb has its CatchHandler @ 035f66c8 */
  if ((DAT_045687e3 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
                    /* try { // try from 035f6604 to 036f660f has its CatchHandler @ 035f66c4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
    DAT_045687e3 = 1;
  }
  if (OAFGMHOFEKM == -1) {
    if (OABFBHCCODF == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_035f6794;
    capacity = (OABFBHCCODF->fields)._size;
    __this_01 = (System_Collections_Generic_List_CNDPAJOLKFN__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
                    /* try { // try from 035f665c to 036f6667 has its CatchHandler @ 035f66bc */
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,capacity,
               Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    if (0 < capacity) {
      index = 0;
      do {
                    /* try { // try from 035f668c to 036f6693 has its CatchHandler @ 035f6778 */
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f6794;
                    /* try { // try from 035f669c to 036f669f has its CatchHandler @ 035f66d0 */
        fVar5 = *(float *)&pIVar3[1].klass;
                    /* try { // try from 035f66a4 to 036f66ab has its CatchHandler @ 035f66cc */
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
                    /* try { // try from 035f66b0 to 036f66b3 has its CatchHandler @ 035f66c0 */
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f6794;
                    /* try { // try from 035f66b4 to 036f66e3 has its CatchHandler @ 035f6458 */
                    /* catch() { ... } // from try @ 035f6630 with catch @ 035f66b8 */
        OKMABLDHNLJ = *(float *)((long)&pIVar3[1].klass + 4);
                    /* catch() { ... } // from try @ 035f665c with catch @ 035f66bc */
                    /* catch() { ... } // from try @ 035f66b0 with catch @ 035f66c0 */
                    /* catch() { ... } // from try @ 035f6604 with catch @ 035f66c4 */
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
                    /* catch() { ... } // from try @ 035f65c0 with catch @ 035f66c8 */
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f6794;
                    /* catch() { ... } // from try @ 035f66a4 with catch @ 035f66cc */
        PIBBGDEBBJC = *(float *)&pIVar3[1].monitor;
                    /* catch() { ... } // from try @ 035f669c with catch @ 035f66d0 */
                    /* catch() { ... } // from try @ 035f65ac with catch @ 035f66d4 */
        __this_02 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
                    /* try { // try from 035f66e4 to 036f66e7 has its CatchHandler @ 035f6758 */
                    /* try { // try from 035f66e8 to 036f6723 has its CatchHandler @ 035f6458 */
        CNDPAJOLKFN___ctor(__this_02,-fVar5,OKMABLDHNLJ,PIBBGDEBBJC,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__;
        if (__this_01 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_035f6794;
        pCVar4 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pCVar4 == (CNDPAJOLKFN_array *)0x0) goto LAB_035f6794;
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pCVar4->max_length) {
                    /* try { // try from 035f6724 to 036f673f has its CatchHandler @ 035f67d8 */
          (__this_01->fields)._size = uVar1 + 1;
          pCVar4->m_Items[(int)uVar1] = __this_02;
          thunk_FUN_01c20e04(pCVar4->m_Items + (int)uVar1,__this_02);
        }
        else {
                    /* try { // try from 035f6740 to 036f6743 has its CatchHandler @ 035f6774 */
                    /* try { // try from 035f6744 to 036f674b has its CatchHandler @ 035f6770 */
                    /* try { // try from 035f674c to 036f674f has its CatchHandler @ 035f676c */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_02,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 035f6750 to 036f6753 has its CatchHandler @ 035f6768 */
        index = index + 1;
                    /* try { // try from 035f6754 to 036f678b has its CatchHandler @ 035f6458 */
                    /* catch() { ... } // from try @ 035f66e4 with catch @ 035f6758 */
      } while (capacity != index);
    }
    __this_00 = (__this->fields).HMIAFJALFCJ;
    OABFBHCCODF = __this_01;
  }
  else {
    __this_00 = (__this->fields).HMIAFJALFCJ;
  }
  if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
                    /* catch() { ... } // from try @ 035f6750 with catch @ 035f6768 */
                    /* catch() { ... } // from try @ 035f674c with catch @ 035f676c */
                    /* catch() { ... } // from try @ 035f6744 with catch @ 035f6770 */
                    /* catch() { ... } // from try @ 035f6740 with catch @ 035f6774 */
                    /* catch() { ... } // from try @ 035f668c with catch @ 035f6778 */
                    /* catch() { ... } // from try @ 035f6568 with catch @ 035f677c */
                    /* try { // try from 035f678c to 036f678f has its CatchHandler @ 035f67b4 */
                    /* try { // try from 035f6790 to 036f67bb has its CatchHandler @ 035f6458 */
    GBJGJEGPHKD__KJJJHPFIDKH(__this_00,OABFBHCCODF,IIBPJLKGEBP,(MethodInfo *)0x0);
    return;
  }
LAB_035f6794:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

