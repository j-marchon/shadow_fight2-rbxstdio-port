// CNIFAIKGHKO$$KNMENIBLFGF @ RVA 0x312EB54

IFFFKKMMKFO_o *
CNIFAIKGHKO__KNMENIBLFGF(CNIFAIKGHKO_o *__this,int64_t OGPGLGPMEPD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  IFFFKKMMKFO_o *local_28;
  
  if ((DAT_045666b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
    DAT_045666b0 = 1;
  }
  local_28 = (IFFFKKMMKFO_o *)0x0;
  __this_00 = (__this->fields).NEJBDJKOGOM;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
                    /* try { // try from 0322eb94 to 0332eb9b has its CatchHandler @ 0322ebf4 */
                    /* try { // try from 0322eba8 to 0332ebb3 has its CatchHandler @ 0322ebec */
    System_Collections_Generic_Dictionary<long,_object>__TryGetValue
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,OGPGLGPMEPD,
               (Il2CppObject **)&local_28,
               Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TryGetValue__);
                    /* try { // try from 0322ebb4 to 0332ebe3 has its CatchHandler @ 0322eae0 */
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

