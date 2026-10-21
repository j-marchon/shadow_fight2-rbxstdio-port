// CGALNIOABHK$$LJDOIGBJCMN @ RVA 0x3446EC4

System_Collections_Generic_List_JADGCGOJLJB__o *
CGALNIOABHK__LJDOIGBJCMN
          (System_Xml_XmlNode_o *OBDMHHJBLKL,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_JADGCGOJLJB__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
  if ((DAT_0456824c & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo);
    FUN_01bab630(&StringLiteral_7634);
    DAT_0456824c = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_JADGCGOJLJB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,StringLiteral_7634);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
    }
    CGALNIOABHK__LJDOIGBJCMN(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0354703c;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,StringLiteral_7634);
        if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
        }
        CGALNIOABHK__LJDOIGBJCMN(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_0354703c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

