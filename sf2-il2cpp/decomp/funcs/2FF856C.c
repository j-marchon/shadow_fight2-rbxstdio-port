// JMDPBFOCHHP.NOPCEDPNNKO$$BHJOLIJDBLO @ RVA 0x2FF856C

JMDPBFOCHHP_EFAJBOEHPLJ_o *
JMDPBFOCHHP_NOPCEDPNNKO__BHJOLIJDBLO
          (JMDPBFOCHHP_NOPCEDPNNKO_o *__this,System_String_o *BJEEDJEKAMF,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  JMDPBFOCHHP_EFAJBOEHPLJ_o *pJVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *source;
  
  if ((DAT_04565ad3 & 1) == 0) {
    FUN_01bab630(&Method_JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_GPPGBIMJGMK__);
    FUN_01bab630(&JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_EFAJBOEHPLJ>__);
    FUN_01bab630(&System_Func<JMDPBFOCHHP_EFAJBOEHPLJ,_bool>_TypeInfo);
    DAT_04565ad3 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(JMDPBFOCHHP_NOPCEDPNNKO_AALDIFBFBJI_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)BJEEDJEKAMF;
    thunk_FUN_01c20e04(__this_00 + 1,BJEEDJEKAMF);
    source = (__this->fields).LNFJJJOGJKE;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<JMDPBFOCHHP_EFAJBOEHPLJ,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pJVar1 = (JMDPBFOCHHP_EFAJBOEHPLJ_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<JMDPBFOCHHP_EFAJBOEHPLJ>__);
    return pJVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

