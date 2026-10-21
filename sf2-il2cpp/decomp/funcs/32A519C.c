// GDGNDNPEHIG$$PHLOMKFNCBJ @ RVA 0x32A519C

bool GDGNDNPEHIG__PHLOMKFNCBJ(GDGNDNPEHIG_o *__this,OHAHOONNEIC_o *DKCGCLNOELC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  System_String_o *pSVar9;
  OHAHOONNEIC_c *pOVar10;
  HCOKCPNMKFK_c *pHVar11;
  ulong uVar12;
  int32_t *piVar13;
  HCOKCPNMKFK_o *pHVar14;
  
  if ((DAT_045673e7 & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&OHAHOONNEIC_TypeInfo);
    FUN_01bab630(&StringLiteral_9955);
    FUN_01bab630(&StringLiteral_6013);
    DAT_045673e7 = 1;
  }
  if (DKCGCLNOELC != (OHAHOONNEIC_o *)0x0) {
    pOVar10 = DKCGCLNOELC->klass;
    pHVar14 = (__this->fields).BCHLEFPBFHO;
    uVar1._0_1_ = (pOVar10->_2).rank;
    uVar1._1_1_ = (pOVar10->_2).minimumAlignment;
    uVar12 = (ulong)uVar1;
    if (uVar12 != 0) {
      piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
          pVVar7 = pOVar10->vtable + *piVar13;
          goto LAB_033a5250;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,0);
LAB_033a5250:
    uVar8 = (*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
    if (pHVar14 != (HCOKCPNMKFK_o *)0x0) {
      pHVar11 = pHVar14->klass;
      uVar2._0_1_ = (pHVar11->_2).rank;
      uVar2._1_1_ = (pHVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pHVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
            pVVar7 = pHVar11->vtable + (*piVar13 + 3);
            goto LAB_033a52bc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pHVar14,HCOKCPNMKFK_TypeInfo,3);
LAB_033a52bc:
      uVar12 = (*pVVar7->methodPtr)(pHVar14,uVar8,pVVar7->method);
      if ((uVar12 & 1) != 0) {
        pOVar10 = DKCGCLNOELC->klass;
        uVar3._0_1_ = (pOVar10->_2).rank;
        uVar3._1_1_ = (pOVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 != 0) {
          piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
              pVVar7 = pOVar10->vtable + (*piVar13 + 1);
              goto LAB_033a5320;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5320:
        pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
        bVar6 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
        if (!bVar6) {
          pOVar10 = DKCGCLNOELC->klass;
          uVar4._0_1_ = (pOVar10->_2).rank;
          uVar4._1_1_ = (pOVar10->_2).minimumAlignment;
          uVar12 = (ulong)uVar4;
          if (uVar12 != 0) {
            piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                  (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
                pVVar7 = pOVar10->vtable + (*piVar13 + 1);
                goto LAB_033a5388;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5388:
          pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
          if (pSVar9 == (System_String_o *)0x0) goto LAB_033a5440;
          bVar6 = System_String__StartsWith(pSVar9,StringLiteral_6013,(MethodInfo *)0x0);
          if (!bVar6) {
            pOVar10 = DKCGCLNOELC->klass;
            uVar5._0_1_ = (pOVar10->_2).rank;
            uVar5._1_1_ = (pOVar10->_2).minimumAlignment;
            uVar12 = (ulong)uVar5;
            if (uVar12 != 0) {
              piVar13 = &((pOVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                    (Il2CppClass *)OHAHOONNEIC_TypeInfo) {
                  pVVar7 = pOVar10->vtable + (*piVar13 + 1);
                  goto LAB_033a5414;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(DKCGCLNOELC,OHAHOONNEIC_TypeInfo,1);
LAB_033a5414:
            pSVar9 = (System_String_o *)(*pVVar7->methodPtr)(DKCGCLNOELC,pVVar7->method);
            bVar6 = System_String__op_Inequality(pSVar9,StringLiteral_9955,(MethodInfo *)0x0);
            return bVar6;
          }
        }
      }
      return false;
    }
  }
LAB_033a5440:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

