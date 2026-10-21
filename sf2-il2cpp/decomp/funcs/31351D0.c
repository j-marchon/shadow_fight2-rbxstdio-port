// EIABCPKDEBD$$DJGFHLMINNB @ RVA 0x31351D0

System_Xml_XmlNode_o *
EIABCPKDEBD__DJGFHLMINNB
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *method_00;
  
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (JHMENEKPIBO->klass->vtable)._51_get_Item.method;
  pSVar1 = (System_Xml_XmlNode_o *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)();
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    return pSVar1;
  }
  pSVar1 = EIABCPKDEBD__KPODFFHOHGK(JHMENEKPIBO,BCPAFBNLBDE,method_00);
  return pSVar1;
}

