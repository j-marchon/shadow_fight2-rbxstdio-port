// CKMOFDBAEKH$$MLJDPILPJDE @ RVA 0x339D374

/* WARNING: Removing unreachable block (ram,0x0349d608) */

void CKMOFDBAEKH__MLJDPILPJDE
               (System_Xml_XmlNode_o *MNPCOGBCAED,
               System_Collections_Generic_List_OANBNKOOJFH__o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  OANBNKOOJFH_o *item;
  System_Xml_XmlNode_c *method_00;
  long lVar5;
  OANBNKOOJFH_array *pOVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_04567c91 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567c91 = 1;
  }
  if ((MNPCOGBCAED == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (MNPCOGBCAED,(MNPCOGBCAED->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0349d46c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0349d46c:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0349d5b4;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0349d4cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0349d4cc:
    auVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    AHDGNOJPPIB = auVar9._0_8_;
    method_00 = auVar9._8_8_;
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
         (method_00 = System_Xml_XmlNode_TypeInfo,
         (AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
    }
    item = CKMOFDBAEKH__PLANLODIOHG(AHDGNOJPPIB,(MethodInfo *)method_00);
    lVar5 = Method_System_Collections_Generic_List<OANBNKOOJFH>_Add__;
    if (HPACPFLKHPK == (System_Collections_Generic_List_OANBNKOOJFH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pOVar6 = (HPACPFLKHPK->fields)._items;
    (HPACPFLKHPK->fields)._version = (HPACPFLKHPK->fields)._version + 1;
    if (pOVar6 == (OANBNKOOJFH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (HPACPFLKHPK->fields)._size;
    if (uVar2 < (uint)pOVar6->max_length) {
      (HPACPFLKHPK->fields)._size = uVar2 + 1;
      pOVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)HPACPFLKHPK,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0349d5d0;
    }
  }
LAB_0349d5b4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0349d5d0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

