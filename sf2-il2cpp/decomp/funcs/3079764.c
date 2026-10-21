// GBIOMONHPGJ$$.cctor @ RVA 0x3079764

void GBIOMONHPGJ___cctor(MethodInfo *method)

{
  System_Collections_Generic_Queue_IEJKLPPLHMO__o *__this;
  System_Collections_Generic_Queue_IEJKLPPLHMO__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_IEJKLPPLHMO__o **ppSVar2;
  
  if ((DAT_04565fca & 1) == 0) {
    FUN_01bab630(&GBIOMONHPGJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IEJKLPPLHMO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Queue<IEJKLPPLHMO>_TypeInfo);
    DAT_04565fca = 1;
  }
  __this = (System_Collections_Generic_Queue_IEJKLPPLHMO__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Queue<IEJKLPPLHMO>_TypeInfo);
  System_Collections_Generic_Queue<object>___ctor
            ((System_Collections_Generic_Queue_T__o *)__this,
             Method_System_Collections_Generic_Queue<IEJKLPPLHMO>__ctor__);
  ppSVar1 = &GBIOMONHPGJ_TypeInfo->static_fields->IDIHCKPDBOO;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IEJKLPPLHMO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IEJKLPPLHMO>__ctor__);
  ppSVar2 = &GBIOMONHPGJ_TypeInfo->static_fields->IMEAALCCAGP;
  *ppSVar2 = (System_Collections_Generic_List_IEJKLPPLHMO__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  return;
}

