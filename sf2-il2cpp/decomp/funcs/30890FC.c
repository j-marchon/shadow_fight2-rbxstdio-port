// KPBOJBLLKPJ$$KMJIIFFEJLH @ RVA 0x30890FC

void KPBOJBLLKPJ__KMJIIFFEJLH
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,KOPGBBHMPDP_o *PDALMPAOAFM,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *pSVar2;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o item;
  
  if ((DAT_0456603b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_First<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo);
    FUN_01bab630(&Method_KPBOJBLLKPJ_GANGLJMEKOF_ODGFHIJGLPJ__);
    FUN_01bab630(&KPBOJBLLKPJ_GANGLJMEKOF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Remove__
                );
    DAT_0456603b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPBOJBLLKPJ_GANGLJMEKOF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = BOFAKAEIMME;
    __this_00[1].monitor = PDALMPAOAFM;
    thunk_FUN_01c20e04(&__this_00[1].monitor,PDALMPAOAFM);
    pSVar2 = (__this->fields).LOBBELCAMJC;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
    source = System_Linq_Enumerable__Where<KeyValuePair<Int32Enum,_object>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,predicate,
                        Method_System_Linq_Enumerable_Where<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__
                       );
    bVar1 = System_Linq_Enumerable__Any<KeyValuePair<Int32Enum,_object>>
                      (source,
                       Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).LOBBELCAMJC;
    item = System_Linq_Enumerable__First<KeyValuePair<Int32Enum,_object>>
                     (source,
                      Method_System_Linq_Enumerable_First<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__)
    ;
    if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
    {
      System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__Remove
                ((System_Collections_Generic_List_T__o *)pSVar2,item,
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Remove__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

