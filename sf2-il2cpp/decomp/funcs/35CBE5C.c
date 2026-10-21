// IHEKBNOFOKD$$.cctor @ RVA 0x35CBE5C

void IHEKBNOFOKD___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__Func_string____o *__this;
  
  if ((DAT_04568fa2 & 1) == 0) {
    FUN_01bab630(&IHEKBNOFOKD_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_TypeInfo);
    DAT_04568fa2 = 1;
  }
  __this = (System_Collections_Generic_List_KeyValuePair_string__Func_string____o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>_TypeInfo
                             );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_Func<string>>>__ctor__);
  IHEKBNOFOKD_TypeInfo->static_fields->FIDOJDOEFIH = __this;
  thunk_FUN_01c20e04(IHEKBNOFOKD_TypeInfo->static_fields,__this);
  return;
}

