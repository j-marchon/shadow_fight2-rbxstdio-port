// JHHFDBLANPH$$FIJCDMCDGCF @ RVA 0x316DEA0

/* WARNING: Removing unreachable block (ram,0x0326e1b4) */

void JHHFDBLANPH__FIJCDMCDGCF
               (JHHFDBLANPH_o *__this,System_Xml_XmlNode_o *GNEFHGGHFBL,
               System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *CLDOMICJKPE,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *HDIAJLKOKLI;
  System_String_o *a;
  JHHFDBLANPH_MNHKJDJJINH_o *item;
  long *plVar6;
  long lVar7;
  JHHFDBLANPH_MNHKJDJJINH_array *pJVar8;
  ulong uVar9;
  int *piVar10;
  System_String_o *AFKICLAFDKC;
  
  if ((DAT_04566909 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    __this = (JHHFDBLANPH_o *)FUN_01bab630(&StringLiteral_19289);
    DAT_04566909 = 1;
  }
  if (GNEFHGGHFBL != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (GNEFHGGHFBL,(GNEFHGGHFBL->klass->vtable)._13_get_ChildNodes.method);
    __this = (JHHFDBLANPH_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AFKICLAFDKC = (System_String_o *)0x0;
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0326dfb4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326dfb4:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0326e154;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0326e13c;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0326e014;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326e014:
        HDIAJLKOKLI = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (HDIAJLKOKLI == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((HDIAJLKOKLI->klass->_2).naturalAligment < bVar1) ||
           ((HDIAJLKOKLI->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(HDIAJLKOKLI);
        }
        a = (System_String_o *)
            (*(HDIAJLKOKLI->klass->vtable)._8_unknown.methodPtr)
                      (HDIAJLKOKLI,(HDIAJLKOKLI->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_19289,(MethodInfo *)0x0);
        if (bVar3) {
          plVar6 = (long *)(*(HDIAJLKOKLI->klass->vtable)._18_get_FirstChild.methodPtr)
                                     (HDIAJLKOKLI,
                                      (HDIAJLKOKLI->klass->vtable)._18_get_FirstChild.method);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          AFKICLAFDKC = (System_String_o *)
                        (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        }
        else {
          item = JHHFDBLANPH__LLOLAGGFMCJ((JHHFDBLANPH_o *)0x0,HDIAJLKOKLI,AFKICLAFDKC,method);
          lVar7 = Method_System_Collections_Generic_List<JHHFDBLANPH_MNHKJDJJINH>_Add__;
          if (CLDOMICJKPE == (System_Collections_Generic_List_JHHFDBLANPH_MNHKJDJJINH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pJVar8 = (CLDOMICJKPE->fields)._items;
          (CLDOMICJKPE->fields)._version = (CLDOMICJKPE->fields)._version + 1;
          if (pJVar8 == (JHHFDBLANPH_MNHKJDJJINH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (CLDOMICJKPE->fields)._size;
          if (uVar2 < (uint)pJVar8->max_length) {
            (CLDOMICJKPE->fields)._size = uVar2 + 1;
            pJVar8->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)CLDOMICJKPE,(Il2CppObject *)item
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0326e13c:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0326e170;
    }
  }
LAB_0326e154:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0326e170:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

