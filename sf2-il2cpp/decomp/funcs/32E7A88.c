// MEJIKMPNBNL$$ANCEMNBGNAN @ RVA 0x32E7A88

OOMHDDBCBJP_o * MEJIKMPNBNL__ANCEMNBGNAN(MEJIKMPNBNL_o *__this,MethodInfo *method)

{
  System_Func_OOMHDDBCBJP__bool__o **ppSVar1;
  OOMHDDBCBJP_o *pOVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_OOMHDDBCBJP__o *source;
  System_Func_OOMHDDBCBJP__bool__o *predicate;
  
  if ((DAT_0456761e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<OOMHDDBCBJP>__);
    FUN_01bab630(&System_Func<OOMHDDBCBJP,_bool>_TypeInfo);
    FUN_01bab630(&Method_MEJIKMPNBNL_<>c_HFELGODPNGN__);
    FUN_01bab630(&MEJIKMPNBNL_<>c_TypeInfo);
    DAT_0456761e = 1;
    method = extraout_x1;
  }
  source = (__this->fields).BDCBJJGNPMC;
  if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__22_0;
  if (predicate == (System_Func_OOMHDDBCBJP__bool__o *)0x0) {
    if ((MEJIKMPNBNL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MEJIKMPNBNL_<>c_TypeInfo,method);
    }
    predicate = (System_Func_OOMHDDBCBJP__bool__o *)
                thunk_FUN_01bda818(System_Func<OOMHDDBCBJP,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    ppSVar1 = &MEJIKMPNBNL_<>c_TypeInfo->static_fields->__9__22_0;
    *ppSVar1 = predicate;
    thunk_FUN_01c20e04(ppSVar1,predicate);
  }
  pOVar2 = (OOMHDDBCBJP_o *)
           System_Linq_Enumerable__FirstOrDefault<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)predicate,
                      Method_System_Linq_Enumerable_FirstOrDefault<OOMHDDBCBJP>__);
  return pOVar2;
}

