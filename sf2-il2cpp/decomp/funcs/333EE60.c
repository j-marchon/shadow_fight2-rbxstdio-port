// AFFHKININGD$$NIKCNPMKAFK @ RVA 0x333EE60

System_Collections_Generic_List_NIAFDKHDBMA__o *
AFFHKININGD__NIKCNPMKAFK(AFFHKININGD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AJNNHGGLGIF__o *source;
  System_Func_AJNNHGGLGIF__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Collections_Generic_List_NIAFDKHDBMA__o *pSVar2;
  MethodInfo *extraout_x1;
  System_Func_AJNNHGGLGIF__bool__o *predicate;
  
  if ((DAT_04567986 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<AJNNHGGLGIF>__);
    FUN_01bab630(&System_Func<AJNNHGGLGIF,_bool>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_FACLHKKNINP__);
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_04567986 = 1;
    method = extraout_x1;
  }
  source = AFFHKININGD__HKNMJCKPHHC(__this,method);
  if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
  }
  predicate = AFFHKININGD_<>c_TypeInfo->static_fields->__9__90_0;
  if (predicate == (System_Func_AJNNHGGLGIF__bool__o *)0x0) {
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo);
    }
    predicate = (System_Func_AJNNHGGLGIF__bool__o *)
                thunk_FUN_01bda818(System_Func<AJNNHGGLGIF,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__90_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
  source_00 = System_Linq_Enumerable__Where<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)predicate,
                         Method_System_Linq_Enumerable_Where<AJNNHGGLGIF>__);
  source_01 = System_Linq_Enumerable__Cast<object>
                        ((System_Collections_IEnumerable_o *)source_00,
                         Method_System_Linq_Enumerable_Cast<NIAFDKHDBMA>__);
  pSVar2 = (System_Collections_Generic_List_NIAFDKHDBMA__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                      Method_System_Linq_Enumerable_ToList<NIAFDKHDBMA>__);
  return pSVar2;
}

