// CGALNIOABHK$$GHPJIHEBELJ @ RVA 0x3446D48

System_Collections_Generic_List_KJFPGDFNFCL__o *
CGALNIOABHK__GHPJIHEBELJ
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
  if ((DAT_04568240 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo);
    FUN_01bab630(&StringLiteral_5995);
    DAT_04568240 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_KJFPGDFNFCL__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_5995);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
    }
    CGALNIOABHK__GHPJIHEBELJ(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03546ec0;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_5995);
        if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
        }
        CGALNIOABHK__GHPJIHEBELJ(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_03546ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

