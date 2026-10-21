// EIABCPKDEBD$$IJPOFDDHAAF @ RVA 0x313385C

/* WARNING: Removing unreachable block (ram,0x03233ab8) */

System_Xml_XmlNode_o *
EIABCPKDEBD__IJPOFDDHAAF
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *pSVar5;
  System_String_o *__this;
  long lVar6;
  System_Xml_XmlNode_c *pSVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045666eb & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045666eb = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
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
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03233940;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03233940:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
                    /* try { // try from 03233a14 to 03333a17 has its CatchHandler @ 03233c98 */
        pSVar5 = (System_Xml_XmlNode_o *)0x0;
        break;
      }
                    /* try { // try from 03233950 to 03333957 has its CatchHandler @ 03233fdc */
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 0323396c to 0333397f has its CatchHandler @ 03233cbc */
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_032339a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
                    /* try { // try from 03233984 to 03333993 has its CatchHandler @ 03233ca8 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_032339a0:
                    /* try { // try from 032339a4 to 033339b3 has its CatchHandler @ 03233ca0 */
      pSVar5 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (pSVar5 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032339b4 to 033339bf has its CatchHandler @ 03233c9c */
      pSVar7 = pSVar5->klass;
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032339d4 to 033339db has its CatchHandler @ 03233c84 */
      if (((pSVar7->_2).naturalAligment < bVar1) ||
         ((pSVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)System_Xml_XmlNode_TypeInfo
         )) {
                    /* try { // try from 03233aa0 to 03333aa3 has its CatchHandler @ 03233c8c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03233aa4 to 03333ab3 has its CatchHandler @ 03233c88 */
        FUN_01babc64(pSVar5);
      }
      __this = (System_String_o *)
               (*(pSVar7->vtable)._8_unknown.methodPtr)(pSVar5,(pSVar7->vtable)._8_unknown.method);
      if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 032339f8 to 033339fb has its CatchHandler @ 03233cb8 */
      bVar2 = System_String__Equals(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    } while (!bVar2);
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 03233a38 to 03333a3b has its CatchHandler @ 03233c94 */
      if (uVar8 != 0) {
                    /* try { // try from 03233a3c to 03333a63 has its CatchHandler @ 03233cb4 */
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03233a78;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03233a78:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return pSVar5;
}

