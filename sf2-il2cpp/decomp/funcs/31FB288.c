// NLPJLHOEAOE$$LHMABDCNDIF @ RVA 0x31FB288

/* WARNING: Removing unreachable block (ram,0x032fb698) */

void NLPJLHOEAOE__LHMABDCNDIF
               (NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Collections_Generic_List_PJKHAJKEHEL__o *ANGBPBINHBL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar10;
  PJKHAJKEHEL_o *item;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  long lVar11;
  PJKHAJKEHEL_array *pPVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  
  if ((DAT_04566e2d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10999);
    FUN_01bab630(&StringLiteral_6922);
    FUN_01bab630(&StringLiteral_12864);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566e2d = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar15 = 0;
  do {
    lVar11 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_032fb3c8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032fb3c8:
    uVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar11 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_032fb628;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar5;
                    /* try { // try from 032fb3e0 to 033fb3e7 has its CatchHandler @ 032fb9d8 */
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032fb424 to 033fb427 has its CatchHandler @ 032fb9b0 */
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_032fb428;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
                    /* try { // try from 032fb404 to 033fb407 has its CatchHandler @ 032fb9cc */
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_032fb428:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 032fb434 to 033fb43b has its CatchHandler @ 032fb988 */
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 032fb444 to 033fb44b has its CatchHandler @ 032fb984 */
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032fb450 to 033fb45b has its CatchHandler @ 032fb980 */
                    /* try { // try from 032fb45c to 033fb69f has its CatchHandler @ 032fb220 */
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar7,StringLiteral_12864,(MethodInfo *)0x0);
    pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    bVar3 = System_String__op_Equality(pSVar9,StringLiteral_1,(MethodInfo *)0x0);
    if ((bVar3) ||
       (pNVar10 = NLPJLHOEAOE__ADKMBOALAKN(__this,pSVar9,method_00),
       pNVar10 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0)) {
      method = (MethodInfo *)0x1;
      item = NLPJLHOEAOE__MDEGKNMDKPN(__this,AHDGNOJPPIB_00,(PJKHAJKEHEL_o *)0x0,true,in_x4);
    }
    else {
      item = NLPJLHOEAOE__OHIIAFOFCOC(__this,(pNVar10->fields).BAKIMFMMFMP,AHDGNOJPPIB_00,method);
    }
    if (item != (PJKHAJKEHEL_o *)0x0) {
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_6922,(MethodInfo *)0x0);
      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1,(MethodInfo *)0x0);
      (item->fields).LBNOMMMFDJE = pSVar9;
      thunk_FUN_01c20e04();
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_10999,(MethodInfo *)0x0);
      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      (item->fields).MHAJENIAMCF = iVar15;
      (item->fields).PPKEAHBFAAM = iVar4;
      lVar11 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
      if (ANGBPBINHBL == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar12 = (ANGBPBINHBL->fields)._items;
      (ANGBPBINHBL->fields)._version = (ANGBPBINHBL->fields)._version + 1;
      if (pPVar12 == (PJKHAJKEHEL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (ANGBPBINHBL->fields)._size;
      if (uVar2 < (uint)pPVar12->max_length) {
        (ANGBPBINHBL->fields)._size = uVar2 + 1;
        pPVar12->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pPVar12->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)ANGBPBINHBL,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    iVar15 = iVar15 + 1;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_032fb644;
    }
  }
LAB_032fb628:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032fb644:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

