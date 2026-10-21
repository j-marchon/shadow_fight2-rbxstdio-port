// HEFOANCOHDC$$PLEKILLMEEK @ RVA 0x341F568

/* WARNING: Removing unreachable block (ram,0x0351fa70) */
/* WARNING: Removing unreachable block (ram,0x0351fa5c) */
/* WARNING: Removing unreachable block (ram,0x0351f8b0) */

void HEFOANCOHDC__PLEKILLMEEK
               (HEFOANCOHDC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  long *plVar5;
  System_Xml_XmlAttribute_o *CBCJPCKIOPJ;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_045680da & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045680da = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0351f61c:
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0351f668;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  method = (MethodInfo *)0x0;
  puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0351f668:
  uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar7 & 1) != 0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0351f6c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x1;
    puVar4 = (undefined8 *)FUN_01b81914(plVar3);
LAB_0351f6c8:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
       ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHDGNOJPPIB_00);
    }
    plVar5 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0351f780;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f780:
      uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar7 & 1) == 0) goto LAB_0351f830;
      lVar6 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0351f7e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      method = (MethodInfo *)0x1;
      puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f7e0:
      CBCJPCKIOPJ = (System_Xml_XmlAttribute_o *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (CBCJPCKIOPJ != (System_Xml_XmlAttribute_o *)0x0) {
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if (((CBCJPCKIOPJ->klass->_2).naturalAligment < bVar1) ||
           ((CBCJPCKIOPJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(CBCJPCKIOPJ);
        }
      }
      HEFOANCOHDC__IDNDFIFCOFO(__this,CBCJPCKIOPJ,method);
    } while( true );
  }
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 == 0) goto LAB_0351f978;
  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
  goto LAB_0351f960;
LAB_0351f830:
  plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0351f898;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar4 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0351f898:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  plVar5 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._13_get_ChildNodes.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351fa48 with catch @ 0351fa64
                       catch(type#2 @ 00000000) { ... } // from try @ 0351fa5c with catch @ 0351fa64
                        */
    FUN_01bab8c8();
  }
  iVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
  if (0 < iVar2) {
                    /* try { // try from 0351f8e0 to 0361f96b has its CatchHandler @ 0351f8e0
                       catch() { ... } // from try @ 0351f8e0 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351f9c0 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351f9e4 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351fa10 with catch @ 0351f8e0
                       catch() { ... } // from try @ 0351fa50 with catch @ 0351f8e0 */
    HEFOANCOHDC__PLEKILLMEEK(__this,AHDGNOJPPIB_00,method);
  }
  goto LAB_0351f61c;
  while( true ) {
                    /* try { // try from 0351f96c to 0361f973 has its CatchHandler @ 0351f9f0 */
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0351f960:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0351f990 to 0361f99f has its CatchHandler @ 0351f9e8 */
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0351f994;
    }
  }
LAB_0351f978:
                    /* try { // try from 0351f980 to 0361f98f has its CatchHandler @ 0351f9ec */
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0351f994:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
                    /* try { // try from 0351f9a0 to 0361f9bf has its CatchHandler @ 0351f9f4 */
  return;
}

