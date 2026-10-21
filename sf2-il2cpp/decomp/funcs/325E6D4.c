// AAPGCAPGBLG$$JIIBNJFDICI @ RVA 0x325E6D4

/* WARNING: Removing unreachable block (ram,0x0335ee88) */
/* WARNING: Removing unreachable block (ram,0x0335ecb8) */

void AAPGCAPGBLG__JIIBNJFDICI
               (AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,bool CNADELPLGPE,
               MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  long *plVar8;
  System_Collections_Generic_List_object__o *__this_00;
  long *plVar9;
  undefined8 *puVar10;
  Il2CppObject *item;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Predicate_T__o *match;
  long lVar11;
  Il2CppClass *pIVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  int *piVar15;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_02;
  System_Xml_XmlDocument_o *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045671ab & 1) == 0) {
    FUN_01bab630(&ANFOHCGLHID_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_632);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_633);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_634);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_635);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_637);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_AAPGCAPGBLG_JDHOBHDIPHO_MPCECPHDEJD__);
    FUN_01bab630(&AAPGCAPGBLG_JDHOBHDIPHO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045671ab = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_JDHOBHDIPHO_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar4,KGLJICLJHEL);
    pSVar16 = (__this->fields).JLBELGKGBBI;
    pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    if (pSVar16 == (System_Xml_XmlDocument_o *)0x0) {
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_632,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0335ec14 to 0345ec23 has its CatchHandler @ 0335ed6c */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_633,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
                    /* try { // try from 0335ec64 to 0345ec87 has its CatchHandler @ 0335ed58 */
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      pIVar12 = pIVar4->klass;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      goto LAB_0335ee3c;
    }
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar5,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_634,(MethodInfo *)0x0);
    pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar6,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_635,(MethodInfo *)0x0);
    pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
    plVar8 = (long *)(*(pSVar16->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar16,pSVar7,(pSVar16->klass->vtable)._51_get_Item.method);
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<XmlNode>__ctor__);
    if ((plVar8 != (long *)0x0) &&
       (plVar9 = (long *)(**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210)),
       plVar9 != (long *)0x0)) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0335e9ec;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_0335e9ec:
        uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar14 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
          if (plVar9 == (long *)0x0) goto LAB_0335eca8;
          lVar11 = *plVar9;
                    /* try { // try from 0335ebb0 to 0345ebdb has its CatchHandler @ 0335ed60 */
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_0335ebe0;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0335ebc8;
        }
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0335ea4c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
                    /* try { // try from 0335ea28 to 0345eb53 has its CatchHandler @ 0335ea28
                       catch() { ... } // from try @ 0335ea28 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ec98 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ed3c with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ed44 with catch @ 0335ea28
                       catch() { ... } // from try @ 0335ee00 with catch @ 0335ea28 */
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_0335ea4c:
        item = (Il2CppObject *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (item == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar12 = item->klass;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pIVar12->_2).naturalAligment < bVar1) ||
           ((pIVar12->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(item);
        }
        __this_01 = (System_Xml_XmlAttributeCollection_o *)
                    (*pIVar12->vtable[0x10].methodPtr)(item,pIVar12->vtable[0x10].method);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_636,
                   (MethodInfo *)0x0);
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_637,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_01,pSVar7,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
        bVar3 = System_String__op_Equality
                          (pSVar7,(System_String_o *)pIVar4->klass,(MethodInfo *)0x0);
        lVar11 = Method_System_Collections_Generic_List<XmlNode>_Add__;
        if (bVar3) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar13 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar13->max_length) {
                    /* try { // try from 0335eb54 to 0345eb7b has its CatchHandler @ 0335ed64 */
            (__this_00->fields)._size = uVar2 + 1;
            pSVar13->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_0335ee80;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0335ebc8:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0335ec98 to 0345ed27 has its CatchHandler @ 0335ea28 */
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0335ec9c;
    }
  }
LAB_0335ebe0:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_0335ec9c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0335eca8:
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,__this_00,Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__
                );
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__
                               ), bVar3) {
        (**(code **)(*plVar8 + 0x2c8))
                  (plVar8,local_80.fields._current,*(undefined8 *)(*plVar8 + 0x2d0));
                    /* try { // try from 0335ed28 to 0345ed2f has its CatchHandler @ 0335ed5c */
      }
                    /* try { // try from 0335ed30 to 0345ed33 has its CatchHandler @ 0335ed50 */
                    /* try { // try from 0335ed34 to 0345ed3b has its CatchHandler @ 0335ed68 */
                    /* try { // try from 0335ed3c to 0345ed3f has its CatchHandler @ 0335ea28 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
                    /* try { // try from 0335ed40 to 0345ed43 has its CatchHandler @ 0335ed4c */
      length = (__this_00->fields)._size;
                    /* try { // try from 0335ed44 to 0345ed7b has its CatchHandler @ 0335ea28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed40 with catch @ 0335ed4c
                        */
      (__this_00->fields)._size = 0;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed30 with catch @ 0335ed50
                        */
      if (0 < length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec8c with catch @ 0335ed54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec64 with catch @ 0335ed58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed28 with catch @ 0335ed5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ebb0 with catch @ 0335ed60
                        */
        System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0)
        ;
      }
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335eb54 with catch @ 0335ed64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ed34 with catch @ 0335ed68
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0335ec14 with catch @ 0335ed6c
                        */
    if ((ANFOHCGLHID_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0335ed7c to 0345ed7f has its CatchHandler @ 0335ed90 */
    bVar3 = ANFOHCGLHID__DMEJHHPGDFA((MethodInfo *)0x0);
    pSVar16 = (__this->fields).JLBELGKGBBI;
                    /* catch() { ... } // from try @ 0335ed7c with catch @ 0335ed90 */
                    /* try { // try from 0335ed98 to 0345edff has its CatchHandler @ 0335ee14 */
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
    }
    pSVar7 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
    if (bVar3) {
      GIAMPEGMNHE__DGLLHFNFGNO(pSVar16,pSVar7,(MethodInfo *)0x0);
    }
    else {
      GIAMPEGMNHE__LFKDDMKHGEA(pSVar16,pSVar7,(MethodInfo *)0x0);
    }
    __this_02 = (__this->fields).AOCCHDFNLMC;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_02 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
                    /* try { // try from 0335ee00 to 0345ee0b has its CatchHandler @ 0335ea28 */
                    /* try { // try from 0335ee0c to 0345ee13 has its CatchHandler @ 0335ee14 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0335ed98 with catch @ 0335ee14
                       catch(type#2 @ 00000000) { ... } // from try @ 0335ee0c with catch @ 0335ee14
                        */
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_02,match,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_RemoveAll__);
      pIVar12 = pIVar4->klass;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
LAB_0335ee3c:
      CLFCKIFNGHA__GMENDOGOHMH((System_String_o *)pIVar12,CNADELPLGPE,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0335ee80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

