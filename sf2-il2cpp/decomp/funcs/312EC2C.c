// CNIFAIKGHKO$$.ctor @ RVA 0x312EC2C

void CNIFAIKGHKO___ctor(CNIFAIKGHKO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *__this_00;
  System_Collections_Generic_List_IFFFKKMMKFO__o **ppSVar1;
  
                    /* catch() { ... } // from try @ 0322ec0c with catch @ 0322ec30 */
                    /* try { // try from 0322ec38 to 0332ec3f has its CatchHandler @ 0322ec54 */
                    /* try { // try from 0322ec40 to 0332ec4b has its CatchHandler @ 0322eae0 */
                    /* try { // try from 0322ec4c to 0332ec53 has its CatchHandler @ 0322ec54 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322ec38 with catch @ 0322ec54
                       catch(type#2 @ 00000000) { ... } // from try @ 0322ec4c with catch @ 0322ec54
                        */
  if ((DAT_045666b2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TypeInfo);
    DAT_045666b2 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_long__IFFFKKMMKFO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>_TypeInfo);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_IFFFKKMMKFO>__ctor__);
  (__this->fields).NEJBDJKOGOM = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  ppSVar1 = &(__this->fields).ELMHAOJGABL;
  *ppSVar1 = (System_Collections_Generic_List_IFFFKKMMKFO__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}

