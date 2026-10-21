// ACHLOMELAJE$$EKOLJIPEEHA @ RVA 0x305C8C0

PAMEPBLOLPB_o *
ACHLOMELAJE__EKOLJIPEEHA(ACHLOMELAJE_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  PAMEPBLOLPB_o *pPVar1;
  System_Collections_Generic_List_PAMEPBLOLPB__o *__this_01;
  
  if ((DAT_04565ebb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PAMEPBLOLPB>_Find__);
    FUN_01bab630(&Method_ACHLOMELAJE_NLEDABAEGNG_OCMBCIPEDFI__);
    FUN_01bab630(&ACHLOMELAJE_NLEDABAEGNG_TypeInfo);
    FUN_01bab630(&System_Predicate<PAMEPBLOLPB>_TypeInfo);
    DAT_04565ebb = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_NLEDABAEGNG_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)DBIAAJNKHLH;
    thunk_FUN_01c20e04(__this_00 + 1,DBIAAJNKHLH);
    __this_01 = (__this->fields).HDDNEKLMLMF;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<PAMEPBLOLPB>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_PAMEPBLOLPB__o *)0x0) {
      pPVar1 = (PAMEPBLOLPB_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<PAMEPBLOLPB>_Find__);
      return pPVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

