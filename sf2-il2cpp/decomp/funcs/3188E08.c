// GJAEIBMAFGE$$MPGLNGGPOIK @ RVA 0x3188E08

int32_t GJAEIBMAFGE__MPGLNGGPOIK(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_T__o *__this;
  MethodInfo *extraout_x1;
  
  if ((DAT_045669f4 & 1) == 0) {
    FUN_01bab630(&ECNCJPCKOLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_IndexOf__);
    DAT_045669f4 = 1;
    method = extraout_x1;
  }
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
  FUN_01bab8c8();
}

