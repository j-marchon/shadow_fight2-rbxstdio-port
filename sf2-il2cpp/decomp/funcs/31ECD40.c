// NLPJLHOEAOE$$MBLEGLIMGHP @ RVA 0x31ECD40

/* WARNING: Removing unreachable block (ram,0x032ecffc) */

System_Xml_XmlNode_o *
NLPJLHOEAOE__MBLEGLIMGHP(NLPJLHOEAOE_o *__this,int32_t NFIGEAOPJKM,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_Xml_XmlDocument_o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04566db0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_11703);
    DAT_04566db0 = 1;
  }
                    /* try { // try from 032ecdb4 to 033ecdb7 has its CatchHandler @ 032ecde0 */
  pSVar3 = (__this->fields).OFIPPHJGMNK;
                    /* try { // try from 032ecdb8 to 033ecdbf has its CatchHandler @ 032ecddc */
                    /* try { // try from 032ecdc0 to 033ecdc3 has its CatchHandler @ 032ecaf4 */
                    /* try { // try from 032ecdc4 to 033ecdc7 has its CatchHandler @ 032ecdd0 */
                    /* try { // try from 032ecdc8 to 033ecdf7 has its CatchHandler @ 032ecaf4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecdc4 with catch @ 032ecdd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecd0c with catch @ 032ecdd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032eccc0 with catch @ 032ecdd8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecdb8 with catch @ 032ecddc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecdb4 with catch @ 032ecde0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecc64 with catch @ 032ecde4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032ecc08 with catch @ 032ecde8
                        */
                    /* try { // try from 032ecdf8 to 033ecdfb has its CatchHandler @ 032ece0c */
                    /* catch() { ... } // from try @ 032ecdf8 with catch @ 032ece0c */
  if ((((pSVar3 == (System_Xml_XmlDocument_o *)0x0) ||
       (plVar4 = (long *)(*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar3,StringLiteral_11416,
                                    (pSVar3->klass->vtable)._51_get_Item.method),
       plVar4 == (long *)0x0)) ||
      (plVar4 = (long *)(**(code **)(*plVar4 + 0x468))
                                  (plVar4,StringLiteral_14862,*(undefined8 *)(*plVar4 + 0x470)),
      plVar4 == (long *)0x0)) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210)),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032ece14 to 033ece7b has its CatchHandler @ 032ece90 */
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032ece88 to 033ece8f has its CatchHandler @ 032ece90 */
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_032ece90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 032ece7c to 033ece87 has its CatchHandler @ 032ecaf4 */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_032ece90:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ece14 with catch @ 032ece90
                       catch(type#2 @ 00000000) { ... } // from try @ 032ece88 with catch @ 032ece90
                        */
                    /* try { // try from 032ece94 to 033ecfa7 has its CatchHandler @ 032ece94
                       catch() { ... } // from try @ 032ece94 with catch @ 032ece94
                       catch() { ... } // from try @ 032ed0c8 with catch @ 032ece94
                       catch() { ... } // from try @ 032ed160 with catch @ 032ece94
                       catch() { ... } // from try @ 032ed168 with catch @ 032ece94
                       catch() { ... } // from try @ 032ed21c with catch @ 032ece94 */
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      JHMENEKPIBO = (System_Xml_XmlNode_o *)0x0;
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_032ecef0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_032ecef0:
    JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
         ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JHMENEKPIBO);
      }
    }
    LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_11703,(MethodInfo *)0x0);
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
  } while (iVar2 != NFIGEAOPJKM);
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_032ecfc4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 032ecfa8 to 033ecfcf has its CatchHandler @ 032ed188 */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_032ecfc4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return JHMENEKPIBO;
}

