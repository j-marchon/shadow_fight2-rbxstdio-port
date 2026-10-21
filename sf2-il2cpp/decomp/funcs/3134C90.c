// EIABCPKDEBD$$KPODFFHOHGK @ RVA 0x3134C90

System_Xml_XmlNode_o *
EIABCPKDEBD__KPODFFHOHGK
          (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  
  if (EKEMDOEAFHP != (System_Xml_XmlDocument_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(EKEMDOEAFHP->klass->vtable)._84_CreateNode.methodPtr)
                       (EKEMDOEAFHP,1,BCPAFBNLBDE,0,
                        (EKEMDOEAFHP->klass->vtable)._84_CreateNode.method);
    (*(EKEMDOEAFHP->klass->vtable)._27_AppendChild.methodPtr)
              (EKEMDOEAFHP,pSVar1,(EKEMDOEAFHP->klass->vtable)._27_AppendChild.method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

