// CGALNIOABHK$$APNMIPIALNP @ RVA 0x34471BC

System_Collections_Generic_List_IENLNOEDCFF__o *
CGALNIOABHK__APNMIPIALNP
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON
          ,MethodInfo *method)

{
  System_Collections_Generic_List_IENLNOEDCFF__o *JGHPAFEFEFB;
  long *plVar1;
  System_Xml_XmlNode_o *pSVar2;
  MethodInfo *pMVar3;
  int iVar4;
  
  if ((DAT_04568249 & 1) == 0) {
    FUN_01bab630(&CGALNIOABHK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_12811);
    DAT_04568249 = 1;
  }
  JGHPAFEFEFB = (System_Collections_Generic_List_IENLNOEDCFF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_12811,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pMVar3 = *(MethodInfo **)(*plVar1 + 0x470);
      pSVar2 = (System_Xml_XmlNode_o *)(**(code **)(*plVar1 + 0x468))(plVar1,StringLiteral_4577);
      if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
      }
      CGALNIOABHK__MLJDPILPJDE(pSVar2,JGHPAFEFEFB,pMVar3);
    }
    if (EDMMHCAGPON != (System_Collections_Generic_List_XmlNode__o *)0x0) {
      if (0 < (EDMMHCAGPON->fields)._size) {
        iVar4 = 0;
        do {
          plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                     (AHDGNOJPPIB,StringLiteral_12811,
                                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (plVar1 != (long *)0x0) {
            pMVar3 = *(MethodInfo **)(*plVar1 + 0x470);
            pSVar2 = (System_Xml_XmlNode_o *)
                     (**(code **)(*plVar1 + 0x468))(plVar1,StringLiteral_4577);
            if ((CGALNIOABHK_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(CGALNIOABHK_TypeInfo);
            }
            CGALNIOABHK__MLJDPILPJDE(pSVar2,JGHPAFEFEFB,pMVar3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (EDMMHCAGPON->fields)._size);
      }
      return JGHPAFEFEFB;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

