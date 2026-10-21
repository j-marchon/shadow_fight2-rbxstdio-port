// LKHOKLCLKNH$$OCJPOBFGHEI @ RVA 0x31523EC

LFHAMPFFNHB_o *
LKHOKLCLKNH__OCJPOBFGHEI(LKHOKLCLKNH_o *__this,System_String_o *CHPGMFGECCH,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  LFHAMPFFNHB_o *pLVar1;
  System_Collections_Generic_List_LFHAMPFFNHB__o *__this_01;
  
  if ((DAT_04566816 & 1) == 0) {
    FUN_01bab630(&Method_LKHOKLCLKNH_GEPFJICJEFF_NBPHKKDMHHN__);
    FUN_01bab630(&LKHOKLCLKNH_GEPFJICJEFF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LFHAMPFFNHB>_Find__);
    FUN_01bab630(&System_Predicate<LFHAMPFFNHB>_TypeInfo);
    DAT_04566816 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(LKHOKLCLKNH_GEPFJICJEFF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CHPGMFGECCH;
    thunk_FUN_01c20e04(__this_00 + 1,CHPGMFGECCH);
    __this_01 = (__this->fields).MLOBEIMDBGE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<LFHAMPFFNHB>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_LFHAMPFFNHB__o *)0x0) {
      pLVar1 = (LFHAMPFFNHB_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<LFHAMPFFNHB>_Find__);
      return pLVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

