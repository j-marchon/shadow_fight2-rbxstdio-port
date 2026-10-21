// EnterScreen$$.cctor @ RVA 0x358B060

void EnterScreen___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_EnterScreen__o *__this;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368b050 with catch @ 0368b060
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368b048 with catch @ 0368b064
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368aef0 with catch @ 0368b068
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368af70 with catch @ 0368b06c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368ae94 with catch @ 0368b070
                        */
                    /* try { // try from 0368b080 to 0378b083 has its CatchHandler @ 0368b094 */
  if ((DAT_04568d3a & 1) == 0) {
                    /* catch() { ... } // from try @ 0368b080 with catch @ 0368b094 */
    FUN_01bab630(&EnterScreen_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EnterScreen>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EnterScreen>_TypeInfo);
    DAT_04568d3a = 1;
  }
  __this = (System_Collections_Generic_List_EnterScreen__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<EnterScreen>_TypeInfo);
                    /* try { // try from 0368b0cc to 0378b0f3 has its CatchHandler @ 0368b108 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<EnterScreen>__ctor__);
  EnterScreen_TypeInfo->static_fields->PHPCCHBPFNA = __this;
                    /* try { // try from 0368b0f4 to 0378b0ff has its CatchHandler @ 0368ad58 */
  thunk_FUN_01c20e04(EnterScreen_TypeInfo->static_fields,__this);
  return;
}

