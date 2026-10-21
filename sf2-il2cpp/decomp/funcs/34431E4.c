// CGALNIOABHK$$MLJDPILPJDE @ RVA 0x34431E4

System_Collections_Generic_List_IENLNOEDCFF__o *
CGALNIOABHK__MLJDPILPJDE
          (System_String_o *BCPAFBNLBDE,System_Xml_XmlNode_o *OBDMHHJBLKL,
          System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *JGHPAFEFEFB;
  System_Xml_XmlNode_o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  int index;
  
                    /* try { // try from 035431e4 to 036431ef has its CatchHandler @ 03543030 */
                    /* try { // try from 035431f0 to 036431f7 has its CatchHandler @ 035431f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035431dc with catch @ 035431f8
                       catch(type#2 @ 00000000) { ... } // from try @ 035431f0 with catch @ 035431f8
                        */
  if ((DAT_04568235 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    DAT_04568235 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  if (OBDMHHJBLKL != (System_Xml_XmlNode_o *)0x0) {
    pMVar3 = (OBDMHHJBLKL->klass->vtable)._51_get_Item.method;
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(OBDMHHJBLKL->klass->vtable)._51_get_Item.methodPtr)(OBDMHHJBLKL,BCPAFBNLBDE);
    if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
    }
    CGALNIOABHK__MLJDPILPJDE(pSVar1,JGHPAFEFEFB,pMVar3);
    if ((EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) &&
       (0 < (EDMMHCAGPON->fields)._size)) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_0354334c;
        pMVar3 = pIVar2->klass->vtable[0x33].method;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*pIVar2->klass->vtable[0x33].methodPtr)(pIVar2,BCPAFBNLBDE);
        if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
        }
        CGALNIOABHK__MLJDPILPJDE(pSVar1,JGHPAFEFEFB,pMVar3);
        index = index + 1;
      } while (index < (EDMMHCAGPON->fields)._size);
    }
    return JGHPAFEFEFB;
  }
LAB_0354334c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

