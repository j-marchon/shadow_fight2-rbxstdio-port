// BMKPIFBPBMF$$HNIHOIAMDPC @ RVA 0x30D6E9C

/* WARNING: Removing unreachable block (ram,0x031d71b0) */

void BMKPIFBPBMF__HNIHOIAMDPC
               (BMKPIFBPBMF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  BMKPIFBPBMF_PAELLCEFPAH_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *pSVar5;
  long lVar6;
  BMKPIFBPBMF_PAELLCEFPAH_array *pBVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04566337 & 1) == 0) {
                    /* try { // try from 031d6ed0 to 032d6f4f has its CatchHandler @ 031d707c */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_Clear__);
    FUN_01bab630(&BMKPIFBPBMF_PAELLCEFPAH_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566337 = 1;
  }
  pSVar5 = (__this->fields).AKKFNCFAPDO;
  if (pSVar5 != (System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *)0x0) {
    uVar1 = (pSVar5->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < (int)uVar1) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,uVar1,(MethodInfo *)0x0);
    }
                    /* try { // try from 031d6f50 to 032d6f57 has its CatchHandler @ 031d6fb0 */
                    /* try { // try from 031d6f58 to 032d6f5b has its CatchHandler @ 031d6fa8 */
                    /* try { // try from 031d6f5c to 032d6f5f has its CatchHandler @ 031d6fa4 */
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
                    /* try { // try from 031d6f60 to 032d6f63 has its CatchHandler @ 031d6fa0 */
                    /* try { // try from 031d6f64 to 032d6f6b has its CatchHandler @ 031d6f98 */
                    /* try { // try from 031d6f6c to 032d6f77 has its CatchHandler @ 031d6884 */
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                    /* try { // try from 031d6f78 to 032d6f7b has its CatchHandler @ 031d6f90 */
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
                    /* catch() { ... } // from try @ 031d6b20 with catch @ 031d6f9c */
        lVar6 = *plVar3;
                    /* catch() { ... } // from try @ 031d6f60 with catch @ 031d6fa0 */
                    /* catch() { ... } // from try @ 031d6f5c with catch @ 031d6fa4 */
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 031d6f58 with catch @ 031d6fa8 */
        if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 031d6afc with catch @ 031d6fac */
                    /* catch() { ... } // from try @ 031d6f50 with catch @ 031d6fb0 */
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 031d6a8c with catch @ 031d6fb4 */
                    /* catch() { ... } // from try @ 031d6a30 with catch @ 031d6fb8 */
                    /* catch() { ... } // from try @ 031d6cd8 with catch @ 031d6fbc */
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_031d6fe8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
                    /* try { // try from 031d6fd8 to 032d6fdb has its CatchHandler @ 031d6ff0 */
LAB_031d6fe8:
                    /* catch() { ... } // from try @ 031d6fd8 with catch @ 031d6ff0 */
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_031d7150;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_031d7138;
        }
        lVar6 = *plVar3;
                    /* try { // try from 031d7000 to 032d7067 has its CatchHandler @ 031d707c */
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_031d7048;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_031d7048:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        __this_00 = (BMKPIFBPBMF_PAELLCEFPAH_o *)
                    thunk_FUN_01bda818(BMKPIFBPBMF_PAELLCEFPAH_TypeInfo);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031d7068 to 032d7073 has its CatchHandler @ 031d6884 */
                    /* try { // try from 031d7074 to 032d707b has its CatchHandler @ 031d707c */
          bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 031d6ed0 with catch @ 031d707c
                       catch() { ... } // from try @ 031d7000 with catch @ 031d707c
                       catch() { ... } // from try @ 031d7074 with catch @ 031d707c */
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        BMKPIFBPBMF_PAELLCEFPAH___ctor(__this_00,AHDGNOJPPIB_00,method_00);
        lVar6 = Method_System_Collections_Generic_List<BMKPIFBPBMF_PAELLCEFPAH>_Add__;
        pSVar5 = (__this->fields).AKKFNCFAPDO;
        if (pSVar5 == (System_Collections_Generic_List_BMKPIFBPBMF_PAELLCEFPAH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pBVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pBVar7 == (BMKPIFBPBMF_PAELLCEFPAH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pBVar7->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pBVar7->m_Items[(int)uVar1] = __this_00;
          thunk_FUN_01c20e04(pBVar7->m_Items + (int)uVar1,__this_00);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     (MethodInfo_26E4DAC *)method_00);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_031d7138:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_031d716c;
    }
  }
LAB_031d7150:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031d716c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

