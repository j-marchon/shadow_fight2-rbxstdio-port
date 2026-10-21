// IDLLJHPDAHE$$HNIHOIAMDPC @ RVA 0x315EA28

/* WARNING: Removing unreachable block (ram,0x0325ed44) */

void IDLLJHPDAHE__HNIHOIAMDPC
               (IDLLJHPDAHE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  IDLLJHPDAHE_GEBJFKLEAMM_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *pSVar5;
  long lVar6;
  IDLLJHPDAHE_GEBJFKLEAMM_array *pIVar7;
  ulong uVar8;
  int *piVar9;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325ea20 with catch @ 0325ea28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9f0 with catch @ 0325ea2c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9cc with catch @ 0325ea30
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9dc with catch @ 0325ea34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0325e9b8 with catch @ 0325ea38
                        */
  if ((DAT_0456687d & 1) == 0) {
                    /* try { // try from 0325ea50 to 0335ea53 has its CatchHandler @ 0325ea74 */
                    /* try { // try from 0325ea54 to 0335ea7b has its CatchHandler @ 0325e700 */
    FUN_01bab630(&IDLLJHPDAHE_GEBJFKLEAMM_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* catch() { ... } // from try @ 0325ea50 with catch @ 0325ea74 */
                    /* try { // try from 0325ea7c to 0335ea83 has its CatchHandler @ 0325ea98 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Add__);
                    /* try { // try from 0325ea84 to 0335ea8f has its CatchHandler @ 0325e700 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Clear__);
                    /* try { // try from 0325ea90 to 0335ea97 has its CatchHandler @ 0325ea98 */
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0325ea7c with catch @ 0325ea98
                       catch(type#2 @ 00000000) { ... } // from try @ 0325ea90 with catch @ 0325ea98
                        */
    DAT_0456687d = 1;
  }
  pSVar5 = (__this->fields).DOJGLDBNDPC;
  if (pSVar5 != (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
    uVar1 = (pSVar5->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
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
              goto LAB_0325eb70;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0325eb70:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_0325ece4;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_0325eccc;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0325ebd0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0325ebd0:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        __this_00 = (IDLLJHPDAHE_GEBJFKLEAMM_o *)
                    thunk_FUN_01bda818(IDLLJHPDAHE_GEBJFKLEAMM_TypeInfo);
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<IDLLJHPDAHE_GEBJFKLEAMM>_Add__;
        pSVar5 = (__this->fields).DOJGLDBNDPC;
        if (pSVar5 == (System_Collections_Generic_List_IDLLJHPDAHE_GEBJFKLEAMM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pIVar7 == (IDLLJHPDAHE_GEBJFKLEAMM_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,__this_00);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     (MethodInfo_26E4DAC *)method_00);
        }
        if (__this_00 == (IDLLJHPDAHE_GEBJFKLEAMM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        IDLLJHPDAHE_GEBJFKLEAMM__HNIHOIAMDPC(__this_00,AHDGNOJPPIB_00,method_00);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0325eccc:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0325ed00;
    }
  }
LAB_0325ece4:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0325ed00:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

