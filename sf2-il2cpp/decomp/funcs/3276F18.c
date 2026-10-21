// OCMLPCKBHPN$$EANLCKFPOAH @ RVA 0x3276F18

System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o *
OCMLPCKBHPN__EANLCKFPOAH(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
  *pSVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o *__this;
  System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____array
  *pSVar4;
  int iVar5;
  
                    /* try { // try from 03376f28 to 03476f5b has its CatchHandler @ 03376b8c */
                    /* catch() { ... } // from try @ 03376e80 with catch @ 03376f2c */
                    /* catch() { ... } // from try @ 03376e50 with catch @ 03376f30 */
                    /* catch() { ... } // from try @ 03376e64 with catch @ 03376f34 */
                    /* catch() { ... } // from try @ 03376f0c with catch @ 03376f38 */
  if ((DAT_04567250 & 1) == 0) {
                    /* catch() { ... } // from try @ 03376f04 with catch @ 03376f3c */
                    /* catch() { ... } // from try @ 03376f14 with catch @ 03376f40 */
                    /* catch() { ... } // from try @ 03376e34 with catch @ 03376f44 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_Add__
                );
                    /* catch() { ... } // from try @ 03376d90 with catch @ 03376f48 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>__ctor__
                );
                    /* try { // try from 03376f5c to 03476f5f has its CatchHandler @ 03377104 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>__ctor__
                );
                    /* try { // try from 03376f60 to 034770d7 has its CatchHandler @ 03376b8c */
    FUN_01bab630(&
                 System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_TypeInfo
                );
    FUN_01bab630(&
                 System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_TypeInfo
                );
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_04567250 = 1;
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH ==
      (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
       *)0x0) {
    pSVar3 = (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
              *)thunk_FUN_01bda818(
                                  System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>__ctor__
              );
    if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH = pSVar3;
    thunk_FUN_01c20e04(OCMLPCKBHPN_TypeInfo->static_fields,pSVar3);
    iVar5 = 3;
    do {
      if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH;
      __this = (System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____o
                *)thunk_FUN_01bda818(
                                    System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_TypeInfo
                                    );
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>__ctor__
                );
      lVar2 = 
      Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_Add__
      ;
      if (pSVar3 == (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
                     *)0x0) {
LAB_033770e0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (pSVar3->fields)._items;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (pSVar4 == (System_Collections_Generic_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string____array
                     *)0x0) goto LAB_033770e0;
      uVar1 = (pSVar3->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (pSVar3->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1] = __this;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,__this);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033770d8 to 034770ef has its CatchHandler @ 03377194 */
  return OCMLPCKBHPN_TypeInfo->static_fields->JONKEOLIMBH;
}

