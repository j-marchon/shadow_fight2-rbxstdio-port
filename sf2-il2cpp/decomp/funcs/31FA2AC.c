// NLPJLHOEAOE$$MCJLFCLGNOJ @ RVA 0x31FA2AC

/* WARNING: Removing unreachable block (ram,0x032fa674) */
/* WARNING: Removing unreachable block (ram,0x032fa700) */
/* WARNING: Removing unreachable block (ram,0x032fa73c) */

void NLPJLHOEAOE__MCJLFCLGNOJ
               (NLPJLHOEAOE_o *__this,CNLGMNIEGFG_o *MOMAEHKIBGH,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  JKDFEBLBMOF_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar8;
  ACHLOMELAJE_o *__this_01;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  CNLGMNIEGFG_FKKOIBADKGP_o *pCVar12;
  float fVar13;
  
  if ((DAT_04566ddb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JKDFEBLBMOF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10357);
    FUN_01bab630(&StringLiteral_3405);
    FUN_01bab630(&StringLiteral_13919);
    DAT_04566ddb = 1;
  }
  if ((MOMAEHKIBGH != (CNLGMNIEGFG_o *)0x0) && (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
    pCVar12 = (MOMAEHKIBGH->fields).BOOKHNOMHGM;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13919,(MethodInfo *)0x0);
      fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
      if (pCVar12 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
        (pCVar12->fields).LMBCNLBOPAF = fVar13;
        pCVar12 = (MOMAEHKIBGH->fields).BOOKHNOMHGM;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_3405,(MethodInfo *)0x0);
          fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
          if (pCVar12 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
            (pCVar12->fields).IJCKKCPBLGP = fVar13;
            pCVar12 = (MOMAEHKIBGH->fields).BOOKHNOMHGM;
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_10357,(MethodInfo *)0x0);
              fVar13 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,0.0,(MethodInfo *)0x0);
              if (pCVar12 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
                (pCVar12->fields).LPJKDDIMOEK = fVar13;
                    /* try { // try from 032fa440 to 033fa52f has its CatchHandler @ 032fa440
                       catch() { ... } // from try @ 032fa440 with catch @ 032fa440
                       catch() { ... } // from try @ 032fa5c0 with catch @ 032fa440
                       catch() { ... } // from try @ 032fa5e8 with catch @ 032fa440
                       catch() { ... } // from try @ 032fa5f4 with catch @ 032fa440
                       catch() { ... } // from try @ 032fa61c with catch @ 032fa440
                       catch() { ... } // from try @ 032fa64c with catch @ 032fa440 */
                plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                           (AHDGNOJPPIB,
                                            (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
                if (plVar6 != (long *)0x0) {
                  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  do {
                    lVar9 = *plVar6;
                    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                          goto LAB_032fa4e8;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)
                             FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032fa4e8:
                    uVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
                    if ((uVar10 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032fa59c with catch @ 032fa5f4
                       catch(type#1 @ 03f99f68) { ... } // from try @ 032fa5ec with catch @ 032fa5f4
                       try { // try from 032fa5f4 to 033fa617 has its CatchHandler @ 032fa440 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032fa5e4 with catch @ 032fa5f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032fa548 with catch @ 032fa5fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032fa530 with catch @ 032fa600
                        */
                      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                      if (plVar6 == (long *)0x0) goto LAB_032fa668;
                      lVar9 = *plVar6;
                    /* try { // try from 032fa618 to 033fa61b has its CatchHandler @ 032fa63c */
                      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 032fa61c to 033fa643 has its CatchHandler @ 032fa440 */
                      if (uVar10 == 0) goto LAB_032fa640;
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      goto LAB_032fa628;
                    }
                    lVar9 = *plVar6;
                    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar10 != 0) {
                      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                          goto LAB_032fa548;
                        }
                        uVar10 = uVar10 - 1;
                        piVar11 = piVar11 + 4;
                      } while (uVar10 != 0);
                    }
                    /* try { // try from 032fa530 to 033fa537 has its CatchHandler @ 032fa600 */
                    puVar7 = (undefined8 *)
                             FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032fa548:
                    /* try { // try from 032fa548 to 033fa553 has its CatchHandler @ 032fa5fc */
                    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    __this_00 = (JKDFEBLBMOF_o *)thunk_FUN_01bda818(JKDFEBLBMOF_TypeInfo);
                    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
                         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01babc64(AHDGNOJPPIB_00);
                      }
                    }
                    /* try { // try from 032fa59c to 033fa5bf has its CatchHandler @ 032fa5f4 */
                    JKDFEBLBMOF___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
                    if (__this_00 == (JKDFEBLBMOF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                             (MOMAEHKIBGH->fields).MOGNLMJONAL;
                    if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01bab8c8();
                    }
                    bVar2 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                                      (pSVar8,(__this_00->fields).OLGNPLGBNDJ,
                                       Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_ContainsKey__
                                      );
                    /* try { // try from 032fa5c0 to 033fa5e3 has its CatchHandler @ 032fa440 */
                    pSVar8 = (System_Collections_Generic_Dictionary_int__object__o *)
                             (MOMAEHKIBGH->fields).MOGNLMJONAL;
                    iVar3 = (__this_00->fields).OLGNPLGBNDJ;
                    if (bVar2) {
                      if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      System_Collections_Generic_Dictionary<int,_object>__set_Item
                                (pSVar8,iVar3,(Il2CppObject *)__this_00,
                                 Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_set_Item__
                                );
                    }
                    else {
                      if (pSVar8 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                    /* try { // try from 032fa5e4 to 033fa5e7 has its CatchHandler @ 032fa5f8 */
                    /* try { // try from 032fa5e8 to 033fa5eb has its CatchHandler @ 032fa440 */
                    /* try { // try from 032fa5ec to 033fa5f3 has its CatchHandler @ 032fa5f4 */
                      System_Collections_Generic_Dictionary<int,_object>__Add
                                (pSVar8,iVar3,(Il2CppObject *)__this_00,
                                 Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_Add__
                                );
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_032fa734;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
                    /* catch() { ... } // from try @ 032fa618 with catch @ 032fa63c */
    if (uVar10 == 0) break;
LAB_032fa628:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 032fa658 to 033fa65f has its CatchHandler @ 032fa660 */
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032fa65c;
    }
  }
LAB_032fa640:
                    /* try { // try from 032fa644 to 033fa64b has its CatchHandler @ 032fa660 */
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
                    /* try { // try from 032fa64c to 033fa657 has its CatchHandler @ 032fa440 */
LAB_032fa65c:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032fa644 with catch @ 032fa660
                       catch(type#2 @ 00000000) { ... } // from try @ 032fa658 with catch @ 032fa660
                        */
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_032fa668:
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    iVar3 = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
    AFFHKININGD__EBKOKBBGNFM((AFFHKININGD_o *)MOMAEHKIBGH,iVar3,(MethodInfo *)0x0);
    return;
  }
LAB_032fa734:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

