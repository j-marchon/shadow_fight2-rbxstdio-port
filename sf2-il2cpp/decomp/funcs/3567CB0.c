// CIOBNDOOGIM$$BHLHBBKAFHH @ RVA 0x3567CB0

void CIOBNDOOGIM__BHLHBBKAFHH(MethodInfo *method)

{
  System_Predicate_CIOBNDOOGIM__o **ppSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Predicate_CIOBNDOOGIM__o *match;
  
  if ((DAT_04568c03 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_OKPDINOGDBD__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c03 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CIOBNDOOGIM_TypeInfo);
  }
  __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__5_0;
  if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
    if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = (System_Predicate_CIOBNDOOGIM__o *)
            thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    pIVar2 = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    if (pIVar2 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03667de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pIVar2->klass->vtable[4].methodPtr)(pIVar2,pIVar2->klass->vtable[4].method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

