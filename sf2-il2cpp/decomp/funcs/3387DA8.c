// IDDIABHBDEE$$MOGJBJOFNAI @ RVA 0x3387DA8

void IDDIABHBDEE__MOGJBJOFNAI
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_XmlNode__o *source;
  System_Collections_Generic_List_TSource__o *OBDMHHJBLKL;
  PCKJEMMFMKL_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)GGDPPDFOEOH;
  if ((DAT_04567bb9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<XmlNode>__);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    DAT_04567bb9 = 1;
    method_00 = extraout_x1;
  }
  if (GGDPPDFOEOH != (System_Xml_XmlNode_o *)0x0) {
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    source = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,method_00);
    if (((source != (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) &&
        (OBDMHHJBLKL = System_Linq_Enumerable__ToList<object>
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  Method_System_Linq_Enumerable_ToList<XmlNode>__),
        OBDMHHJBLKL != (System_Collections_Generic_List_TSource__o *)0x0)) &&
       ((OBDMHHJBLKL->fields)._size != 0)) {
      __this_00 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (PCKJEMMFMKL_o *)0x0) {
        PCKJEMMFMKL__LIHIHHFHAGM
                  (__this_00,(System_Collections_Generic_IEnumerable_XmlNode__o *)OBDMHHJBLKL,
                   (MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

