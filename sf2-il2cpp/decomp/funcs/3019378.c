// ECENNHNBAME$$.cctor @ RVA 0x3019378

void ECENNHNBAME___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *__this;
  
  if ((DAT_04565bea & 1) == 0) {
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_TypeInfo);
    DAT_04565bea = 1;
  }
  __this = (System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<ECENNHNBAME_ECNMNALHFIF>__ctor__);
  ECENNHNBAME_TypeInfo->static_fields->PHNBIJIOHJO = __this;
  thunk_FUN_01c20e04(ECENNHNBAME_TypeInfo->static_fields,__this);
  return;
}

