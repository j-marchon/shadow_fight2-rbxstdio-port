// EIABCPKDEBD$$BICIJJCJNCG @ RVA 0x31351B0

System_Xml_XmlNode_o *
EIABCPKDEBD__BICIJJCJNCG
          (System_Xml_XmlNode_o *AHDGNOJPPIB,System_String_o *BCPAFBNLBDE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032351c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,BCPAFBNLBDE,(AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    return pSVar1;
  }
  return (System_Xml_XmlNode_o *)0x0;
}

