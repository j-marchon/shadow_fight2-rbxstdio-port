// DOPEEDABNEK$$PALAACDCFON @ RVA 0x32E1374

System_Collections_Generic_IList_HOOAAGABMBL__o *
DOPEEDABNEK__PALAACDCFON(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Predicate_HOOAAGABMBL__o **ppSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar4;
  System_Predicate_HOOAAGABMBL__o *pSVar5;
  
  if ((DAT_045675fa & 1) == 0) {
    FUN_01bab630(&FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_APPAKDBFEDN__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_PHOLBGAFPLO__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    DAT_045675fa = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).FDLFEJAEDGA;
  if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__36_0;
  if (pSVar5 == (System_Predicate_HOOAAGABMBL__o *)0x0) {
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Predicate_HOOAAGABMBL__o *)
             thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar2 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__36_0;
    *ppSVar2 = pSVar5;
    thunk_FUN_01c20e04(ppSVar2,pSVar5);
  }
  if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    bVar1 = System_Collections_Generic_List<object>__Exists
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (System_Predicate_T__o *)pSVar5,
                       Method_System_Collections_Generic_List<HOOAAGABMBL>_Exists__);
    if (!bVar1) {
      if ((FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      return (System_Collections_Generic_IList_HOOAAGABMBL__o *)
             FLLIEEHCFAB<HOOAAGABMBL>_TypeInfo->static_fields->AOAIEJMANCC;
    }
    pSVar4 = (__this->fields).FDLFEJAEDGA;
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__36_1;
    if (pSVar5 == (System_Predicate_HOOAAGABMBL__o *)0x0) {
      if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Predicate_HOOAAGABMBL__o *)
               thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__36_1;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    if (pSVar4 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      pSVar3 = System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)pSVar4,
                          (System_Predicate_T__o *)pSVar5,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_FindAll__);
      return (System_Collections_Generic_IList_HOOAAGABMBL__o *)pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

