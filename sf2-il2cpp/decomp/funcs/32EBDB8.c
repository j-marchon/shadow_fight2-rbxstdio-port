// DKEOKAONIIB$$.cctor @ RVA 0x32EBDB8

void DKEOKAONIIB___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o **ppSVar1;
  DKEOKAONIIB_StaticFields *pDVar2;
  
  if ((DAT_04567640 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567640 = 1;
  }
  pDVar2 = DKEOKAONIIB_TypeInfo->static_fields;
  pDVar2->LDBHFHDLBND = false;
  pDVar2->GIGIAMDJECC = false;
  pDVar2->LKMPPCHMNED = 0;
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

