// IDDIABHBDEE$$JOHPEAKPFMA @ RVA 0x337BDC0

System_Xml_XmlNode_o *
IDDIABHBDEE__JOHPEAKPFMA(System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_XmlNode__bool__o **ppSVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Func_XmlNode__bool__o *predicate;
  
  if ((DAT_04567bb6 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
                    /* try { // try from 0347bdec to 0357bdf7 has its CatchHandler @ 0347b938 */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<XmlNode>__);
                    /* try { // try from 0347bdf8 to 0357bdff has its CatchHandler @ 0347be00 */
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 0347bd84 with catch @ 0347be00
                       catch() { ... } // from try @ 0347bdf8 with catch @ 0347be00 */
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_NLBHOPDMMGI__);
    FUN_01bab630(&IDDIABHBDEE_<>c_TypeInfo);
    DAT_04567bb6 = 1;
  }
  if (GGDPPDFOEOH != (System_Xml_XmlNode_o *)0x0) {
    source = (System_Collections_IEnumerable_o *)
             (*(GGDPPDFOEOH->klass->vtable)._13_get_ChildNodes.methodPtr)
                       (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._13_get_ChildNodes.method);
    source_00 = System_Linq_Enumerable__Cast<object>
                          (source,Method_System_Linq_Enumerable_Cast<XmlNode>__);
    if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo);
    }
    predicate = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__42_0;
    if (predicate == (System_Func_XmlNode__bool__o *)0x0) {
      if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo);
      }
      predicate = (System_Func_XmlNode__bool__o *)
                  thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__42_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pSVar2 = (System_Xml_XmlNode_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<XmlNode>__);
    return pSVar2;
  }
  return (System_Xml_XmlNode_o *)0x0;
}

