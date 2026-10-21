// TypeDefIndex 3405
// Namespace: 
// public class BJAIACBABEB
// Fields:
//   private const string MDEONAPHNNI = "FBData";
//   public string FKDNIDNFEIC; // 0x10

// ===== public void EJPLGODMEAK(XmlNode JHMENEKPIBO)  [RVA 0x3554788]
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
    FUN_01bab630(&StringLiteral_1/*""*/);
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
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
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


// ===== public void .ctor()  [RVA 0x355494C]
// BJAIACBABEB$$.ctor @ RVA 0x355494C

void BJAIACBABEB___ctor(BJAIACBABEB_o *__this,MethodInfo *method)

{
                    /* try { // try from 03654950 to 0375497b has its CatchHandler @ 0365467c */
                    /* catch() { ... } // from try @ 036548f4 with catch @ 03654954 */
                    /* catch() { ... } // from try @ 03654888 with catch @ 03654958 */
                    /* catch() { ... } // from try @ 03654944 with catch @ 0365495c */
                    /* catch() { ... } // from try @ 0365490c with catch @ 03654960 */
                    /* catch() { ... } // from try @ 036548d8 with catch @ 03654964 */
  if ((DAT_04568b5e & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0365497c to 0375497f has its CatchHandler @ 036549a0 */
    DAT_04568b5e = 1;
  }
                    /* try { // try from 03654980 to 037549a7 has its CatchHandler @ 0365467c */
  (__this->fields).FKDNIDNFEIC = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0365497c with catch @ 036549a0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MNJAHNGEALE(XmlNode JHMENEKPIBO)  [RVA 0x35549A4]
// BJAIACBABEB$$MNJAHNGEALE @ RVA 0x35549A4

void BJAIACBABEB__MNJAHNGEALE
               (BJAIACBABEB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  System_Xml_XmlElement_o *pSVar4;
  
                    /* try { // try from 036549a8 to 037549bb has its CatchHandler @ 03654a20 */
                    /* catch() { ... } // from try @ 03654948 with catch @ 036549bc
                       try { // try from 036549bc to 037549d7 has its CatchHandler @ 0365467c */
                    /* catch() { ... } // from try @ 03654830 with catch @ 036549c0 */
                    /* try { // try from 036549d8 to 037549db has its CatchHandler @ 036549fc */
                    /* try { // try from 036549dc to 03754a03 has its CatchHandler @ 0365467c */
  if ((DAT_04568b5f & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6485);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6486);
                    /* catch() { ... } // from try @ 036549d8 with catch @ 036549fc */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6487);
                    /* try { // try from 03654a04 to 03754a0b has its CatchHandler @ 03654a20 */
                    /* try { // try from 03654a0c to 03754a17 has its CatchHandler @ 0365467c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6488);
                    /* try { // try from 03654a18 to 03754a1f has its CatchHandler @ 03654a20 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6489);
                    /* catch() { ... } // from try @ 036549a8 with catch @ 03654a20
                       catch() { ... } // from try @ 03654a04 with catch @ 03654a20
                       catch() { ... } // from try @ 03654a18 with catch @ 03654a20 */
                    /* try { // try from 03654a24 to 03754b77 has its CatchHandler @ 03654a24
                       catch() { ... } // from try @ 03654a24 with catch @ 03654a24
                       catch() { ... } // from try @ 03654d98 with catch @ 03654a24
                       catch() { ... } // from try @ 03654dac with catch @ 03654a24
                       catch() { ... } // from try @ 03654e34 with catch @ 03654a24
                       catch() { ... } // from try @ 03654e64 with catch @ 03654a24
                       catch() { ... } // from try @ 03654ed4 with catch @ 03654a24 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6490);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04568b5f = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6485,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6486,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlElement_o *)
             (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                       (JHMENEKPIBO,pSVar3,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    if (pSVar4 == (System_Xml_XmlElement_o *)0x0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6487,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6488,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,pSVar3,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlElement_o *)0x0) goto LAB_03654bb0;
    }
    (*(pSVar4->klass->vtable)._49_RemoveAll.methodPtr)
              (pSVar4,(pSVar4->klass->vtable)._49_RemoveAll.method);
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6489,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6490,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03654b78 to 03754ba3 has its CatchHandler @ 03654dd8 */
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03654bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar4->klass->vtable)._66_SetAttribute.methodPtr)
              (pSVar4,pSVar3,(__this->fields).FKDNIDNFEIC,
               (pSVar4->klass->vtable)._66_SetAttribute.method);
    return;
  }
LAB_03654bb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

