// GBAAAJLKFDA$$AEBJBGAOPJP @ RVA 0x31E114C

bool GBAAAJLKFDA__AEBJBGAOPJP
               (GBAAAJLKFDA_o *__this,System_String_o *EHKEOHNBLCK,int64_t EAJPLEMEEAB,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_long__o *__this_00;
  
  if ((DAT_04566d44 & 1) == 0) {
    FUN_01bab630(&GBAAAJLKFDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<long>_Contains__);
    FUN_01bab630(&StringLiteral_6018);
    DAT_04566d44 = 1;
  }
  bVar1 = System_String__IsNullOrWhiteSpace(EHKEOHNBLCK,(MethodInfo *)0x0);
  if (!bVar1) {
    if (EHKEOHNBLCK == (System_String_o *)0x0) goto LAB_032e121c;
                    /* try { // try from 032e11a8 to 033e11af has its CatchHandler @ 032e121c */
    bVar1 = System_String__StartsWith(EHKEOHNBLCK,StringLiteral_6018,(MethodInfo *)0x0);
    if (bVar1) {
      return false;
    }
  }
                    /* try { // try from 032e11d4 to 033e11df has its CatchHandler @ 032e1218 */
  if ((GBAAAJLKFDA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032e11e0 to 033e1203 has its CatchHandler @ 032e1110 */
    thunk_FUN_01ba7564();
  }
  __this_00 = GBAAAJLKFDA_TypeInfo->static_fields->KBLOLGCKCIM;
  if (__this_00 != (System_Collections_Generic_HashSet_long__o *)0x0) {
                    /* try { // try from 032e1204 to 033e1207 has its CatchHandler @ 032e1214 */
    bVar1 = System_Collections_Generic_HashSet<long>__Contains
                      (__this_00,EAJPLEMEEAB,
                       Method_System_Collections_Generic_HashSet<long>_Contains__);
                    /* try { // try from 032e1208 to 033e120b has its CatchHandler @ 032e1210 */
                    /* try { // try from 032e120c to 033e120f has its CatchHandler @ 032e1218 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e1208 with catch @ 032e1210
                       try { // try from 032e1210 to 033e1233 has its CatchHandler @ 032e1110 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e1204 with catch @ 032e1214
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e11d4 with catch @ 032e1218
                       catch(type#1 @ 03f99f68) { ... } // from try @ 032e120c with catch @ 032e1218
                        */
    return !bVar1;
  }
LAB_032e121c:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032e11a8 with catch @ 032e121c
                        */
  FUN_01bab8c8();
}

