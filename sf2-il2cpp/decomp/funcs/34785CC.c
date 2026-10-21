// IJGADGEHJKB$$.cctor @ RVA 0x34785CC

void IJGADGEHJKB___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_HPEENDCCJND__o *__this;
  
  if ((DAT_0456833d & 1) == 0) {
    FUN_01bab630(&IJGADGEHJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HPEENDCCJND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HPEENDCCJND>_TypeInfo);
    DAT_0456833d = 1;
  }
  __this = (System_Collections_Generic_List_HPEENDCCJND__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HPEENDCCJND>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<HPEENDCCJND>__ctor__);
  IJGADGEHJKB_TypeInfo->static_fields->FIDOJDOEFIH = __this;
  thunk_FUN_01c20e04(IJGADGEHJKB_TypeInfo->static_fields,__this);
  return;
}

