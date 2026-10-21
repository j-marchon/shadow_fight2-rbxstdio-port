// HHLPEJCDCBH$$CAAKLONNIGD @ RVA 0x32FD860

int32_t HHLPEJCDCBH__CAAKLONNIGD
                  (HHLPEJCDCBH_o *__this,IEFEBEDLHNN_o *JHMENEKPIBO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar5;
  IEFEBEDLHNN_array *pIVar6;
  
  if ((DAT_04567700 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    DAT_04567700 = 1;
  }
  pSVar5 = (__this->fields).ECFOALIBLLO;
  if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)JHMENEKPIBO,
                       Method_System_Collections_Generic_List<IEFEBEDLHNN>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<IEFEBEDLHNN>_Add__;
    pSVar5 = (__this->fields).ECFOALIBLLO;
    if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
      if (bVar3) {
        iVar4 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)JHMENEKPIBO,
                           Method_System_Collections_Generic_List<IEFEBEDLHNN>_IndexOf__);
        return iVar4;
      }
      pIVar6 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pIVar6 != (IEFEBEDLHNN_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
                    /* try { // try from 033fd928 to 034fd92f has its CatchHandler @ 033fd980 */
        if (uVar1 < (uint)pIVar6->max_length) {
                    /* try { // try from 033fd930 to 034fd933 has its CatchHandler @ 033fd970 */
                    /* try { // try from 033fd934 to 034fd937 has its CatchHandler @ 033fd95c */
          (pSVar5->fields)._size = uVar1 + 1;
                    /* try { // try from 033fd938 to 034fd93b has its CatchHandler @ 033fd3c0 */
          pIVar6->m_Items[(int)uVar1] = JHMENEKPIBO;
                    /* try { // try from 033fd93c to 034fd93f has its CatchHandler @ 033fd948 */
                    /* try { // try from 033fd940 to 034fd997 has its CatchHandler @ 033fd3c0 */
          thunk_FUN_01c20e04(pIVar6->m_Items + (int)uVar1,JHMENEKPIBO);
        }
        else {
                    /* catch() { ... } // from try @ 033fd93c with catch @ 033fd948 */
                    /* catch() { ... } // from try @ 033fd7e4 with catch @ 033fd94c */
                    /* catch() { ... } // from try @ 033fd7fc with catch @ 033fd950 */
                    /* catch() { ... } // from try @ 033fd7cc with catch @ 033fd954 */
                    /* catch() { ... } // from try @ 033fd7d8 with catch @ 033fd958 */
                    /* catch() { ... } // from try @ 033fd934 with catch @ 033fd95c */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)JHMENEKPIBO
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
                    /* catch() { ... } // from try @ 033fd784 with catch @ 033fd960 */
        pSVar5 = (__this->fields).ECFOALIBLLO;
                    /* catch() { ... } // from try @ 033fd820 with catch @ 033fd964 */
        if (pSVar5 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* catch() { ... } // from try @ 033fd778 with catch @ 033fd968 */
                    /* catch() { ... } // from try @ 033fd76c with catch @ 033fd96c */
                    /* catch() { ... } // from try @ 033fd930 with catch @ 033fd970 */
                    /* catch() { ... } // from try @ 033fd794 with catch @ 033fd974 */
                    /* catch() { ... } // from try @ 033fd704 with catch @ 033fd978 */
          return (pSVar5->fields)._size + -1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fd6a8 with catch @ 033fd97c */
  FUN_01bab8c8();
}

