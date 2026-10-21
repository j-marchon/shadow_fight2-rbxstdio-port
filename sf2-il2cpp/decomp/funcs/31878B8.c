// GJAEIBMAFGE$$NICPFLNLBFL @ RVA 0x31878B8

int32_t GJAEIBMAFGE__NICPFLNLBFL(int32_t MFMKPNIGADN,int32_t OHLKNCPBCBL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  int32_t local_24;
  
  local_24 = OHLKNCPBCBL;
  if ((DAT_045669f1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    DAT_045669f1 = 1;
  }
                    /* try { // try from 03287914 to 0338791b has its CatchHandler @ 03287c44 */
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                    /* try { // try from 03287920 to 03387927 has its CatchHandler @ 03287c48 */
  if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = GJAEIBMAFGE_TypeInfo->static_fields->CFGHLIFIAKK;
  if (__this != (System_Collections_Generic_Dictionary_ODLJFAIHELG__GJAEIBMAFGE_IOGOIMAHPBA__o *)0x0
     ) {
                    /* try { // try from 03287938 to 0338793f has its CatchHandler @ 03287c3c */
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__TryGetValue
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,MFMKPNIGADN,
                       (Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<ODLJFAIHELG,_GJAEIBMAFGE_IOGOIMAHPBA>_TryGetValue__
                      );
                    /* try { // try from 03287950 to 03387957 has its CatchHandler @ 03287c38 */
    if (bVar1) {
      if (local_38 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)
      goto LAB_03287990;
                    /* try { // try from 03287964 to 0338796f has its CatchHandler @ 03287c24 */
      System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__TryGetValue
                (local_38,OHLKNCPBCBL,&local_24,
                 Method_System_Collections_Generic_Dictionary<MIBHAJBEMIK,_MIBHAJBEMIK>_TryGetValue__
                );
                    /* try { // try from 03287974 to 03387983 has its CatchHandler @ 03287c28 */
      OHLKNCPBCBL = local_24;
    }
    return OHLKNCPBCBL;
  }
LAB_03287990:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

