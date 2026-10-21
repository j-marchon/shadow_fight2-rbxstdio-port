// PBNDDBCDELD$$LDCOFFHBOAL @ RVA 0x33B3798

void PBNDDBCDELD__LDCOFFHBOAL(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *method_00;
  float IDGIPLNJMEF;
  
                    /* try { // try from 034b37b0 to 035b37b7 has its CatchHandler @ 034b4890 */
  if ((DAT_04567d63 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3000);
                    /* try { // try from 034b37c8 to 035b37cf has its CatchHandler @ 034b4888 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3001);
                    /* try { // try from 034b37d0 to 035b37db has its CatchHandler @ 034b4894 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&PBNDDBCDELD_TypeInfo);
    DAT_04567d63 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 034b37f0 to 035b37f7 has its CatchHandler @ 034b4910 */
                    /* try { // try from 034b3808 to 035b380f has its CatchHandler @ 034b4920 */
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034b381c to 035b3823 has its CatchHandler @ 034b491c */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034b3834 to 035b383b has its CatchHandler @ 034b4900 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3000,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 034b384c to 035b3853 has its CatchHandler @ 034b48e8 */
                    /* try { // try from 034b3854 to 035b385f has its CatchHandler @ 034b4808 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3001,(MethodInfo *)0x0)
    ;
                    /* try { // try from 034b3860 to 035b387b has its CatchHandler @ 034b4a28 */
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
                    /* try { // try from 034b3888 to 035b388f has its CatchHandler @ 034b47a4 */
    IDGIPLNJMEF = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
    bVar1 = PBNDDBCDELD__LOIGLPPPEBD(IDGIPLNJMEF,method_00);
                    /* try { // try from 034b38a0 to 035b38a7 has its CatchHandler @ 034b486c */
    PBNDDBCDELD_TypeInfo->static_fields->FKLHDJFKDBB = bVar1;
  }
                    /* try { // try from 034b38a8 to 035b38c3 has its CatchHandler @ 034b4a38 */
  return;
}

