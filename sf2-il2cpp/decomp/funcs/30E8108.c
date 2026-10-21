// HOOAAGABMBL$$FLDHLLKFPLJ @ RVA 0x30E8108

/* WARNING: Removing unreachable block (ram,0x031e8420) */

void HOOAAGABMBL__FLDHLLKFPLJ
               (HOOAAGABMBL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  HEFOANCOHDC_o *item;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Xml_XmlNode_c *method_01;
  long lVar6;
  HEFOANCOHDC_array *pHVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04566400 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566400 = 1;
    method_00 = extraout_x1;
  }
  HOOAAGABMBL__NKGIIMLJLGI(__this,method_00);
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
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031e8208;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031e8208:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_031e83c4;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_031e8268;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031e8268:
    auVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    AHDGNOJPPIB_00 = auVar10._0_8_;
    method_01 = auVar10._8_8_;
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         (method_01 = System_Xml_XmlNode_TypeInfo,
         (AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = HOOAAGABMBL__PHKPGHEINHB(AHDGNOJPPIB_00,(MethodInfo *)method_01);
    lVar6 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
    if (item != (HEFOANCOHDC_o *)0x0) {
      pSVar5 = (__this->fields)._GNJCCLBLPLO_k__BackingField;
      if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pHVar7 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pHVar7->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pHVar7->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
      pSVar5 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
      if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pHVar7 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pHVar7->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pHVar7->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_031e83e0;
    }
  }
LAB_031e83c4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031e83e0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

