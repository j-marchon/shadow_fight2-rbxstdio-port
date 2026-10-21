// MMDDDDFHOLG$$KEBKKMPFMBB @ RVA 0x3362CA8

EHCCNKFIPPA_o *
MMDDDDFHOLG__KEBKKMPFMBB(MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  EHCCNKFIPPA_o *pEVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_01;
  
  if ((DAT_04567a93 & 1) == 0) {
    FUN_01bab630(&Method_MMDDDDFHOLG_FPIBKMBJFIE_BBMLFJCHCGE__);
    FUN_01bab630(&MMDDDDFHOLG_FPIBKMBJFIE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_Find__);
    FUN_01bab630(&System_Predicate<EHCCNKFIPPA>_TypeInfo);
    DAT_04567a93 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(MMDDDDFHOLG_FPIBKMBJFIE_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BCKBBGCOMJD;
    thunk_FUN_01c20e04(__this_00 + 1,BCKBBGCOMJD);
    __this_01 = (__this->fields).PNGAKAPODKB;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<EHCCNKFIPPA>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
      pEVar1 = (EHCCNKFIPPA_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<EHCCNKFIPPA>_Find__);
      return pEVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

