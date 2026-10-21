// EIABCPKDEBD$$BHPIHHJHELJ @ RVA 0x31350F0

System_Xml_XmlElement_o *
EIABCPKDEBD__BHPIHHJHELJ
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_c *pSVar3;
  
                    /* catch() { ... } // from try @ 032350dc with catch @ 03235100 */
                    /* try { // try from 03235108 to 0333511b has its CatchHandler @ 0323518c */
  if ((DAT_045666f8 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03234f58 with catch @ 0323511c
                       try { // try from 0323511c to 03335133 has its CatchHandler @ 03234c64 */
    DAT_045666f8 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = JHMENEKPIBO->klass;
                    /* try { // try from 03235134 to 03335137 has its CatchHandler @ 03235160 */
                    /* try { // try from 03235138 to 0333516f has its CatchHandler @ 03234c64 */
    bVar1 = (System_Xml_XmlDocument_TypeInfo->_2).naturalAligment;
    if (((pSVar3->_2).naturalAligment < bVar1) ||
       (__this = (System_Xml_XmlDocument_o *)JHMENEKPIBO,
       (pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] !=
       (Il2CppClass *)System_Xml_XmlDocument_TypeInfo)) {
                    /* catch() { ... } // from try @ 03235134 with catch @ 03235160 */
      __this = (System_Xml_XmlDocument_o *)
               (*(pSVar3->vtable)._17_get_OwnerDocument.methodPtr)
                         (JHMENEKPIBO,(pSVar3->vtable)._17_get_OwnerDocument.method);
    }
    if (__this != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 03235170 to 03335177 has its CatchHandler @ 0323518c */
      pSVar2 = System_Xml_XmlDocument__CreateElement(__this,AFKICLAFDKC,(MethodInfo *)0x0);
                    /* try { // try from 03235178 to 03335183 has its CatchHandler @ 03234c64 */
                    /* try { // try from 03235184 to 0333518b has its CatchHandler @ 0323518c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03235108 with catch @ 0323518c
                       catch(type#2 @ 00000000) { ... } // from try @ 03235170 with catch @ 0323518c
                       catch(type#2 @ 00000000) { ... } // from try @ 03235184 with catch @ 0323518c
                        */
      (*(JHMENEKPIBO->klass->vtable)._27_AppendChild.methodPtr)
                (JHMENEKPIBO,pSVar2,(JHMENEKPIBO->klass->vtable)._27_AppendChild.method);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

