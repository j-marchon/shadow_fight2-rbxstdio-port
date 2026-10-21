// OCMLPCKBHPN$$CJGCNEKINDI @ RVA 0x327EF60

/* WARNING: Removing unreachable block (ram,0x0337f2c0) */

void OCMLPCKBHPN__CJGCNEKINDI
               (System_Xml_XmlNode_o *MPHHAGEJMMC,
               System_Collections_Generic_List_FCFGGKLDBFJ__o *EDIJEJNPBCJ,MethodInfo *method)

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
  FCFGGKLDBFJ_o *item;
  long lVar8;
  FCFGGKLDBFJ_array *pFVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_04567279 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCFGGKLDBFJ>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_9327);
    DAT_04567279 = 1;
  }
  if (MPHHAGEJMMC == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar4 = (long *)(*(MPHHAGEJMMC->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (MPHHAGEJMMC,(MPHHAGEJMMC->klass->vtable)._13_get_ChildNodes.method);
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
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0337f09c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0337f09c:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0337f258;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0337f0fc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0337f0fc:
    plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar6);
    }
    pSVar7 = (System_String_o *)
             (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    bVar3 = System_String__op_Equality(pSVar7,StringLiteral_2968,(MethodInfo *)0x0);
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
      if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      item = LDHBHPILNMA__CCNAGCKPEHD(pSVar7,(MethodInfo *)0x0);
      lVar8 = Method_System_Collections_Generic_List<FCFGGKLDBFJ>_Add__;
      if (item != (FCFGGKLDBFJ_o *)0x0) {
        if (EDIJEJNPBCJ == (System_Collections_Generic_List_FCFGGKLDBFJ__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pFVar9 = (EDIJEJNPBCJ->fields)._items;
        (EDIJEJNPBCJ->fields)._version = (EDIJEJNPBCJ->fields)._version + 1;
        if (pFVar9 == (FCFGGKLDBFJ_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (EDIJEJNPBCJ->fields)._size;
        if (uVar2 < (uint)pFVar9->max_length) {
          (EDIJEJNPBCJ->fields)._size = uVar2 + 1;
          pFVar9->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)EDIJEJNPBCJ,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0337f274;
    }
  }
LAB_0337f258:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0337f274:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

