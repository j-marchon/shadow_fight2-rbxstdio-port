// DOPEEDABNEK$$FEHJLBEGAPO @ RVA 0x32E0400

System_Collections_Generic_IList_HOOAAGABMBL__o *
DOPEEDABNEK__FEHJLBEGAPO(DOPEEDABNEK_o *__this,System_String_o *CJNPBEJHHLF,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Predicate_T__o *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  
  if ((DAT_045675e6 & 1) == 0) {
    FUN_01bab630(&Method_DOPEEDABNEK_FBMBOCHONJP_KLAMHGBCOGE__);
    FUN_01bab630(&Method_DOPEEDABNEK_FBMBOCHONJP_OJDGPDBOFKK__);
    FUN_01bab630(&DOPEEDABNEK_FBMBOCHONJP_TypeInfo);
    FUN_01bab630(&FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    DAT_045675e6 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DOPEEDABNEK_FBMBOCHONJP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CJNPBEJHHLF;
    thunk_FUN_01c20e04(__this_00 + 1,CJNPBEJHHLF);
    pSVar4 = (__this->fields).FDLFEJAEDGA;
    pSVar2 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      bVar1 = System_Collections_Generic_List<object>__Exists
                        ((System_Collections_Generic_List_object__o *)pSVar4,pSVar2,
                         Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
      if (!bVar1) {
        if ((FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        return (System_Collections_Generic_IList_HOOAAGABMBL__o *)
               FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->static_fields->AOAIEJMANCC;
      }
      pSVar4 = (__this->fields).FDLFEJAEDGA;
      pSVar2 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        pSVar3 = System_Collections_Generic_List<object>__FindAll
                           ((System_Collections_Generic_List_object__o *)pSVar4,pSVar2,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
        return (System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

