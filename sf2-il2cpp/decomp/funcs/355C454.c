// FFDBJONGOLC$$.cctor @ RVA 0x355C454

void FFDBJONGOLC___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_FFDBJONGOLC_GEIPHMENLOJ__o *__this;
  
  if ((DAT_04568b82 & 1) == 0) {
    FUN_01bab630(&FFDBJONGOLC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>_TypeInfo);
    DAT_04568b82 = 1;
  }
  __this = (System_Collections_Generic_List_FFDBJONGOLC_GEIPHMENLOJ__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<FFDBJONGOLC_GEIPHMENLOJ>__ctor__);
  FFDBJONGOLC_TypeInfo->static_fields->FIDOJDOEFIH = __this;
  thunk_FUN_01c20e04(FFDBJONGOLC_TypeInfo->static_fields,__this);
  return;
}

