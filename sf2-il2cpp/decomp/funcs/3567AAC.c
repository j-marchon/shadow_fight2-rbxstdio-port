// CIOBNDOOGIM$$AADDOLFCFNJ @ RVA 0x3567AAC

bool CIOBNDOOGIM__AADDOLFCFNJ(MethodInfo *method)

{
  bool bVar1;
  System_Predicate_CIOBNDOOGIM__o **ppSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_CIOBNDOOGIM__o *__this;
  System_Predicate_CIOBNDOOGIM__o *match;
  
  if ((DAT_04568c01 & 1) == 0) {
    FUN_01bab630(&CIOBNDOOGIM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CIOBNDOOGIM>_get_Count__);
    FUN_01bab630(&System_Predicate<CIOBNDOOGIM>_TypeInfo);
    FUN_01bab630(&Method_CIOBNDOOGIM_<>c_GPMMIDJICCP__);
    FUN_01bab630(&CIOBNDOOGIM_<>c_TypeInfo);
    DAT_04568c01 = 1;
  }
  if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
  if (__this != (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) {
    if ((__this->fields)._size < 1) {
      bVar1 = false;
    }
    else {
      if ((CIOBNDOOGIM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        __this = CIOBNDOOGIM_TypeInfo->static_fields->NHFIIOFLEOA;
      }
      if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__4_0;
      if (match == (System_Predicate_CIOBNDOOGIM__o *)0x0) {
        if ((CIOBNDOOGIM_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_CIOBNDOOGIM__o *)
                thunk_FUN_01bda818(System_Predicate<CIOBNDOOGIM>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar2 = &CIOBNDOOGIM_<>c_TypeInfo->static_fields->__9__4_0;
        *ppSVar2 = match;
        thunk_FUN_01c20e04(ppSVar2,match);
      }
      if (__this == (System_Collections_Generic_List_CIOBNDOOGIM__o *)0x0) goto LAB_03667c1c;
      pIVar3 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this,
                          (System_Predicate_T__o *)match,
                          Method_System_Collections_Generic_List<CIOBNDOOGIM>_Find__);
      bVar1 = pIVar3 != (Il2CppObject *)0x0;
    }
    return bVar1;
  }
LAB_03667c1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

