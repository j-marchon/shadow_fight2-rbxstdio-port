// MatchingDialog$$LKKDMNODHEJ @ RVA 0x342C974

void MatchingDialog__LKKDMNODHEJ(MatchingDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  System_Collections_IEnumerator_o *pSVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456814a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_FJDBDGPPHNO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456814a = 1;
    method = extraout_x1;
  }
  MatchingDialog__OJCPMPCFPJM(__this,method);
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0352c9ec to 0362ca9f has its CatchHandler @ 0352c9ec
                       catch() { ... } // from try @ 0352c9ec with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cb74 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cbc0 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cc14 with catch @ 0352c9ec
                       catch() { ... } // from try @ 0352cc44 with catch @ 0352c9ec */
  System_Action___ctor();
  if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar2->klass;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar4 = pPVar6->vtable + (*piVar8 + 3);
          goto LAB_0352ca5c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,3);
LAB_0352ca5c:
    pSVar5 = (System_Collections_IEnumerator_o *)
             (*pVVar4->methodPtr)(0x3e800000,pPVar2,uVar3,0,pVVar4->method);
    (__this->fields).NDMPDEEBOHL = pSVar5;
    thunk_FUN_01c20e04(&(__this->fields).NDMPDEEBOHL);
    __this_00 = (__this->fields)._matchingLabel;
    if ((__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0352caa0 to 0362caa7 has its CatchHandler @ 0352cbf8 */
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      MatchingDialog__DILGDEAECBG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

