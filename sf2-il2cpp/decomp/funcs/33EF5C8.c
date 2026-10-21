// FCJBEKHDLAF$$GHCGOFHFBGO @ RVA 0x33EF5C8

void FCJBEKHDLAF__GHCGOFHFBGO
               (FCJBEKHDLAF_o *__this,UnityEngine_Color_o EFJKPCADGJH,int32_t ABKNPBMGHKH,
               bool LFKDFCGLHLC,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  ushort uVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_04567ef4 & 1) == 0) {
                    /* try { // try from 034ef608 to 035ef6fb has its CatchHandler @ 034ef608
                       catch() { ... } // from try @ 034ef608 with catch @ 034ef608
                       catch() { ... } // from try @ 034ef844 with catch @ 034ef608
                       catch() { ... } // from try @ 034ef894 with catch @ 034ef608
                       catch() { ... } // from try @ 034ef8e0 with catch @ 034ef608
                       catch() { ... } // from try @ 034ef910 with catch @ 034ef608 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567ef4 = 1;
  }
  pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar4->klass;
    pSVar9 = (__this->fields).DDNIIBGKMNB;
    uVar2._0_1_ = (pPVar6->_2).rank;
    uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + (*piVar8 + 1);
          goto LAB_034ef688;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_034ef688:
    (*pVVar5->methodPtr)(pPVar4,pSVar9,pVVar5->method);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar9 = FCJBEKHDLAF__AAPDPFPLEKF(__this,EFJKPCADGJH,ABKNPBMGHKH,LFKDFCGLHLC,method);
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar6 = pPVar4->klass;
      ppSVar1 = &(__this->fields).DDNIIBGKMNB;
      uVar3._0_1_ = (pPVar6->_2).rank;
      uVar3._1_1_ = (pPVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 != 0) {
        piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar6->vtable + *piVar8;
            goto LAB_034ef71c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
                    /* try { // try from 034ef6fc to 035ef703 has its CatchHandler @ 034ef8c4 */
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_034ef71c:
      pSVar9 = (System_Collections_IEnumerator_o *)
               (*pVVar5->methodPtr)(pPVar4,pSVar9,1,pVVar5->method);
      *ppSVar1 = pSVar9;
                    /* try { // try from 034ef73c to 035ef743 has its CatchHandler @ 034ef8ac */
      thunk_FUN_01c20e04(ppSVar1,pSVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

