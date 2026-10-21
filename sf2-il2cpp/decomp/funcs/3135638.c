// EIABCPKDEBD$$DGPOFACHGMP @ RVA 0x3135638

System_Xml_XmlNode_o *
EIABCPKDEBD__DGPOFACHGMP
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *JOHFLOEABJL,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_Xml_XmlNode_c *pSVar5;
  
  if ((DAT_045666fb & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666fb = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._17_get_OwnerDocument.method);
    if (pSVar2 == (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
      if ((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) {
        pSVar2 = (System_Xml_XmlNode_o *)0x0;
      }
      else {
        pSVar2 = JHMENEKPIBO;
        if ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlDocument_TypeInfo) {
          pSVar2 = (System_Xml_XmlNode_o *)0x0;
        }
      }
    }
    if ((JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) &&
       (uVar3 = (*(JOHFLOEABJL->klass->vtable)._40_Clone.methodPtr)
                          (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._40_Clone.method),
       pSVar2 != (System_Xml_XmlNode_o *)0x0)) {
      pSVar5 = pSVar2->klass;
      uVar4._0_4_ = pSVar5[1]._2.instance_size;
      uVar4._4_4_ = pSVar5[1]._2.actualSize;
      pSVar2 = (System_Xml_XmlNode_o *)(*pSVar5[1]._2.genericContainerHandle)(pSVar2,uVar3,1,uVar4);
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

