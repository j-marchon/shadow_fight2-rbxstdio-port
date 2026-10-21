// EIABCPKDEBD$$GAODJPOHKON @ RVA 0x3134088

System_Xml_XmlElement_o *
EIABCPKDEBD__GAODJPOHKON
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
  if ((DAT_045666ee & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666ee = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
      (*(JHMENEKPIBO->klass->vtable)._24_InsertAfter.methodPtr)
                (JHMENEKPIBO,pSVar2,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._24_InsertAfter.method)
      ;
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

