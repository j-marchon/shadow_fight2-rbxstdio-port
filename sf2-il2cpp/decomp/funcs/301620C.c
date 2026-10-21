// ECENNHNBAME$$GDMIJMOJIFH @ RVA 0x301620C

ECENNHNBAME_ECNMNALHFIF_o * ECENNHNBAME__GDMIJMOJIFH(ECENNHNBAME_o *__this,MethodInfo *method)

{
  System_Func_TSource__bool__o *predicate;
  ECENNHNBAME_ECNMNALHFIF_o *pEVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_ECENNHNBAME_ECNMNALHFIF__o *source;
  
  if ((DAT_04565bd6 & 1) == 0) {
    FUN_01bab630(&Method_ECENNHNBAME_KBMDCIELHKG__);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<ECENNHNBAME_ECNMNALHFIF>__);
    FUN_01bab630(&System_Func<ECENNHNBAME_ECNMNALHFIF,_bool>_TypeInfo);
    DAT_04565bd6 = 1;
    method = extraout_x1;
  }
  if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ECENNHNBAME_TypeInfo,method);
  }
  source = ECENNHNBAME_TypeInfo->static_fields->PHNBIJIOHJO;
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<ECENNHNBAME_ECNMNALHFIF,_bool>_TypeInfo);
  System_Func<object,_bool>___ctor();
  pEVar1 = (ECENNHNBAME_ECNMNALHFIF_o *)
           System_Linq_Enumerable__FirstOrDefault<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                      Method_System_Linq_Enumerable_FirstOrDefault<ECENNHNBAME_ECNMNALHFIF>__);
  return pEVar1;
}

