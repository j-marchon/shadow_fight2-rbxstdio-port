// AGHKMJNGFOB$$HNIHOIAMDPC @ RVA 0x316CE60

/* WARNING: Removing unreachable block (ram,0x0326d1ac) */

void AGHKMJNGFOB__HNIHOIAMDPC
               (AGHKMJNGFOB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *IDAKJHIMAHA;
  System_String_o *a;
  FCGINHCODAI_o *__this_00;
  System_Collections_Generic_List_FCGINHCODAI__o *pSVar6;
  long lVar7;
  FCGINHCODAI_array *pFVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04566903 & 1) == 0) {
    FUN_01bab630(&FCGINHCODAI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FCGINHCODAI>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8409);
    DAT_04566903 = 1;
  }
  pSVar6 = (__this->fields).JBCBCLOPOPI;
  if (pSVar6 != (System_Collections_Generic_List_FCGINHCODAI__o *)0x0) {
    length = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0326cfc0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326cfc0:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 0326cfcc to 0336d083 has its CatchHandler @ 0326cfcc
                       catch() { ... } // from try @ 0326cfcc with catch @ 0326cfcc
                       catch() { ... } // from try @ 0326d0a4 with catch @ 0326cfcc
                       catch() { ... } // from try @ 0326d22c with catch @ 0326cfcc
                       catch() { ... } // from try @ 0326d254 with catch @ 0326cfcc
                       catch() { ... } // from try @ 0326d284 with catch @ 0326cfcc */
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_0326d148;
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_0326d130;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_0326d020;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326d020:
        IDAKJHIMAHA = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (IDAKJHIMAHA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((IDAKJHIMAHA->klass->_2).naturalAligment < bVar1) ||
           ((IDAKJHIMAHA->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(IDAKJHIMAHA);
        }
        a = (System_String_o *)
            (*(IDAKJHIMAHA->klass->vtable)._8_unknown.methodPtr)
                      (IDAKJHIMAHA,(IDAKJHIMAHA->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_8409,(MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 0326d084 to 0336d08b has its CatchHandler @ 0326d238 */
          __this_00 = (FCGINHCODAI_o *)thunk_FUN_01bda818(FCGINHCODAI_TypeInfo);
          FCGINHCODAI___ctor(__this_00,IDAKJHIMAHA,(MethodInfo *)0x0);
          lVar7 = Method_System_Collections_Generic_List<FCGINHCODAI>_Add__;
          pSVar6 = (__this->fields).JBCBCLOPOPI;
          if (pSVar6 == (System_Collections_Generic_List_FCGINHCODAI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0326d0a0 to 0336d0a3 has its CatchHandler @ 0326d234 */
                    /* try { // try from 0326d0a4 to 0336d227 has its CatchHandler @ 0326cfcc */
          pFVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pFVar8 == (FCGINHCODAI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pFVar8->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pFVar8->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pFVar8->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_0326d130:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0326d164;
    }
  }
LAB_0326d148:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0326d164:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

