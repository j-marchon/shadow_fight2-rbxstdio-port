// DOPEEDABNEK$$CBCCEHFONKC @ RVA 0x32E0C08

int32_t DOPEEDABNEK__CBCCEHFONKC
                  (DOPEEDABNEK_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_045675e9 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_EBBECCBDFOJ_EKJKLIKMNKL__);
    FUN_01bab630(&DOPEEDABNEK_EBBECCBDFOJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    DAT_045675e9 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DOPEEDABNEK_EBBECCBDFOJ_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)ACCIHBHMFPN;
    thunk_FUN_01c20e04(__this_00 + 1,ACCIHBHMFPN);
    __this_01 = (__this->fields).DIGBEFKAPHM;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    if ((__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) &&
       (pSVar1 = System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)__this_01,match,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__),
       pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (pSVar1->fields)._size;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

