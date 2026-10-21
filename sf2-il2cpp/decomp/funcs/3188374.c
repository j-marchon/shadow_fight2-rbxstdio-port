// GJAEIBMAFGE$$BCIBPHDMCHP @ RVA 0x3188374

int32_t GJAEIBMAFGE__BCIBPHDMCHP(int32_t OHLKNCPBCBL,MethodInfo *method)

{
  bool bVar1;
  GJAEIBMAFGE_IOGOIMAHPBA_o *__this;
  MethodInfo *extraout_x1;
  int32_t local_24;
  
                    /* try { // try from 0328838c to 0338844b has its CatchHandler @ 0328838c
                       catch() { ... } // from try @ 0328838c with catch @ 0328838c
                       catch() { ... } // from try @ 032884c8 with catch @ 0328838c
                       catch() { ... } // from try @ 032884f0 with catch @ 0328838c
                       catch() { ... } // from try @ 03288518 with catch @ 0328838c
                       catch() { ... } // from try @ 03288548 with catch @ 0328838c */
  if ((DAT_045669ec & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_045669ec = 1;
    method = extraout_x1;
  }
  local_24 = OHLKNCPBCBL;
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJAEIBMAFGE_TypeInfo,method);
  }
  __this = GJAEIBMAFGE_TypeInfo->static_fields->JKBIGHKGGKB;
  if (__this != (GJAEIBMAFGE_IOGOIMAHPBA_o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,OHLKNCPBCBL,
                       &local_24,
                       Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                      );
    if (!bVar1) {
      local_24 = OHLKNCPBCBL;
    }
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

