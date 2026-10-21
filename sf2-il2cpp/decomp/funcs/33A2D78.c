// HCIAFAIBMAL$$.cctor @ RVA 0x33A2D78

void HCIAFAIBMAL___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__double__o *__this;
  System_Collections_Generic_Dictionary_string__double__o **ppSVar1;
  uint64_t local_28;
  
                    /* catch() { ... } // from try @ 034a2d60 with catch @ 034a2d84 */
                    /* try { // try from 034a2d8c to 035a2d9f has its CatchHandler @ 034a2e0c */
                    /* catch() { ... } // from try @ 034a2d1c with catch @ 034a2da0
                       try { // try from 034a2da0 to 035a2dc3 has its CatchHandler @ 034a2aa8 */
                    /* catch() { ... } // from try @ 034a2d18 with catch @ 034a2da4 */
                    /* catch() { ... } // from try @ 034a2c30 with catch @ 034a2da8 */
  if ((DAT_04567cc7 & 1) == 0) {
                    /* catch() { ... } // from try @ 034a2c0c with catch @ 034a2dac */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_double>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_double>_TypeInfo);
                    /* try { // try from 034a2dc4 to 035a2dc7 has its CatchHandler @ 034a2de8 */
                    /* try { // try from 034a2dc8 to 035a2def has its CatchHandler @ 034a2aa8 */
    FUN_01bab630(&HCIAFAIBMAL_TypeInfo);
    DAT_04567cc7 = 1;
  }
                    /* catch() { ... } // from try @ 034a2dc4 with catch @ 034a2de8 */
                    /* try { // try from 034a2df0 to 035a2df7 has its CatchHandler @ 034a2e0c */
                    /* try { // try from 034a2df8 to 035a2e03 has its CatchHandler @ 034a2aa8 */
  local_28 = 0;
  System_DateTime___ctor((System_DateTime_o)&local_28,0x7b2,1,1,8,0,0,1,(MethodInfo *)0x0);
                    /* try { // try from 034a2e04 to 035a2e0b has its CatchHandler @ 034a2e0c */
                    /* catch() { ... } // from try @ 034a2d8c with catch @ 034a2e0c
                       catch() { ... } // from try @ 034a2df0 with catch @ 034a2e0c
                       catch() { ... } // from try @ 034a2e04 with catch @ 034a2e0c */
  (HCIAFAIBMAL_TypeInfo->static_fields->JCKCKDLGKIG).fields._dateData = local_28;
  __this = (System_Collections_Generic_Dictionary_string__double__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_double>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_double>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             Method_System_Collections_Generic_Dictionary<string,_double>__ctor__);
  ppSVar1 = &HCIAFAIBMAL_TypeInfo->static_fields->IEJADJDIMME;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

