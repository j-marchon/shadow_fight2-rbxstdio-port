// OANGEOLKMJG$$HNIHOIAMDPC @ RVA 0x32EE0D4

/* WARNING: Removing unreachable block (ram,0x033ee878) */
/* WARNING: Removing unreachable block (ram,0x033ee67c) */
/* WARNING: Removing unreachable block (ram,0x033ee868) */

void OANGEOLKMJG__HNIHOIAMDPC
               (OANGEOLKMJG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t CJNHFNHJHPE;
  int iVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *arg0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *item;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  EAAHMDAMHNI_o *item_00;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  ulong uVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *pCVar12;
  long lVar13;
  EAAHMDAMHNI_array *pEVar14;
  int *piVar15;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  ulong uVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar17;
  
                    /* try { // try from 033ee0dc to 034ee0e3 has its CatchHandler @ 033ee0e4 */
                    /* catch() { ... } // from try @ 033ee060 with catch @ 033ee0e4
                       catch() { ... } // from try @ 033ee0dc with catch @ 033ee0e4 */
                    /* try { // try from 033ee0e8 to 034ee22b has its CatchHandler @ 033ee0e8
                       catch() { ... } // from try @ 033ee0e8 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee31c with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee3d8 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee3e0 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee4a8 with catch @ 033ee0e8 */
  if ((DAT_0456765b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__);
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_15439);
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_10470);
    FUN_01bab630(&StringLiteral_9344);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456765b = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9344,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
    if ((pSVar7 != (System_String_o *)0x0) &&
       (arg0 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0),
       arg0 != (System_String_array *)0x0)) {
      if (0 < (int)arg0->max_length) {
        uVar16 = 0;
        uVar11 = arg0->max_length & 0xffffffff;
        do {
          if (uVar11 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          __this_01 = (__this->fields).FMFKGEJLDGO;
                    /* try { // try from 033ee22c to 034ee253 has its CatchHandler @ 033ee408 */
          item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (arg0->m_Items[uVar16],(MethodInfo *)0x0);
          lVar13 = Method_System_Collections_Generic_List<ObscuredString>_Add__;
          if (__this_01 == (System_Collections_Generic_List_ObscuredString__o *)0x0)
          goto LAB_033ee828;
          pCVar12 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pCVar12 == (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *)0x0)
          goto LAB_033ee828;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pCVar12->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pCVar12->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
                    /* try { // try from 033ee288 to 034ee2b3 has its CatchHandler @ 033ee404 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar2 = (uint)arg0->max_length;
          uVar11 = (ulong)uVar2;
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)uVar2);
      }
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_10470,(MethodInfo *)0x0);
        CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
        CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                           (CJNHFNHJHPE,(MethodInfo *)0x0);
        (__this->fields).PJHOEIFNOHM.fields = CVar17;
                    /* try { // try from 033ee2ec to 034ee2f7 has its CatchHandler @ 033ee3f4 */
        plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 033ee304 to 034ee30b has its CatchHandler @ 033ee3f8 */
          iVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (iVar4 < 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee634 with catch @ 033ee72c
                        */
            pSVar7 = System_String__Format(StringLiteral_15439,&arg0->obj,(MethodInfo *)0x0);
                    /* try { // try from 033ee744 to 034ee747 has its CatchHandler @ 033ee770 */
                    /* try { // try from 033ee748 to 034ee77f has its CatchHandler @ 033ee558 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
                    /* catch() { ... } // from try @ 033ee744 with catch @ 033ee770 */
                    /* try { // try from 033ee780 to 034ee787 has its CatchHandler @ 033ee79c */
                    /* try { // try from 033ee788 to 034ee793 has its CatchHandler @ 033ee558 */
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            return;
          }
                    /* try { // try from 033ee310 to 034ee31b has its CatchHandler @ 033ee3fc */
                    /* try { // try from 033ee31c to 034ee3c7 has its CatchHandler @ 033ee0e8 */
          plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar13 = *plVar8;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_033ee3b8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ee3b8:
              uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if ((uVar16 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) {
                  return;
                }
                lVar13 = *plVar8;
                uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar16 == 0) goto LAB_033ee71c;
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_033ee704;
              }
                    /* try { // try from 033ee3c8 to 034ee3cf has its CatchHandler @ 033ee400 */
              lVar13 = *plVar8;
                    /* try { // try from 033ee3d0 to 034ee3d3 has its CatchHandler @ 033ee3f0 */
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 033ee3d4 to 034ee3d7 has its CatchHandler @ 033ee3ec */
              if (uVar16 != 0) {
                    /* try { // try from 033ee3d8 to 034ee3db has its CatchHandler @ 033ee0e8 */
                    /* try { // try from 033ee3dc to 034ee3df has its CatchHandler @ 033ee3e8 */
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                    /* try { // try from 033ee3e0 to 034ee41f has its CatchHandler @ 033ee0e8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3dc with catch @ 033ee3e8
                        */
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee22c with catch @ 033ee408
                        */
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_033ee418;
                  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3d4 with catch @ 033ee3ec
                        */
                  uVar16 = uVar16 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3d0 with catch @ 033ee3f0
                        */
                  piVar15 = piVar15 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee2ec with catch @ 033ee3f4
                        */
                } while (uVar16 != 0);
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee304 with catch @ 033ee3f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee310 with catch @ 033ee3fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3c8 with catch @ 033ee400
                        */
              puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee288 with catch @ 033ee404
                        */
LAB_033ee418:
                    /* try { // try from 033ee420 to 034ee423 has its CatchHandler @ 033ee430 */
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* catch() { ... } // from try @ 033ee420 with catch @ 033ee430 */
              bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033ee440 to 034ee4a7 has its CatchHandler @ 033ee4bc */
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlElement_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8)
                  != System_Xml_XmlElement_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar10);
              }
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              bVar3 = System_String__op_Equality(pSVar7,StringLiteral_4577,(MethodInfo *)0x0);
              if (bVar3) {
                plVar10 = (long *)(**(code **)(*plVar10 + 0x208))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x210));
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
LAB_033ee4a4:
                lVar13 = *plVar10;
                    /* try { // try from 033ee4a8 to 034ee4b3 has its CatchHandler @ 033ee0e8 */
                uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar16 != 0) {
                    /* try { // try from 033ee4b4 to 034ee4bb has its CatchHandler @ 033ee4bc */
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ee440 with catch @ 033ee4bc
                       catch(type#2 @ 00000000) { ... } // from try @ 033ee4b4 with catch @ 033ee4bc
                        */
                    if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_033ee4f0;
                    }
                    uVar16 = uVar16 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ee4f0:
                uVar16 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                if ((uVar16 & 1) != 0) {
                  lVar13 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar16 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_033ee550;
                      }
                      uVar16 = uVar16 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ee550:
                    /* try { // try from 033ee558 to 034ee633 has its CatchHandler @ 033ee558
                       catch() { ... } // from try @ 033ee558 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee67c with catch @ 033ee558
                       catch() { ... } // from try @ 033ee710 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee718 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee748 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee788 with catch @ 033ee558 */
                  IIBFFEPEHPF = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar10,puVar9[1]);
                  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    if (((IIBFFEPEHPF->klass->_2).naturalAligment < bVar1) ||
                       ((IIBFFEPEHPF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64();
                    }
                  }
                  item_00 = EAAHMDAMHNI__JCCANOCMAKD(IIBFFEPEHPF,(MethodInfo *)0x0);
                  lVar13 = Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__;
                  __this_00 = (__this->fields).KDIMDBHMBEM;
                  if (__this_00 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pEVar14 = (__this_00->fields)._items;
                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                  if (pEVar14 == (EAAHMDAMHNI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pEVar14->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pEVar14->m_Items[(int)uVar2] = item_00;
                    thunk_FUN_01c20e04(pEVar14->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)item_00,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_033ee4a4;
                }
                plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
                if (plVar10 != (long *)0x0) {
                  lVar13 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar16 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                    /* try { // try from 033ee634 to 034ee63b has its CatchHandler @ 033ee72c */
                      if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 033ee654 to 034ee65b has its CatchHandler @ 033ee720 */
                        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_033ee660;
                      }
                      uVar16 = uVar16 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_033ee660:
                  (*(code *)*puVar9)(plVar10,puVar9[1]);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_033ee828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
                    /* try { // try from 033ee710 to 034ee713 has its CatchHandler @ 033ee558 */
    uVar16 = uVar16 - 1;
                    /* try { // try from 033ee714 to 034ee717 has its CatchHandler @ 033ee71c */
    piVar15 = piVar15 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee674 with catch @ 033ee718
                       try { // try from 033ee718 to 034ee743 has its CatchHandler @ 033ee558 */
    if (uVar16 == 0) break;
LAB_033ee704:
                    /* try { // try from 033ee708 to 034ee70b has its CatchHandler @ 033ee728 */
                    /* try { // try from 033ee70c to 034ee70f has its CatchHandler @ 033ee724 */
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 033ee794 to 034ee79b has its CatchHandler @ 033ee79c */
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ee798;
    }
  }
LAB_033ee71c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee714 with catch @ 033ee71c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee654 with catch @ 033ee720
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee70c with catch @ 033ee724
                        */
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee708 with catch @ 033ee728
                        */
LAB_033ee798:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ee780 with catch @ 033ee79c
                       catch(type#2 @ 00000000) { ... } // from try @ 033ee794 with catch @ 033ee79c
                        */
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}

