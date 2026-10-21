// DCAEKAABCEM$$BNBFMIDBJNC @ RVA 0x3221B00

void DCAEKAABCEM__BNBFMIDBJNC
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,int32_t NCPANDOCILC,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  
  if ((DAT_04566f42 & 1) == 0) {
    FUN_01bab630(&Method_DCAEKAABCEM_EHMBIAFGCLM_EIBBPPGOLJM__);
    FUN_01bab630(&DCAEKAABCEM_EHMBIAFGCLM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f42 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_EHMBIAFGCLM_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(pIVar1 + 1,PKKMGBOIDJD);
    __this_00 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        *(int32_t *)&pIVar1[1].monitor = NCPANDOCILC;
        DCAEKAABCEM__OBMDEPEMOHF(__this,method_00);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

