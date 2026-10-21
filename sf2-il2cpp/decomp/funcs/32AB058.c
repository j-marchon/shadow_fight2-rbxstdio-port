// BGFNOPDHEOM$$.cctor @ RVA 0x32AB058

void BGFNOPDHEOM___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_NLIDHEAMLMC__o *__this;
  
  if ((DAT_04567433 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLIDHEAMLMC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NLIDHEAMLMC>_TypeInfo);
    DAT_04567433 = 1;
  }
  __this = (System_Collections_Generic_List_NLIDHEAMLMC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NLIDHEAMLMC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<NLIDHEAMLMC>__ctor__);
  BGFNOPDHEOM_TypeInfo->static_fields->CNFEFGAGAMC = __this;
  thunk_FUN_01c20e04(BGFNOPDHEOM_TypeInfo->static_fields,__this);
  BGFNOPDHEOM_TypeInfo->static_fields->JPDBJAEDIEM = -1;
  return;
}

