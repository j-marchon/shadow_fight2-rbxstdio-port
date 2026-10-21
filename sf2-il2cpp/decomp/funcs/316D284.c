// JHHFDBLANPH$$.cctor @ RVA 0x316D284

void JHHFDBLANPH___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* try { // try from 0326d284 to 0336d28f has its CatchHandler @ 0326cfcc */
                    /* try { // try from 0326d290 to 0336d297 has its CatchHandler @ 0326d298 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326d27c with catch @ 0326d298
                       catch(type#2 @ 00000000) { ... } // from try @ 0326d290 with catch @ 0326d298
                        */
  if ((DAT_04566904 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_TypeInfo);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    DAT_04566904 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>__ctor__);
  JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK =
       (System_Collections_Generic_Dictionary_string__JHHFDBLANPH__o *)__this;
  thunk_FUN_01c20e04(JHHFDBLANPH_TypeInfo->static_fields,__this);
  return;
}

