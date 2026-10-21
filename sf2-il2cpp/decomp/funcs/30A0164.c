// FOKJBDHLIMG$$OPHCGMGNFFO @ RVA 0x30A0164

HEFOANCOHDC_o *
FOKJBDHLIMG__OPHCGMGNFFO
          (FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,int32_t EPINGPGECOM,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HEFOANCOHDC_o *pHVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  
  if ((DAT_04566136 & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_HLPNOAPFHNP_BIAGCPOFFKO__);
    FUN_01bab630(&FOKJBDHLIMG_HLPNOAPFHNP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_04566136 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_HLPNOAPFHNP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    *(int32_t *)&__this_00[1].monitor = EPINGPGECOM;
    __this_01 = (__this->fields).CNLHOAHDHCF;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pHVar1 = (HEFOANCOHDC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

