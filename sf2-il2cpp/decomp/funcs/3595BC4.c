// DebugSimpleScroll$$DKPCBGDEOKA @ RVA 0x3595BC4

void DebugSimpleScroll__DKPCBGDEOKA(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  float fVar10;
  
  if ((DAT_04568d9d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_DebugSimpleScroll_LFENGGKOJDO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568d9d = 1;
    method = extraout_x1;
  }
  DebugSimpleScroll__GEHOLGHDEOP(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar2->klass;
  fVar10 = (__this->fields)._continuousAddDelay;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar4 = pPVar6->vtable + (*piVar8 + 3);
        goto LAB_03695cb4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,3);
LAB_03695cb4:
  pSVar5 = (System_Collections_IEnumerator_o *)
           (*pVVar4->methodPtr)((ulong)(uint)fVar10,pPVar2,uVar3,1,pVVar4->method);
  ppSVar9 = &(__this->fields).BBKNKHOJFOG;
  *ppSVar9 = pSVar5;
  thunk_FUN_01c20e04(ppSVar9,pSVar5);
  return;
}

