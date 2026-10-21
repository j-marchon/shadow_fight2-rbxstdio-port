// HOOAAGABMBL$$IGKCDADNCFP @ RVA 0x30ED9C8

/* WARNING: Removing unreachable block (ram,0x031edcbc) */

void HOOAAGABMBL__IGKCDADNCFP
               (System_Xml_XmlNode_o *AGPFJMOLMPN,
               System_Collections_Generic_List_POGBKGFBOLC__o *LKFALEIFDIO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  POGBKGFBOLC_o *__this;
  long lVar6;
  POGBKGFBOLC_array *pPVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566412 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<POGBKGFBOLC>_Add__);
    FUN_01bab630(&POGBKGFBOLC_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566412 = 1;
  }
  if (AGPFJMOLMPN == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(AGPFJMOLMPN->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AGPFJMOLMPN,(AGPFJMOLMPN->klass->vtable)._13_get_ChildNodes.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031edadc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_031edadc:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_031edc58;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_031edb3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031edb3c:
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
    iVar3 = (*(AHDGNOJPPIB->klass->vtable)._11_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._11_unknown.method);
    if (iVar3 == 1) {
      __this = (POGBKGFBOLC_o *)thunk_FUN_01bda818(POGBKGFBOLC_TypeInfo);
      POGBKGFBOLC___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
      lVar6 = Method_System_Collections_Generic_List<POGBKGFBOLC>_Add__;
      if (LKFALEIFDIO == (System_Collections_Generic_List_POGBKGFBOLC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar7 = (LKFALEIFDIO->fields)._items;
      (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
      if (pPVar7 == (POGBKGFBOLC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (LKFALEIFDIO->fields)._size;
      if (uVar2 < (uint)pPVar7->max_length) {
        (LKFALEIFDIO->fields)._size = uVar2 + 1;
        pPVar7->m_Items[(int)uVar2] = __this;
        thunk_FUN_01c20e04(pPVar7->m_Items + (int)uVar2,__this);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)__this,
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
      goto LAB_031edc74;
    }
  }
LAB_031edc58:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_031edc74:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

