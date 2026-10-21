// CGALNIOABHK$$OPECGOMJLLP @ RVA 0x34437F0

/* WARNING: Removing unreachable block (ram,0x03543ae0) */

void CGALNIOABHK__OPECGOMJLLP
               (System_Xml_XmlNode_o *JHMENEKPIBO,
               System_Collections_Generic_List_IIMNGGHGKOD__o *JGHPAFEFEFB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  IIMNGGHGKOD_o *item;
  long lVar7;
  IIMNGGHGKOD_array *pIVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04568237 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_set_Capacity__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568237 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  if (JGHPAFEFEFB != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
    iVar1 = (JGHPAFEFEFB->fields)._size;
    plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,iVar4 + iVar1,
                 Method_System_Collections_Generic_List<IIMNGGHGKOD>_set_Capacity__);
      plVar5 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method
                                 );
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_03543944;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03543944:
          uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar9 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar7 = *plVar5;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_03543a90;
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_03543a78;
          }
          lVar7 = *plVar5;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_035439a4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035439a4:
          AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
            bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar2) ||
               ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
          }
          item = OINHIBPHHJM__EOHMFJFFFIN(AHDGNOJPPIB,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<IIMNGGHGKOD>_Add__;
          if (item != (IIMNGGHGKOD_o *)0x0) {
            pIVar8 = (JGHPAFEFEFB->fields)._items;
            (JGHPAFEFEFB->fields)._version = (JGHPAFEFEFB->fields)._version + 1;
            if (pIVar8 == (IIMNGGHGKOD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar3 = (JGHPAFEFEFB->fields)._size;
            if (uVar3 < (uint)pIVar8->max_length) {
              (JGHPAFEFEFB->fields)._size = uVar3 + 1;
              pIVar8->m_Items[(int)uVar3] = item;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)JGHPAFEFEFB,
                         (Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
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
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03543a78:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03543aac;
    }
  }
LAB_03543a90:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03543aac:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

