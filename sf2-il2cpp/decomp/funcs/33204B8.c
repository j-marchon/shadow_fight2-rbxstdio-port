// Nekki.SF2.GUI.Fight.RewardPanel$$GetRanges @ RVA 0x33204B8

void Nekki_SF2_GUI_Fight_RewardPanel__GetRanges
               (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *EOIJMGHCGLP,
               int32_t LANCNMIELKF,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_int__int__o *pMVar3;
  int32_t NANHIJPKIAP;
  MGNDHCBAPEN_int__int__array *pMVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
                    /* try { // try from 034204d0 to 035204df has its CatchHandler @ 03420694 */
  if ((DAT_04567846 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__);
                    /* try { // try from 034204ec to 035204f7 has its CatchHandler @ 0342067c */
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 03420508 to 0352050f has its CatchHandler @ 03420678 */
    DAT_04567846 = 1;
  }
  uVar8 = LANCNMIELKF - 1;
  if (LANCNMIELKF < 1) {
    return;
  }
  if (LANCNMIELKF < 0xb) {
    iVar6 = 0;
  }
  else {
    iVar6 = LANCNMIELKF + 4;
    iVar5 = 0;
    do {
      NANHIJPKIAP = iVar5;
      iVar7 = iVar6;
      pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0342054c to 0352056f has its CatchHandler @ 03420684 */
      MGNDHCBAPEN<int,_int>___ctor
                (pMVar3,NANHIJPKIAP,NANHIJPKIAP + 4,Method_MGNDHCBAPEN<int,_int>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
      if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
      goto LAB_03420780;
      pMVar4 = (EOIJMGHCGLP->fields)._items;
                    /* try { // try from 03420570 to 0352064f has its CatchHandler @ 0342023c */
      (EOIJMGHCGLP->fields)._version = (EOIJMGHCGLP->fields)._version + 1;
      if (pMVar4 == (MGNDHCBAPEN_int__int__array *)0x0) goto LAB_03420780;
      uVar8 = (EOIJMGHCGLP->fields)._size;
      if (uVar8 < (uint)pMVar4->max_length) {
        (EOIJMGHCGLP->fields)._size = uVar8 + 1;
        pMVar4->m_Items[(int)uVar8] = pMVar3;
        thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar8,pMVar3);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar6 = iVar7 + -5;
      iVar5 = NANHIJPKIAP + 5;
    } while (0xe < iVar6);
    iVar6 = NANHIJPKIAP + 5;
    uVar8 = iVar7 - 10;
  }
  if ((int)uVar8 < 5) {
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
    MGNDHCBAPEN<int,_int>___ctor(pMVar3,iVar6,uVar8 + iVar6,Method_MGNDHCBAPEN<int,_int>__ctor__);
    if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
    goto LAB_03420780;
    iVar5 = (EOIJMGHCGLP->fields)._version;
    pMVar4 = (EOIJMGHCGLP->fields)._items;
  }
  else {
                    /* try { // try from 03420650 to 03520657 has its CatchHandler @ 03420688 */
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 03420658 to 0352065b has its CatchHandler @ 03420698 */
                    /* try { // try from 0342065c to 0352065f has its CatchHandler @ 03420680 */
                    /* try { // try from 03420660 to 03520663 has its CatchHandler @ 03420698 */
    iVar7 = iVar6 + (uVar8 >> 1);
                    /* try { // try from 03420664 to 03520667 has its CatchHandler @ 0342023c */
                    /* try { // try from 03420668 to 0352066b has its CatchHandler @ 03420674 */
                    /* try { // try from 0342066c to 035206a7 has its CatchHandler @ 0342023c */
                    /* catch() { ... } // from try @ 03420668 with catch @ 03420674 */
    MGNDHCBAPEN<int,_int>___ctor(pMVar3,iVar6,iVar7,Method_MGNDHCBAPEN<int,_int>__ctor__);
    lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
                    /* catch() { ... } // from try @ 03420508 with catch @ 03420678 */
    if (EOIJMGHCGLP == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0)
    goto LAB_03420780;
                    /* catch() { ... } // from try @ 034204ec with catch @ 0342067c */
                    /* catch() { ... } // from try @ 0342065c with catch @ 03420680 */
                    /* catch() { ... } // from try @ 0342054c with catch @ 03420684 */
                    /* catch() { ... } // from try @ 03420650 with catch @ 03420688 */
    pMVar4 = (EOIJMGHCGLP->fields)._items;
                    /* catch() { ... } // from try @ 0342046c with catch @ 0342068c */
                    /* catch() { ... } // from try @ 03420410 with catch @ 03420690 */
                    /* catch() { ... } // from try @ 034204d0 with catch @ 03420694 */
    (EOIJMGHCGLP->fields)._version = (EOIJMGHCGLP->fields)._version + 1;
                    /* catch() { ... } // from try @ 03420658 with catch @ 03420698
                       catch() { ... } // from try @ 03420660 with catch @ 03420698 */
    if (pMVar4 == (MGNDHCBAPEN_int__int__array *)0x0) goto LAB_03420780;
    uVar1 = (EOIJMGHCGLP->fields)._size;
                    /* try { // try from 034206a8 to 035206ab has its CatchHandler @ 034206bc */
    if (uVar1 < (uint)pMVar4->max_length) {
      (EOIJMGHCGLP->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 034206a8 with catch @ 034206bc */
      pMVar4->m_Items[(int)uVar1] = pMVar3;
      thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar1,pMVar3);
    }
    else {
                    /* try { // try from 034206cc to 03520733 has its CatchHandler @ 03420748 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    pMVar3 = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
    MGNDHCBAPEN<int,_int>___ctor
              (pMVar3,iVar7 + 1,uVar8 + iVar6,Method_MGNDHCBAPEN<int,_int>__ctor__);
    iVar5 = (EOIJMGHCGLP->fields)._version;
    pMVar4 = (EOIJMGHCGLP->fields)._items;
  }
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Add__;
  (EOIJMGHCGLP->fields)._version = iVar5 + 1;
  if (pMVar4 != (MGNDHCBAPEN_int__int__array *)0x0) {
    uVar8 = (EOIJMGHCGLP->fields)._size;
    if (uVar8 < (uint)pMVar4->max_length) {
      (EOIJMGHCGLP->fields)._size = uVar8 + 1;
                    /* try { // try from 03420734 to 0352073f has its CatchHandler @ 0342023c */
      pMVar4->m_Items[(int)uVar8] = pMVar3;
                    /* try { // try from 03420740 to 03520747 has its CatchHandler @ 03420748 */
                    /* catch() { ... } // from try @ 034206cc with catch @ 03420748
                       catch() { ... } // from try @ 03420740 with catch @ 03420748 */
      thunk_FUN_01c20e04(pMVar4->m_Items + (int)uVar8,pMVar3);
      return;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)EOIJMGHCGLP,(Il2CppObject *)pMVar3,
               *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_03420780:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

