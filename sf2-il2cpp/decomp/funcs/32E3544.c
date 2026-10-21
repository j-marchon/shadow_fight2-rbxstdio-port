// DOPEEDABNEK$$COFFDBGHAEC @ RVA 0x32E3544

/* WARNING: Removing unreachable block (ram,0x033e3a50) */
/* WARNING: Removing unreachable block (ram,0x033e3c70) */
/* WARNING: Removing unreachable block (ram,0x033e3c88) */

void DOPEEDABNEK__COFFDBGHAEC
               (DOPEEDABNEK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  BPDOKJBGHAG_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PONNKDFAMFM_o *__this_01;
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_02;
  System_Collections_Generic_List_BPDOKJBGHAG__o *__this_03;
  long lVar9;
  PONNKDFAMFM_array *pPVar10;
  BPDOKJBGHAG_array *pBVar11;
  ulong uVar12;
  int *piVar13;
  BPDOKJBGHAG_Fields *pBVar14;
  System_String_o **ppSVar15;
  System_String_o *EBOHIPKPFDJ;
  
  if ((DAT_045675f9 & 1) == 0) {
    FUN_01bab630(&BPDOKJBGHAG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033e3598 to 034e368b has its CatchHandler @ 033e3598
                       catch() { ... } // from try @ 033e3598 with catch @ 033e3598
                       catch() { ... } // from try @ 033e37e0 with catch @ 033e3598
                       catch() { ... } // from try @ 033e3884 with catch @ 033e3598
                       catch() { ... } // from try @ 033e388c with catch @ 033e3598
                       catch() { ... } // from try @ 033e3950 with catch @ 033e3598 */
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BPDOKJBGHAG>_Add__);
    FUN_01bab630(&PONNKDFAMFM_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8115);
    FUN_01bab630(&StringLiteral_9327);
    DAT_045675f9 = 1;
  }
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e368c to 034e36b3 has its CatchHandler @ 033e38b8 */
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033e3694;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e3694:
    uVar12 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar12 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar3;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_033e3b7c;
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e36e8 to 034e3713 has its CatchHandler @ 033e38b4 */
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_033e36f8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e36f8:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar5);
      }
    }
    __this_00 = (BPDOKJBGHAG_o *)thunk_FUN_01bda818(BPDOKJBGHAG_TypeInfo);
                    /* try { // try from 033e3750 to 034e3757 has its CatchHandler @ 033e38b0 */
    BPDOKJBGHAG___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033e375c to 034e3763 has its CatchHandler @ 033e38ac */
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e3c64 to 034e3c67 has its CatchHandler @ 033e3c74 */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3768 to 034e3773 has its CatchHandler @ 033e389c */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e3778 to 034e3783 has its CatchHandler @ 033e38a0 */
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar7,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (__this_00 == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pBVar14 = &__this_00->fields;
    pBVar14->BGHFADDGPAD = pSVar8;
    thunk_FUN_01c20e04(pBVar14);
                    /* try { // try from 033e37c4 to 034e37df has its CatchHandler @ 033e3898 */
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (pSVar6 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033e37e0 to 034e386f has its CatchHandler @ 033e3598 */
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_8115,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM
                       (pSVar7,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    ppSVar15 = &(__this_00->fields).HNNFBCMNGIA;
    *ppSVar15 = pSVar8;
    thunk_FUN_01c20e04(ppSVar15);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
LAB_033e3838:
    lVar9 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033e3878 to 034e387b has its CatchHandler @ 033e38a8 */
                    /* try { // try from 033e387c to 034e3883 has its CatchHandler @ 033e38a4 */
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_033e3884;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
                    /* try { // try from 033e3870 to 034e3877 has its CatchHandler @ 033e38bc */
    puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e3884:
                    /* try { // try from 033e3884 to 034e3887 has its CatchHandler @ 033e3598 */
                    /* try { // try from 033e3888 to 034e388b has its CatchHandler @ 033e3894 */
                    /* try { // try from 033e388c to 034e38cb has its CatchHandler @ 033e3598 */
    uVar12 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar12 & 1) != 0) {
                    /* catch() { ... } // from try @ 033e3888 with catch @ 033e3894 */
      lVar9 = *plVar5;
                    /* catch() { ... } // from try @ 033e37c4 with catch @ 033e3898 */
                    /* catch() { ... } // from try @ 033e3768 with catch @ 033e389c */
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* catch() { ... } // from try @ 033e3778 with catch @ 033e38a0 */
      if (uVar12 != 0) {
                    /* catch() { ... } // from try @ 033e387c with catch @ 033e38a4 */
                    /* catch() { ... } // from try @ 033e3878 with catch @ 033e38a8 */
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 033e375c with catch @ 033e38ac */
                    /* catch() { ... } // from try @ 033e3750 with catch @ 033e38b0 */
                    /* catch() { ... } // from try @ 033e36e8 with catch @ 033e38b4 */
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 033e38cc with catch @ 033e38e0 */
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_033e38e4;
          }
                    /* catch() { ... } // from try @ 033e368c with catch @ 033e38b8 */
          uVar12 = uVar12 - 1;
                    /* catch() { ... } // from try @ 033e3870 with catch @ 033e38bc */
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
                    /* try { // try from 033e38cc to 034e38cf has its CatchHandler @ 033e38e0 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_033e38e4:
                    /* try { // try from 033e38e8 to 034e394f has its CatchHandler @ 033e3964 */
      AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      pSVar8 = pBVar14->BGHFADDGPAD;
      EBOHIPKPFDJ = *ppSVar15;
      __this_01 = (PONNKDFAMFM_o *)thunk_FUN_01bda818(PONNKDFAMFM_TypeInfo);
      if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
      }
                    /* try { // try from 033e3950 to 034e395b has its CatchHandler @ 033e3598 */
      PONNKDFAMFM___ctor(__this_01,AHDGNOJPPIB_00,pSVar8,EBOHIPKPFDJ,(MethodInfo *)0x0);
      lVar9 = Method_System_Collections_Generic_List<PONNKDFAMFM>_Add__;
      __this_02 = (__this_00->fields).NBDCLLADIFL;
                    /* try { // try from 033e395c to 034e3963 has its CatchHandler @ 033e3964 */
      if (__this_02 == (System_Collections_Generic_List_PONNKDFAMFM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033e38e8 with catch @ 033e3964
                       catch() { ... } // from try @ 033e395c with catch @ 033e3964 */
      pPVar10 = (__this_02->fields)._items;
                    /* try { // try from 033e3968 to 034e3a5b has its CatchHandler @ 033e3968
                       catch() { ... } // from try @ 033e3968 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3b84 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3c20 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3c28 with catch @ 033e3968
                       catch() { ... } // from try @ 033e3ce4 with catch @ 033e3968 */
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pPVar10 == (PONNKDFAMFM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pPVar10->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pPVar10->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pPVar10->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_033e3838;
    }
    plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033e3a38;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_033e3a38:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
    }
    lVar9 = Method_System_Collections_Generic_List<BPDOKJBGHAG>_Add__;
    __this_03 = (__this->fields).AJDOBNIKJCK;
                    /* try { // try from 033e3a5c to 034e3a83 has its CatchHandler @ 033e3c4c */
    if (__this_03 == (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033e3c7c to 034e3ce3 has its CatchHandler @ 033e3cf8 */
      FUN_01bab8c8();
    }
    pBVar11 = (__this_03->fields)._items;
    (__this_03->fields)._version = (__this_03->fields)._version + 1;
    if (pBVar11 == (BPDOKJBGHAG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_03->fields)._size;
    if (uVar2 < (uint)pBVar11->max_length) {
      (__this_03->fields)._size = uVar2 + 1;
      pBVar11->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pBVar11->m_Items + (int)uVar2,__this_00);
    }
    else {
                    /* try { // try from 033e3ab8 to 034e3ae3 has its CatchHandler @ 033e3c48 */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
                    /* try { // try from 033e3b68 to 034e3b83 has its CatchHandler @ 033e3c38 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_033e3b98;
    }
  }
LAB_033e3b7c:
                    /* try { // try from 033e3b84 to 034e3c0f has its CatchHandler @ 033e3968 */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033e3b98:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

