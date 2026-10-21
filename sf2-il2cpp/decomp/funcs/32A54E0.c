// ProfitViewer$$DBEICCIBFDB @ RVA 0x32A54E0

void ProfitViewer__DBEICCIBFDB(ProfitViewer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  CocosAnimation_o *pCVar2;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *pSVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
  if ((DAT_045673e9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_ProfitViewer_DBEICCIBFDB__);
    DAT_045673e9 = 1;
  }
  pCVar2 = (__this->fields)._profitShine;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._profitShine;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._profitShine;
      if (pCVar2 != (CocosAnimation_o *)0x0) {
        (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
        pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
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
                pVVar5 = pPVar7->vtable + (*piVar9 + 2);
                goto LAB_033a55f8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_033a55f8:
          pSVar6 = (System_Collections_IEnumerator_o *)
                   (*pVVar5->methodPtr)(0x40000000,pPVar3,uVar4,pVVar5->method);
          ppSVar10 = &(__this->fields).EFFEJDCPDPB;
          *ppSVar10 = pSVar6;
          thunk_FUN_01c20e04(ppSVar10,pSVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

