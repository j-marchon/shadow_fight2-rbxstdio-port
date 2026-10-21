// IDDIABHBDEE$$LAKLJODNBFO @ RVA 0x337D2A4

System_Collections_Generic_IEnumerable_XmlNode__o *
IDDIABHBDEE__LAKLJODNBFO(System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  IDDIABHBDEE_MLOPIFFLMDK_o *__this;
  CFGLKHFFEKA_o *pCVar1;
  System_Collections_Generic_IEnumerable_XmlNode__o *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
                    /* try { // try from 0347d2a4 to 0357d4c3 has its CatchHandler @ 0347d2a4
                       catch() { ... } // from try @ 0347d2a4 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d5fc with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d624 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d894 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d8a8 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d8c0 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d914 with catch @ 0347d2a4
                       catch() { ... } // from try @ 0347d958 with catch @ 0347d2a4 */
  if ((DAT_04567b93 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&Method_IDDIABHBDEE_MLOPIFFLMDK_FMKHIOKCKDE__);
    FUN_01bab630(&IDDIABHBDEE_MLOPIFFLMDK_TypeInfo);
    DAT_04567b93 = 1;
    method = extraout_x1;
  }
  __this = (IDDIABHBDEE_MLOPIFFLMDK_o *)thunk_FUN_01bda818(IDDIABHBDEE_MLOPIFFLMDK_TypeInfo,method);
  IDDIABHBDEE_MLOPIFFLMDK___ctor(__this,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar1 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if (__this != (IDDIABHBDEE_MLOPIFFLMDK_o *)0x0) {
    (__this->fields).currentVersion = pCVar1;
    thunk_FUN_01c20e04();
    method_00 = extraout_x1_00;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_01;
    }
    source = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    pSVar2 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_Where<XmlNode>__);
    return (System_Collections_Generic_IEnumerable_XmlNode__o *)pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

