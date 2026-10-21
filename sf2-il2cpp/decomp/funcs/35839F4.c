// FJAFBCCNPIK$$HHGDLIGFHLN @ RVA 0x35839F4

LJNDBPEOILF_o *
FJAFBCCNPIK__HHGDLIGFHLN(FJAFBCCNPIK_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_IEnumerable_T__o *source;
  System_Func_TSource__bool__o *predicate;
  LJNDBPEOILF_o *pLVar1;
  
  if ((DAT_04568ce5 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<LJNDBPEOILF>_NECJEABEOOH__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<LJNDBPEOILF>__);
    FUN_01bab630(&System_Func<LJNDBPEOILF,_bool>_TypeInfo);
    FUN_01bab630(&Method_FJAFBCCNPIK_JPIJOAOFLME_LICOJBLMPJM__);
    FUN_01bab630(&FJAFBCCNPIK_JPIJOAOFLME_TypeInfo);
    DAT_04568ce5 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FJAFBCCNPIK_JPIJOAOFLME_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = OGPGLGPMEPD;
    source = DADDKDFBPIJ<object>__NECJEABEOOH
                       ((DADDKDFBPIJ_T__o *)__this,Method_DADDKDFBPIJ<LJNDBPEOILF>_NECJEABEOOH__);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<LJNDBPEOILF,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pLVar1 = (LJNDBPEOILF_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<LJNDBPEOILF>__);
    return pLVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

