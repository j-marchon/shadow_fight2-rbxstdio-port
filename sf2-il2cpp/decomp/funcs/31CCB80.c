// GKOFFCMIOFC$$.cctor @ RVA 0x31CCB80

void GKOFFCMIOFC___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04566c7b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_GameObject>_TypeInfo);
    FUN_01bab630(&GKOFFCMIOFC_TypeInfo);
    DAT_04566c7b = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_GameObject>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_GameObject>__ctor__);
  GKOFFCMIOFC_TypeInfo->static_fields->AOOHGJHCEJJ =
       (System_Collections_Generic_Dictionary_string__GameObject__o *)__this;
  thunk_FUN_01c20e04(GKOFFCMIOFC_TypeInfo->static_fields,__this);
  return;
}

