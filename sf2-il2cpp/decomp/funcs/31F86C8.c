// NLPJLHOEAOE$$OLIPPCMBKGN @ RVA 0x31F86C8

/* WARNING: Removing unreachable block (ram,0x032f8cd8) */
/* WARNING: Removing unreachable block (ram,0x032f8ce4) */

System_Xml_XmlNode_o *
NLPJLHOEAOE__OLIPPCMBKGN
          (NLPJLHOEAOE_o *__this,int32_t NFIGEAOPJKM,System_String_o *KOILJHHCIEE,MethodInfo *method
          )

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  long *plVar9;
  System_String_o *value;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  System_Xml_XmlNode_o *local_68;
  
  if ((DAT_04566dd8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_6379);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_11703);
    FUN_01bab630(&StringLiteral_7235);
    DAT_04566dd8 = 1;
  }
  pSVar4 = (__this->fields).OFIPPHJGMNK;
                    /* try { // try from 032f8794 to 033f879b has its CatchHandler @ 032f8868 */
                    /* try { // try from 032f87b0 to 033f87b3 has its CatchHandler @ 032f8858 */
                    /* try { // try from 032f87b4 to 033f87c3 has its CatchHandler @ 032f8864 */
  if ((((pSVar4 == (System_Xml_XmlDocument_o *)0x0) ||
       (plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar4,StringLiteral_11416,
                                    (pSVar4->klass->vtable)._51_get_Item.method),
       plVar5 == (long *)0x0)) ||
      (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                  (plVar5,StringLiteral_14862,*(undefined8 *)(*plVar5 + 0x470)),
      plVar5 == (long *)0x0)) ||
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
     plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032f87cc to 033f87db has its CatchHandler @ 032f8860 */
                    /* try { // try from 032f87dc to 033f884f has its CatchHandler @ 032f86b8 */
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  local_68 = (System_Xml_XmlNode_o *)0x0;
  do {
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_032f884c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032f884c:
                    /* try { // try from 032f8850 to 033f8853 has its CatchHandler @ 032f885c */
                    /* try { // try from 032f8854 to 033f887f has its CatchHandler @ 032f86b8 */
      uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f87b0 with catch @ 032f8858
                        */
      if ((uVar11 & 1) == 0) {
        uVar13 = 8;
        goto LAB_032f8ba0;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f8850 with catch @ 032f885c
                        */
      lVar10 = *plVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f87cc with catch @ 032f8860
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f87b4 with catch @ 032f8864
                        */
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f8794 with catch @ 032f8868
                        */
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_032f88ac;
          }
                    /* try { // try from 032f8880 to 033f8883 has its CatchHandler @ 032f88ac */
          uVar11 = uVar11 - 1;
                    /* try { // try from 032f8884 to 033f88bb has its CatchHandler @ 032f86b8 */
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_032f88ac:
                    /* catch() { ... } // from try @ 032f8880 with catch @ 032f88ac */
      pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    /* try { // try from 032f88bc to 033f88c3 has its CatchHandler @ 032f88d8 */
      if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 032f88c4 to 033f88cf has its CatchHandler @ 032f86b8 */
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032f88d0 to 033f88d7 has its CatchHandler @ 032f88d8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032f88bc with catch @ 032f88d8
                       catch(type#2 @ 00000000) { ... } // from try @ 032f88d0 with catch @ 032f88d8
                        */
        if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar7);
        }
      }
      pSVar8 = EIABCPKDEBD__NHPDFFAIJMF(pSVar7,StringLiteral_11703,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
    } while (iVar3 != NFIGEAOPJKM);
    if (pSVar7 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar9 = (long *)(*(pSVar7->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar7,StringLiteral_6379,
                                (pSVar7->klass->vtable)._51_get_Item.method);
    if (plVar9 == (long *)0x0) {
      local_68 = (System_Xml_XmlNode_o *)0x0;
      uVar13 = 5;
      break;
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_032f89a4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_032f89a4:
      uVar11 = (*(code *)*puVar6)(plVar9,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        uVar13 = 2;
        goto LAB_032f8a94;
      }
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_032f8a04;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_032f8a04:
      pSVar7 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar9,puVar6[1]);
      if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar7);
        }
      }
      pSVar8 = EIABCPKDEBD__NHPDFFAIJMF(pSVar7,StringLiteral_7235,(MethodInfo *)0x0);
      if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      value = (System_String_o *)
              (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
      if (KOILJHHCIEE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(KOILJHHCIEE,value,(MethodInfo *)0x0);
    } while (!bVar2);
    uVar13 = 5;
    local_68 = pSVar7;
LAB_032f8a94:
    plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_032f8b04;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_032f8b04:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
  } while ((uVar13 | 2) == 2);
LAB_032f8ba0:
  plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_032f8c00;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032f8c00:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (uVar13 != 5) {
    local_68 = (System_Xml_XmlNode_o *)0x0;
  }
  return local_68;
}

