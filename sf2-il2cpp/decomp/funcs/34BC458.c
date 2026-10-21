// IONAICHLBOO$$HHALGJMHNFP @ RVA 0x34BC458

bool IONAICHLBOO__HHALGJMHNFP(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  bool bVar1;
  System_Func_char__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Func_char__bool__o *predicate;
  
  if ((DAT_045685e4 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<char>__);
    FUN_01bab630(&System_Func<char,_bool>_TypeInfo);
    FUN_01bab630(&Method_IONAICHLBOO_<>c_EDOILMKCIKF__);
    FUN_01bab630(&IONAICHLBOO_<>c_TypeInfo);
    DAT_045685e4 = 1;
    method = extraout_x1;
  }
  if ((IONAICHLBOO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IONAICHLBOO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  predicate = IONAICHLBOO_<>c_TypeInfo->static_fields->__9__2_0;
  if (predicate == (System_Func_char__bool__o *)0x0) {
    if ((IONAICHLBOO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IONAICHLBOO_<>c_TypeInfo,method);
    }
    predicate = (System_Func_char__bool__o *)thunk_FUN_01bda818(System_Func<char,_bool>_TypeInfo);
    System_Func<char,_bool>___ctor();
    ppSVar2 = &IONAICHLBOO_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar2 = predicate;
    thunk_FUN_01c20e04(ppSVar2,predicate);
  }
  bVar1 = System_Linq_Enumerable__Any<char>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)DIHAKADKIKM,
                     (System_Func_TSource__bool__o *)predicate,
                     Method_System_Linq_Enumerable_Any<char>__);
  return bVar1;
}

