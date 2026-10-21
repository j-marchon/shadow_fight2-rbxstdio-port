// ADAHHFAPLLM$$GIMAJOGGBHM @ RVA 0x30C8328

void ADAHHFAPLLM__GIMAJOGGBHM(ADAHHFAPLLM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  ADAHHFAPLLM_o *__this_00;
  EAPFCMCJBAG_o *pEVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  LNADBMOHMKN_o *pLVar7;
  MethodInfo *method_00;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  EAPFCMCJBAG_c *pEVar8;
  LNADBMOHMKN_c *pLVar9;
  ulong uVar10;
  int32_t *piVar11;
  EAPFCMCJBAG_o **ppEVar12;
  LNADBMOHMKN_o **ppLVar13;
  undefined1 auVar14 [16];
  
  if ((DAT_045662bc & 1) == 0) {
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<EAPFCMCJBAG>__);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<LNADBMOHMKN>__);
    FUN_01bab630(&EAPFCMCJBAG_TypeInfo);
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    FUN_01bab630(&StringLiteral_7529);
    DAT_045662bc = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_7529,(MethodInfo *)0x0);
  pEVar4 = ADAHHFAPLLM__MIJJAMJMNBD(__this_00,method_00);
  ppEVar12 = &(__this->fields)._EDHEHKIEMGP_k__BackingField;
  *ppEVar12 = pEVar4;
  thunk_FUN_01c20e04(ppEVar12,pEVar4);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x1;
  auVar14 = auVar3 << 0x40;
  if ((Il2CppObject *)*ppEVar12 != (Il2CppObject *)0x0) {
    pIVar5 = UniRx_DisposableExtensions__AddTo<object>
                       ((Il2CppObject *)*ppEVar12,
                        (System_Collections_Generic_ICollection_IDisposable__o *)
                        (__this->fields).BNAIPPCOGPE,
                        Method_UniRx_DisposableExtensions_AddTo<EAPFCMCJBAG>__);
    auVar14._8_8_ = extraout_x1_00;
    auVar14._0_8_ = pIVar5;
    pEVar4 = (__this->fields)._EDHEHKIEMGP_k__BackingField;
    if (pEVar4 != (EAPFCMCJBAG_o *)0x0) {
      pEVar8 = pEVar4->klass;
      uVar1._0_1_ = (pEVar8->_2).rank;
      uVar1._1_1_ = (pEVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pEVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)EAPFCMCJBAG_TypeInfo) {
            pVVar6 = pEVar8->vtable + (*piVar11 + 2);
            goto LAB_031c8430;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pEVar4,EAPFCMCJBAG_TypeInfo,2);
LAB_031c8430:
      auVar14 = (*pVVar6->methodPtr)(pEVar4,pVVar6->method);
    }
  }
  pLVar7 = ADAHHFAPLLM__BOBEFJCOAIM(auVar14._0_8_,auVar14._8_8_);
  ppLVar13 = &(__this->fields).IOPFMDCMMLD;
  *ppLVar13 = pLVar7;
  thunk_FUN_01c20e04(ppLVar13,pLVar7);
  pLVar7 = *ppLVar13;
  if (pLVar7 != (LNADBMOHMKN_o *)0x0) {
    pLVar9 = pLVar7->klass;
    uVar2._0_1_ = (pLVar9->_2).rank;
    uVar2._1_1_ = (pLVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pLVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
          pVVar6 = pLVar9->vtable + (*piVar11 + 2);
          goto LAB_031c84b4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,2);
LAB_031c84b4:
    (*pVVar6->methodPtr)(pLVar7,pVVar6->method);
    if ((Il2CppObject *)*ppLVar13 != (Il2CppObject *)0x0) {
      UniRx_DisposableExtensions__AddTo<object>
                ((Il2CppObject *)*ppLVar13,
                 (System_Collections_Generic_ICollection_IDisposable__o *)
                 (__this->fields).BNAIPPCOGPE,Method_UniRx_DisposableExtensions_AddTo<LNADBMOHMKN>__
                );
      return;
    }
  }
  return;
}

