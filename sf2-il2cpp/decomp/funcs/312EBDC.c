// CNIFAIKGHKO$$LDJLMEFOMLG @ RVA 0x312EBDC

int32_t CNIFAIKGHKO__LDJLMEFOMLG(CNIFAIKGHKO_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0322ebe4 to 0332ebe7 has its CatchHandler @ 0322ebf0 */
                    /* try { // try from 0322ebe8 to 0332ec0b has its CatchHandler @ 0322eae0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322eba8 with catch @ 0322ebec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322ebe4 with catch @ 0322ebf0
                        */
  if ((DAT_045666b1 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322eb94 with catch @ 0322ebf4
                        */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    DAT_045666b1 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).NEJBDJKOGOM;
                    /* try { // try from 0322ec0c to 0332ec0f has its CatchHandler @ 0322ec30 */
  if (__this_00 != (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)0x0) {
                    /* try { // try from 0322ec10 to 0332ec37 has its CatchHandler @ 0322eae0 */
    iVar1 = System_Collections_Generic_Dictionary<long,_object>__get_Count
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_get_Count__);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

