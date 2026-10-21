// LHOMEBJDFLD$$COJANGIEAKE @ RVA 0x30233C8

void LHOMEBJDFLD__COJANGIEAKE(LHOMEBJDFLD_o *__this,MethodInfo *method)

{
  ushort uVar1;
  KKLJIDJBFEI_o *pKVar2;
  undefined8 uVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  System_Collections_IEnumerator_o *pSVar10;
  
  if ((DAT_04565c70 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_LHOMEBJDFLD_PNIKPDDINKE__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565c70 = 1;
  }
  (__this->fields).JPKAGHPLAJP = 0;
  (__this->fields).KGOMOBOFNMD = false;
  (__this->fields).AKKOPIGJABD = -1;
  pKVar2 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (pKVar2 != (KKLJIDJBFEI_o *)0x0) {
    (*(pKVar2->klass->vtable)._8_IKAAFAICDMD.methodPtr)
              (pKVar2,uVar3,(pKVar2->klass->vtable)._8_IKAAFAICDMD.method);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar9 = &(__this->fields).JBGNDDGMAAL;
    pSVar10 = *ppSVar9;
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar4->klass;
      uVar1._0_1_ = (pPVar6->_2).rank;
      uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar1;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar6->vtable + (*piVar8 + 1);
            goto LAB_031234e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_031234e0:
      (*pVVar5->methodPtr)(pPVar4,pSVar10,pVVar5->method);
      *ppSVar9 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar9,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

