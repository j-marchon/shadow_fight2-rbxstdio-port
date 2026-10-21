// HOOAAGABMBL$$MBAGEEPGBCC @ RVA 0x30ED5E8

/* WARNING: Removing unreachable block (ram,0x031ed8f0) */

void HOOAAGABMBL__MBAGEEPGBCC
               (System_Xml_XmlNode_o *JNAFJIDDEJE,
               System_Collections_Generic_List_LEGDPJHPEOB__o *LKFALEIFDIO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JNAFJIDDEJE_00;
  LEGDPJHPEOB_o *__this;
  MethodInfo *method_00;
  long lVar5;
  LEGDPJHPEOB_array *pLVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_0456641e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_0456641e = 1;
  }
  if (JNAFJIDDEJE == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar3 = (long *)(*(JNAFJIDDEJE->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (JNAFJIDDEJE,(JNAFJIDDEJE->klass->vtable)._13_get_ChildNodes.method);
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
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_031ed6fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031ed6fc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_031ed88c;
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
          goto LAB_031ed75c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031ed75c:
    JNAFJIDDEJE_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (JNAFJIDDEJE_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JNAFJIDDEJE_00->klass->_2).naturalAligment < bVar1) ||
         ((JNAFJIDDEJE_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JNAFJIDDEJE_00);
      }
    }
    __this = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
    LEGDPJHPEOB___ctor(__this,(MethodInfo *)0x0);
    if (__this == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (__this->klass->vtable)._6_HNIHOIAMDPC.method;
    (*(__this->klass->vtable)._6_HNIHOIAMDPC.methodPtr)(__this,JNAFJIDDEJE_00);
    if ((__this->fields).ACCIHBHMFPN == 6) {
      HOOAAGABMBL__MBAGEEPGBCC(JNAFJIDDEJE_00,(__this->fields).AHEFOIOKDOK,method_00);
    }
    lVar5 = Method_System_Collections_Generic_List<LEGDPJHPEOB>_Add__;
    if (LKFALEIFDIO == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar6 = (LKFALEIFDIO->fields)._items;
    (LKFALEIFDIO->fields)._version = (LKFALEIFDIO->fields)._version + 1;
    if (pLVar6 == (LEGDPJHPEOB_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (LKFALEIFDIO->fields)._size;
    if (uVar2 < (uint)pLVar6->max_length) {
      (LKFALEIFDIO->fields)._size = uVar2 + 1;
      pLVar6->m_Items[(int)uVar2] = __this;
      thunk_FUN_01c20e04(pLVar6->m_Items + (int)uVar2,__this);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)LKFALEIFDIO,(Il2CppObject *)__this,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_031ed8a8;
    }
  }
LAB_031ed88c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031ed8a8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

