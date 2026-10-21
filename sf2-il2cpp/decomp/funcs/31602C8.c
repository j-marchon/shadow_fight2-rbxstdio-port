// CGFIAJGHIPL$$.cctor @ RVA 0x31602C8

void CGFIAJGHIPL___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_ModelContainer__o *__this;
  System_Collections_Generic_List_ModelContainer__o **ppSVar1;
  
  if ((DAT_04566885 & 1) == 0) {
    FUN_01bab630(&CGFIAJGHIPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelContainer>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelContainer>_TypeInfo);
    DAT_04566885 = 1;
  }
  CGFIAJGHIPL_TypeInfo->static_fields->HIOABPPMJJB = 100;
  __this = (System_Collections_Generic_List_ModelContainer__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelContainer>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<ModelContainer>__ctor__);
  ppSVar1 = &CGFIAJGHIPL_TypeInfo->static_fields->FMKEOGOICEO;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

