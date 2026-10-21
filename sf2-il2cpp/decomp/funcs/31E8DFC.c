// MNLIBPAOCLG$$JGOJAPFCIHI @ RVA 0x31E8DFC

void MNLIBPAOCLG__JGOJAPFCIHI(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KBECBDOOHCO__o *__this_00;
  KBECBDOOHCO_o *__this_01;
  MethodInfo *method_00;
  int iVar1;
  
                    /* catch() { ... } // from try @ 032e8c6c with catch @ 032e8dfc */
                    /* catch() { ... } // from try @ 032e8df4 with catch @ 032e8e00 */
                    /* catch() { ... } // from try @ 032e8d7c with catch @ 032e8e04 */
                    /* catch() { ... } // from try @ 032e8de8 with catch @ 032e8e08 */
                    /* catch() { ... } // from try @ 032e8d08 with catch @ 032e8e0c */
                    /* catch() { ... } // from try @ 032e8de4 with catch @ 032e8e10 */
  if ((DAT_04566d7e & 1) == 0) {
                    /* catch() { ... } // from try @ 032e8de0 with catch @ 032e8e14 */
                    /* catch() { ... } // from try @ 032e8ddc with catch @ 032e8e18 */
                    /* catch() { ... } // from try @ 032e8dd8 with catch @ 032e8e1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Count__);
                    /* catch() { ... } // from try @ 032e8c24 with catch @ 032e8e20 */
                    /* catch() { ... } // from try @ 032e8c04 with catch @ 032e8e24 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
    DAT_04566d7e = 1;
  }
  __this_00 = (__this->fields).GHLEJFDLGHM;
  if (__this_00 != (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) {
                    /* try { // try from 032e8e3c to 033e8e3f has its CatchHandler @ 032e8e64 */
                    /* try { // try from 032e8e40 to 033e8e6b has its CatchHandler @ 032e8a38 */
    if (0 < (__this_00->fields)._size) {
      iVar1 = 0;
      do {
        __this_01 = (KBECBDOOHCO_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar1,
                               Method_System_Collections_Generic_List<KBECBDOOHCO>_get_Item__);
        if (__this_01 == (KBECBDOOHCO_o *)0x0) goto LAB_032e8eb0;
                    /* catch() { ... } // from try @ 032e8e3c with catch @ 032e8e64 */
        KBECBDOOHCO__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 032e8e6c to 033e8e7f has its CatchHandler @ 032e8ee8 */
        __this_00 = (__this->fields).GHLEJFDLGHM;
        if (__this_00 == (System_Collections_Generic_List_KBECBDOOHCO__o *)0x0) goto LAB_032e8eb0;
        iVar1 = iVar1 + 1;
                    /* catch() { ... } // from try @ 032e8dd4 with catch @ 032e8e80
                       try { // try from 032e8e80 to 033e8e9b has its CatchHandler @ 032e8a38 */
      } while (iVar1 < (__this_00->fields)._size);
                    /* catch() { ... } // from try @ 032e8dec with catch @ 032e8e84 */
      iVar1 = (__this->fields).MNJAAGGNAKE;
                    /* catch() { ... } // from try @ 032e8d30 with catch @ 032e8e88 */
                    /* catch() { ... } // from try @ 032e8ce4 with catch @ 032e8e8c */
      if (0x5a < iVar1) {
        MNLIBPAOCLG__MIHIILOKCEN(__this,method_00);
        iVar1 = (__this->fields).MNJAAGGNAKE;
      }
                    /* try { // try from 032e8e9c to 033e8e9f has its CatchHandler @ 032e8ec4 */
                    /* try { // try from 032e8ea0 to 033e8ecb has its CatchHandler @ 032e8a38 */
      (__this->fields).MNJAAGGNAKE = iVar1 + 1;
    }
    return;
  }
LAB_032e8eb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

