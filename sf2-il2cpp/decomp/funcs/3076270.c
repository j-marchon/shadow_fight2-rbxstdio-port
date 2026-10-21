// POGBKGFBOLC$$KBDGOMHPLBL @ RVA 0x3076270

/* WARNING: Removing unreachable block (ram,0x03176648) */

void POGBKGFBOLC__KBDGOMHPLBL
               (POGBKGFBOLC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  PKKLIJLIKGF_o *__this_00;
  HEFOANCOHDC_o *item;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar7;
  long lVar8;
  PKKLIJLIKGF_array *pPVar9;
  HEFOANCOHDC_array *pHVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_04565fa8 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Clear__);
    FUN_01bab630(&PKKLIJLIKGF_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04565fa8 = 1;
  }
  pSVar6 = (__this->fields)._OADOOFBKPEE_k__BackingField;
  if (pSVar6 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
    iVar1 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar7 = (__this->fields)._CGEHDAHDMLB_k__BackingField;
    if (pSVar7 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      iVar1 = (pSVar7->fields)._size;
      (pSVar7->fields)._size = 0;
      (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
        return;
      }
      plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_03176408;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03176408:
          uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar11 & 1) == 0) {
            plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
            if (plVar4 == (long *)0x0) {
              return;
            }
            lVar8 = *plVar4;
            uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar11 == 0) goto LAB_031765e0;
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            goto LAB_031765c8;
          }
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_03176468;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03176468:
          AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(AHDGNOJPPIB_00);
            }
          }
          pSVar6 = (__this->fields)._OADOOFBKPEE_k__BackingField;
          __this_00 = (PKKLIJLIKGF_o *)thunk_FUN_01bda818(PKKLIJLIKGF_TypeInfo);
          PKKLIJLIKGF___ctor(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
          if (pSVar6 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pPVar9 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pPVar9 == (PKKLIJLIKGF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar3 = (pSVar6->fields)._size;
          if (uVar3 < (uint)pPVar9->max_length) {
            (pSVar6->fields)._size = uVar3 + 1;
            pPVar9->m_Items[(int)uVar3] = __this_00;
            thunk_FUN_01c20e04(pPVar9->m_Items + (int)uVar3,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          item = HOOAAGABMBL__PHKPGHEINHB(AHDGNOJPPIB_00,(MethodInfo *)0x0);
          lVar8 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
          if (item != (HEFOANCOHDC_o *)0x0) {
            pSVar7 = (__this->fields)._CGEHDAHDMLB_k__BackingField;
            if (pSVar7 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar10 = (pSVar7->fields)._items;
            (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
            if (pHVar10 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (pSVar7->fields)._size;
            if (uVar3 < (uint)pHVar10->max_length) {
              (pSVar7->fields)._size = uVar3 + 1;
              pHVar10->m_Items[(int)uVar3] = item;
              thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar3);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_031765c8:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_031765fc;
    }
  }
LAB_031765e0:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031765fc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

