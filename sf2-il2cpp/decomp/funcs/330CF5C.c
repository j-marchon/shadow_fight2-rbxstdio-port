// GIAMPEGMNHE$$BHMEMFPFMJC @ RVA 0x330CF5C

MGNDHCBAPEN_uint__uint__o *
GIAMPEGMNHE__BHMEMFPFMJC
          (System_Xml_XmlNode_o *JHMENEKPIBO,uint32_t KMKCEANBDGG,uint32_t IEJIPPALEFB,
          MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_uint__uint__o *__this;
  
                    /* try { // try from 0340cf5c to 0350cf7b has its CatchHandler @ 0340d290 */
  if ((DAT_04567792 & 1) == 0) {
                    /* try { // try from 0340cf80 to 0350cf87 has its CatchHandler @ 0340d160 */
    FUN_01bab630(&Method_MGNDHCBAPEN<uint,_uint>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<uint,_uint>_TypeInfo);
                    /* try { // try from 0340cf98 to 0350cf9f has its CatchHandler @ 0340d1b4 */
    FUN_01bab630(&StringLiteral_8868);
                    /* try { // try from 0340cfa4 to 0350cfab has its CatchHandler @ 0340d170 */
    FUN_01bab630(&StringLiteral_9058);
    DAT_04567792 = 1;
  }
                    /* try { // try from 0340cfbc to 0350cfc3 has its CatchHandler @ 0340d174 */
                    /* try { // try from 0340cfc4 to 0350cfd3 has its CatchHandler @ 0340d16c */
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340d054:
    __this = (MGNDHCBAPEN_uint__uint__o *)thunk_FUN_01bda818(MGNDHCBAPEN<uint,_uint>_TypeInfo);
                    /* try { // try from 0340d05c to 0350d07b has its CatchHandler @ 0340d294 */
    MGNDHCBAPEN<uint,_uint>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<uint,_uint>__ctor__);
    return __this;
  }
                    /* try { // try from 0340cfdc to 0350cffb has its CatchHandler @ 0340d28c */
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058,(MethodInfo *)0x0);
                    /* try { // try from 0340d000 to 0350d007 has its CatchHandler @ 0340d168 */
    KMKCEANBDGG = EIABCPKDEBD__FECKAJHFDJM(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
                    /* try { // try from 0340d018 to 0350d01f has its CatchHandler @ 0340d17c */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d024 to 0350d02b has its CatchHandler @ 0340d1a8 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868,(MethodInfo *)0x0);
                    /* try { // try from 0340d03c to 0350d043 has its CatchHandler @ 0340d178 */
      IEJIPPALEFB = EIABCPKDEBD__FECKAJHFDJM(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
                    /* try { // try from 0340d044 to 0350d053 has its CatchHandler @ 0340d18c */
      goto LAB_0340d054;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0340d080 to 0350d087 has its CatchHandler @ 0340d1a0 */
  FUN_01bab8c8();
}

