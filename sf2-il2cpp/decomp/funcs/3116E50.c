// FPIPKMIODLH.FLANEOMPKLB$$EOHAEPHCPKF @ RVA 0x3116E50

bool FPIPKMIODLH_FLANEOMPKLB__EOHAEPHCPKF(FPIPKMIODLH_FLANEOMPKLB_o *__this,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *source;
  System_Func_IEFEBEDLHNN__bool__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_TSource__bool__o *predicate;
  undefined8 uVar3;
  OLKKAIFGGAK_o *pOVar4;
  System_Func_IEFEBEDLHNN__bool__o *predicate_00;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045665bf & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<IEFEBEDLHNN>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<IEFEBEDLHNN>__);
    FUN_01bab630(&Method_FPIPKMIODLH_FLANEOMPKLB_CDFFNDLGBEE__);
    FUN_01bab630(&System_Func<IEFEBEDLHNN,_bool>_TypeInfo);
    FUN_01bab630(&Method_FPIPKMIODLH_<>c_JCIGMJKGONI__);
    auVar5 = FUN_01bab630(&FPIPKMIODLH_<>c_TypeInfo);
    DAT_045665bf = 1;
  }
  uVar3 = auVar5._0_8_;
  pOVar4 = (__this->fields).model;
  if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
     (__this_00 = (pOVar4->fields).HMIAFJALFCJ, uVar3 = 0, __this_00 != (GBJGJEGPHKD_o *)0x0)) {
    source = GBJGJEGPHKD__INDHJCEIEAE(__this_00,(MethodInfo *)0x0);
    if ((FPIPKMIODLH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FPIPKMIODLH_<>c_TypeInfo);
    }
    predicate_00 = FPIPKMIODLH_<>c_TypeInfo->static_fields->__9__27_1;
    if (predicate_00 == (System_Func_IEFEBEDLHNN__bool__o *)0x0) {
      if ((FPIPKMIODLH_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(FPIPKMIODLH_<>c_TypeInfo);
      }
      predicate_00 = (System_Func_IEFEBEDLHNN__bool__o *)
                     thunk_FUN_01bda818(System_Func<IEFEBEDLHNN,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &FPIPKMIODLH_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = predicate_00;
      thunk_FUN_01c20e04(ppSVar2,predicate_00);
    }
    source_00 = System_Linq_Enumerable__Where<object>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)predicate_00,
                           Method_System_Linq_Enumerable_Where<IEFEBEDLHNN>__);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<IEFEBEDLHNN,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      (source_00,predicate,Method_System_Linq_Enumerable_Any<IEFEBEDLHNN>__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}

