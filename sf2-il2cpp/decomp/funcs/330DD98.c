// GIAMPEGMNHE$$DOLFIEDIDHN @ RVA 0x330DD98

MGNDHCBAPEN_float__float__o *
GIAMPEGMNHE__DOLFIEDIDHN
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KMKCEANBDGG,float IEJIPPALEFB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_float__float__o *__this;
  
  if ((DAT_0456779b & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<float,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<float,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_9058);
    DAT_0456779b = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340de8c:
    __this = (MGNDHCBAPEN_float__float__o *)thunk_FUN_01bda818(MGNDHCBAPEN<float,_float>_TypeInfo);
    MGNDHCBAPEN<float,_float>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<float,_float>__ctor__);
    return __this;
  }
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058,(MethodInfo *)0x0);
    KMKCEANBDGG = EIABCPKDEBD__GICIEKCGOHA(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868,(MethodInfo *)0x0);
      IEJIPPALEFB = EIABCPKDEBD__GICIEKCGOHA(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
      goto LAB_0340de8c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

