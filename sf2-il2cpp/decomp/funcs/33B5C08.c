// GGHCLMEFIGO$$JNFIBDBHNOA @ RVA 0x33B5C08

IGFGDDANEPE_o *
GGHCLMEFIGO__JNFIBDBHNOA(GGHCLMEFIGO_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  GGHCLMEFIGO_EJDCADKBLOG_o *__this_00;
  System_Predicate_T__o *match;
  IGFGDDANEPE_o *pIVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  
  if ((DAT_04567d7f & 1) == 0) {
    FUN_01bab630(&Method_GGHCLMEFIGO_EJDCADKBLOG_NHNJIAKFLLD__);
    FUN_01bab630(&GGHCLMEFIGO_EJDCADKBLOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
    FUN_01bab630(&System_Predicate<IGFGDDANEPE>_TypeInfo);
    DAT_04567d7f = 1;
  }
  __this_00 = (GGHCLMEFIGO_EJDCADKBLOG_o *)thunk_FUN_01bda818(GGHCLMEFIGO_EJDCADKBLOG_TypeInfo);
  GGHCLMEFIGO_EJDCADKBLOG___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (GGHCLMEFIGO_EJDCADKBLOG_o *)0x0) {
    (__this_00->fields).name = KGLJICLJHEL;
    thunk_FUN_01c20e04(&__this_00->fields,KGLJICLJHEL);
    __this_01 = (__this->fields).DPOPJKJLDEE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<IGFGDDANEPE>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
      pIVar1 = (IGFGDDANEPE_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<IGFGDDANEPE>_Find__);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

