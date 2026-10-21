// MGJNNCKDJCP$$MNDFPLAFICI @ RVA 0x35C37F8

/* WARNING: Removing unreachable block (ram,0x036c3a28) */

void MGJNNCKDJCP__MNDFPLAFICI
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Xml_XmlNode_o *KKEMAKPNJMA,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
                    /* try { // try from 036c3808 to 037c380f has its CatchHandler @ 036c3884 */
  if ((DAT_04568f57 & 1) == 0) {
                    /* try { // try from 036c381c to 037c382b has its CatchHandler @ 036c387c */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 036c382c to 037c3873 has its CatchHandler @ 036c3760 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    __this = (MGJNNCKDJCP_o *)FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568f57 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    __this = (MGJNNCKDJCP_o *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 036c3874 to 037c3877 has its CatchHandler @ 036c3880 */
      plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
                    /* try { // try from 036c3878 to 037c389b has its CatchHandler @ 036c3760 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c381c with catch @ 036c387c
                        */
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar4 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 036c389c to 037c389f has its CatchHandler @ 036c38c8 */
        if (uVar5 != 0) {
                    /* try { // try from 036c38a0 to 037c38d7 has its CatchHandler @ 036c3760 */
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 036c38d8 to 037c38df has its CatchHandler @ 036c38f4 */
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_036c38dc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
                    /* catch() { ... } // from try @ 036c389c with catch @ 036c38c8 */
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c38dc:
                    /* try { // try from 036c38e0 to 037c38eb has its CatchHandler @ 036c3760 */
        uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
        if ((uVar5 & 1) == 0) {
          plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
          if (plVar2 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 == 0) goto LAB_036c39d8;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_036c39c0;
        }
                    /* try { // try from 036c38ec to 037c38f3 has its CatchHandler @ 036c38f4 */
        lVar4 = *plVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c38d8 with catch @ 036c38f4
                       catch(type#2 @ 00000000) { ... } // from try @ 036c38ec with catch @ 036c38f4
                        */
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_036c393c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c393c:
        JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
        if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
             ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(JOHFLOEABJL);
          }
        }
        EIABCPKDEBD__DGPOFACHGMP(KKEMAKPNJMA,JOHFLOEABJL,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_036c39c0:
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_036c39f4;
    }
  }
LAB_036c39d8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c39f4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

