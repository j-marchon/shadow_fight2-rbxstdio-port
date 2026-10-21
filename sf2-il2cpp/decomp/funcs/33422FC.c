// AFFHKININGD$$OBJKMBOKOCC @ RVA 0x33422FC

System_Collections_Generic_List_JCHNBADDBGO__o *
AFFHKININGD__OBJKMBOKOCC(AFFHKININGD_o *__this,int32_t KFLAAIMLKOE,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_JCHNBADDBGO__o *pSVar1;
  
  if ((DAT_04567996 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<JCHNBADDBGO>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<JCHNBADDBGO>__);
    FUN_01bab630(&System_Func<JCHNBADDBGO,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_KEBOEMEJJEK_LJHCGDALIFI__);
    FUN_01bab630(&AFFHKININGD_KEBOEMEJJEK_TypeInfo);
    DAT_04567996 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AFFHKININGD_KEBOEMEJJEK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = KFLAAIMLKOE;
    pSVar1 = (__this->fields).MIHBDEKEPEB;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<JCHNBADDBGO,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    source = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,predicate,
                        Method_System_Linq_Enumerable_Where<JCHNBADDBGO>__);
    pSVar1 = (System_Collections_Generic_List_JCHNBADDBGO__o *)
             System_Linq_Enumerable__ToList<object>
                       (source,Method_System_Linq_Enumerable_ToList<JCHNBADDBGO>__);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

