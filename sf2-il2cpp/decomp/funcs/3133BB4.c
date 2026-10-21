// EIABCPKDEBD$$BHPIHHJHELJ @ RVA 0x3133BB4

System_Xml_XmlElement_o *
EIABCPKDEBD__BHPIHHJHELJ
          (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  
                    /* try { // try from 03233bbc to 03333bbf has its CatchHandler @ 03233f80 */
  if (EKEMDOEAFHP != (System_Xml_XmlDocument_o *)0x0) {
                    /* try { // try from 03233bc0 to 03333be7 has its CatchHandler @ 03233fc0 */
    pSVar1 = System_Xml_XmlDocument__CreateElement(EKEMDOEAFHP,AFKICLAFDKC,(MethodInfo *)0x0);
    (*(EKEMDOEAFHP->klass->vtable)._27_AppendChild.methodPtr)
              (EKEMDOEAFHP,pSVar1,(EKEMDOEAFHP->klass->vtable)._27_AppendChild.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

