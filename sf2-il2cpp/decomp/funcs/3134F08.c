// EIABCPKDEBD$$NJPOMGCBPCD @ RVA 0x3134F08

System_Xml_XmlComment_o *
EIABCPKDEBD__NJPOMGCBPCD
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_Xml_XmlNode_o *PFIAGMFJKKJ,
          System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlComment_o *pSVar3;
  System_Xml_XmlNode_c *pSVar4;
  
  if ((DAT_045666f7 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_045666f7 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = JHMENEKPIBO->klass;
                    /* try { // try from 03234f58 to 03334f5f has its CatchHandler @ 0323511c */
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03234f68 to 03334f6f has its CatchHandler @ 032350c0 */
                    /* try { // try from 03234f70 to 03335037 has its CatchHandler @ 03234c64 */
    if (((pSVar4->_2).naturalAligment < bVar1) ||
       (pSVar2 = JHMENEKPIBO,
       (pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (*(pSVar4->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar4->vtable)._17_get_OwnerDocument.method);
    }
    if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlComment_o *)
               (*(code *)pSVar2->klass[1]._1.element_class)
                         (pSVar2,JLNPKGGFFDD,pSVar2->klass[1]._1.castClass);
      (*(JHMENEKPIBO->klass->vtable)._24_InsertAfter.methodPtr)
                (JHMENEKPIBO,pSVar3,PFIAGMFJKKJ,(JHMENEKPIBO->klass->vtable)._24_InsertAfter.method)
      ;
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

