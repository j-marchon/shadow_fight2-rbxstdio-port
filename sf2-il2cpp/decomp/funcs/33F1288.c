// FCJBEKHDLAF$$FMHOFPCOKPH @ RVA 0x33F1288

bool FCJBEKHDLAF__FMHOFPCOKPH(MethodInfo *method)

{
  bool bVar1;
  System_Predicate_IMMCKCJBFIL__o **ppSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_IMMCKCJBFIL__o *__this;
  System_Predicate_IMMCKCJBFIL__o *match;
  ushort local_34 [2];
  
  if ((DAT_04567f0e & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IMMCKCJBFIL>_Find__);
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&System_Predicate<IMMCKCJBFIL>_TypeInfo);
    FUN_01bab630(&Method_FCJBEKHDLAF_<>c_JHLEBPPMELO__);
    FUN_01bab630(&FCJBEKHDLAF_<>c_TypeInfo);
    DAT_04567f0e = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = FCJBEKHDLAF_TypeInfo->static_fields->HNDFFEDLPGG;
  if (__this == (System_Collections_Generic_List_IMMCKCJBFIL__o *)0x0) {
    bVar1 = false;
  }
  else {
    if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    match = FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__22_0;
    if (match == (System_Predicate_IMMCKCJBFIL__o *)0x0) {
      if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      match = (System_Predicate_IMMCKCJBFIL__o *)
              thunk_FUN_01bda818(System_Predicate<IMMCKCJBFIL>_TypeInfo);
      System_Predicate<object>___ctor();
      ppSVar2 = &FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__22_0;
      *ppSVar2 = match;
      thunk_FUN_01c20e04(ppSVar2,match);
    }
    pIVar3 = System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<IMMCKCJBFIL>_Find__);
    bVar1 = false;
    if (pIVar3 != (Il2CppObject *)0x0) {
      local_34[0] = 0;
      System_Nullable<bool>___ctor
                ((System_Nullable_bool__o)SUB82(local_34,0),*(bool *)((long)&pIVar3[1].klass + 4),
                 Method_System_Nullable<bool>__ctor__);
      bVar1 = 0xff < local_34[0];
    }
  }
  return bVar1;
}

