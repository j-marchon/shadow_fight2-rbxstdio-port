// ALJBCELIEHC$$FCNIFPFAFAF @ RVA 0x352AA1C

NFEOGKEAFHL_o *
ALJBCELIEHC__FCNIFPFAFAF(ALJBCELIEHC_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  NFEOGKEAFHL_o *pNVar1;
  System_Collections_Generic_List_NFEOGKEAFHL__o *__this_01;
  
  if ((DAT_04568a20 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NFEOGKEAFHL>_Find__);
    FUN_01bab630(&Method_ALJBCELIEHC_MIGIBEEIIMA_DCHFKAHELPN__);
    FUN_01bab630(&ALJBCELIEHC_MIGIBEEIIMA_TypeInfo);
    FUN_01bab630(&System_Predicate<NFEOGKEAFHL>_TypeInfo);
    DAT_04568a20 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ALJBCELIEHC_MIGIBEEIIMA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = JLAFGLDIFOC;
    __this_01 = (__this->fields).PBGALMEHDBP;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<NFEOGKEAFHL>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_NFEOGKEAFHL__o *)0x0) {
      pNVar1 = (NFEOGKEAFHL_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<NFEOGKEAFHL>_Find__);
      return pNVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

