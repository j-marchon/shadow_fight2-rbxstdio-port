// FJNIPMODEPO.AIMMBNHMBFL$$.cctor @ RVA 0x3035840

void FJNIPMODEPO_AIMMBNHMBFL___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o **ppSVar1;
  System_Collections_Generic_List_Exception__o *__this_00;
  System_Collections_Generic_List_Exception__o **ppSVar2;
  
  if ((DAT_04565d3c & 1) == 0) {
    FUN_01bab630(&FJNIPMODEPO_AIMMBNHMBFL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Exception>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Exception>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04565d3c = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->GBNPHBNELMF;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  __this_00 = (System_Collections_Generic_List_Exception__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Exception>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Exception>__ctor__);
  ppSVar2 = &FJNIPMODEPO_AIMMBNHMBFL_TypeInfo->static_fields->MMPNIPJGIDD;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  return;
}

