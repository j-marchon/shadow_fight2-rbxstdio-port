// GIAMPEGMNHE$$GGPIBJJKMPK @ RVA 0x330D3FC

MGNDHCBAPEN_int__int__o *
GIAMPEGMNHE__GGPIBJJKMPK
          (System_Xml_XmlNode_o *JHMENEKPIBO,int32_t KMKCEANBDGG,int32_t IEJIPPALEFB,
          MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_int__int__o *__this;
  
  if ((DAT_04567795 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_9058);
    DAT_04567795 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340d4f4:
    __this = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0340d500 to 0350d507 has its CatchHandler @ 0340d728 */
                    /* try { // try from 0340d508 to 0350d517 has its CatchHandler @ 0340d724 */
    MGNDHCBAPEN<int,_int>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<int,_int>__ctor__);
    return __this;
  }
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d494 to 0350d49b has its CatchHandler @ 0340d73c */
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058,(MethodInfo *)0x0);
    KMKCEANBDGG = EIABCPKDEBD__EHJNCGCICMP(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
                    /* try { // try from 0340d4b0 to 0350d4bf has its CatchHandler @ 0340d748 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d4c4 to 0350d4cb has its CatchHandler @ 0340d72c */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868,(MethodInfo *)0x0);
                    /* try { // try from 0340d4dc to 0350d4e3 has its CatchHandler @ 0340d70c */
      IEJIPPALEFB = EIABCPKDEBD__EHJNCGCICMP(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
                    /* try { // try from 0340d4e8 to 0350d4ef has its CatchHandler @ 0340d718 */
      goto LAB_0340d4f4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

