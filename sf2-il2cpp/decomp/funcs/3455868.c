// CLFCKIFNGHA$$.cctor @ RVA 0x3455868

void CLFCKIFNGHA___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_IAGNPGHOAIC__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__IAGNPGHOAIC__o **ppSVar1;
  
  if ((DAT_045682c5 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IAGNPGHOAIC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IAGNPGHOAIC>_TypeInfo);
    DAT_045682c5 = 1;
  }
  __this = (System_Collections_Generic_List_IAGNPGHOAIC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IAGNPGHOAIC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<IAGNPGHOAIC>__ctor__);
  CLFCKIFNGHA_TypeInfo->static_fields->FIDBAGOJPKB = __this;
  thunk_FUN_01c20e04(CLFCKIFNGHA_TypeInfo->static_fields,__this);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>__ctor__);
  ppSVar1 = &CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__IAGNPGHOAIC__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  return;
}

