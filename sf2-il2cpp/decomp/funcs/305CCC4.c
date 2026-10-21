// ACHLOMELAJE$$ECALNOBINKI @ RVA 0x305CCC4

MEMHEPBAJJA_o *
ACHLOMELAJE__ECALNOBINKI(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  MEMHEPBAJJA_o *pMVar1;
  System_Collections_Generic_List_MEMHEPBAJJA__o *__this_01;
  
  if ((DAT_04565e9e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MEMHEPBAJJA>_Find__);
    FUN_01bab630(&Method_ACHLOMELAJE_NOJFNFINDND_HLJOOKABCIK__);
    FUN_01bab630(&ACHLOMELAJE_NOJFNFINDND_TypeInfo);
    FUN_01bab630(&System_Predicate<MEMHEPBAJJA>_TypeInfo);
    DAT_04565e9e = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_NOJFNFINDND_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).ECEOENIJAPJ;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<MEMHEPBAJJA>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_MEMHEPBAJJA__o *)0x0) {
      pMVar1 = (MEMHEPBAJJA_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<MEMHEPBAJJA>_Find__);
      return pMVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

