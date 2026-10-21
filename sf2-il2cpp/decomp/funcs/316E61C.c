// JHHFDBLANPH$$LLOLAGGFMCJ @ RVA 0x316E61C

/* WARNING: Removing unreachable block (ram,0x0326ebf0) */
/* WARNING: Removing unreachable block (ram,0x0326ec3c) */

JHHFDBLANPH_MNHKJDJJINH_o *
JHHFDBLANPH__LLOLAGGFMCJ
          (JHHFDBLANPH_o *__this,System_Xml_XmlNode_o *HDIAJLKOKLI,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  JHHFDBLANPH_MNHKJDJJINH_o *__this_00;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_0456690a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0326e65c to 0336e777 has its CatchHandler @ 0326e65c
                       catch() { ... } // from try @ 0326e65c with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e830 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e8c0 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e8c8 with catch @ 0326e65c
                       catch() { ... } // from try @ 0326e974 with catch @ 0326e65c */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JHHFDBLANPH_MNHKJDJJINH_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_21139);
    FUN_01bab630(&StringLiteral_21465);
    FUN_01bab630(&StringLiteral_19963);
    FUN_01bab630(&StringLiteral_21168);
    FUN_01bab630(&StringLiteral_1480);
    FUN_01bab630(&StringLiteral_22255);
    FUN_01bab630(&StringLiteral_21466);
    FUN_01bab630(&StringLiteral_21605);
    FUN_01bab630(&StringLiteral_20618);
    FUN_01bab630(&StringLiteral_18343);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_21167);
    FUN_01bab630(&StringLiteral_19289);
    DAT_0456690a = 1;
  }
  __this_00 = (JHHFDBLANPH_MNHKJDJJINH_o *)thunk_FUN_01bda818(JHHFDBLANPH_MNHKJDJJINH_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((AFKICLAFDKC != (System_String_o *)0x0) &&
     (pSVar4 = System_String__Replace
                         (AFKICLAFDKC,StringLiteral_1480,StringLiteral_1,(MethodInfo *)0x0),
     __this_00 != (JHHFDBLANPH_MNHKJDJJINH_o *)0x0)) {
    (__this_00->fields).NPFMOEOIEKM = pSVar4;
    thunk_FUN_01c20e04();
                    /* try { // try from 0326e778 to 0336e79f has its CatchHandler @ 0326e8e4 */
    if ((HDIAJLKOKLI != (System_Xml_XmlNode_o *)0x0) &&
       (plVar5 = (long *)(*(HDIAJLKOKLI->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (HDIAJLKOKLI,
                                    (HDIAJLKOKLI->klass->vtable)._13_get_ChildNodes.method),
       plVar5 != (long *)0x0)) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (System_String_o *)0x0;
                    /* try { // try from 0326e7d4 to 0336e7fb has its CatchHandler @ 0326e8e0 */
LAB_0326e7e0:
      do {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0326e828 to 0336e82f has its CatchHandler @ 0326e8d4 */
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0326e82c;
            }
            uVar11 = uVar11 - 1;
                    /* try { // try from 0326e808 to 0336e817 has its CatchHandler @ 0326e8dc */
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0326e82c:
                    /* try { // try from 0326e830 to 0336e8bb has its CatchHandler @ 0326e65c */
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_0326ebe4;
          lVar10 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0326ebbc;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0326eba4;
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_0326e88c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0326e88c:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0326e8bc to 0336e8bf has its CatchHandler @ 0326e8d8 */
                    /* try { // try from 0326e8c0 to 0336e8c3 has its CatchHandler @ 0326e65c */
                    /* try { // try from 0326e8c4 to 0336e8c7 has its CatchHandler @ 0326e8d0 */
                    /* try { // try from 0326e8c8 to 0336e8fb has its CatchHandler @ 0326e65c */
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar7);
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e8c4 with catch @ 0326e8d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e828 with catch @ 0326e8d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e8bc with catch @ 0326e8d8
                        */
        pSVar8 = (System_String_o *)
                 (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e808 with catch @ 0326e8dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e7d4 with catch @ 0326e8e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326e778 with catch @ 0326e8e4
                        */
        bVar2 = System_String__op_Equality(pSVar8,StringLiteral_19289,(MethodInfo *)0x0);
        if (!bVar2) {
          uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar4,(MethodInfo *)0x0);
          if (0xbb6a4c95 < uVar3) {
            if (uVar3 < 0xdcc01c8a) {
                    /* try { // try from 0326e974 to 0336e97f has its CatchHandler @ 0326e65c */
              if (uVar3 == 0xd20a71a6) {
                pMVar9 = (MethodInfo *)0x0;
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_18343,(MethodInfo *)0x0);
                goto LAB_0326eab0;
              }
                    /* try { // try from 0326e980 to 0336e987 has its CatchHandler @ 0326e988 */
              if (uVar3 != 0xdcc01c89) goto LAB_0326e7e0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0326e94c with catch @ 0326e988
                       catch(type#2 @ 00000000) { ... } // from try @ 0326e980 with catch @ 0326e988
                        */
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21139,(MethodInfo *)0x0);
            }
            else {
              if (uVar3 == 0xef5b2107) {
                pMVar9 = (MethodInfo *)0x0;
                bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21167,(MethodInfo *)0x0);
                if (bVar2) {
                  JHHFDBLANPH_MNHKJDJJINH__JMFIDIANAAI(__this_00,StringLiteral_22255,pMVar9);
                }
                goto LAB_0326e7e0;
              }
              if (uVar3 != 0xfede9a95) goto LAB_0326e7e0;
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21168,(MethodInfo *)0x0);
            }
            if (bVar2 != false) {
              plVar7 = (long *)(**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260))
              ;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar8 = (System_String_o *)
                       (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
              JHHFDBLANPH_MNHKJDJJINH__EABFNDGMFKD(__this_00,pSVar8,pMVar9);
            }
            goto LAB_0326e7e0;
          }
          if (uVar3 < 0x4d8f3303) {
            if (uVar3 == 0x14c8d3ca) {
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_19963,(MethodInfo *)0x0);
              if (bVar2) {
                plVar7 = (long *)(**(code **)(*plVar7 + 600))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x260));
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (System_String_o *)
                         (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                JHHFDBLANPH_MNHKJDJJINH__JMFIDIANAAI(__this_00,pSVar8,pMVar9);
              }
            }
            else if (uVar3 == 0x4d8f3302) {
                    /* try { // try from 0326e94c to 0336e973 has its CatchHandler @ 0326e988 */
              pMVar9 = (MethodInfo *)0x0;
              bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21465,(MethodInfo *)0x0);
LAB_0326eab0:
              if (bVar2 != false) {
                plVar7 = (long *)(**(code **)(*plVar7 + 600))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x260));
                if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar8 = (System_String_o *)
                         (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
                JHHFDBLANPH_MNHKJDJJINH__IDJNOIMDGKJ(__this_00,pSVar8,pMVar9);
              }
            }
            goto LAB_0326e7e0;
          }
          if (uVar3 == 0xaeaaf42a) {
            bVar2 = System_String__op_Equality(pSVar4,StringLiteral_20618,(MethodInfo *)0x0);
          }
          else {
            if (uVar3 != 0xbb6a4c95) goto LAB_0326e7e0;
            bVar2 = System_String__op_Equality(pSVar4,StringLiteral_21466,(MethodInfo *)0x0);
          }
          if (bVar2 != false) {
            pSVar8 = (System_String_o *)
                     (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
            bVar2 = System_String__op_Equality(pSVar8,StringLiteral_21605,(MethodInfo *)0x0);
            (__this_00->fields).CDHBEDHABDL = bVar2;
          }
          goto LAB_0326e7e0;
        }
                    /* try { // try from 0326e8fc to 0336e8ff has its CatchHandler @ 0326e90c */
        plVar7 = (long *)(**(code **)(*plVar7 + 600))(plVar7,*(undefined8 *)(*plVar7 + 0x260));
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* catch() { ... } // from try @ 0326e8fc with catch @ 0326e90c */
        pSVar4 = (System_String_o *)
                 (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      } while( true );
    }
  }
  goto LAB_0326ec2c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0326eba4:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0326ebd8;
    }
  }
LAB_0326ebbc:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0326ebd8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0326ebe4:
  if ((__this_00->fields).EMPEBPJNGKP != (JHHFDBLANPH_MNHKJDJJINH_FMGNNNCEHID_o *)0x0) {
    return __this_00;
  }
LAB_0326ec2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

