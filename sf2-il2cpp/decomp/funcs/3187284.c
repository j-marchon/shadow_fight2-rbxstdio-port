// GJAEIBMAFGE$$LOIDNFBMHNN @ RVA 0x3187284

int32_t GJAEIBMAFGE__LOIDNFBMHNN(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03287294 to 0338729b has its CatchHandler @ 032873c8 */
  if ((DAT_045669e6 & 1) == 0) {
                    /* try { // try from 032872ac to 033872b3 has its CatchHandler @ 032873cc */
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
                    /* try { // try from 032872c0 to 033872cb has its CatchHandler @ 032873d0 */
    DAT_045669e6 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032872cc to 033872d7 has its CatchHandler @ 032873d4 */
  if ((ECNCJPCKOLN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECNCJPCKOLN_TypeInfo,method);
  }
  __this = (System_Collections_Generic_List_T__o *)ECNCJPCKOLN__BEKNIMCNOFN((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    iVar1 = System_Collections_Generic_List<Int32Enum>__IndexOf
                      (__this,OHLKNCPBCBL,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032872fc to 0338736b has its CatchHandler @ 032875a4 */
  FUN_01bab8c8();
}

