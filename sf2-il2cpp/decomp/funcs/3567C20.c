// CIOBNDOOGIM$$.cctor @ RVA 0x3567C20

void CIOBNDOOGIM___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Collections_Generic_List_CIOBNDOOGIM__o **ppSVar1;
  
  if ((DAT_04568c02 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CIOBNDOOGIM>_TypeInfo);
    DAT_04568c02 = 1;
  }
  __this = (System_Collections_Generic_List_CIOBNDOOGIM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<CIOBNDOOGIM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<CIOBNDOOGIM>__ctor__);
  ppSVar1 = &CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}

