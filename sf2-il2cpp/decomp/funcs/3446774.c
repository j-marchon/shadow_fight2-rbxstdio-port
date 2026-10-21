// CGALNIOABHK$$AMHDBJPIFOO @ RVA 0x3446774

void CGALNIOABHK__AMHDBJPIFOO
               (ECENNHNBAME_o *NLEBDPHNIDI,System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_XmlNode__o *EDMMHCAGPON,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  Il2CppObject *pIVar4;
  CNDPAJOLKFN_o *pCVar5;
  int index;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o PHCOHKNFGLE;
  UnityEngine_Vector3_o PHCOHKNFGLE_00;
  
                    /* try { // try from 03546780 to 03646783 has its CatchHandler @ 03546798 */
                    /* catch() { ... } // from try @ 03546780 with catch @ 03546798 */
                    /* try { // try from 035467a0 to 03646813 has its CatchHandler @ 035468bc */
  if ((DAT_04568245 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&StringLiteral_15220);
    FUN_01bab630(&StringLiteral_11706);
    FUN_01bab630(&StringLiteral_14762);
    FUN_01bab630(&StringLiteral_3269);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_3271);
                    /* catch() { ... } // from try @ 03546714 with catch @ 03546814
                       try { // try from 03546814 to 03646823 has its CatchHandler @ 0354600c */
    FUN_01bab630(&StringLiteral_3274);
                    /* try { // try from 03546824 to 03646827 has its CatchHandler @ 03546838 */
    DAT_04568245 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) goto LAB_03546af0;
                    /* catch() { ... } // from try @ 03546824 with catch @ 03546838 */
                    /* try { // try from 03546840 to 036468a7 has its CatchHandler @ 035468bc */
  plVar1 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_14762,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if (plVar1 == (long *)0x0) {
    if (EDMMHCAGPON == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_03546af0;
    if (0 < (EDMMHCAGPON->fields)._size) {
      index = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)EDMMHCAGPON,index,
                            Method_System_Collections_Generic_List<XmlNode>_get_Item__);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03546af0;
        plVar1 = (long *)(*pIVar4->klass->vtable[0x33].methodPtr)
                                   (pIVar4,StringLiteral_14762,pIVar4->klass->vtable[0x33].method);
      } while ((plVar1 == (long *)0x0) && (index = index + 1, index < (EDMMHCAGPON->fields)._size));
    }
  }
  if (plVar1 == (long *)0x0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  else {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15021,(MethodInfo *)0x0);
    fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
                    /* try { // try from 035468a8 to 036468b3 has its CatchHandler @ 0354600c */
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
                    /* try { // try from 035468b4 to 036468bb has its CatchHandler @ 035468bc */
                    /* catch() { ... } // from try @ 035467a0 with catch @ 035468bc
                       catch() { ... } // from try @ 03546840 with catch @ 035468bc
                       catch() { ... } // from try @ 035468b4 with catch @ 035468bc */
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15134,(MethodInfo *)0x0);
    fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_15220,(MethodInfo *)0x0);
    fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3269,(MethodInfo *)0x0);
    fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3271,(MethodInfo *)0x0);
    fVar10 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_3274,(MethodInfo *)0x0);
    fVar11 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03546af0;
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_11706,(MethodInfo *)0x0);
    CJNHFNHJHPE = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
    if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) goto LAB_03546af0;
    ECENNHNBAME__GCBPPDIFHHO(NLEBDPHNIDI,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  PHCOHKNFGLE.fields.y = fVar7;
  PHCOHKNFGLE.fields.x = fVar6;
  PHCOHKNFGLE.fields.z = fVar8;
  pCVar5 = CNDPAJOLKFN__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
    ECENNHNBAME__PHKBMFGNKFL(NLEBDPHNIDI,pCVar5,(MethodInfo *)0x0);
    PHCOHKNFGLE_00.fields.y = fVar10;
    PHCOHKNFGLE_00.fields.x = fVar9;
    PHCOHKNFGLE_00.fields.z = fVar11;
    pCVar5 = CNDPAJOLKFN__ALBJPLAPOBO(PHCOHKNFGLE_00,(MethodInfo *)0x0);
    ECENNHNBAME__LIFIDKHNGCM(NLEBDPHNIDI,pCVar5,(MethodInfo *)0x0);
    return;
  }
LAB_03546af0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

