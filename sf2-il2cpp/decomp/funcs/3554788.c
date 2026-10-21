// BJAIACBABEB$$EJPLGODMEAK @ RVA 0x3554788

void BJAIACBABEB__EJPLGODMEAK
               (BJAIACBABEB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04568b5d & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6481);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6482);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6483);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6484);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b5d = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6481,(MethodInfo *)0x0);
                    /* try { // try from 03654830 to 03754837 has its CatchHandler @ 036549c0 */
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6482,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                               (JHMENEKPIBO,pSVar3,(JHMENEKPIBO->klass->vtable)._51_get_Item.method)
    ;
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 03654944 to 03754947 has its CatchHandler @ 0365495c */
      return;
    }
                    /* try { // try from 03654888 to 037548a3 has its CatchHandler @ 03654958 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
                    /* try { // try from 036548a4 to 037548d7 has its CatchHandler @ 0365467c */
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6483,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036548d8 to 037548df has its CatchHandler @ 03654964 */
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6484,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036548f4 to 037548f7 has its CatchHandler @ 03654954 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0365490c to 03754913 has its CatchHandler @ 03654960 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 03654914 to 03754943 has its CatchHandler @ 0365467c */
      (__this->fields).FKDNIDNFEIC = pSVar3;
      thunk_FUN_01c20e04(&__this->fields,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03654948 to 0375494f has its CatchHandler @ 036549bc */
  FUN_01bab8c8();
}

