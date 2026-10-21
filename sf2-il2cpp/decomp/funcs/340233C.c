// MGNPHCAAEIO$$EBPPLEEDNPD @ RVA 0x340233C

void MGNPHCAAEIO__EBPPLEEDNPD(bool HFJDDNBBENI,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  GCPFDLNAFDF_o *pGVar5;
  VirtualInvokeData *pVVar6;
  PBAKFOBIHEG_o *pPVar7;
  undefined8 uVar8;
  MethodInfo *extraout_x1;
  GCPFDLNAFDF_c *pGVar9;
  MGNPHCAAEIO_StaticFields *pMVar10;
  PBAKFOBIHEG_c *pPVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *pSVar14;
  System_Collections_IEnumerator_o *pSVar15;
  
  if ((DAT_04568012 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_MGNPHCAAEIO_HGLNKDMEKNK__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_16557);
    FUN_01bab630(&StringLiteral_16558);
    DAT_04568012 = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  pGVar5 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar5 != (GCPFDLNAFDF_o *)0x0) {
    pGVar9 = pGVar5->klass;
    uVar2._0_1_ = (pGVar9->_2).rank;
    uVar2._1_1_ = (pGVar9->_2).minimumAlignment;
    uVar12 = (ulong)uVar2;
    if (uVar12 != 0) {
      piVar13 = &((pGVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar6 = pGVar9->vtable + (*piVar13 + 5);
          goto LAB_03502440;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pGVar5,HFHIKPAKJFG_TypeInfo,5);
LAB_03502440:
    uVar12 = (*pVVar6->methodPtr)(pGVar5,pVVar6->method);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if (HFJDDNBBENI) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar10 = MGNPHCAAEIO_TypeInfo->static_fields;
      if (pMVar10->INAJMOOFPLG != false) {
        return;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar10 = MGNPHCAAEIO_TypeInfo->static_fields;
      }
      if (pMVar10->KAFIAMOFNCM != false) {
        return;
      }
    }
    pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
      pPVar11 = pPVar7->klass;
      pSVar15 = MGNPHCAAEIO_TypeInfo->static_fields->GMBNMAPIDPB;
      uVar3._0_1_ = (pPVar11->_2).rank;
      uVar3._1_1_ = (pPVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar3;
      if (uVar12 != 0) {
        piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar11->vtable + (*piVar13 + 1);
            goto LAB_03502538;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,1);
LAB_03502538:
      (*pVVar6->methodPtr)(pPVar7,pSVar15,pVVar6->method);
      puVar1 = &StringLiteral_16558;
      if (!HFJDDNBBENI) {
        puVar1 = &StringLiteral_16557;
      }
      pSVar14 = (System_String_o *)*puVar1;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar10 = MGNPHCAAEIO_TypeInfo->static_fields;
      pMVar10->GEMEDHGOFIG = pSVar14;
      thunk_FUN_01c20e04(&pMVar10->GEMEDHGOFIG,pSVar14);
      pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pPVar7 != (PBAKFOBIHEG_o *)0x0) {
        pPVar11 = pPVar7->klass;
        uVar4._0_1_ = (pPVar11->_2).rank;
        uVar4._1_1_ = (pPVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar4;
        if (uVar12 != 0) {
          piVar13 = &((pPVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar11->vtable + (*piVar13 + 2);
              goto LAB_0350261c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,2);
LAB_0350261c:
        pSVar15 = (System_Collections_IEnumerator_o *)
                  (*pVVar6->methodPtr)(0x3f800000,pPVar7,uVar8,pVVar6->method);
        pMVar10 = MGNPHCAAEIO_TypeInfo->static_fields;
        pMVar10->GMBNMAPIDPB = pSVar15;
        thunk_FUN_01c20e04(&pMVar10->GMBNMAPIDPB);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

