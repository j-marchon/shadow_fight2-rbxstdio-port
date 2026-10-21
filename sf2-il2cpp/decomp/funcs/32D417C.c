// OOMEDFCGKJB.OBDIGPIEMKH$$GMIDFNHOAHN @ RVA 0x32D417C

System_Collections_Generic_List_BCGLDKLKKDA__o *
OOMEDFCGKJB_OBDIGPIEMKH__GMIDFNHOAHN
          (OOMEDFCGKJB_OBDIGPIEMKH_o *__this,
          System_Collections_Generic_KeyValuePair_string__List_BCGLDKLKKDA___o p,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_BCGLDKLKKDA__o *pSVar1;
  System_Func_BCGLDKLKKDA__bool__o **ppSVar2;
  System_Func_BCGLDKLKKDA__bool__o *predicate;
  
  if ((DAT_04567571 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<BCGLDKLKKDA>__,p.fields.key);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<BCGLDKLKKDA>__);
    FUN_01bab630(&System_Func<BCGLDKLKKDA,_bool>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<BCGLDKLKKDA>>_get_Value__
                );
    FUN_01bab630(&Method_OOMEDFCGKJB_OBDIGPIEMKH_HNIALGLGFJK__);
    DAT_04567571 = 1;
  }
  ppSVar2 = &(__this->fields).__9__7;
  predicate = *ppSVar2;
  if (predicate == (System_Func_BCGLDKLKKDA__bool__o *)0x0) {
    predicate = (System_Func_BCGLDKLKKDA__bool__o *)
                thunk_FUN_01bda818(System_Func<BCGLDKLKKDA,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    (__this->fields).__9__7 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  source = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)p.fields.value,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_Where<BCGLDKLKKDA>__);
  pSVar1 = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
           System_Linq_Enumerable__ToList<object>
                     (source,Method_System_Linq_Enumerable_ToList<BCGLDKLKKDA>__);
  return pSVar1;
}

