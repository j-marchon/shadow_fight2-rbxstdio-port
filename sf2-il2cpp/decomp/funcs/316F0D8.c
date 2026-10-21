// JHHFDBLANPH$$NECODEBPGNE @ RVA 0x316F0D8

void JHHFDBLANPH__NECODEBPGNE(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_0456690b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Clear__);
    FUN_01bab630(&JHHFDBLANPH_TypeInfo);
    DAT_0456690b = 1;
  }
  if ((JHHFDBLANPH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0326f12c to 0336f23b has its CatchHandler @ 0326f12c
                       catch() { ... } // from try @ 0326f12c with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f2c0 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f2f8 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f334 with catch @ 0326f12c
                       catch() { ... } // from try @ 0326f364 with catch @ 0326f12c */
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           JHHFDBLANPH_TypeInfo->static_fields->EOPCNLCKANK;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,Method_System_Collections_Generic_Dictionary<string,_JHHFDBLANPH>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

