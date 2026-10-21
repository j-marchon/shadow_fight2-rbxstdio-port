// AJOGJBFNELI$$BBOPDEOHOAI @ RVA 0x3014480

int32_t AJOGJBFNELI__BBOPDEOHOAI(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *name;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565bc4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2982);
                    /* try { // try from 031144ac to 032144c7 has its CatchHandler @ 031144ac
                       catch() { ... } // from try @ 031144ac with catch @ 031144ac
                       catch() { ... } // from try @ 031144d8 with catch @ 031144ac
                       catch() { ... } // from try @ 03114524 with catch @ 031144ac
                       catch() { ... } // from try @ 03114558 with catch @ 031144ac */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2983);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04565bc4 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031144c8 to 032144d3 has its CatchHandler @ 03114508 */
  AJOGJBFNELI__GIENGNEGHPJ(__this,method);
  pSVar2 = (__this->fields).LDGGIOJMLLD;
                    /* try { // try from 031144d4 to 032144d7 has its CatchHandler @ 03114504 */
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031144d8 to 0321451f has its CatchHandler @ 031144ac */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031144d4 with catch @ 03114504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031144c8 with catch @ 03114508
                        */
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03114520 to 03214523 has its CatchHandler @ 03114548 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2982,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03114524 to 0321454b has its CatchHandler @ 031144ac */
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_2983,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 03114520 with catch @ 03114548 */
                    /* try { // try from 0311454c to 03214557 has its CatchHandler @ 0311456c */
    name = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03114558 to 03214563 has its CatchHandler @ 031144ac */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf(__this_00,name,(MethodInfo *)0x0);
                    /* try { // try from 03114564 to 0321456b has its CatchHandler @ 0311456c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0311454c with catch @ 0311456c
                       catch(type#2 @ 00000000) { ... } // from try @ 03114564 with catch @ 0311456c
                        */
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,-1,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

