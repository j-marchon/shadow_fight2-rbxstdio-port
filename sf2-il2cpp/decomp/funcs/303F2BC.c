// PJKHAJKEHEL$$ACBMLHJIFMD @ RVA 0x303F2BC

System_Collections_Generic_List_HOOAAGABMBL__o *
PJKHAJKEHEL__ACBMLHJIFMD(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar3;
  HOOAAGABMBL_array *pHVar4;
  
  if ((DAT_04565da3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo);
    DAT_04565da3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HOOAAGABMBL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).HLAAFCIMBAP;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0313f584;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0313f584;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
                    /* try { // try from 0313f370 to 0323f42b has its CatchHandler @ 0313f370
                       catch() { ... } // from try @ 0313f370 with catch @ 0313f370
                       catch() { ... } // from try @ 0313f4fc with catch @ 0313f370
                       catch() { ... } // from try @ 0313f5b4 with catch @ 0313f370
                       catch() { ... } // from try @ 0313f668 with catch @ 0313f370
                       catch() { ... } // from try @ 0313f70c with catch @ 0313f370 */
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).PNAAPNFPCPI;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0313f584;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0313f584;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).NBHGHLIPCAP;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0313f584;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0313f584;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 0313f42c to 0323f43f has its CatchHandler @ 0313f6a4 */
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).AIDDHEHFBEG;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0313f584;
                    /* try { // try from 0313f460 to 0323f46b has its CatchHandler @ 0313f680 */
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0313f584;
    uVar1 = (__this_00->fields)._size;
                    /* try { // try from 0313f480 to 0323f483 has its CatchHandler @ 0313f67c */
    if (uVar1 < (uint)pHVar4->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
                    /* try { // try from 0313f4b0 to 0323f4b3 has its CatchHandler @ 0313f688 */
  pHVar3 = (__this->fields).PEMECEBIJDM;
  if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0313f584;
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 == (HOOAAGABMBL_array *)0x0) goto LAB_0313f584;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pHVar4->max_length) {
                    /* try { // try from 0313f4e8 to 0323f4fb has its CatchHandler @ 0313f678 */
      (__this_00->fields)._size = uVar1 + 1;
      pHVar4->m_Items[(int)uVar1] = pHVar3;
      thunk_FUN_01c20e04();
    }
    else {
                    /* try { // try from 0313f4fc to 0323f563 has its CatchHandler @ 0313f370 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar2 = Method_System_Collections_Generic_List<HOOAAGABMBL>_Add__;
  pHVar3 = (__this->fields).IIDEPPHFJPA;
  if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
    return __this_00;
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    pHVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar4 != (HOOAAGABMBL_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pHVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pHVar4->m_Items[(int)uVar1] = pHVar3;
        thunk_FUN_01c20e04();
        return __this_00;
      }
                    /* try { // try from 0313f564 to 0323f567 has its CatchHandler @ 0313f698 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pHVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return __this_00;
    }
  }
LAB_0313f584:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

