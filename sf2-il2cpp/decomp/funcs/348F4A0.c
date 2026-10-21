// PBHDPJBLDLG$$NCDOMAGEGCF @ RVA 0x348F4A0

void PBHDPJBLDLG__NCDOMAGEGCF(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_04568408 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568408 = 1;
    method = extraout_x1;
  }
  PBHDPJBLDLG__DNNPDIPCCEN(__this,method);
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = PBHDPJBLDLG__MHNONHHOHGN(__this,method_00);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_0358f554;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0358f554:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).CLLBGHPLGNH;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

