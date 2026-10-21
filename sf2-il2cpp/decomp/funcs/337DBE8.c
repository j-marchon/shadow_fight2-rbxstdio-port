// IDDIABHBDEE$$PGPGIHHBEOD @ RVA 0x337DBE8

void IDDIABHBDEE__PGPGIHHBEOD
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  JKJDJDHKFAK_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  EBGDOILAAEJ_o **ppEVar3;
  
                    /* catch() { ... } // from try @ 0347dadc with catch @ 0347dbe8 */
                    /* try { // try from 0347dc00 to 0357dc03 has its CatchHandler @ 0347dc24 */
                    /* try { // try from 0347dc04 to 0357dc2b has its CatchHandler @ 0347d970 */
  method_00 = (MethodInfo *)GGDPPDFOEOH;
  if ((DAT_04567b95 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_279);
                    /* catch() { ... } // from try @ 0347dc00 with catch @ 0347dc24 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_280);
                    /* try { // try from 0347dc2c to 0357dc33 has its CatchHandler @ 0347dc48 */
                    /* try { // try from 0347dc34 to 0357dc3f has its CatchHandler @ 0347d970 */
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 0347dc40 to 0357dc47 has its CatchHandler @ 0347dc48 */
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
                    /* catch() { ... } // from try @ 0347dc2c with catch @ 0347dc48
                       catch() { ... } // from try @ 0347dc40 with catch @ 0347dc48 */
    FUN_01bab630(&JKJDJDHKFAK_TypeInfo);
    DAT_04567b95 = 1;
    method_00 = extraout_x1;
  }
  if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pSVar2 = IDDIABHBDEE__JNEDBDPHMOI(GGDPPDFOEOH,method_00);
  __this_00 = (JKJDJDHKFAK_o *)thunk_FUN_01bda818(JKJDJDHKFAK_TypeInfo);
  JKJDJDHKFAK___ctor(__this_00,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_279,(MethodInfo *)0x0);
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_280,(MethodInfo *)0x0);
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_01,name,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,true,(MethodInfo *)0x0);
      if (__this_00 != (JKJDJDHKFAK_o *)0x0) {
        (__this_00->fields)._GMGEIPGKFMM_k__BackingField = bVar1;
        goto LAB_0347dd40;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0347dd40:
  ppEVar3 = &(__this->fields)._PMENANGNIPH_k__BackingField;
  *ppEVar3 = (EBGDOILAAEJ_o *)__this_00;
  thunk_FUN_01c20e04(ppEVar3,__this_00);
  return;
}

