// IDDIABHBDEE$$HJNLDOCBHPD @ RVA 0x337BA2C

System_Collections_Generic_IEnumerable_XmlNode__o *
IDDIABHBDEE__HJNLDOCBHPD(System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Func_XmlNode__bool__o **ppSVar1;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_Func_XmlNode__bool__o *predicate;
  
  if ((DAT_04567b97 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Cast<XmlNode>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<XmlNode>__);
    FUN_01bab630(&System_Func<XmlNode,_bool>_TypeInfo);
    FUN_01bab630(&Method_IDDIABHBDEE_<>c_FOHPLCKIPOO__);
    FUN_01bab630(&IDDIABHBDEE_<>c_TypeInfo);
    DAT_04567b97 = 1;
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
    predicate = IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__43_0;
    if (predicate == (System_Func_XmlNode__bool__o *)0x0) {
      if ((IDDIABHBDEE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IDDIABHBDEE_<>c_TypeInfo);
      }
                    /* try { // try from 0347bb0c to 0357bb33 has its CatchHandler @ 0347bd50 */
      predicate = (System_Func_XmlNode__bool__o *)
                  thunk_FUN_01bda818(System_Func<XmlNode,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &IDDIABHBDEE_<>c_TypeInfo->static_fields->__9__43_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pSVar2 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<XmlNode>__);
    return (System_Collections_Generic_IEnumerable_XmlNode__o *)pSVar2;
  }
                    /* try { // try from 0347bb68 to 0357bb93 has its CatchHandler @ 0347bd4c */
  return (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0;
}

