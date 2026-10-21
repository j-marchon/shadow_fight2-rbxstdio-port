// JIBAEMHNBOF$$JOIKLHPDACN @ RVA 0x30CA664

/* WARNING: Removing unreachable block (ram,0x031caa08) */
/* WARNING: Removing unreachable block (ram,0x031cabd4) */

bool JIBAEMHNBOF__JOIKLHPDACN(NCCFNKMICGK_o *NLFMDIGKNGP,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  VirtualInvokeData *pVVar12;
  AJDHCLBLGMI_o *MOAIKBONJAE;
  undefined8 *puVar13;
  long *plVar14;
  NCCFNKMICGK_c *pNVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  int32_t *piVar19;
  System_String_o *pSVar20;
  HEEEDKBOAKM_o *__this;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  auVar21._8_8_ = method;
  auVar21._0_8_ = NLFMDIGKNGP;
  if ((DAT_045662d2 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    auVar21 = FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662d2 = 1;
  }
  if (NLFMDIGKNGP != (NCCFNKMICGK_o *)0x0) {
    pNVar15 = NLFMDIGKNGP->klass;
    uVar2._0_1_ = (pNVar15->_2).rank;
    uVar2._1_1_ = (pNVar15->_2).minimumAlignment;
    uVar17 = (ulong)uVar2;
    if (uVar17 != 0) {
      piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar12 = pNVar15->vtable + (*piVar19 + 1);
          goto LAB_031ca740;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca740:
    auVar22 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar22._8_8_;
    auVar21 = auVar8 << 0x40;
    if (auVar22._0_8_ != 0) {
      iVar1 = *(int *)(auVar22._0_8_ + 0x18);
      if (iVar1 != 0) {
        pNVar15 = NLFMDIGKNGP->klass;
        uVar3._0_1_ = (pNVar15->_2).rank;
        uVar3._1_1_ = (pNVar15->_2).minimumAlignment;
        uVar17 = (ulong)uVar3;
        if (uVar17 != 0) {
          piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              pVVar12 = pNVar15->vtable + (*piVar19 + 1);
              goto LAB_031ca7a8;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,1);
LAB_031ca7a8:
        MOAIKBONJAE = (AJDHCLBLGMI_o *)(*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
        FIKPNGLBKGN__DGLJCGNHLIG(MOAIKBONJAE,(MethodInfo *)0x0);
      }
      pNVar15 = NLFMDIGKNGP->klass;
      bVar9 = iVar1 != 0;
      uVar4._0_1_ = (pNVar15->_2).rank;
      uVar4._1_1_ = (pNVar15->_2).minimumAlignment;
      uVar17 = (ulong)uVar4;
      if (uVar17 != 0) {
        piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar12 = pNVar15->vtable + *piVar19;
            goto LAB_031ca810;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,0);
LAB_031ca810:
      auVar21 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
      plVar14 = auVar21._0_8_;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = auVar21._8_8_;
      auVar21 = auVar22 << 0x40;
      if (plVar14 != (long *)0x0) {
        lVar16 = *plVar14;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerable_POGBKGFBOLC__c **)(piVar18 + -2) ==
                System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
              puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_031ca878;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01b81914(plVar14,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,
                               0);
LAB_031ca878:
        plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar16 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar18 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_031ca8f8;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_Collections_IEnumerator_TypeInfo,0);
LAB_031ca8f8:
          uVar17 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar17 & 1) == 0) {
            if (plVar14 == (long *)0x0) goto LAB_031ca9fc;
            lVar16 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 == 0) goto LAB_031ca9d4;
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_031ca9bc;
          }
          lVar16 = *plVar14;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar18 + -2) ==
                  System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
                puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_031ca954;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01b81914(plVar14,
                                 System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0);
LAB_031ca954:
          lVar16 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar20 = *(System_String_o **)(lVar16 + 0x10);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          bVar10 = NLPJLHOEAOE__OMFGGNJKKAJ(pSVar20,1,true,(MethodInfo *)0x0);
          bVar9 = (bool)(bVar9 | bVar10);
        } while( true );
      }
    }
  }
  goto LAB_031cabcc;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_031ca9bc:
    if (*(System_IDisposable_c **)(piVar18 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_031ca9f0;
    }
  }
LAB_031ca9d4:
  puVar13 = (undefined8 *)FUN_01b81914(plVar14,System_IDisposable_TypeInfo,0);
LAB_031ca9f0:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_031ca9fc:
  pNVar15 = NLFMDIGKNGP->klass;
  uVar5._0_1_ = (pNVar15->_2).rank;
  uVar5._1_1_ = (pNVar15->_2).minimumAlignment;
  uVar17 = (ulong)uVar5;
  if (uVar17 != 0) {
    piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar12 = pNVar15->vtable + (*piVar19 + 2);
        goto LAB_031caa5c;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,2);
LAB_031caa5c:
  pSVar20 = (System_String_o *)(*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  bVar10 = NLPJLHOEAOE__OMFGGNJKKAJ(pSVar20,1,true,(MethodInfo *)0x0);
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACHLOMELAJE_TypeInfo);
  }
  pNVar15 = NLFMDIGKNGP->klass;
  __this = ACHLOMELAJE_TypeInfo->static_fields->HAEGJFPKIAD;
  uVar6._0_1_ = (pNVar15->_2).rank;
  uVar6._1_1_ = (pNVar15->_2).minimumAlignment;
  uVar17 = (ulong)uVar6;
  if (uVar17 != 0) {
    piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar12 = pNVar15->vtable + (*piVar19 + 8);
        goto LAB_031cab10;
      }
      uVar17 = uVar17 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar17 != 0);
  }
  pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,8);
LAB_031cab10:
  auVar21 = (*pVVar12->methodPtr)(NLFMDIGKNGP,pVVar12->method);
  if ((auVar21._0_8_ != 0) && (__this != (HEEEDKBOAKM_o *)0x0)) {
    bVar11 = HEEEDKBOAKM__KJAJIPLCDDN
                       (__this,*(System_String_o **)(auVar21._0_8_ + 0x70),(MethodInfo *)0x0);
    if ((bVar9 == false && !bVar10) && !bVar11) {
      bVar9 = false;
    }
    else {
      pNVar15 = NLFMDIGKNGP->klass;
      uVar7._0_1_ = (pNVar15->_2).rank;
      uVar7._1_1_ = (pNVar15->_2).minimumAlignment;
      uVar17 = (ulong)uVar7;
      if (uVar17 != 0) {
        piVar19 = &((pNVar15->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
            pVVar12 = pNVar15->vtable + (*piVar19 + 7);
            goto LAB_031cab98;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pVVar12 = (VirtualInvokeData *)FUN_01b81914(NLFMDIGKNGP,NCCFNKMICGK_TypeInfo,7);
LAB_031cab98:
      (*pVVar12->methodPtr)(NLFMDIGKNGP,0,pVVar12->method);
      bVar9 = true;
    }
    return bVar9;
  }
LAB_031cabcc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar21._0_8_,auVar21._8_8_);
}

