// DNICJALNLEB$$HNJLNPEEMOK @ RVA 0x343E94C

ALJBCELIEHC_o *
DNICJALNLEB__HNJLNPEEMOK(DNICJALNLEB_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  ALJBCELIEHC_o *pAVar1;
  System_Collections_Generic_List_ALJBCELIEHC__o *__this_01;
  
  if ((DAT_04568203 & 1) == 0) {
    FUN_01bab630(&Method_DNICJALNLEB_BDPIPADNFGH_EAMKBFINIFC__);
    FUN_01bab630(&DNICJALNLEB_BDPIPADNFGH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_Find__);
    FUN_01bab630(&System_Predicate<ALJBCELIEHC>_TypeInfo);
    DAT_04568203 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DNICJALNLEB_BDPIPADNFGH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).HLEDPFGACOE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<ALJBCELIEHC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
      pAVar1 = (ALJBCELIEHC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<ALJBCELIEHC>_Find__);
      return pAVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

