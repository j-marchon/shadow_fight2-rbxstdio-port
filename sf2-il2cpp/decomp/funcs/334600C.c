// HEEEDKBOAKM$$GDOPCLLAJAB @ RVA 0x334600C

/* WARNING: Removing unreachable block (ram,0x034466c0) */
/* WARNING: Removing unreachable block (ram,0x03446738) */
/* WARNING: Removing unreachable block (ram,0x0344672c) */

void HEEEDKBOAKM__GDOPCLLAJAB
               (HEEEDKBOAKM_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  uint uVar3;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  CFEFALDOEMD_o *pCVar11;
  System_Xml_XmlNode_o *pSVar12;
  System_Xml_XmlNode_c *pSVar13;
  System_Collections_Generic_List_CFEFALDOEMD__o *pSVar14;
  long lVar15;
  CFEFALDOEMD_array *pCVar16;
  ulong uVar17;
  int *piVar18;
  undefined1 auVar19 [16];
  
  if ((DAT_045679ba & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3749);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3750);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3751);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3752);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3753);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3754);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEFALDOEMD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEFALDOEMD>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045679ba = 1;
  }
  pSVar14 = (__this->fields).super.GPEBKHNMFIB;
  if (pSVar14 == (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) goto LAB_03446724;
  iVar1 = (pSVar14->fields)._size;
  (pSVar14->fields)._size = 0;
  (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
  if (0 < iVar1) {
    System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,(MethodInfo *)0x0);
  }
  pSVar14 = (__this->fields).super.GMDPKFHCOGL;
  if (pSVar14 == (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) goto LAB_03446724;
  iVar1 = (pSVar14->fields)._size;
  (pSVar14->fields)._size = 0;
  (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
  if (0 < iVar1) {
    System_Array__Clear((System_Array_o *)(pSVar14->fields)._items,0,iVar1,(MethodInfo *)0x0);
  }
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3749,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3750,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) goto LAB_03446724;
  plVar7 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,pSVar6,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3751,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3752,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  plVar8 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,pSVar6,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3753,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3754,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  lVar9 = (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                    (JHMENEKPIBO,pSVar6,(JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar15 = *plVar7;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03446330;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03446330:
        uVar17 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_034464a8;
          lVar15 = *plVar7;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 == 0) goto LAB_0344647c;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_03446464;
        }
        lVar15 = *plVar7;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03446390;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_03446390:
        auVar19 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        pSVar12 = auVar19._0_8_;
        pSVar13 = auVar19._8_8_;
        if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar12->klass->_2).naturalAligment < bVar2) ||
             (pSVar13 = System_Xml_XmlNode_TypeInfo,
             (pSVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        pCVar11 = HEEEDKBOAKM__MMNHCHELKNB(pSVar12,(MethodInfo *)pSVar13);
        lVar15 = Method_System_Collections_Generic_List<CFEFALDOEMD>_Add__;
        pSVar14 = (__this->fields).super.GPEBKHNMFIB;
        if (pSVar14 == (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pCVar16 = (pSVar14->fields)._items;
        (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
        if (pCVar16 == (CFEFALDOEMD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (pSVar14->fields)._size;
        if (uVar3 < (uint)pCVar16->max_length) {
          (pSVar14->fields)._size = uVar3 + 1;
          pCVar16->m_Items[(int)uVar3] = pCVar11;
          thunk_FUN_01c20e04(pCVar16->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pCVar11,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    goto LAB_03446724;
  }
  goto LAB_034464a8;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_03446674:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_034466a8;
    }
  }
LAB_0344668c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_034466a8:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
  goto LAB_034466c4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_03446464:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03446498;
    }
  }
LAB_0344647c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03446498:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_034464a8:
  if (plVar8 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar15 = *plVar7;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0344653c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0344653c:
        uVar17 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_034466c4;
          lVar15 = *plVar7;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 == 0) goto LAB_0344668c;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_03446674;
        }
        lVar15 = *plVar7;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_0344659c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar10 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0344659c:
        auVar19 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        pSVar12 = auVar19._0_8_;
        pSVar13 = auVar19._8_8_;
        if (pSVar12 != (System_Xml_XmlNode_o *)0x0) {
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar12->klass->_2).naturalAligment < bVar2) ||
             (pSVar13 = System_Xml_XmlNode_TypeInfo,
             (pSVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        pCVar11 = HEEEDKBOAKM__BGAEHAJIKOA(pSVar12,(MethodInfo *)pSVar13);
        lVar15 = Method_System_Collections_Generic_List<CFEFALDOEMD>_Add__;
        pSVar14 = (__this->fields).super.GMDPKFHCOGL;
        if (pSVar14 == (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pCVar16 = (pSVar14->fields)._items;
        (pSVar14->fields)._version = (pSVar14->fields)._version + 1;
        if (pCVar16 == (CFEFALDOEMD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar3 = (pSVar14->fields)._size;
        if (uVar3 < (uint)pCVar16->max_length) {
          (pSVar14->fields)._size = uVar3 + 1;
          pCVar16->m_Items[(int)uVar3] = pCVar11;
          thunk_FUN_01c20e04(pCVar16->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pCVar11,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
LAB_03446724:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034466c4:
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x034466f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(JHMENEKPIBO->klass->vtable)._25_RemoveChild.methodPtr)
              (JHMENEKPIBO,lVar9,(JHMENEKPIBO->klass->vtable)._25_RemoveChild.method);
    return;
  }
  return;
}

