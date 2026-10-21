// MGJNNCKDJCP$$OMENLOHIJIC @ RVA 0x35C3AEC

/* WARNING: Removing unreachable block (ram,0x036c4058) */
/* WARNING: Removing unreachable block (ram,0x036c4048) */
/* WARNING: Removing unreachable block (ram,0x036c3e98) */

void MGJNNCKDJCP__OMENLOHIJIC
               (MGJNNCKDJCP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               EILGGBOIMGE_FMFDKGKCBBG_o *HPACPFLKHPK,LEGDPJHPEOB_o *PFDEAPMMFAP,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  long *plVar4;
  long *plVar5;
  System_String_o *CJNHFNHJHPE;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_04568f5b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568f5b = 1;
  }
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036c3ba0:
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_036c3bec;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c3bec:
  uVar8 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  if ((uVar8 & 1) != 0) {
    lVar7 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_036c3c4c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c3c4c:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
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
    plVar4 = (long *)(*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB_00,
                                (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_036c3d0c;
          }
          uVar8 = uVar8 - 1;
                    /* try { // try from 036c3ce8 to 037c3dc3 has its CatchHandler @ 036c3ce8
                       catch() { ... } // from try @ 036c3ce8 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3e0c with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3e84 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3eb4 with catch @ 036c3ce8
                       catch() { ... } // from try @ 036c3ef4 with catch @ 036c3ce8 */
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_036c3d0c:
      uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar8 & 1) == 0) goto LAB_036c3e18;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_036c3d6c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_036c3d6c:
      plVar5 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar5 != (long *)0x0) {
        bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(System_Xml_XmlAttribute_c **)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlAttribute_TypeInfo)) {
                    /* try { // try from 036c3eb4 to 037c3eeb has its CatchHandler @ 036c3ce8 */
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar5);
        }
      }
      if (HPACPFLKHPK == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      EILGGBOIMGE_FMFDKGKCBBG__NDNPGAKJLHM(HPACPFLKHPK,(MethodInfo *)0x0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 036c3dc4 to 037c3dcb has its CatchHandler @ 036c3e98 */
      CJNHFNHJHPE = (System_String_o *)
                    (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      if (PFDEAPMMFAP == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 036c3de0 to 037c3de3 has its CatchHandler @ 036c3e88 */
                    /* try { // try from 036c3de4 to 037c3df3 has its CatchHandler @ 036c3e94 */
      method = (MethodInfo *)0x0;
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)PFDEAPMMFAP,CJNHFNHJHPE,HPACPFLKHPK,false,(System_String_o *)0x0,
                 (MethodInfo *)0x0);
                    /* try { // try from 036c3dfc to 037c3e0b has its CatchHandler @ 036c3e90 */
      uVar6 = (*(HPACPFLKHPK->klass->vtable)._3_ToString.methodPtr)
                        (HPACPFLKHPK,(HPACPFLKHPK->klass->vtable)._3_ToString.method);
                    /* try { // try from 036c3e0c to 037c3e7f has its CatchHandler @ 036c3ce8 */
      (**(code **)(*plVar5 + 0x1d8))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x1e0));
    } while( true );
  }
  plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar2;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 == 0) goto LAB_036c3f70;
  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_036c3f58;
LAB_036c3e18:
  plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036c3e80;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_036c3e80:
                    /* try { // try from 036c3e80 to 037c3e83 has its CatchHandler @ 036c3e8c */
                    /* try { // try from 036c3e84 to 037c3eaf has its CatchHandler @ 036c3ce8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3de0 with catch @ 036c3e88
                        */
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3e80 with catch @ 036c3e8c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3dfc with catch @ 036c3e90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036c3de4 with catch @ 036c3e94
                        */
  MGJNNCKDJCP__OMENLOHIJIC(__this,AHDGNOJPPIB_00,HPACPFLKHPK,PFDEAPMMFAP,method);
                    /* try { // try from 036c3eb0 to 037c3eb3 has its CatchHandler @ 036c3edc */
  goto LAB_036c3ba0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_036c3f58:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_036c3f8c;
    }
  }
LAB_036c3f70:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036c3f8c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

