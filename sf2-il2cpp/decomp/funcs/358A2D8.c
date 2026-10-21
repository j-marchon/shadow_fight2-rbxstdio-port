// OCHIFKHFMAC$$IBLPHDKKLKE @ RVA 0x358A2D8

void OCHIFKHFMAC__IBLPHDKKLKE
               (OCHIFKHFMAC_o *__this,System_String_o *OGPGLGPMEPD,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Lazy_Dictionary_string__bool___o *pSVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  MethodInfo *method_00;
  bool local_24 [4];
  
                    /* try { // try from 0368a2f8 to 0378a307 has its CatchHandler @ 0368a308 */
  if ((DAT_04568d32 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_TryGetValue__);
                    /* catch() { ... } // from try @ 0368a2b0 with catch @ 0368a308
                       catch() { ... } // from try @ 0368a2f8 with catch @ 0368a308 */
                    /* try { // try from 0368a30c to 0378a30f has its CatchHandler @ 0368a318 */
                    /* try { // try from 0368a310 to 0378a31b has its CatchHandler @ 0368a114 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368a30c with catch @ 0368a318
                        */
    FUN_01bab630(&Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    DAT_04568d32 = 1;
  }
  local_24[0] = false;
  pSVar2 = (__this->fields).MDNPGDCCAEA;
  if (pSVar2 != (System_Lazy_Dictionary_string__bool___o *)0x0) {
    pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             System_Lazy<object>__get_Value
                       ((System_Lazy_object__o *)pSVar2,
                        Method_System_Lazy<Dictionary<string,_bool>>_get_Value__);
    if (pSVar3 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<object,_bool>__TryGetValue
                        (pSVar3,(Il2CppObject *)OGPGLGPMEPD,local_24,
                         Method_System_Collections_Generic_Dictionary<string,_bool>_TryGetValue__);
      if ((!bVar1) || (local_24[0] != CJNHFNHJHPE)) {
        pSVar2 = (__this->fields).MDNPGDCCAEA;
        if ((pSVar2 == (System_Lazy_Dictionary_string__bool___o *)0x0) ||
           (pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     System_Lazy<object>__get_Value
                               ((System_Lazy_object__o *)pSVar2,
                                Method_System_Lazy<Dictionary<string,_bool>>_get_Value__),
           pSVar3 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0))
        goto LAB_0368a3b8;
        System_Collections_Generic_Dictionary<object,_bool>__set_Item
                  (pSVar3,(Il2CppObject *)OGPGLGPMEPD,CJNHFNHJHPE,
                   Method_System_Collections_Generic_Dictionary<string,_bool>_set_Item__);
        OCHIFKHFMAC__PFFOOLHOCKA(__this,method_00);
      }
      return;
    }
  }
LAB_0368a3b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

