// GJAEIBMAFGE$$CEBKDKHDGFA @ RVA 0x318861C

void GJAEIBMAFGE__CEBKDKHDGFA
               (System_Collections_Generic_List_MIBHAJBEMIK__o *LKFALEIFDIO,MethodInfo *method)

{
  System_Predicate_T__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03288628 to 0338862f has its CatchHandler @ 032886e0 */
  if ((DAT_045669f2 & 1) == 0) {
    FUN_01bab630(&Method_ECNCJPCKOLN_MJGNIHLBKJJ__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_get_Count__);
                    /* try { // try from 03288678 to 033886a7 has its CatchHandler @ 032886dc */
    FUN_01bab630(&System_Predicate<MIBHAJBEMIK>_TypeInfo);
    DAT_045669f2 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Predicate_T__o *)
           thunk_FUN_01bda818(System_Predicate<MIBHAJBEMIK>_TypeInfo,method);
  System_Predicate<Int32Enum>___ctor();
                    /* try { // try from 032886a8 to 033886cf has its CatchHandler @ 03288560 */
  if ((LKFALEIFDIO != (System_Collections_Generic_List_MIBHAJBEMIK__o *)0x0) &&
     (pSVar2 = System_Collections_Generic_List<Int32Enum>__FindAll
                         ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,pSVar1,
                          Method_System_Collections_Generic_List<MIBHAJBEMIK>_FindAll__),
     pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
                    /* try { // try from 032886d0 to 033886d3 has its CatchHandler @ 032886d8 */
                    /* try { // try from 032886d4 to 033886f7 has its CatchHandler @ 03288560 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032886d0 with catch @ 032886d8
                        */
    if ((pSVar2->fields)._size < (LKFALEIFDIO->fields)._size + -1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288678 with catch @ 032886dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03288628 with catch @ 032886e0
                        */
      return;
    }
    pSVar1 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<MIBHAJBEMIK>_TypeInfo);
                    /* try { // try from 032886f8 to 033886fb has its CatchHandler @ 0328871c */
                    /* try { // try from 032886fc to 03388723 has its CatchHandler @ 03288560 */
    System_Predicate<Int32Enum>___ctor();
                    /* catch() { ... } // from try @ 032886f8 with catch @ 0328871c */
                    /* try { // try from 03288724 to 0338872b has its CatchHandler @ 03288740 */
    System_Collections_Generic_List<Int32Enum>__RemoveAll
              ((System_Collections_Generic_List_T__o *)LKFALEIFDIO,pSVar1,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_RemoveAll__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0328872c to 03388737 has its CatchHandler @ 03288560 */
  FUN_01bab8c8();
}

