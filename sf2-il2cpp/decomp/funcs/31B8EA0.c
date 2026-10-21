// IFKFDFGNMMN$$NNOFKDAPECF @ RVA 0x31B8EA0

/* WARNING: Removing unreachable block (ram,0x032b9320) */

void IFKFDFGNMMN__NNOFKDAPECF
               (IFKFDFGNMMN_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  BNAIBAODKAK_array *pBVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  BNAIBAODKAK_o *__this_00;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  BNAIBAODKAK_array **ppBVar12;
  uint uVar13;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e90 with catch @ 032b8ea0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e58 with catch @ 032b8ea4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b8e3c with catch @ 032b8ea8
                        */
                    /* try { // try from 032b8ec0 to 033b8ec3 has its CatchHandler @ 032b8eec */
                    /* try { // try from 032b8ec4 to 033b8efb has its CatchHandler @ 032b8d48 */
  if ((DAT_04566bd0 & 1) == 0) {
    FUN_01bab630(&BNAIBAODKAK___TypeInfo);
    FUN_01bab630(&BNAIBAODKAK_TypeInfo);
                    /* catch() { ... } // from try @ 032b8ec0 with catch @ 032b8eec */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 032b8efc to 033b8f03 has its CatchHandler @ 032b8f18 */
                    /* try { // try from 032b8f04 to 033b8f0f has its CatchHandler @ 032b8d48 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 032b8f10 to 033b8f17 has its CatchHandler @ 032b8f18 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b8efc with catch @ 032b8f18
                       catch(type#2 @ 00000000) { ... } // from try @ 032b8f10 with catch @ 032b8f18
                        */
    FUN_01bab630(&StringLiteral_7135);
    FUN_01bab630(&StringLiteral_4279);
    FUN_01bab630(&StringLiteral_6666);
    FUN_01bab630(&StringLiteral_5588);
    FUN_01bab630(&StringLiteral_14777);
    FUN_01bab630(&StringLiteral_5256);
    DAT_04566bd0 = 1;
  }
  if (((CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) &&
      (plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                  (CJPHHMIHOGD,StringLiteral_6666,
                                   (CJPHHMIHOGD->klass->vtable)._51_get_Item.method),
      plVar3 != (long *)0x0)) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240)),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_7135,(MethodInfo *)0x0);
                    /* try { // try from 032b8fb8 to 033b90f7 has its CatchHandler @ 032b8fb8
                       catch() { ... } // from try @ 032b8fb8 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b91f0 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b922c with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b9268 with catch @ 032b8fb8
                       catch() { ... } // from try @ 032b9298 with catch @ 032b8fb8 */
    iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0xb,(MethodInfo *)0x0);
    (__this->fields).CNOHPGNAOFH = iVar2;
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14777,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,3,(MethodInfo *)0x0);
      (__this->fields).AONFFEBFEPK = iVar2;
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5256,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
        (__this->fields).KMJLJGCBLHI = iVar2;
        pBVar6 = (BNAIBAODKAK_array *)
                 FUN_01bab718(BNAIBAODKAK___TypeInfo,
                              (__this->fields).AONFFEBFEPK * (__this->fields).CNOHPGNAOFH);
        ppBVar12 = &(__this->fields).OFNAAFHJIOB;
        *ppBVar12 = pBVar6;
        thunk_FUN_01c20e04(ppBVar12,pBVar6);
        plVar3 = (long *)(*(CJPHHMIHOGD->klass->vtable)._51_get_Item.methodPtr)
                                   (CJPHHMIHOGD,StringLiteral_4279,
                                    (CJPHHMIHOGD->klass->vtable)._51_get_Item.method);
        if (plVar3 == (long *)0x0) {
                    /* try { // try from 032b92a4 to 033b92ab has its CatchHandler @ 032b92ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b9290 with catch @ 032b92ac
                       catch(type#2 @ 00000000) { ... } // from try @ 032b92a4 with catch @ 032b92ac
                        */
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_5588,(MethodInfo *)0x0);
          return;
        }
        plVar3 = (long *)(**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (plVar3 != (long *)0x0) {
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar13 = 0;
          do {
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* try { // try from 032b90f8 to 033b90ff has its CatchHandler @ 032b924c */
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_032b9124;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_032b9124:
            uVar10 = (*(code *)*puVar7)(plVar3,puVar7[1]);
            if ((uVar10 & 1) == 0) {
                    /* try { // try from 032b9220 to 033b9223 has its CatchHandler @ 032b923c */
                    /* try { // try from 032b9224 to 033b922b has its CatchHandler @ 032b9240 */
                    /* try { // try from 032b922c to 033b9263 has its CatchHandler @ 032b8fb8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9178 with catch @ 032b9230
                        */
              plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b91d4 with catch @ 032b9234
                        */
              if (plVar3 == (long *)0x0) {
                return;
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b914c with catch @ 032b9238
                        */
              lVar9 = *plVar3;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9220 with catch @ 032b923c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9224 with catch @ 032b9240
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b917c with catch @ 032b9244
                        */
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b9150 with catch @ 032b9248
                        */
              if (uVar10 == 0) goto LAB_032b926c;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b90f8 with catch @ 032b924c
                        */
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_032b9254;
            }
            lVar9 = *plVar3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                    /* try { // try from 032b914c to 033b914f has its CatchHandler @ 032b9238 */
                    /* try { // try from 032b9150 to 033b915f has its CatchHandler @ 032b9248 */
                if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                    System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 032b9178 to 033b917b has its CatchHandler @ 032b9230 */
                    /* try { // try from 032b917c to 033b918b has its CatchHandler @ 032b9244 */
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_032b9184;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032b9184:
            AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar3,puVar7[1]);
            if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                 ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(AHDGNOJPPIB);
              }
            }
            pBVar6 = *ppBVar12;
            __this_00 = (BNAIBAODKAK_o *)thunk_FUN_01bda818(BNAIBAODKAK_TypeInfo);
                    /* try { // try from 032b91d4 to 033b91ef has its CatchHandler @ 032b9234 */
            BNAIBAODKAK___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
            if (pBVar6 == (BNAIBAODKAK_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 032b91f0 to 033b921f has its CatchHandler @ 032b8fb8 */
            if ((__this_00 != (BNAIBAODKAK_o *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(__this_00,(((pBVar6->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((uint)pBVar6->max_length <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pBVar6->m_Items[(int)uVar13] = __this_00;
            thunk_FUN_01c20e04(pBVar6->m_Items + (int)uVar13,__this_00);
            uVar13 = uVar13 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar10 = uVar10 - 1;
                    /* try { // try from 032b9264 to 033b9267 has its CatchHandler @ 032b9288 */
    piVar11 = piVar11 + 4;
                    /* try { // try from 032b9268 to 033b928f has its CatchHandler @ 032b8fb8 */
    if (uVar10 == 0) break;
LAB_032b9254:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_032b9288;
    }
  }
LAB_032b926c:
  puVar7 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_032b9288:
                    /* catch() { ... } // from try @ 032b9264 with catch @ 032b9288 */
                    /* try { // try from 032b9290 to 033b9297 has its CatchHandler @ 032b92ac */
  (*(code *)*puVar7)(plVar3,puVar7[1]);
  return;
                    /* try { // try from 032b9298 to 033b92a3 has its CatchHandler @ 032b8fb8 */
}

