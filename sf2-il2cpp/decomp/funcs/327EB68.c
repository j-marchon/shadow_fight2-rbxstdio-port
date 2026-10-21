// OCMLPCKBHPN$$IDIHPIEPHFH @ RVA 0x327EB68

/* WARNING: Removing unreachable block (ram,0x0337ee78) */

void OCMLPCKBHPN__IDIHPIEPHFH
               (System_Xml_XmlNode_o *MPHHAGEJMMC,
               System_Collections_Generic_List_string__o *PINIKLDLFME,System_String_o *AGPODGHEAIO,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_String_o *pSVar7;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  long lVar8;
  System_String_array *pSVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04567282 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0337ebac to 0347ebb3 has its CatchHandler @ 0337eca0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* try { // try from 0337ebcc to 0347ebcf has its CatchHandler @ 0337ec80 */
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 0337ebd4 to 0347ebdb has its CatchHandler @ 0337ec84 */
    DAT_04567282 = 1;
  }
  if (MPHHAGEJMMC == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
                    /* try { // try from 0337ebe4 to 0347ebe7 has its CatchHandler @ 0337ec88 */
  plVar4 = (long *)(*(MPHHAGEJMMC->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (MPHHAGEJMMC,(MPHHAGEJMMC->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0337ebf4 to 0347ec03 has its CatchHandler @ 0337ec9c */
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0337ec70 to 0347ec73 has its CatchHandler @ 0337ec94 */
                    /* try { // try from 0337ec74 to 0347ec77 has its CatchHandler @ 0337ec90 */
                    /* try { // try from 0337ec78 to 0347ec7b has its CatchHandler @ 0337ec8c */
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0337ec7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0337ec7c:
                    /* try { // try from 0337ec7c to 0347ecaf has its CatchHandler @ 0337ea9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ebcc with catch @ 0337ec80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ebd4 with catch @ 0337ec84
                        */
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ebe4 with catch @ 0337ec88
                        */
    if ((uVar10 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0337ee14;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ec78 with catch @ 0337ec8c
                        */
    lVar8 = *plVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ec74 with catch @ 0337ec90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ec70 with catch @ 0337ec94
                        */
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ec18 with catch @ 0337ec98
                        */
    if (uVar10 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ebf4 with catch @ 0337ec9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0337ebac with catch @ 0337eca0
                        */
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 0337ecb0 with catch @ 0337ecd8 */
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0337ecdc;
        }
                    /* try { // try from 0337ecb0 to 0347ecb3 has its CatchHandler @ 0337ecd8 */
        uVar10 = uVar10 - 1;
                    /* try { // try from 0337ecb4 to 0347ecdf has its CatchHandler @ 0337ea9c */
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0337ecdc:
                    /* try { // try from 0337ece0 to 0347ece7 has its CatchHandler @ 0337ecfc */
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 0337ece8 to 0347ecf3 has its CatchHandler @ 0337ea9c */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0337ecf4 to 0347ecfb has its CatchHandler @ 0337ecfc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0337ece0 with catch @ 0337ecfc
                       catch(type#2 @ 00000000) { ... } // from try @ 0337ecf4 with catch @ 0337ecfc
                        */
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
    pSVar7 = (System_String_o *)
             (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    bVar3 = System_String__op_Equality(pSVar7,AGPODGHEAIO,(MethodInfo *)0x0);
    if (bVar3) {
      __this = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      lVar8 = Method_System_Collections_Generic_List<string>_Add__;
      if (PINIKLDLFME == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = (PINIKLDLFME->fields)._items;
      (PINIKLDLFME->fields)._version = (PINIKLDLFME->fields)._version + 1;
      if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (PINIKLDLFME->fields)._size;
      if (uVar2 < (uint)pSVar9->max_length) {
        (PINIKLDLFME->fields)._size = uVar2 + 1;
        pSVar9->m_Items[(int)uVar2] = pSVar7;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)PINIKLDLFME,(Il2CppObject *)pSVar7,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0337ee30;
    }
  }
LAB_0337ee14:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0337ee30:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

