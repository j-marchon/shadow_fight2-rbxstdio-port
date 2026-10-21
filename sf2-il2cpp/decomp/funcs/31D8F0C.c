// DBGBHDDCAJC$$.ctor @ RVA 0x31D8F0C

/* WARNING: Removing unreachable block (ram,0x032d9298) */

void DBGBHDDCAJC___ctor(DBGBHDDCAJC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  MethodInfo *method_00;
  long lVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  int *piVar14;
  System_Collections_Generic_List_string__o **ppSVar15;
  
                    /* try { // try from 032d8f0c to 033d8f1f has its CatchHandler @ 032d8fb0 */
                    /* try { // try from 032d8f20 to 033d8f93 has its CatchHandler @ 032d8d54 */
  if ((DAT_04566d03 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 032d8f94 to 033d8f97 has its CatchHandler @ 032d8fa4 */
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 032d8f98 to 033d8f9b has its CatchHandler @ 032d8fa0 */
                    /* try { // try from 032d8f9c to 033d8fc7 has its CatchHandler @ 032d8d54 */
                    /* catch() { ... } // from try @ 032d8f98 with catch @ 032d8fa0 */
    FUN_01bab630(&StringLiteral_1);
                    /* catch() { ... } // from try @ 032d8f94 with catch @ 032d8fa4 */
                    /* catch() { ... } // from try @ 032d8ef8 with catch @ 032d8fa8 */
    DAT_04566d03 = 1;
  }
                    /* catch() { ... } // from try @ 032d8e68 with catch @ 032d8fac */
                    /* catch() { ... } // from try @ 032d8f0c with catch @ 032d8fb0 */
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar15 = &(__this->fields).KDIMDBHMBEM;
  *ppSVar15 = pSVar4;
                    /* try { // try from 032d8fc8 to 033d8fcb has its CatchHandler @ 032d8ff0 */
                    /* try { // try from 032d8fcc to 033d8fff has its CatchHandler @ 032d8d54 */
  thunk_FUN_01c20e04(ppSVar15,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032d8fc8 with catch @ 032d8ff0 */
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 032d9000 to 033d9013 has its CatchHandler @ 032d9084 */
                    /* catch() { ... } // from try @ 032d8e7c with catch @ 032d9014
                       try { // try from 032d9014 to 033d902b has its CatchHandler @ 032d8d54 */
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
    iVar3 = DBGBHDDCAJC__GIOOKIPAIAB(pSVar7,method_00);
    (__this->fields).JDNKKGPNHPB = iVar3;
                    /* try { // try from 032d902c to 033d902f has its CatchHandler @ 032d9058 */
                    /* try { // try from 032d9030 to 033d9067 has its CatchHandler @ 032d8d54 */
    plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
                    /* catch() { ... } // from try @ 032d902c with catch @ 032d9058 */
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar8;
                    /* try { // try from 032d907c to 033d9083 has its CatchHandler @ 032d9084 */
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    /* catch() { ... } // from try @ 032d9000 with catch @ 032d9084
                       catch() { ... } // from try @ 032d9068 with catch @ 032d9084
                       catch() { ... } // from try @ 032d907c with catch @ 032d9084 */
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_032d90c4;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d90c4:
        uVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar13 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar8;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 == 0) goto LAB_032d9238;
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_032d9220;
        }
        lVar11 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_032d9124;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d9124:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
        pSVar4 = *ppSVar15;
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<string>_Add__;
        if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = pSVar7;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pSVar7,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_032d9220:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_032d9254;
    }
  }
LAB_032d9238:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d9254:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}

