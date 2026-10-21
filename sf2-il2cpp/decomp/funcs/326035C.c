// AAPGCAPGBLG$$DNBPEJFJHEP @ RVA 0x326035C

CCLKPGBIBOP_o *
AAPGCAPGBLG__DNBPEJFJHEP(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  CCLKPGBIBOP_o *pCVar1;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  
  if ((DAT_045671a2 & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_FLPEMFEKLLA_DBBIGOBKPOM__);
    FUN_01bab630(&AAPGCAPGBLG_FLPEMFEKLLA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    DAT_045671a2 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_FLPEMFEKLLA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).AOCCHDFNLMC;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      pCVar1 = (CCLKPGBIBOP_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
      return pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

