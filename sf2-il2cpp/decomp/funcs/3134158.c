// EIABCPKDEBD$$OJIPGJBNOKD @ RVA 0x3134158

System_Xml_XmlAttribute_o *
EIABCPKDEBD__OJIPGJBNOKD(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return (System_Xml_XmlAttribute_o *)0x0;
  }
  plVar2 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (iVar1 < 1) {
      return (System_Xml_XmlAttribute_o *)0x0;
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    plVar2 = (long *)(*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0)),
       __this != (System_Xml_XmlAttributeCollection_o *)0x0)) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,iVar1 + -1,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

