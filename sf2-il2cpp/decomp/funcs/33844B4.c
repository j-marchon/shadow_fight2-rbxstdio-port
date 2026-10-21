// IDDIABHBDEE$$JNFOCBCBHOH @ RVA 0x33844B4

void IDDIABHBDEE__JNFOCBCBHOH
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  bool bVar1;
  IDDIABHBDEE_FDOKJAFPJFA_o *__this_00;
  CFGLKHFFEKA_o *pCVar2;
  System_Collections_Generic_IEnumerable_XmlNode__o *source;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 034844c8 to 035845f7 has its CatchHandler @ 034844c8
                       catch() { ... } // from try @ 034844c8 with catch @ 034844c8
                       catch() { ... } // from try @ 03484798 with catch @ 034844c8
                       catch() { ... } // from try @ 03484854 with catch @ 034844c8
                       catch() { ... } // from try @ 0348485c with catch @ 034844c8
                       catch() { ... } // from try @ 03484948 with catch @ 034844c8 */
  if ((DAT_04567bbb & 1) == 0) {
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<XmlNode>__);
    FUN_01bab630(&Method_IDDIABHBDEE_FDOKJAFPJFA_MNLALOKGGDH__);
    FUN_01bab630(&IDDIABHBDEE_FDOKJAFPJFA_TypeInfo);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    DAT_04567bbb = 1;
  }
  __this_00 = (IDDIABHBDEE_FDOKJAFPJFA_o *)thunk_FUN_01bda818(IDDIABHBDEE_FDOKJAFPJFA_TypeInfo);
  IDDIABHBDEE_FDOKJAFPJFA___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._PFHAOFALPJP_k__BackingField = true;
  if (GGDPPDFOEOH != (System_Xml_XmlNode_o *)0x0) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    if (__this_00 == (IDDIABHBDEE_FDOKJAFPJFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (__this_00->fields).version = pCVar2;
    thunk_FUN_01c20e04();
    pCVar2 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
    CFGLKHFFEKA___ctor(pCVar2,(MethodInfo *)0x0);
    (__this_00->fields).configVersion = pCVar2;
    thunk_FUN_01c20e04(&__this_00->fields,pCVar2);
    method_00 = extraout_x1;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    source = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
                    /* try { // try from 034845f8 to 0358461f has its CatchHandler @ 0348488c */
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
    System_Func<object,_bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       Method_System_Linq_Enumerable_Any<XmlNode>__);
    (__this->fields)._PFHAOFALPJP_k__BackingField = bVar1;
  }
  return;
}

