// DCAEKAABCEM$$KMAMCKGFKLF @ RVA 0x3221DB8

void DCAEKAABCEM__KMAMCKGFKLF(DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_01;
  
  if ((DAT_04566f40 & 1) == 0) {
    FUN_01bab630(&Method_DCAEKAABCEM_FOAOKJIELKA_OCBPEEAPAEC__);
    FUN_01bab630(&DCAEKAABCEM_FOAOKJIELKA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_RemoveAll__);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f40 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_FOAOKJIELKA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(__this_00 + 1,PKKMGBOIDJD);
    __this_01 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_01,match,
                 Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_RemoveAll__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

