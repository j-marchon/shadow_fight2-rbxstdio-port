// GALHNMPIEHA$$KCAJCGDCFCA @ RVA 0x316592C

bool GALHNMPIEHA__KCAJCGDCFCA(GALHNMPIEHA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Func_BDMABHJEEGD__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  BPBGAAHBFKH_o *pBVar3;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *source;
  System_Func_BDMABHJEEGD__bool__o *predicate;
  
  if ((DAT_045668b5 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BDMABHJEEGD,_bool>_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_IAFNHPMFACJ__);
    FUN_01bab630(&GALHNMPIEHA_<>c_TypeInfo);
    DAT_045668b5 = 1;
    method = extraout_x1;
  }
  pBVar3 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if (pBVar3 != (BPBGAAHBFKH_o *)0x0) {
    source = (pBVar3->fields).IGPJEDLPAGI;
    if ((GALHNMPIEHA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GALHNMPIEHA_<>c_TypeInfo,method);
      method = extraout_x1_00;
    }
    predicate = GALHNMPIEHA_<>c_TypeInfo->static_fields->__9__9_0;
    if (predicate == (System_Func_BDMABHJEEGD__bool__o *)0x0) {
      if ((GALHNMPIEHA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GALHNMPIEHA_<>c_TypeInfo,method);
      }
      predicate = (System_Func_BDMABHJEEGD__bool__o *)
                  thunk_FUN_01bda818(System_Func<BDMABHJEEGD,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar2 = &GALHNMPIEHA_<>c_TypeInfo->static_fields->__9__9_0;
      *ppSVar2 = predicate;
      thunk_FUN_01c20e04(ppSVar2,predicate);
    }
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)predicate,
                       Method_System_Linq_Enumerable_Any<BDMABHJEEGD>__);
    return bVar1;
  }
  return false;
}

