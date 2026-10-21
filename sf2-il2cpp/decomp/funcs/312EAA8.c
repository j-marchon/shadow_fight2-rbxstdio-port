// CNIFAIKGHKO$$LBHKALHJJHP @ RVA 0x312EAA8

void CNIFAIKGHKO__LBHKALHJJHP(CNIFAIKGHKO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  IFFFKKMMKFO_o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_01;
  int64_t key;
  
  if ((DAT_045666af & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_Add__);
    FUN_01bab630(&IFFFKKMMKFO_TypeInfo);
                    /* try { // try from 0322eae0 to 0332eb93 has its CatchHandler @ 0322eae0
                       catch() { ... } // from try @ 0322eae0 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ebb4 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ebe8 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ec10 with catch @ 0322eae0
                       catch() { ... } // from try @ 0322ec40 with catch @ 0322eae0 */
    DAT_045666af = 1;
  }
  if (HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0) {
    __this_01 = (__this->fields).NEJBDJKOGOM;
    key = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
    __this_00 = (IFFFKKMMKFO_o *)thunk_FUN_01bda818(IFFFKKMMKFO_TypeInfo);
    IFFFKKMMKFO___ctor(__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (__this_01 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
      System_Collections_Generic_Dictionary<long,_object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,key,
                 (Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_Add__);
      ppSVar1 = &(__this->fields).ELMHAOJGABL;
      *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
      thunk_FUN_01c20e04(ppSVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

