// PEEIMHCMDND$$GMOEEEHEFKG @ RVA 0x34253D4

void PEEIMHCMDND__GMOEEEHEFKG(PEEIMHCMDND_o *__this,bool JEKNIGLDAGG,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  JMDPBFOCHHP_o *__this_00;
  HJEODECHNDG_o *pHVar6;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  PEEIMHCMDND_Fields *pPVar10;
  System_Collections_IEnumerator_o *pSVar11;
  int iVar12;
  
  if ((DAT_04568103 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_PEEIMHCMDND_AGCAGFAJMIP__);
    DAT_04568103 = 1;
  }
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pPVar10 = &__this->fields;
  pSVar11 = pPVar10->EMFMPPIGHKC;
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar7 = pPVar3->klass;
    uVar1._0_1_ = (pPVar7->_2).rank;
    uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar7->vtable + (*piVar9 + 1);
          goto LAB_035254a4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,1);
LAB_035254a4:
    (*pVVar4->methodPtr)(pPVar3,pSVar11,pVVar4->method);
    if (JEKNIGLDAGG) {
      PEEIMHCMDND__CKFELMACGEH(__this,method_00);
      return;
    }
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (((__this_00 != (JMDPBFOCHHP_o *)0x0) &&
        (pHVar6 = JMDPBFOCHHP__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0),
        pHVar6 != (HJEODECHNDG_o *)0x0)) && (pPVar3 != (PBAKFOBIHEG_o *)0x0)) {
      pPVar7 = pPVar3->klass;
      iVar12 = (pHVar6->fields)._HBBHIBIJDIB_k__BackingField;
      uVar2._0_1_ = (pPVar7->_2).rank;
      uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar2;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar7->vtable + (*piVar9 + 2);
            goto LAB_035255a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_035255a8:
      pSVar11 = (System_Collections_IEnumerator_o *)
                (*pVVar4->methodPtr)
                          ((ulong)(uint)((float)iVar12 / 1000.0),pPVar3,uVar5,pVVar4->method);
      pPVar10->EMFMPPIGHKC = pSVar11;
      thunk_FUN_01c20e04(pPVar10,pSVar11);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

