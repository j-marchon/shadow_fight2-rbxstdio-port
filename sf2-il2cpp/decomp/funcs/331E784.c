// IPABNCIICPB$$HNIHOIAMDPC @ RVA 0x331E784

/* WARNING: Removing unreachable block (ram,0x0341eae4) */

void IPABNCIICPB__HNIHOIAMDPC
               (IPABNCIICPB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ICJLOJKGDOM;
  CBLABOPKBKD_o *__this_01;
  long lVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  int *piVar9;
  System_Collections_Generic_List_object__o *__this_02;
  
                    /* try { // try from 0341e790 to 0351e793 has its CatchHandler @ 0341e81c */
  if ((DAT_0456782f & 1) == 0) {
    FUN_01bab630(&CBLABOPKBKD_TypeInfo);
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_DGLJCGNHLIG__);
    FUN_01bab630(&Method_DOCLKKFHECI<CBLABOPKBKD>_DOOBINMKNBI__);
                    /* try { // try from 0341e7e4 to 0351e81b has its CatchHandler @ 0341e8ac */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CBLABOPKBKD>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10283);
                    /* catch() { ... } // from try @ 0341e790 with catch @ 0341e81c
                       try { // try from 0341e81c to 0351e853 has its CatchHandler @ 0341e350 */
    DAT_0456782f = 1;
  }
  DOCLKKFHECI<object>__DGLJCGNHLIG
            ((DOCLKKFHECI_T__o *)__this,Method_DOCLKKFHECI<CBLABOPKBKD>_DGLJCGNHLIG__);
                    /* catch() { ... } // from try @ 0341e48c with catch @ 0341e82c */
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 0341e69c with catch @ 0341e830 */
                    /* catch() { ... } // from try @ 0341e470 with catch @ 0341e834 */
                    /* catch() { ... } // from try @ 0341e490 with catch @ 0341e838 */
                    /* catch() { ... } // from try @ 0341e4b8 with catch @ 0341e83c */
  plVar4 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0341e854 to 0351e857 has its CatchHandler @ 0341e880 */
                    /* try { // try from 0341e858 to 0351e88f has its CatchHandler @ 0341e350 */
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
                    /* try { // try from 0341e890 to 0351e897 has its CatchHandler @ 0341e8ac */
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 0341e898 to 0351e8a3 has its CatchHandler @ 0341e350 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 0341e8a4 to 0351e8ab has its CatchHandler @ 0341e8ac */
                    /* catch() { ... } // from try @ 0341e73c with catch @ 0341e8ac
                       catch() { ... } // from try @ 0341e7e4 with catch @ 0341e8ac
                       catch() { ... } // from try @ 0341e890 with catch @ 0341e8ac
                       catch() { ... } // from try @ 0341e8a4 with catch @ 0341e8ac */
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0341e8d8;
        }
                    /* catch() { ... } // from try @ 0341e8bc with catch @ 0341e8b0
                       catch() { ... } // from try @ 0341e8f8 with catch @ 0341e8b0
                       catch() { ... } // from try @ 0341e998 with catch @ 0341e8b0 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 0341e8b8 to 0351e8bb has its CatchHandler @ 0341e8c8 */
      } while (uVar8 != 0);
    }
                    /* try { // try from 0341e8bc to 0351e8df has its CatchHandler @ 0341e8b0 */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341e8b8 with catch @ 0341e8c8
                        */
LAB_0341e8d8:
                    /* try { // try from 0341e8e0 to 0351e8f7 has its CatchHandler @ 0341e990 */
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_0341ea7c;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 0341e8f8 to 0351e97f has its CatchHandler @ 0341e8b0 */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0341e938;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0341e938:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB);
    }
                    /* try { // try from 0341e980 to 0351e98f has its CatchHandler @ 0341e990 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 0341e8e0 with catch @ 0341e990
                       catch() { ... } // from try @ 0341e980 with catch @ 0341e990 */
                    /* try { // try from 0341e994 to 0351e997 has its CatchHandler @ 0341e9a0 */
                    /* try { // try from 0341e998 to 0351e9a3 has its CatchHandler @ 0341e8b0 */
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_10283,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341e994 with catch @ 0341e9a0
                        */
                    /* try { // try from 0341e9a4 to 0351eb07 has its CatchHandler @ 0341e9a4
                       catch() { ... } // from try @ 0341e9a4 with catch @ 0341e9a4
                       catch() { ... } // from try @ 0341eb80 with catch @ 0341e9a4
                       catch() { ... } // from try @ 0341ebe0 with catch @ 0341e9a4
                       catch() { ... } // from try @ 0341ec10 with catch @ 0341e9a4
                       catch() { ... } // from try @ 0341ec40 with catch @ 0341e9a4 */
    ICJLOJKGDOM = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar3 = EEPIOPGPFLN__NHOOJOIEMIM(ICJLOJKGDOM,(MethodInfo *)0x0);
    if (bVar3) {
      __this_02 = (System_Collections_Generic_List_object__o *)
                  (__this->fields).super._ADKGNPMECHK_k__BackingField;
      __this_01 = (CBLABOPKBKD_o *)thunk_FUN_01bda818(CBLABOPKBKD_TypeInfo);
      CBLABOPKBKD___ctor(__this_01,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar6 = Method_System_Collections_Generic_List<CBLABOPKBKD>_Add__;
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar7 = (__this_02->fields)._items;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (__this_02->fields)._size;
      if (uVar2 < (uint)pSVar7->max_length) {
        (__this_02->fields)._size = uVar2 + 1;
        pSVar7->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
        thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_02,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0341ea98;
    }
  }
LAB_0341ea7c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0341ea98:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

